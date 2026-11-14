package com.example.manhunt2android;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ActivityManager;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.StatFs;
import android.os.Environment;
import android.provider.OpenableColumns;
import android.view.Gravity;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.util.TypedValue;
import android.widget.Toast;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Locale;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;

public final class SetupActivity extends Activity {
    private static final int REQUEST_OPEN_ISO = 1001;
    private static final int REQUEST_SAVE_LOG = 1002;
    private static final String ISO_FILE_NAME = "Manhunt2.iso";
    private static final String LOG_FILE_NAME = "manhunt2_log.txt";

    private TextView statusView;
    private LinearLayout metadataCard;
    private TextView metadataDetails;
    private TextView metadataCover;
    private Button selectButton;
    private Button playButton;
    private Button logButton;
    private File isoFile;
    private String lastStatus = "Aplicación iniciada; ISO todavía no seleccionada.";
    private String lastError = "Ninguno registrado.";
    private final ArrayList<String> logEvents = new ArrayList<>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        isoFile = getIsoFile();
        recordLog("ANDROID", "Se inició la pantalla de configuración.");
        recordLog("ISO", "Ruta esperada: " + (isoFile == null ? "no disponible" : isoFile.getAbsolutePath()));
        buildScreen();
        refreshIsoStatus();
    }

    private void buildScreen() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setGravity(Gravity.CENTER_HORIZONTAL);
        root.setPadding(dp(22), dp(26), dp(22), dp(26));
        root.setBackgroundColor(Color.rgb(13, 13, 15));

        TextView title = new TextView(this);
        title.setText("MANHUNT 2");
        title.setTextColor(Color.rgb(205, 35, 35));
        title.setTypeface(Typeface.DEFAULT, Typeface.BOLD);
        title.setTextSize(TypedValue.COMPLEX_UNIT_SP, 30);
        title.setGravity(Gravity.CENTER);
        root.addView(title, new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));

        TextView subtitle = new TextView(this);
        subtitle.setText("Seleccioná la imagen ISO de tu juego para iniciar.");
        subtitle.setTextColor(Color.LTGRAY);
        subtitle.setTextSize(TypedValue.COMPLEX_UNIT_SP, 15);
        subtitle.setGravity(Gravity.CENTER);
        LinearLayout.LayoutParams subtitleParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        subtitleParams.topMargin = dp(12);
        root.addView(subtitle, subtitleParams);

        selectButton = new Button(this);
        selectButton.setText("SELECCIONAR ISO");
        LinearLayout.LayoutParams selectParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        selectParams.topMargin = dp(25);
        root.addView(selectButton, selectParams);
        selectButton.setOnClickListener(view -> openIsoPicker());

        statusView = new TextView(this);
        statusView.setTextColor(Color.LTGRAY);
        statusView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        statusView.setGravity(Gravity.CENTER);
        statusView.setText("Todavía no seleccionaste una ISO.");
        LinearLayout.LayoutParams statusParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        statusParams.topMargin = dp(16);
        root.addView(statusView, statusParams);

        metadataCard = new LinearLayout(this);
        metadataCard.setOrientation(LinearLayout.HORIZONTAL);
        metadataCard.setGravity(Gravity.CENTER_VERTICAL);
        metadataCard.setPadding(dp(12), dp(12), dp(12), dp(12));
        metadataCard.setBackground(makePanelBackground());
        metadataCard.setVisibility(ViewGroup.GONE);
        LinearLayout.LayoutParams metadataParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        metadataParams.topMargin = dp(18);

        metadataCover = new TextView(this);
        metadataCover.setText("MANHUNT\\nII");
        metadataCover.setTextColor(Color.WHITE);
        metadataCover.setTypeface(Typeface.DEFAULT, Typeface.BOLD);
        metadataCover.setTextSize(TypedValue.COMPLEX_UNIT_SP, 22);
        metadataCover.setGravity(Gravity.CENTER);
        metadataCover.setBackground(makeCoverBackground());
        LinearLayout.LayoutParams coverParams = new LinearLayout.LayoutParams(dp(112), dp(154));
        metadataCard.addView(metadataCover, coverParams);

        metadataDetails = new TextView(this);
        metadataDetails.setTextColor(Color.rgb(232, 232, 232));
        metadataDetails.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        metadataDetails.setPadding(dp(14), 0, 0, 0);
        metadataDetails.setLineSpacing(dp(3), 1.0f);
        metadataCard.addView(metadataDetails, new LinearLayout.LayoutParams(
                0, ViewGroup.LayoutParams.WRAP_CONTENT, 1f));
        root.addView(metadataCard, metadataParams);

        playButton = new Button(this);
        playButton.setText("JUGAR");
        playButton.setEnabled(false);
        LinearLayout.LayoutParams playParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        playParams.topMargin = dp(22);
        root.addView(playButton, playParams);
        playButton.setOnClickListener(view -> launchGame());

        logButton = new Button(this);
        logButton.setText("LOG / DIAGNÓSTICO");
        LinearLayout.LayoutParams logParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        logParams.topMargin = dp(12);
        root.addView(logButton, logParams);
        logButton.setOnClickListener(view -> showLogDialog());

        TextView footer = new TextView(this);
        footer.setText("REGISTRO DEL MOTOR  •  manhunt2_log.txt");
        footer.setTextColor(Color.rgb(145, 148, 151));
        footer.setTextSize(TypedValue.COMPLEX_UNIT_SP, 10);
        footer.setGravity(Gravity.CENTER);
        LinearLayout.LayoutParams footerParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        footerParams.topMargin = dp(15);
        root.addView(footer, footerParams);

        ScrollView page = new ScrollView(this);
        page.setFillViewport(true);
        page.addView(root, new ScrollView.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT));
        setContentView(page);
    }

    private void openIsoPicker() {
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("*/*");
        intent.putExtra(Intent.EXTRA_MIME_TYPES, new String[] {
                "application/octet-stream",
                "application/x-iso9660-image",
                "application/x-cd-image"
        });
        intent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
        intent.addFlags(Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION);
        startActivityForResult(intent, REQUEST_OPEN_ISO);
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);

        if (requestCode == REQUEST_SAVE_LOG) {
            if (resultCode == RESULT_OK && data != null && data.getData() != null) {
                writeLogToUri(data.getData());
            } else {
                recordLog("LOG", "El usuario canceló la selección del destino del archivo.");
            }
            return;
        }

        if (requestCode != REQUEST_OPEN_ISO || resultCode != RESULT_OK ||
                data == null || data.getData() == null) {
            return;
        }

        Uri uri = data.getData();
        try {
            getContentResolver().takePersistableUriPermission(
                    uri, Intent.FLAG_GRANT_READ_URI_PERMISSION);
        } catch (SecurityException ignored) {
            recordLog("ISO", "El proveedor no concedió permiso persistente; se usará el permiso temporal.");
        }

        recordLog("ISO", "El usuario seleccionó un documento ISO: " + uri);
        selectButton.setEnabled(false);
        playButton.setEnabled(false);
        lastStatus = "Copiando ISO al almacenamiento privado de la aplicación.";
        statusView.setText(lastStatus);
        recordLog("ISO", lastStatus);
        new Thread(() -> copyIsoToAppStorage(uri), "Manhunt2-IsoCopy").start();
    }

    private void copyIsoToAppStorage(Uri uri) {
        File directory = getExternalFilesDir(null);
        if (directory == null) {
            showCopyError("Android no pudo acceder al almacenamiento privado de la aplicación.");
            return;
        }

        if (!directory.exists() && !directory.mkdirs()) {
            showCopyError("No se pudo crear la carpeta de datos del juego.");
            return;
        }

        File temporaryFile = new File(directory, ISO_FILE_NAME + ".part");
        File destinationFile = new File(directory, ISO_FILE_NAME);

        long expectedLength = -1L;
        try (android.content.res.AssetFileDescriptor descriptor =
                     getContentResolver().openAssetFileDescriptor(uri, "r")) {
            if (descriptor != null) {
                expectedLength = descriptor.getLength();
            }
        } catch (Exception ignored) {
            recordLog("ISO", "El proveedor no informó el tamaño inicial del documento.");
        }

        if (expectedLength > 0L) {
            StatFs storage = new StatFs(directory.getAbsolutePath());
            if (storage.getAvailableBytes() < expectedLength + (16L * 1024L * 1024L)) {
                showCopyError("No hay espacio libre suficiente para copiar la ISO.");
                return;
            }
        }

        long copied = 0L;
        long lastProgress = 0L;
        try (InputStream rawInput = getContentResolver().openInputStream(uri)) {
            if (rawInput == null) {
                throw new IllegalStateException("No se pudo abrir el archivo seleccionado.");
            }

            try (BufferedInputStream input = new BufferedInputStream(rawInput);
                 BufferedOutputStream output = new BufferedOutputStream(new FileOutputStream(temporaryFile))) {
                byte[] buffer = new byte[1024 * 1024];
                int count;
                while ((count = input.read(buffer)) != -1) {
                    output.write(buffer, 0, count);
                    copied += count;
                    if (copied - lastProgress >= 32L * 1024L * 1024L) {
                        lastProgress = copied;
                        final long progress = copied;
                        runOnUiThread(() -> {
                            lastStatus = "Copiando ISO... " + formatBytes(progress);
                            statusView.setText(lastStatus);
                        });
                    }
                }
                output.flush();
            }

            if (copied == 0L || (expectedLength > 0L && copied != expectedLength)) {
                throw new IllegalStateException("La copia terminó con un tamaño distinto al archivo original.");
            }

            Files.move(temporaryFile.toPath(), destinationFile.toPath(),
                    StandardCopyOption.REPLACE_EXISTING);

            final long completedBytes = copied;
            recordLog("ISO", "Copia completada. Bytes escritos: " + completedBytes);
            runOnUiThread(() -> {
                isoFile = destinationFile;
                lastStatus = "ISO seleccionada: " + ISO_FILE_NAME + "\nTamaño: " + formatBytes(completedBytes);
                selectButton.setEnabled(true);
                playButton.setEnabled(destinationFile.isFile() && destinationFile.length() > 0L);
                statusView.setText(lastStatus);
                inspectAndShowMetadata(destinationFile);
            });
        } catch (Exception exception) {
            if (temporaryFile.exists()) {
                //noinspection ResultOfMethodCallIgnored
                temporaryFile.delete();
            }
            showCopyError("No se pudo copiar la ISO: " + exception.getMessage());
        }
    }


    private GradientDrawable makePanelBackground() {
        GradientDrawable drawable = new GradientDrawable();
        drawable.setColor(Color.rgb(27, 27, 30));
        drawable.setCornerRadius(dp(12));
        drawable.setStroke(dp(1), Color.rgb(75, 35, 37));
        return drawable;
    }

    private GradientDrawable makeCoverBackground() {
        GradientDrawable drawable = new GradientDrawable(
                GradientDrawable.Orientation.TL_BR,
                new int[] { Color.rgb(115, 12, 18), Color.rgb(24, 20, 22) });
        drawable.setCornerRadius(dp(7));
        drawable.setStroke(dp(1), Color.rgb(175, 45, 48));
        return drawable;
    }

    private void inspectAndShowMetadata(File image) {
        metadataCard.setVisibility(ViewGroup.VISIBLE);
        metadataDetails.setText("LEYENDO DATOS DEL DISCO...\nPlayStation 2");
        new Thread(() -> {
            IsoMetadataReader.Metadata metadata = IsoMetadataReader.read(image);
            runOnUiThread(() -> {
                String id = metadata.gameId == null ? "No detectado" : metadata.gameId;
                String region = metadata.region == null ? "No identificada" : metadata.region;
                String boot = metadata.bootFile == null ? "No detectado" : metadata.bootFile;
                boolean isManhunt2 = "SLES-54819".equals(id);
                String gameTitle = isManhunt2 ? "MANHUNT 2" : "DISCO PS2";
                metadataCover.setText(isManhunt2 ? "MANHUNT\\nII" : "PS2\\nDISC");
                String report = gameTitle + "\\n"
                        + "Consola: " + (metadata.validIso ? "PlayStation 2" : "No identificada") + "\\n"
                        + "Desarrollador: " + (isManhunt2 ? "Rockstar London" : "No identificado") + "\\n"
                        + "Lanzamiento: " + (isManhunt2 ? "2007" : "No identificado") + "\\n"
                        + "ID del disco: " + id + "\\n"
                        + "Región: " + region + "\\n"
                        + "Ejecutable: " + boot + "\\n"
                        + "ISO: " + formatBytes(image.length()) + "\\n"
                        + "Lectura interna: " + (metadata.validIso ? "ISO9660 detectada" : "No se pudo validar ISO9660");
                metadataDetails.setText(report);
                recordLog("METADATA", "Ficha ISO: ID=" + id + "; región=" + region
                        + "; BOOT2=" + boot + "; ISO9660=" + metadata.validIso);
            });
        }, "Manhunt2-IsoMetadata").start();
    }

    private void refreshIsoStatus() {
        boolean ready = isoFile != null && isoFile.isFile() && isoFile.length() > 0L;
        playButton.setEnabled(ready);
        if (ready) {
            lastStatus = "ISO encontrada: " + ISO_FILE_NAME + "\nTamaño: " + formatBytes(isoFile.length());
            statusView.setText(lastStatus);
            inspectAndShowMetadata(isoFile);
            recordLog("ISO", "Se encontró una ISO previamente copiada. Tamaño: " + isoFile.length() + " bytes.");
        } else {
            lastStatus = "Todavía no seleccionaste una ISO.";
            statusView.setText(lastStatus);
        }
    }

    private void launchGame() {
        if (isoFile == null || !isoFile.isFile() || isoFile.length() == 0L) {
            lastError = "Se intentó iniciar el juego sin una ISO válida en el almacenamiento privado.";
            recordLog("ARRANQUE", lastError);
            Toast.makeText(this, "Primero seleccioná una ISO.", Toast.LENGTH_SHORT).show();
            refreshIsoStatus();
            return;
        }

        recordLog("ARRANQUE", "Se solicitó iniciar android.app.NativeActivity con la biblioteca ps2EntryRunner.");
        recordLog("ARRANQUE", "El inicio del ELF y la ejecución real del juego deben verificarse en el dispositivo.");
        Intent intent = new Intent(this, android.app.NativeActivity.class);
        startActivity(intent);
    }

    private void showLogDialog() {
        final String report = buildLogReport();
        ScrollView scroll = new ScrollView(this);
        TextView content = new TextView(this);
        content.setText(report);
        content.setTextColor(Color.rgb(225, 225, 225));
        content.setTextSize(TypedValue.COMPLEX_UNIT_SP, 12);
        content.setPadding(dp(16), dp(14), dp(16), dp(14));
        content.setTextIsSelectable(true);
        scroll.addView(content);

        new AlertDialog.Builder(this)
                .setTitle("LOG DEL MOTOR")
                .setView(scroll)
                .setPositiveButton("GUARDAR TXT", (dialog, which) -> createLogDocument())
                .setNeutralButton("COMPARTIR", (dialog, which) -> shareLog(report))
                .setNegativeButton("CERRAR", null)
                .show();
        recordLog("LOG", "Se abrió el visor de diagnóstico.");
    }

    private void createLogDocument() {
        Intent intent = new Intent(Intent.ACTION_CREATE_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("text/plain");
        intent.putExtra(Intent.EXTRA_TITLE, LOG_FILE_NAME);
        startActivityForResult(intent, REQUEST_SAVE_LOG);
    }

    private void writeLogToUri(Uri uri) {
        String report = buildLogReport();
        try (OutputStream output = getContentResolver().openOutputStream(uri, "w")) {
            if (output == null) {
                throw new IllegalStateException("Android no pudo abrir el destino elegido.");
            }
            output.write(report.getBytes(java.nio.charset.StandardCharsets.UTF_8));
            output.flush();
            recordLog("LOG", "Archivo de diagnóstico guardado correctamente en: " + uri);
            Toast.makeText(this, "LOG guardado: " + LOG_FILE_NAME, Toast.LENGTH_LONG).show();
        } catch (Exception exception) {
            lastError = "Error al guardar LOG: " + exception.getMessage();
            recordLog("LOG", lastError);
            Toast.makeText(this, lastError, Toast.LENGTH_LONG).show();
        }
    }

    private void shareLog(String report) {
        Intent send = new Intent(Intent.ACTION_SEND);
        send.setType("text/plain");
        send.putExtra(Intent.EXTRA_SUBJECT, "Manhunt 2 - Registro de diagnóstico");
        send.putExtra(Intent.EXTRA_TEXT, report);
        startActivity(Intent.createChooser(send, "Compartir LOG"));
        recordLog("LOG", "Se solicitó compartir el informe de diagnóstico como texto.");
    }

    private String buildLogReport() {
        StringBuilder out = new StringBuilder();
        out.append("============================================================\n");
        out.append("MANHUNT 2 ANDROID - REGISTRO DE DIAGNÓSTICO\n");
        out.append("Archivo: ").append(LOG_FILE_NAME).append("\n");
        out.append("Generado: ").append(timestamp()).append("\n");
        out.append("============================================================\n\n");

        out.append("[1] APLICACIÓN Y DISPOSITIVO\n");
        out.append("Paquete: ").append(getPackageName()).append("\n");
        out.append("Versión: ").append(getAppVersion()).append("\n");
        out.append("Fabricante: ").append(Build.MANUFACTURER).append("\n");
        out.append("Modelo: ").append(Build.MODEL).append("\n");
        out.append("Android: ").append(Build.VERSION.RELEASE).append(" (API ").append(Build.VERSION.SDK_INT).append(")\n");
        out.append("Arquitecturas soportadas: ").append(join(Build.SUPPORTED_ABIS)).append("\n");
        out.append("ABI del proceso: ").append(Build.CPU_ABI).append("\n");
        out.append("Almacenamiento externo: ").append(Environment.getExternalStorageState()).append("\n");
        out.append("Raíz compartida: ").append(Environment.getExternalStorageDirectory().getAbsolutePath()).append("\n");
        out.append("Carpeta privada de la app: ").append(getFilesDir().getAbsolutePath()).append("\n");
        out.append("Carpeta de datos externos de la app: ").append(
                getExternalFilesDir(null) == null ? "no disponible" : getExternalFilesDir(null).getAbsolutePath()).append("\n");
        out.append("RAM total: ").append(getMemoryInfo()).append("\n\n");

        out.append("[2] ISO Y SISTEMA DE ARCHIVOS\n");
        out.append("Archivo esperado: ").append(ISO_FILE_NAME).append("\n");
        out.append("Ruta: ").append(isoFile == null ? "no disponible" : isoFile.getAbsolutePath()).append("\n");
        out.append("Existe: ").append(isoFile != null && isoFile.exists()).append("\n");
        out.append("Es archivo: ").append(isoFile != null && isoFile.isFile()).append("\n");
        out.append("Tamaño: ").append(isoFile != null && isoFile.exists() ? isoFile.length() + " bytes (" + formatBytes(isoFile.length()) + ")" : "no disponible").append("\n");
        out.append("Validación ISO9660 / SYSTEM.CNF / BOOT2 / ELF: NO EJECUTADA POR ESTA PANTALLA.\n");
        out.append("Permiso SAF: la selección usa ACTION_OPEN_DOCUMENT; la ISO se copia al directorio privado de la app.\n\n");

        out.append("[3] CADENA DE EJECUCIÓN PREVISTA\n");
        out.append("Interfaz Android -> NativeActivity -> biblioteca ps2EntryRunner.\n");
        out.append("El runtime PS2Recomp recibe el flujo de arranque y debe montar/leer el medio, resolver el ELF y preparar EE/IOP.\n");
        out.append("La recompilación estática transforma funciones del ejecutable MIPS a código C++; no es Wine ni Box86.\n");
        out.append("Estado de arranque real de Manhunt 2: NO CONFIRMADO EN DISPOSITIVO.\n");
        out.append("La pantalla Android no puede afirmar que el ELF se ejecutó correctamente sin una señal del runner.\n\n");

        out.append("[4] SUBSISTEMAS DEL MOTOR (ESTADO CONOCIDO DEL PROYECTO)\n");
        out.append("EE: runtime PS2 en desarrollo; ejecución completa del juego no verificada.\n");
        out.append("IOP: servicios y módulos parciales; compatibilidad completa pendiente.\n");
        out.append("CDVD: el flujo Android actual copia la ISO a almacenamiento privado como ").append(ISO_FILE_NAME).append(".\n");
        out.append("GS: backend CPU presente; renderizado GS real por GPU OpenGL ES/Vulkan no confirmado en esta compilación.\n");
        out.append("Audio: ruta básica de audio presente; emulación SPU2 completa no confirmada.\n");
        out.append("Controles: soporte de entrada en desarrollo; funcionamiento táctil y mando físico pendiente de prueba.\n");
        out.append("Captura de logs nativos EE/IOP/GS: los flags de diagnóstico pueden estar habilitados en compilación, pero aún no están volcados directamente en este informe Java.\n\n");

        out.append("[5] ESTADO DE LA SESIÓN ANDROID\n");
        out.append("Último estado: ").append(lastStatus).append("\n");
        out.append("Último error: ").append(lastError).append("\n\n");

        out.append("[6] EVENTOS REGISTRADOS\n");
        synchronized (logEvents) {
            if (logEvents.isEmpty()) {
                out.append("No hay eventos adicionales.\n");
            } else {
                for (String event : logEvents) out.append(event).append("\n");
            }
        }

        out.append("\n============================================================\n");
        out.append("FIN DEL REGISTRO - Los estados no verificados se identifican expresamente.\n");
        return out.toString();
    }

    private void recordLog(String module, String description) {
        String entry = "[" + timestamp() + "] [" + module + "] " + description;
        synchronized (logEvents) {
            logEvents.add(entry);
        }
    }

    private String timestamp() {
        return new SimpleDateFormat("yyyy-MM-dd HH:mm:ss", Locale.US).format(new Date());
    }

    private String getAppVersion() {
        try {
            return getPackageManager().getPackageInfo(getPackageName(), 0).versionName;
        } catch (Exception ignored) {
            return "desconocida";
        }
    }

    private String getMemoryInfo() {
        ActivityManager manager = (ActivityManager) getSystemService(ACTIVITY_SERVICE);
        if (manager == null) return "no disponible";
        ActivityManager.MemoryInfo info = new ActivityManager.MemoryInfo();
        manager.getMemoryInfo(info);
        return formatBytes(info.totalMem) + " total; " + formatBytes(info.availMem) + " disponible";
    }

    private static String join(String[] values) {
        if (values == null || values.length == 0) return "no disponible";
        StringBuilder out = new StringBuilder();
        for (int i = 0; i < values.length; i++) {
            if (i > 0) out.append(", ");
            out.append(values[i]);
        }
        return out.toString();
    }

    private File getIsoFile() {
        File directory = getExternalFilesDir(null);
        return directory == null ? null : new File(directory, ISO_FILE_NAME);
    }

    private void showCopyError(String message) {
        lastError = message;
        lastStatus = "Falló la copia de la ISO.";
        recordLog("ERROR", message);
        runOnUiThread(() -> {
            selectButton.setEnabled(true);
            playButton.setEnabled(isoFile != null && isoFile.isFile() && isoFile.length() > 0L);
            statusView.setText(message);
            Toast.makeText(this, message, Toast.LENGTH_LONG).show();
        });
    }

    private static String formatBytes(long bytes) {
        double value = bytes;
        String[] units = {"B", "KB", "MB", "GB", "TB"};
        int unit = 0;
        while (value >= 1024.0 && unit < units.length - 1) {
            value /= 1024.0;
            unit++;
        }
        return String.format(Locale.US, "%.1f %s", value, units[unit]);
    }

    private int dp(int value) {
        return Math.round(value * getResources().getDisplayMetrics().density);
    }
}
