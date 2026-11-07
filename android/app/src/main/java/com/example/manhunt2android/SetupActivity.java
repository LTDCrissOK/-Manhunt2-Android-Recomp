package com.example.manhunt2android;

import android.app.Activity;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Bundle;
import android.os.StatFs;
import android.provider.OpenableColumns;
import android.view.Gravity;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.graphics.Color;
import android.graphics.Typeface;
import android.util.TypedValue;
import android.widget.Toast;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.OutputStream;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.StandardCopyOption;
import java.util.Locale;

public final class SetupActivity extends Activity {
    private static final int REQUEST_OPEN_ISO = 1001;
    private static final int REQUEST_EXPORT_LOG = 1002;
    private static final String ISO_FILE_NAME = "Manhunt2.iso";

    private TextView statusView;
    private Button selectButton;
    private Button playButton;
    private Button exportLogButton;
    private File isoFile;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        isoFile = getIsoFile();
        buildScreen();
        refreshIsoStatus();
    }

    private void buildScreen() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setGravity(Gravity.CENTER_HORIZONTAL);
        root.setPadding(dp(28), dp(36), dp(28), dp(28));
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
        subtitleParams.topMargin = dp(14);
        root.addView(subtitle, subtitleParams);

        selectButton = new Button(this);
        selectButton.setText("SELECCIONAR ISO");
        LinearLayout.LayoutParams selectParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        selectParams.topMargin = dp(32);
        root.addView(selectButton, selectParams);
        selectButton.setOnClickListener(view -> openIsoPicker());

        statusView = new TextView(this);
        statusView.setTextColor(Color.LTGRAY);
        statusView.setTextSize(TypedValue.COMPLEX_UNIT_SP, 14);
        statusView.setGravity(Gravity.CENTER);
        statusView.setText("Todavía no seleccionaste una ISO.");
        LinearLayout.LayoutParams statusParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        statusParams.topMargin = dp(18);
        root.addView(statusView, statusParams);

        playButton = new Button(this);
        playButton.setText("JUGAR");
        playButton.setEnabled(false);
        LinearLayout.LayoutParams playParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        playParams.topMargin = dp(28);
        root.addView(playButton, playParams);
        playButton.setOnClickListener(view -> launchGame());

        exportLogButton = new Button(this);
        exportLogButton.setText("EXPORTAR INFORME DE EJECUCIÓN");
        exportLogButton.setEnabled(false);
        LinearLayout.LayoutParams exportParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        exportParams.topMargin = dp(12);
        root.addView(exportLogButton, exportParams);
        exportLogButton.setOnClickListener(view -> requestExportDiagnosticLog());

        setContentView(root);
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (exportLogButton != null) {
            exportLogButton.setEnabled(getDiagnosticLogFile().isFile());
        }
    }

    private void requestExportDiagnosticLog() {
        if (!getDiagnosticLogFile().isFile()) {
            Toast.makeText(this, "Todavía no hay un informe de ejecución.", Toast.LENGTH_SHORT).show();
            return;
        }
        Intent intent = new Intent(Intent.ACTION_CREATE_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("text/plain");
        intent.putExtra(Intent.EXTRA_TITLE, "manhunt2_runtime.log");
        startActivityForResult(intent, REQUEST_EXPORT_LOG);
    }

    private File getDiagnosticLogFile() {
        File directory = getExternalFilesDir(null);
        return directory == null ? new File(getFilesDir(), "manhunt2_runtime.log")
                : new File(directory, "manhunt2_runtime.log");
    }

    private void copyDiagnosticLogTo(Uri destination) {
        File source = getDiagnosticLogFile();
        try (InputStream input = new FileInputStream(source);
             OutputStream output = getContentResolver().openOutputStream(destination)) {
            if (output == null) {
                throw new IllegalStateException("Android no pudo crear el archivo de destino.");
            }
            byte[] buffer = new byte[16 * 1024];
            int count;
            while ((count = input.read(buffer)) != -1) {
                output.write(buffer, 0, count);
            }
            output.flush();
            Toast.makeText(this, "Informe exportado correctamente.", Toast.LENGTH_LONG).show();
        } catch (Exception exception) {
            Toast.makeText(this, "No se pudo exportar el informe: " + exception.getMessage(),
                    Toast.LENGTH_LONG).show();
        }
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
        if (resultCode != RESULT_OK || data == null || data.getData() == null) {
            return;
        }
        if (requestCode == REQUEST_EXPORT_LOG) {
            copyDiagnosticLogTo(data.getData());
            return;
        }
        if (requestCode != REQUEST_OPEN_ISO) {
            return;
        }

        Uri uri = data.getData();
        try {
            getContentResolver().takePersistableUriPermission(
                    uri, Intent.FLAG_GRANT_READ_URI_PERMISSION);
        } catch (SecurityException ignored) {
            // The selected provider may grant only a temporary read permission.
        }

        selectButton.setEnabled(false);
        playButton.setEnabled(false);
        statusView.setText("Copiando la ISO al almacenamiento privado de la aplicación...");
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
            // Some document providers do not expose a file length.
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
                        runOnUiThread(() -> statusView.setText(
                                "Copiando ISO... " + formatBytes(progress)));
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
            runOnUiThread(() -> {
                selectButton.setEnabled(true);
                playButton.setEnabled(destinationFile.isFile() && destinationFile.length() > 0L);
                statusView.setText("ISO seleccionada: " + ISO_FILE_NAME +
                        "\nTamaño: " + formatBytes(completedBytes));
            });
        } catch (Exception exception) {
            if (temporaryFile.exists()) {
                //noinspection ResultOfMethodCallIgnored
                temporaryFile.delete();
            }
            showCopyError("No se pudo copiar la ISO: " + exception.getMessage());
        }
    }

    private void refreshIsoStatus() {
        boolean ready = isoFile != null && isoFile.isFile() && isoFile.length() > 0L;
        playButton.setEnabled(ready);
        if (ready) {
            statusView.setText("ISO encontrada: " + ISO_FILE_NAME +
                    "\nTamaño: " + formatBytes(isoFile.length()));
        } else {
            statusView.setText("Todavía no seleccionaste una ISO.");
        }
    }

    private void launchGame() {
        if (isoFile == null || !isoFile.isFile() || isoFile.length() == 0L) {
            Toast.makeText(this, "Primero seleccioná una ISO.", Toast.LENGTH_SHORT).show();
            refreshIsoStatus();
            return;
        }

        Intent intent = new Intent(this, android.app.NativeActivity.class);
        startActivity(intent);
    }

    private File getIsoFile() {
        File directory = getExternalFilesDir(null);
        return directory == null ? null : new File(directory, ISO_FILE_NAME);
    }

    private void showCopyError(String message) {
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
