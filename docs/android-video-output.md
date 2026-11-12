# Android GLES3 video output

This implementation is based on the `0.1.1` application revision (the successful GitHub Actions run `42918605910`) and keeps the existing Android setup/boot path intact.

## Presentation path

1. `SetupActivity` keeps selecting and copying the user's ISO as `Manhunt2.iso`.
2. The existing `NativeActivity` starts the pinned PS2Recomp runtime and its existing ELF/ISO boot flow.
3. The GS CPU backend completes its existing frame conversion. The runtime latches the GS frame through `GS::latchHostPresentationFrame()` and obtains tightly packed RGBA8888 pixels with `GS::copyLatchedHostPresentationFrame()`.
4. `AndroidVideoOutput` uploads those pixels to a GLES3 texture, then draws the texture with a small GLES3 shader while preserving the game's aspect ratio.
5. raylib's existing Android `NativeActivity` backend continues to own the native window, EGL display, EGL context, surface lifecycle, event queue and final buffer swap.

## NativeActivity and EGL ownership

The module deliberately does **not** call `ANativeWindow_fromSurface`, `eglCreateWindowSurface`, `eglCreateContext` or `eglDestroySurface`. The app already uses raylib's Android platform backend, which owns those resources. Creating a second EGL context/surface for the same NativeActivity window would compete with the existing renderer.

`AndroidVideoOutput::initialize()` attaches to the current EGL context after `InitWindow()`. Before each upload/draw it checks the current context and draw surface. If Android replaces the EGL context after a pause/resume, the module drops stale GL names and recreates its shader, texture, VAO and VBO in the new current context. It never takes ownership of the NativeActivity surface.

The Android CMake configuration opts raylib into OpenGL ES 3.0 and patches raylib 5.5's Android context request from client version 2 to client version 3. The patch is guarded by an exact source anchor; configuration stops with an explicit error if that upstream line changes, rather than silently building mismatched shaders and EGL settings.

## Fallback

If the active context is unavailable, is below GLES 3.0, or a shader/texture operation fails, the runtime falls back to its original raylib `Texture2D` upload/draw path. This keeps a recoverable display path and does not touch ISO selection, ELF discovery/extraction, CDVD mounting, or the Java LOG/export workflow.

## Scope and limitation

This connects the **existing GS CPU-rendered presentation frame** to an Android GLES3 texture and presents it through the GPU. It does not replace `GSCpuBackend` with a hardware-accelerated GS rasterizer. GS primitive processing, VRAM layout, GIF/DMA semantics and pixel conversion remain in the existing CPU backend. A successful APK build also does not prove that Manhunt 2 reaches gameplay or that every frame is visually correct; those require on-device testing with the user's own disc image.

## Build

The Android app pins `LTDCrissOK/PS2Recomp` to the integration commit referenced by `android/app/src/main/cpp/CMakeLists.txt`. The normal workflow builds both `armeabi-v7a` and `arm64-v8a` debug APKs. A successful workflow confirms compilation/linking, not runtime behavior on a physical device.
