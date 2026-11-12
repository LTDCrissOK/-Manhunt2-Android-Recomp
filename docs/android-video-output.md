# AndroidVideoOutput

Initial Android presentation backend for the Manhunt 2 PS2 recompilation runtime.

## Scope
Creates an EGL window surface and OpenGL ES 3 context from an ANativeWindow,
uploads an RGBA8888 framebuffer as a texture, draws a full-screen triangle,
and presents it with eglSwapBuffers.

This module is separate from ISO discovery, ELF selection, CDVD/IOP, the PS2
boot path, and the existing runtime lifecycle.

## API
- initialize(ANativeWindow*): acquire the Android window and initialize EGL/ES3.
- presentRgba8888(pixels, width, height): upload and display one RGBA8888 frame.
- shutdown(): release GL, EGL, and the acquired native window.

All calls must run on the same thread while the supplied ANativeWindow is valid.
The Android lifecycle owner must call initialize when a window becomes available,
shutdown before the window is destroyed, and presentRgba8888 with the GS-produced
framebuffer.

## Integration status
This first isolated video-output layer is intended to compile into ps2EntryRunner.
It is not yet connected to PS2Recomp NativeActivity window callbacks or the GS
framebuffer. This commit therefore does not claim to display Manhunt 2 gameplay.
The next step is wiring APP_CMD_INIT_WINDOW / APP_CMD_TERM_WINDOW and the GS
frame-ready callback without changing the ISO/ELF boot mechanism.

## Pixel contract
Input is tightly packed 8-bit RGBA, four bytes per pixel, rows top-to-bottom.
Frame dimensions may change; the texture is reallocated when they do.
