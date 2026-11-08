package com.example.manhunt2android;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.graphics.Typeface;
import android.widget.Toast;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;

public final class MainActivity extends Activity {
    private static final int PICK_GAME = 41;
    private boolean gameReady = false;
    private MenuView menuView;

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);
        getWindow().getDecorView().setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_FULLSCREEN | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION |
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY | View.SYSTEM_UI_FLAG_LAYOUT_STABLE |
                View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN);
        setRequestedOrientation(android.content.pm.ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE);
        menuView = new MenuView();
        setContentView(menuView);
    }

    private void chooseGame() {
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("*/*");
        startActivityForResult(intent, PICK_GAME);
    }

    @Override protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode != PICK_GAME || resultCode != RESULT_OK || data == null || data.getData() == null) return;
        Uri uri = data.getData();
        File target = new File(getExternalFilesDir(null), "SLES_548.19");
        try (InputStream in = getContentResolver().openInputStream(uri);
             FileOutputStream out = new FileOutputStream(target)) {
            if (in == null) throw new IllegalStateException("No se pudo abrir el archivo");
            byte[] header = new byte[4];
            int n = in.read(header);
            if (n != 4 || header[0] != 0x7f || header[1] != 'E' || header[2] != 'L' || header[3] != 'F') {
                target.delete();
                Toast.makeText(this, "El archivo seleccionado no es un ELF válido.", Toast.LENGTH_LONG).show();
                return;
            }
            out.write(header);
            byte[] buffer = new byte[64 * 1024];
            int count;
            while ((count = in.read(buffer)) != -1) out.write(buffer, 0, count);
            gameReady = true;
            menuView.invalidate();
            Toast.makeText(this, "ELF seleccionado. Ya podés jugar.", Toast.LENGTH_LONG).show();
        } catch (Exception e) {
            target.delete();
            Toast.makeText(this, "No se pudo copiar el ELF: " + e.getMessage(), Toast.LENGTH_LONG).show();
        }
    }

    private void startGame() {
        File elf = new File(getExternalFilesDir(null), "SLES_548.19");
        if (!gameReady || !elf.isFile()) {
            chooseGame();
            return;
        }
        try {
            Intent intent = new Intent(this, android.app.NativeActivity.class);
            startActivity(intent);
        } catch (Exception e) {
            Toast.makeText(this, "No se pudo iniciar el motor: " + e.getMessage(), Toast.LENGTH_LONG).show();
        }
    }

    private void showOptions() {
        new AlertDialog.Builder(this)
                .setTitle("OPCIONES")
                .setItems(new String[]{"Motor gráfico: OpenGL ES 3.0", "Volver"}, (dialog, which) -> {
                    if (which == 0) new AlertDialog.Builder(this)
                            .setMessage("La selección del renderizador se habilitará cuando el backend GS esté integrado.")
                            .setPositiveButton("VOLVER", null).show();
                }).show();
    }

    private final class MenuView extends View {
        private final Paint paint = new Paint( Paint.ANTI_ALIAS_FLAG | Paint.FILTER_BITMAP_FLAG);
        private final Bitmap background;
        private final String[] labels = {"SELECCIONAR JUEGO", "OPCIONES", "SALIR"};
        private int selected = 0;
        private final RectF[] hit = {new RectF(300, 220, 625, 300), new RectF(300, 290, 625, 360), new RectF(300, 360, 625, 430)};

        MenuView() {
            super(MainActivity.this);
            setLayerType(View.LAYER_TYPE_SOFTWARE, null);
            background = BitmapFactory.decodeResource(getResources(), R.drawable.manhunt2_menu);
        }

        @Override protected void onDraw(Canvas canvas) {
            super.onDraw(canvas);
            canvas.drawColor(Color.BLACK);
            if (background != null) {
                canvas.drawBitmap(background, null, new RectF(0, 0, getWidth(), getHeight()), paint);
            }
            float sx = getWidth() / 1280f, sy = getHeight() / 720f;
            canvas.save();
            canvas.scale(sx, sy);
            // Recreated title-screen artwork layer; the final supplied background image
            // can replace this drawable without changing menu interaction code.
            paint.setStyle(Paint.Style.FILL);
            paint.setColor(Color.rgb(28, 5, 8));
            canvas.drawOval(new RectF(635, 120, 1260, 650), paint);
            paint.setColor(Color.rgb(190, 112, 123));
            canvas.drawOval(new RectF(675, 160, 1230, 615), paint);
            paint.setColor(Color.rgb(18, 8, 13));
            canvas.drawOval(new RectF(715, 255, 1190, 505), paint);
            paint.setColor(Color.rgb(235, 192, 174));
            canvas.drawOval(new RectF(735, 270, 1160, 490), paint);
            paint.setColor(Color.rgb(72, 13, 30));
            canvas.drawOval(new RectF(855, 255, 1055, 500), paint);
            paint.setColor(Color.rgb(180, 34, 58));
            canvas.drawCircle(955, 375, 92, paint);
            paint.setColor(Color.rgb(10, 4, 10));
            canvas.drawCircle(955, 375, 57, paint);
            paint.setColor(Color.rgb(240, 205, 194));
            canvas.drawCircle(978, 348, 18, paint);
            paint.setTypeface(Typeface.create("serif", Typeface.BOLD));
            paint.setTextSize(72f);
            paint.setColor(Color.rgb(188, 25, 12));
            paint.setShadowLayer(7f, 2f, 2f, Color.BLACK);
            canvas.drawText("manhunt 2", 245, 164, paint);
            paint.clearShadowLayer();
            canvas.restore();
            canvas.save();
            canvas.scale(sx, sy);
            paint.setTypeface(Typeface.create("serif", Typeface.BOLD));
            paint.setTextSize(30f);
            paint.setShadowLayer(2f, 1f, 1f, Color.BLACK);
            for (int i = 0; i < labels.length; i++) {
                String label = (i == 0 && gameReady) ? "JUGAR" : labels[i];
                paint.setColor(i == selected ? Color.rgb(255, 224, 112) : Color.rgb(232, 232, 210));
                canvas.drawText(label, 342, 274 + (i * 64), paint);
            }
            paint.clearShadowLayer();
            canvas.restore();
        }

        @Override public boolean onTouchEvent(android.view.MotionEvent event) {
            if (event.getAction() != android.view.MotionEvent.ACTION_UP) return true;
            float x = event.getX() * 1280f / getWidth();
            float y = event.getY() * 720f / getHeight();
            int item = y < 300 ? 0 : (y < 365 ? 1 : 2);
            selected = item;
            invalidate();
            if (item == 0) {
                if (gameReady) startGame(); else chooseGame();
            } else if (item == 1) showOptions();
            else finish();
            return true;
        }
    }
}
