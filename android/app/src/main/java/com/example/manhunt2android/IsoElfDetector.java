package com.example.manhunt2android;

import android.os.ParcelFileDescriptor;

import java.io.FileInputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.channels.FileChannel;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

/** Minimal ISO9660 reader for locating the PS2 BOOT2 ELF without extracting the image. */
final class IsoElfDetector {
    private static final int SECTOR = 2048;
    private static final long MAX_DIRECTORY_BYTES = 32L * 1024L * 1024L;

    static final class Result {
        final String elfPath;
        final long elfSize;
        final String elfClass;
        final String byteOrder;
        Result(String path, long size, String elfClass, String byteOrder) {
            this.elfPath = path; this.elfSize = size;
            this.elfClass = elfClass; this.byteOrder = byteOrder;
        }
    }

    private static final class Entry {
        final String name;
        final long extent;
        final long size;
        final boolean directory;
        Entry(String name, long extent, long size, boolean directory) {
            this.name = name; this.extent = extent; this.size = size; this.directory = directory;
        }
    }

    static Result detect(ParcelFileDescriptor pfd) throws IOException {
        try (FileInputStream in = new FileInputStream(pfd.getFileDescriptor())) {
            FileChannel ch = in.getChannel();
            long imageSize = ch.size();
            if (imageSize < 17L * SECTOR) throw new IOException("El archivo es demasiado pequeño para ser una ISO válida.");

            byte[] pvd = read(ch, 16L * SECTOR, SECTOR);
            if ((pvd[0] & 255) != 1 || !ascii(pvd, 1, 5).equals("CD001"))
                throw new IOException("No se encontró el descriptor primario ISO9660 (sector 16).");

            Entry root = parseRecord(pvd, 156, imageSize);
            if (root == null || !root.directory) throw new IOException("La ISO no contiene un directorio raíz válido.");

            Entry systemCnf = findEntry(ch, root, "SYSTEM.CNF", imageSize);
            if (systemCnf == null || systemCnf.directory)
                throw new IOException("No se encontró SYSTEM.CNF en la raíz de la ISO.");

            byte[] cnfBytes = read(ch, systemCnf.extent * SECTOR, (int)Math.min(systemCnf.size, 65536));
            String cnf = new String(cnfBytes, StandardCharsets.US_ASCII);
            String bootPath = parseBoot2(cnf);
            if (bootPath == null) throw new IOException("SYSTEM.CNF no contiene una entrada BOOT2 válida.");

            String[] parts = bootPath.replace('/', '\\').split("\\\\+");
            Entry current = root;
            StringBuilder resolved = new StringBuilder();
            for (int i = 0; i < parts.length; i++) {
                String part = cleanName(parts[i]);
                if (part.isEmpty() || part.equals(".")) continue;
                Entry next = findEntry(ch, current, part, imageSize);
                if (next == null) throw new IOException("No se encontró el archivo indicado por BOOT2: " + bootPath);
                current = next;
                if (resolved.length() > 0) resolved.append('/');
                resolved.append(next.name);
                if (i < parts.length - 1 && !next.directory)
                    throw new IOException("La ruta BOOT2 contiene un componente que no es directorio.");
            }

            if (current.directory) throw new IOException("BOOT2 apunta a un directorio, no a un ELF.");
            if (current.size < 52) throw new IOException("El archivo BOOT2 es demasiado pequeño para ser un ELF.");
            byte[] header = read(ch, current.extent * SECTOR, 64);
            if (header[0] != 0x7f || header[1] != 'E' || header[2] != 'L' || header[3] != 'F')
                throw new IOException("El archivo indicado por BOOT2 no tiene una cabecera ELF válida.");

            int elfClass = header[4] & 255;
            int data = header[5] & 255;
            if ((elfClass != 1 && elfClass != 2) || (data != 1 && data != 2))
                throw new IOException("La cabecera ELF tiene clase o endianess no válido.");
            ByteOrder order = data == 1 ? ByteOrder.LITTLE_ENDIAN : ByteOrder.BIG_ENDIAN;
            int machine = ByteBuffer.wrap(header, 18, 2).order(order).getShort() & 0xffff;
            if (machine != 8)
                throw new IOException("El ELF detectado no es MIPS (e_machine=" + machine + ").");

            return new Result(resolved.toString(), current.size,
                    elfClass == 1 ? "ELF32" : "ELF64",
                    data == 1 ? "Little-endian" : "Big-endian");
        }
    }

