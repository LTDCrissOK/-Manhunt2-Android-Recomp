package com.example.manhunt2android;

import java.io.File;
import java.io.RandomAccessFile;
import java.nio.charset.StandardCharsets;
import java.util.Locale;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/** Reads the ISO9660 root directory and SYSTEM.CNF without changing the game loading path. */
final class IsoMetadataReader {
    static final class Metadata {
        boolean validIso;
        String gameId;
        String region;
        String bootFile;
    }

    private static final int SECTOR_SIZE = 2048;

    static Metadata read(File iso) {
        Metadata result = new Metadata();
        if (iso == null || !iso.isFile()) return result;

        try (RandomAccessFile file = new RandomAccessFile(iso, "r")) {
            if (file.length() < 17L * SECTOR_SIZE) return result;
            byte[] pvd = new byte[SECTOR_SIZE];
            file.seek(16L * SECTOR_SIZE);
            file.readFully(pvd);
            if ((pvd[0] & 0xff) != 1
                    || pvd[1] != 'C' || pvd[2] != 'D' || pvd[3] != '0'
                    || pvd[4] != '0' || pvd[5] != '1') {
                return result;
            }
            result.validIso = true;

            int rootExtent = littleInt(pvd, 158);
            int rootLength = littleInt(pvd, 166);
            if (rootExtent <= 0 || rootLength <= 0 || rootLength > 16 * 1024 * 1024) return result;

            byte[] directory = new byte[rootLength];
            file.seek((long) rootExtent * SECTOR_SIZE);
            file.readFully(directory);

            int systemExtent = -1;
            int systemLength = -1;
            int offset = 0;
            while (offset < directory.length) {
                int recordLength = directory[offset] & 0xff;
                if (recordLength == 0) {
                    offset = ((offset / SECTOR_SIZE) + 1) * SECTOR_SIZE;
                    continue;
                }
                if (recordLength < 34 || offset + recordLength > directory.length) break;
                int nameLength = directory[offset + 32] & 0xff;
                if (nameLength > 0 && 33 + nameLength <= recordLength) {
                    String name = new String(directory, offset + 33, nameLength,
                            StandardCharsets.US_ASCII).toUpperCase(Locale.US);
                    if (name.equals("SYSTEM.CNF") || name.equals("SYSTEM.CNF;1")) {
                        systemExtent = littleInt(directory, offset + 2);
                        systemLength = littleInt(directory, offset + 10);
                        break;
                    }
                }
                offset += recordLength;
            }

            if (systemExtent < 0 || systemLength <= 0 || systemLength > 65536) return result;
            byte[] systemCnf = new byte[systemLength];
            file.seek((long) systemExtent * SECTOR_SIZE);
            file.readFully(systemCnf);
            String text = new String(systemCnf, StandardCharsets.US_ASCII);
            Matcher matcher = Pattern.compile(
                    "(?im)^\\s*BOOT2\\s*=\\s*cdrom0:\\\\([^;\\r\\n]+)")
                    .matcher(text);
            if (matcher.find()) {
                String boot = matcher.group(1).trim();
                result.bootFile = boot;
                String upper = boot.toUpperCase(Locale.US);
                Matcher idMatcher = Pattern.compile("([A-Z]{4})[_-]?([0-9]{3})[._-]?([0-9]{2})")
                        .matcher(upper);
                if (idMatcher.find()) {
                    result.gameId = idMatcher.group(1) + "-" + idMatcher.group(2) + idMatcher.group(3);
                    String prefix = idMatcher.group(1);
                    if (prefix.startsWith("SLUS")) result.region = "Norteamérica (NTSC-U)";
                    else if (prefix.startsWith("SLES") || prefix.startsWith("SCES")) result.region = "Europa (PAL)";
                    else if (prefix.startsWith("SLPS") || prefix.startsWith("SCPS")) result.region = "Japón / Asia";
                    else result.region = "No identificada";
                }
            }
        } catch (Exception ignored) {
            // Metadata is informational; a read failure must never block ISO selection or launch.
        }
        return result;
    }

    private static int littleInt(byte[] data, int offset) {
        return (data[offset] & 0xff)
                | ((data[offset + 1] & 0xff) << 8)
                | ((data[offset + 2] & 0xff) << 16)
                | ((data[offset + 3] & 0xff) << 24);
    }

    private IsoMetadataReader() {}
}
