# CoreGS para Manhunt 2 / Android

Integración experimental. No equivale a confirmar que Manhunt 2 arranque o sea jugable.
Los cambios del runtime se aplican a la copia descargada de PS2Recomp durante CMake;
no modifican ni publican cambios en el repositorio remoto de PS2Recomp.

## Dependencias y compilación

- Android NDK 28.2.13676358, CMake 3.31.6, SDK 36, JDK 25.
- Compilador **host** `glslangValidator` en PATH (Ubuntu: `sudo apt-get install glslang-tools`).
  Compila los GLSL a SPIR-V Vulkan 1.2 y los incrusta en bibliotecas estáticas.
  Se desactiva deliberadamente el hash del binario glslang de upstream; CMake registra
  su versión. Las fuentes están fijadas, pero distintos compiladores pueden generar SPIR-V distinto.
- Git y acceso a GitHub durante la primera configuración de CMake.
- Dispositivo/driver con Vulkan **1.2**, timeline semaphores, dual-source blending,
  fragment stores/atomics y los formatos exigidos por CoreGS. Android API 28 por sí
  solo NO garantiza estas capacidades. El manifiesto filtra Vulkan < 1.2; CoreGS
  comprueba las características restantes y escribe el error en logcat.

Desde `android/`:

```sh
./gradlew :app:assembleDebug -PcoregsScale=1
# Resolución interna 2x (se aceptan enteros 1..12):
./gradlew :app:assembleDebug -PcoregsScale=2
adb logcat -s Manhunt2-CoreGS AndroidRuntime
```

El APK sigue solicitando `armeabi-v7a` y `arm64-v8a`. Los handles Vulkan no
despachables usan representaciones diferentes en 32/64 bits: el parche adapta
las conversiones de imágenes para ambas. No se incorpora ningún dato del juego.

## Implementación

`Dependencies.cmake` descarga CoreGS `7b9a763c0cddd98ed425ca9c1de51481745834ff`,
Vulkan-Headers `b26454f3ccd67e704117a39295fa13935fd3804c` y raylib 5.5.
El CMake padre descarga el fork LTDCrissOK/PS2Recomp
`483fc899b952b14f87713694f92f4bdf599f4572`.
`ApplyPatch.cmake` comprueba/aplica los parches y permite repetir la configuración.
Si se cambia un parche, borrar `android/app/.cxx` antes de recompilar para forzar
una nueva descarga/configuración de FetchContent.

- **CoreGS:** compila el backend de presentación en Android, carga `libvulkan.so`,
  habilita `VK_KHR_android_surface` y crea `VkSurfaceKHR` desde `ANativeWindow`.
  Sustituye los temporizadores Win32 por esperas portables en Android.
- **Ventana:** el bridge conserva una referencia de `ANativeWindow`; desconecta
  y espera el trabajo GPU al recibir TERM_WINDOW o al cerrar raylib. Se serializan
  las operaciones GS y de ciclo de vida con un mutex y se detectan cambios de tamaño.
- **EGL:** raylib conserva un pbuffer de 1x1 para sus utilidades, entrada y reloj;
  nunca adquiere la BufferQueue de la ventana ni hace `eglSwapBuffers` sobre ella.
  No se usa su textura de framebuffer CPU para mostrar el juego.
- **GIF:** se envían PATH1/2/3 al drenar el árbitro, después de aplicar su prioridad
  y enmascaramiento. Se cubren también los caminos sin árbitro y XGKICK directo.
  Se desactivan dos atajos DMA que escribían directamente VRAM CPU sin GIF.
- **Registros:** se reenvían escrituras MMIO GS de 32/64 bits, con combinación de
  mitades. Las de 8/16 bits pasan por el camino de 64 bits. También se sincronizan
  los registros de display al presentar: algunos stubs SDK los modifican directamente.
- **Readback:** el frontend CPU conserva el conteo de bytes LOCAL->HOST pendientes;
  los bytes devueltos al juego proceden de `Renderer::read_transfer_fifo`.
- **Frame:** una vez por cambio de tick VSync observado por el host se ejecutan
  `set_display_field(CSR.FIELD)`, `flush()`, `next_frame()` y `present(phase)`.
  SMODE2 selecciona progresivo/interlazado; sin ventana se mantiene el GS sin presentar.
- **Reset:** el reset del frontend reinicia contexto GS y VRAM de CoreGS si ya existe.

El frontend/backend CPU del runtime permanece activo como sombra para conservar
SIGNAL/FINISH, interrupciones, estado de transferencias y compatibilidad con stubs.
Esto implica trabajo duplicado y **no** es todavía una integración optimizada que
elimine toda rasterización CPU. Operaciones de stubs que alteren VRAM directamente
sin GIF necesitan revisión adicional. No se sustituyen los servicios IOP, audio,
CDVD ni los stubs propios del juego.

## Validación y pendientes

Ejecutado en el entorno de desarrollo:

- `python -m unittest discover -s tests -v`: contrato del bridge con Renderer y
  ANativeWindow simulados: referencias, resize/detach, PATH1/2/3, registros parciales,
  readback y orden de frame/reset.
- Aplicación de los tres parches a fuentes limpias y segunda aplicación idempotente.
- Comprobación sintáctica C++20 del bridge contra la cabecera pública real de CoreGS.
- Comprobación sintáctica host de los cuatro archivos Vulkan modificados con
  `__ANDROID__` y ambas representaciones de handles no despachables (puntero/entero).
  Esto **no** constituye compilación cruzada ARM ni prueba del driver.

Pendiente: compilación/enlace completos con NDK de ambos ABI, compilación de shaders
con glslang del workflow, prueba de arranque del ELF propio en dispositivo Vulkan
compatible, pérdida/recuperación de superficie, readbacks y comparación visual.
No había SDK/NDK ni dispositivo Android en el entorno de edición. El workflow está
preparado para compilar el APK, pero su resultado no se ha verificado aquí.
