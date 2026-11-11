# Diagnóstico de pantalla rosa / Pink-screen triage

## Español

**Estado:** investigación; no es una solución ni una prueba de que el juego arranque.

### Hallazgo confirmado en código

En el PS2Recomp que usa la configuración actual de Android (`ran-j/PS2Recomp`, revisión `e5636981a1c9de368f6b71e819c3dc188dfedbf4`), `ps2xRuntime/src/lib/ps2_runtime.cpp` contiene una ruta en `UploadFrame` que crea una imagen `MAGENTA` cuando `copyLatchedHostPresentationFrame(...)` devuelve `false`. **Por lo tanto, ver rosa es compatible con la ausencia de un framebuffer válido**, pero también puede haber otras causas: la imagen no identifica el fallo por sí sola.

### Diferencia de arranque

- El reporte Android 0.1.1 identifica `Manhunt2.iso` en la carpeta de datos, pero dice explícitamente que **no se validaron** ISO9660 / SYSTEM.CNF / BOOT2 / ELF.
- La configuración de Gradle de esta rama define `PS2X_DEFAULT_BOOT_ELF` con un archivo extraído `SLES_548.19`, no con la ISO.
- Esta rama declara `versionName = 0.1.1`. Aun así, una versión coincidente no prueba que el APK instalado provenga de este commit.

### Prueba futura recomendada (opcional, sin modificar archivos del juego)

Una sola captura de logcat después de abrir la app permitiría distinguir hasta dónde llegó el arranque:

```bash
adb logcat -c
# Abrir la app y reproducir el síntoma
adb logcat -d -v threadtime -s ps2x:* AndroidRuntime:E DEBUG:E libc:E > manhunt2-startup-logcat.txt
```

No hace falta pedir esta prueba repetidamente: primero se pueden revisar logs ya disponibles. **No publicar** el log sin revisar rutas privadas u otros datos sensibles.

Buscar (no asumir su presencia): `Using default boot file`, `Failed to initialize PS2 runtime`, `Failed to load ELF file`, `[main] fatal exception`, y trazas de inicialización de GS. Si no aparecen, comprobar si el puente NativeActivity/runner llega al código de arranque. Los mensajes se imprimen a `ps2x` en la revisión fijada.

### Pasos para interpretar el resultado

1. Sin señales del runner: investigar carga de la biblioteca y `ANativeActivity_onCreate`.
2. Error cargando ELF: comprobar la ruta y la diferencia ISO/ELF; no sustituir sin validar la configuración real del APK.
3. ELF cargado pero sin frame: instrumentar temporalmente el resultado de `copyLatchedHostPresentationFrame`, el tick de presentación y el backend GS, en otra revisión aislada.
4. Mantener `main` intacta hasta revisión y validación.

## English

**Status:** investigation only, not a fix and not proof of gameplay boot.

The pinned PS2Recomp runtime draws a **MAGENTA fallback frame** when `copyLatchedHostPresentationFrame(...)` fails inside `UploadFrame`. A pink screen is consistent with unavailable GS display output but does not prove the root cause.

The Android 0.1.1 diagnostic report detects an ISO, **without** confirming ISO9660, BOOT2 or ELF validation. The checked-in Gradle build sets `PS2X_DEFAULT_BOOT_ELF` to extracted `SLES_548.19` and identifies itself as version 0.1.1. A matching version alone does not prove that the installed APK came from this specific commit.

If a single new device trace becomes useful, capture Logcat with the command above and distinguish: native runner never reached, ELF load failure, or successful ELF load with missing GS presentation. No game data, APK distribution, or runtime changes are required for this document.

— Richard1222 / Saber (diagnostic note for LTDCrissOK review)
