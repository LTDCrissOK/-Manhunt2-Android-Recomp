# Manhunt 2 Android Recomp

Proyecto experimental de recompilación estática de **Manhunt 2 para PlayStation 2** y adaptación de su runtime a Android.

## Versión objetivo

- Juego: Manhunt 2, PS2, SLES-54819 (PAL, español).
- Motor: [PS2Recomp](https://github.com/ran-j/PS2Recomp), fijado a una revisión concreta para que las compilaciones sean reproducibles.
- Código del juego: C++ generado y guardado en `recomp/output/`.
- Arquitecturas Android previstas: `armeabi-v7a` (ARM32) y `arm64-v8a` (ARM64).

**Estado:** integración inicial del runtime. Que el código esté recompilado no significa todavía que el juego sea jugable: el runtime debe compilar y después habrá que resolver las funciones de hardware, GS, audio, CDVD/IOP y cualquier stub que Manhunt 2 necesite.

## Compilación Android

El workflow privado de GitHub Actions está en `.github/workflows/android-build.yml`. Se ejecuta manualmente desde la pestaña **Actions** y genera un APK de prueba para ARM32 y ARM64.

También se puede compilar localmente con Android SDK, NDK 28.2.13676358, CMake 3.22.1 y JDK 25:

```bash
cd android
./gradlew :app:assembleDebug
```

Para cambiar la ruta del ELF que se abrirá al iniciar la aplicación:

```bash
./gradlew :app:assembleDebug -Pps2xBootElf=/ruta/absoluta/en/el/dispositivo/SLES_548.19
```

El valor de `ps2xBootElf` es una ruta del dispositivo Android, no la ruta del equipo donde se compila.

## Archivos del juego

Los archivos originales del juego **no se incluyen en este repositorio ni en el APK**. Usá únicamente tu volcado propio y mantenelo fuera de GitHub.

La ruta de arranque configurada por defecto es:

```text
/storage/emulated/0/Android/data/com.example.manhunt2android/files/SLES_548.19
```

El ELF debe estar en esa ubicación y los demás archivos extraídos del disco deben quedar disponibles para el runtime en la misma carpeta/estructura que espera el juego. El APK no contiene ISO ni datos comerciales del juego.

## Carpetas importantes

- `android/`: aplicación NativeActivity y configuración Gradle/CMake.
- `recomp/output/`: C++ generado, cabeceras y tabla de registro de funciones.
- `recomp/output_ghidra/`: exportación alternativa de análisis; no se compila en el runner Android.

## Nota de arquitectura

Este proyecto usa recompilación estática del código EE junto con un runtime que proporciona servicios de PS2. No es un port nativo original del fabricante ni una emulación completa tradicional. La compatibilidad real depende de completar y validar las rutas de hardware que use el juego.

## Créditos / Credits

### Español

- **[LTDCrissOK](https://github.com/LTDCrissOK)** — creador y responsable del proyecto Manhunt 2 Android Recomp; desarrollo e integración del port para Android.
- **[Richard1222 / Saber](https://github.com/richard1222)** — colaborador en diagnósticos de arranque y documentación de Android; desarrolla por separado [Manhunt 2 Native PC](https://github.com/richard1222/Manhunt-2-Native-PC) para Windows.

### English

- **[LTDCrissOK](https://github.com/LTDCrissOK)** — creator and maintainer of Manhunt 2 Android Recomp; Android port development and integration.
- **[Richard1222 / Saber](https://github.com/richard1222)** — contributor to Android startup diagnostics and documentation; separately develops [Manhunt 2 Native PC](https://github.com/richard1222/Manhunt-2-Native-PC) for Windows.

**Proyectos independientes / Separate projects:** El objetivo de LTDCrissOK es el port para Android y el de Richard1222/Saber es el port nativo para PC. Podemos compartir investigación y mejoras compatibles sin confundir los dos proyectos. / LTDCrissOK focuses on the Android port and Richard1222/Saber on the native PC port. Compatible research and improvements may be shared while keeping the projects distinct.

**Herramientas de terceros / Third-party tools:** [PS2Recomp](https://github.com/ran-j/PS2Recomp) es un proyecto de código abierto independiente utilizado como base del runtime. Se deben respetar sus licencias y atribuciones originales. / PS2Recomp is an independent open-source project used as the runtime foundation. Its original licenses and attributions must be preserved.

**Nota / Note:** Este port es un proyecto independiente, no afiliado a Rockstar Games ni a Sony. No se incluyen archivos comerciales del juego. / This is an independent project, not affiliated with Rockstar Games or Sony. Commercial game files are not included.
