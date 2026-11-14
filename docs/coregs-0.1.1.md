# Integración CoreGS sobre la versión 0.1.1

Base funcional importada de `feature/android-video-output-0.1.1`, commit
`03f877a54fe60e72faa72fa4845cea7012933b00`. No se modificó esa rama.

## Conservado de 0.1.1

- `SetupActivity`: selección SAF de ISO y copia privada como `Manhunt2.iso`,
  lanzamiento de NativeActivity y consulta/guardado/compartición de registros.
- Manifest con launcher Java y NativeActivity no exportada.
- `versionName=0.1.1`, `versionCode=2` y opción `-Pps2xAggressiveLogs=true`.
- Runtime PS2Recomp fijado a `3f8c108f181a227147c0c5aecf11dbeb6a6de57c`,
  incluyendo diagnósticos persistentes, seguimiento de ejecución y arranque.
- Las tres correcciones de VCALLMSR del código generado usan `vu0_cmsar0`.
- Contexto auxiliar GLES3 y enlace GLESv3. Las sustituciones de fuentes de
  raylib para GLES3 ahora aceptan también fuentes ya parcheadas al reconfigurar.

## Cambios de renderizado

El presentador GLES3 de fotogramas CPU de la rama original no se ejecuta:
CoreGS Vulkan recibe GIF/registros/readbacks y presenta sobre ANativeWindow.
Raylib conserva un contexto EGL GLES3 sobre pbuffer privado, nunca una segunda
superficie de ventana. Se mantienen las correcciones de carga portable ARM32/64,
los tests, CMake 3.31.6, glslang y `-PcoregsScale=1..12`.

El sondeo táctil se conserva, pero la superposición raylib se dibuja al pbuffer,
por lo que **los botones no son visibles sobre Vulkan**. Falta implementar una
superposición compatible con este presentador. No hay fallback visible GLES3
si Vulkan falla; revisar logcat `Manhunt2-CoreGS`.

## Verificaciones

```sh
python3 -m unittest discover -s tests -v
python3 tests/check_coregs_upload.py
python3 tests/check_runtime_integration.py
cd android
./gradlew :app:assembleDebug -PcoregsScale=1 -Pps2xAggressiveLogs=true
```

Los primeros tres comandos se verificaron en el entorno host: contrato del
bridge, 200 casos de transferencias portables y 200 SSE2, aplicación limpia y
comprobación inversa de parches contra runtime/raylib fijados. No sustituyen una
compilación Android ni pruebas Vulkan/arranque/táctil en un teléfono. No se
confirma que el juego sea jugable. El selector comprueba presencia/tamaño del
archivo, no compatibilidad de cualquier ISO con el ELF recompilado.