    private static String parseBoot2(String cnf) {
        for (String line : cnf.split("\\r?\\n")) {
            int eq = line.indexOf('=');
            if (eq < 0 || !line.substring(0, eq).trim().equalsIgnoreCase("BOOT2")) continue;
            String value = line.substring(eq + 1).trim();
            int semicolon = value.indexOf(';');
            if (semicolon >= 0) value = value.substring(0, semicolon);
            int colon = value.indexOf(':');
            if (colon >= 0) value = value.substring(colon + 1);
            value = value.replace("\"", "").trim();
            while (value.startsWith("\\")) value = value.substring(1);
            return value;
        }
        return null;
    }

    private static Entry findEntry(FileChannel ch, Entry dir, String wanted, long imageSize) throws IOException {
        if (!dir.directory || dir.size > MAX_DIRECTORY_BYTES)
            throw new IOException("Directorio ISO inválido o demasiado grande.");
        long offset = 0;
        String target = cleanName(wanted);
        while (offset < dir.size) {
            long absolute = dir.extent * SECTOR + offset;
            int inSector = (int)(offset % SECTOR);
            int recordLength = read(ch, absolute, 1)[0] & 255;
            if (recordLength == 0) {
                offset += SECTOR - inSector;
                continue;
            }
            if (recordLength < 34 || inSector + recordLength > SECTOR)
                throw new IOException("Registro de directorio ISO9660 corrupto.");
            byte[] rec = read(ch, absolute, recordLength);
            Entry e = parseRecord(rec, 0, imageSize);
            if (e != null && cleanName(e.name).equalsIgnoreCase(target)) return e;
            offset += recordLength;
        }
        return null;
    }

    private static Entry parseRecord(byte[] b, int at, long imageSize) throws IOException {
        if (at < 0 || at + 34 > b.length) return null;
        int len = b[at] & 255;
        if (len < 34 || at + len > b.length) return null;
        long extent = u32le(b, at + 2);
        long size = u32le(b, at + 10);
        int flags = b[at + 25] & 255;
        int nameLen = b[at + 32] & 255;
        if (nameLen == 0 || at + 33 + nameLen > at + len) return null;
        String name;
        if (nameLen == 1 && b[at + 33] == 0) name = ".";
        else if (nameLen == 1 && b[at + 33] == 1) name = "..";
        else name = new String(b, at + 33, nameLen, StandardCharsets.US_ASCII);
        long end = extent * SECTOR + size;
        if (extent < 0 || size < 0 || end < extent * SECTOR || end > imageSize)
            throw new IOException("La ISO contiene una referencia fuera de sus límites.");
        return new Entry(name, extent, size, (flags & 2) != 0);
    }

    private static long u32le(byte[] b, int i) {
        return ((long)b[i] & 255) | (((long)b[i+1] & 255) << 8)
                | (((long)b[i+2] & 255) << 16) | (((long)b[i+3] & 255) << 24);
    }

    private static byte[] read(FileChannel ch, long pos, int count) throws IOException {
        if (pos < 0 || count < 0 || pos + count > ch.size()) throw new IOException("Lectura fuera de los límites de la ISO.");
        ByteBuffer buf = ByteBuffer.allocate(count);
        while (buf.hasRemaining()) {
            int n = ch.read(buf, pos + buf.position());
            if (n < 0) throw new IOException("Fin inesperado de la ISO.");
        }
        return buf.array();
    }

    private static String ascii(byte[] b, int off, int len) {
        return new String(b, off, len, StandardCharsets.US_ASCII);
    }

    private static String cleanName(String name) {
        String n = name.trim();
        int version = n.lastIndexOf(';');
        if (version >= 0) n = n.substring(0, version);
        while (n.endsWith(".")) n = n.substring(0, n.length() - 1);
        return n;
    }

    private IsoElfDetector() {}
}
