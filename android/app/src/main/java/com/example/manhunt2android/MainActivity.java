package com.example.manhunt2android;

import android.app.Activity;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.os.Bundle;
import android.os.ParcelFileDescriptor;
import android.provider.OpenableColumns;
import android.view.Gravity;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.LinearLayout;
import android.widget.TextView;
import android.widget.Toast;

import java.io.IOException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("ps2EntryRunner");
    }

    private static native String nativeAttachIso(int fd, long expectedSize);
    private static native byte[] nativeReadIso(long offset, int length);
    private static native void nativeDetachIso();
    private static final int REQUEST_ISO = 4102;
    private final int bg = Color.rgb(12, 13, 15);
    private final int panel = Color.rgb(25, 27, 30);
    private final int red = Color.rgb(176, 35, 39);
    private final int muted = Color.rgb(145, 148, 151);
    private final ExecutorService detectorExecutor = Executors.newSingleThreadExecutor();
    private TextView detectStatus;
    private TextView selectedIso;
    private TextView chooseButton;

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        getWindow().requestFeature(Window.FEATURE_NO_TITLE);
        getWindow().setStatusBarColor(bg);
        getWindow().setNavigationBarColor(bg);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        getWindow().getDecorView().setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_LAYOUT_STABLE |
                View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION |
                View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN |
                View.SYSTEM_UI_FLAG_HIDE_NAVIGATION |
                View.SYSTEM_UI_FLAG_FULLSCREEN |
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
        setContentView(buildScreen());
    }

    private View buildScreen() {
        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.HORIZONTAL);
        root.setGravity(Gravity.CENTER);
        root.setPadding(dp(34), dp(22), dp(34), dp(22));
        GradientDrawable backdrop = new GradientDrawable(
                GradientDrawable.Orientation.TL_BR,
                new int[]{Color.rgb(35, 17, 18), bg, Color.rgb(8, 9, 10)});
        root.setBackground(backdrop);

        LinearLayout identity = new LinearLayout(this);
        identity.setOrientation(LinearLayout.VERTICAL);
        identity.setGravity(Gravity.CENTER_VERTICAL);
        identity.setPadding(dp(26), dp(20), dp(24), dp(20));
        identity.setBackground(round(Color.rgb(18, 19, 21), 18, 0x553f4144));
        TextView eyebrow = text("ROCKSTAR GAMES  /  PS2 RECOMP", 10, muted, true);
        TextView title = text("MANHUNT\n2", 42, Color.WHITE, true);
        title.setLetterSpacing(0.08f);
        TextView line = text("THE HUNT\nSTARTS HERE", 12, red, true);
        line.setLetterSpacing(0.16f);
        TextView version = text("ANDROID TEST BUILD  •  v0.1.0", 9, muted, false);
        identity.addView(eyebrow);
        identity.addView(space(18));
        identity.addView(title);
        identity.addView(space(12));
        identity.addView(line);
        identity.addView(space(30));
        identity.addView(version);

        LinearLayout menu = new LinearLayout(this);
        menu.setOrientation(LinearLayout.VERTICAL);
        menu.setGravity(Gravity.CENTER_VERTICAL);
        menu.setPadding(dp(26), dp(24), dp(26), dp(24));
        menu.setBackground(round(panel, 18, 0x663f4144));

        TextView heading = text("MENÚ PRINCIPAL", 17, Color.WHITE, true);
        heading.setLetterSpacing(0.08f);
        TextView subtitle = text("Seleccioná una opción para continuar", 11, muted, false);
        menu.addView(heading);
        menu.addView(space(5));
        menu.addView(subtitle);
        menu.addView(space(18));

        chooseButton = action("SELECCIONAR ISO", true);
        chooseButton.setOnClickListener(v -> openIsoPicker());
        menu.addView(chooseButton);
        menu.addView(space(8));

        selectedIso = text("ISO: todavía no seleccionada", 10, muted, false);
        selectedIso.setMaxLines(2);
        menu.addView(selectedIso);
        menu.addView(space(10));

        LinearLayout detect = new LinearLayout(this);
        detect.setOrientation(LinearLayout.VERTICAL);
        detect.setPadding(dp(15), dp(12), dp(15), dp(12));
        detect.setBackground(round(Color.rgb(17, 19, 21), 10, 0x553d4145));
        TextView detectLabel = text("DETECCIÓN DEL ELF", 10, muted, true);
        detectStatus = text("●  PENDIENTE — ISO NO SELECCIONADA", 11,
                Color.rgb(220, 177, 91), true);
        detectStatus.setMaxLines(4);
        detect.addView(detectLabel);
        detect.addView(space(7));
        detect.addView(detectStatus);
        menu.addView(detect);
        menu.addView(space(12));

        TextView errors = action("DETALLES DE ERRORES", false);
        errors.setOnClickListener(v -> Toast.makeText(this,
                "El visor de registros se implementará en la siguiente etapa", Toast.LENGTH_SHORT).show());
        menu.addView(errors);
        menu.addView(space(14));

        TextView footer = text("MOTOR DE JUEGO NO INICIADO  •  INTERFAZ DE PRUEBA", 9, muted, false);
        footer.setGravity(Gravity.CENTER);
        menu.addView(footer);

        root.addView(identity, new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.MATCH_PARENT, 0.82f));
        LinearLayout.LayoutParams menuParams = new LinearLayout.LayoutParams(0,
                LinearLayout.LayoutParams.MATCH_PARENT, 1.18f);
        menuParams.leftMargin = dp(18);
        root.addView(menu, menuParams);
        return root;
    }

    private void openIsoPicker() {
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("*/*");
        intent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION |
                Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION);
        startActivityForResult(intent, REQUEST_ISO);
    }

    @Override protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode != REQUEST_ISO || resultCode != RESULT_OK || data == null || data.getData() == null)
            return;

        Uri uri = data.getData();
        try {
            getContentResolver().takePersistableUriPermission(uri,
                    data.getFlags() & Intent.FLAG_GRANT_READ_URI_PERMISSION);
        } catch (SecurityException ignored) {
            // Some document providers grant a temporary read permission only.
        }

        String displayName = queryDisplayName(uri);
        selectedIso.setText("ISO: " + displayName);
        detectStatus.setText("●  ANALIZANDO ISO Y BUSCANDO SYSTEM.CNF…");
        detectStatus.setTextColor(Color.rgb(220, 177, 91));
        chooseButton.setEnabled(false);
        chooseButton.setAlpha(0.6f);

        detectorExecutor.execute(() -> {
            IsoElfDetector.Result result = null;
            String error = null;
            nativeDetachIso();
            try (ParcelFileDescriptor pfd = getContentResolver().openFileDescriptor(uri, "r")) {
                if (pfd == null) throw new IOException("Android no pudo abrir el archivo seleccionado.");

                // Duplicate the SAF descriptor in native code before the detector closes its stream.
                String bridgeError = nativeAttachIso(pfd.getFd(), pfd.getStatSize());
                if (bridgeError != null) throw new IOException(bridgeError);

                result = IsoElfDetector.detect(pfd);

                // Exercise true positional reads from native code, not only Java FileChannel reads.
                byte[] pvd = nativeReadIso(16L * 2048L, 2048);
                byte[] sectorZero = nativeReadIso(0L, 32);
                byte[] sector17 = nativeReadIso(17L * 2048L, 2048);
                if (!hasPrimaryVolumeDescriptor(pvd) || sectorZero == null || sector17 == null) {
                    throw new IOException("El puente nativo no pudo validar las lecturas aleatorias de la ISO.");
                }
            } catch (Exception e) {
                nativeDetachIso();
                error = e.getMessage() == null ? e.getClass().getSimpleName() : e.getMessage();
            }
            final IsoElfDetector.Result detected = result;
            final String failure = error;
            runOnUiThread(() -> {
                chooseButton.setEnabled(true);
                chooseButton.setAlpha(1.0f);
                if (detected != null) {
                    detectStatus.setText("✓  ELF MIPS DETECTADO\n" + detected.elfPath +
                            "\n" + detected.elfClass + " • " + detected.byteOrder +
                            "\nTamaño: " + formatSize(detected.elfSize) +
                            "\nPUENTE ISO NATIVO OK • LSN 0, 16 Y 17");
                    detectStatus.setTextColor(Color.rgb(116, 205, 137));
                    Toast.makeText(this, "ELF detectado correctamente", Toast.LENGTH_SHORT).show();
                } else {
                    detectStatus.setText("✕  NO SE PUDO DETECTAR EL ELF\n" + failure);
                    detectStatus.setTextColor(Color.rgb(230, 105, 105));
                }
            });
        });
    }

    private static boolean hasPrimaryVolumeDescriptor(byte[] sector) {
        return sector != null && sector.length >= 7 &&
                (sector[0] & 0xff) == 1 &&
                sector[1] == 'C' && sector[2] == 'D' &&
                sector[3] == '0' && sector[4] == '0' &&
                sector[5] == '1' && (sector[6] & 0xff) == 1;
    }

    private String queryDisplayName(Uri uri) {
        try (Cursor cursor = getContentResolver().query(uri, null, null, null, null)) {
            if (cursor != null && cursor.moveToFirst()) {
                int index = cursor.getColumnIndex(OpenableColumns.DISPLAY_NAME);
                if (index >= 0) return cursor.getString(index);
            }
        } catch (Exception ignored) {}
        String last = uri.getLastPathSegment();
        return last == null ? "archivo seleccionado" : last;
    }

    private String formatSize(long bytes) {
        return String.format(java.util.Locale.US, "%.2f MB", bytes / (1024.0 * 1024.0));
    }

    private TextView text(String value, int size, int color, boolean bold) {
        TextView v = new TextView(this);
        v.setText(value);
        v.setTextSize(size);
        v.setTextColor(color);
        v.setTypeface(Typeface.create("sans-serif-condensed", bold ? Typeface.BOLD : Typeface.NORMAL));
        v.setIncludeFontPadding(false);
        return v;
    }

    private TextView action(String label, boolean primary) {
        TextView v = text(label, 14, Color.WHITE, true);
        v.setGravity(Gravity.CENTER_VERTICAL);
        v.setPadding(dp(18), 0, dp(18), 0);
        v.setMinHeight(dp(50));
        v.setLetterSpacing(0.07f);
        v.setBackground(round(primary ? red : Color.rgb(37, 39, 42), 10,
                primary ? 0 : 0x665b5d60));
        return v;
    }

    private View space(int height) {
        View v = new View(this);
        v.setLayoutParams(new LinearLayout.LayoutParams(1, dp(height)));
        return v;
    }

    private GradientDrawable round(int color, int radius, int stroke) {
        GradientDrawable d = new GradientDrawable();
        d.setColor(color);
        d.setCornerRadius(dp(radius));
        if (stroke != 0) d.setStroke(dp(1), stroke);
        return d;
    }

    private int dp(int value) {
        return (int) (value * getResources().getDisplayMetrics().density + 0.5f);
    }

    @Override protected void onDestroy() {
        detectorExecutor.shutdownNow();
        super.onDestroy();
    }
}
