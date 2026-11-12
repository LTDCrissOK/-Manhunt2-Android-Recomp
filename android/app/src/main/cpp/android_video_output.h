#pragma once
#include <EGL/egl.h>
#include <GLES3/gl3.h>
#include <android/native_window.h>
#include <cstdint>

namespace manhunt2::android {
class AndroidVideoOutput final {
public:
    AndroidVideoOutput() = default;
    ~AndroidVideoOutput();
    AndroidVideoOutput(const AndroidVideoOutput&) = delete;
    AndroidVideoOutput& operator=(const AndroidVideoOutput&) = delete;
    bool initialize(ANativeWindow* window);
    bool presentRgba8888(const std::uint8_t* pixels, int width, int height);
    void shutdown();
    bool isInitialized() const noexcept { return display_ != EGL_NO_DISPLAY && surface_ != EGL_NO_SURFACE; }
private:
    bool createProgram();
    EGLDisplay display_ = EGL_NO_DISPLAY;
    EGLSurface surface_ = EGL_NO_SURFACE;
    EGLContext context_ = EGL_NO_CONTEXT;
    ANativeWindow* window_ = nullptr;
    GLuint program_ = 0, texture_ = 0;
    GLint textureUniform_ = -1;
    int textureWidth_ = 0, textureHeight_ = 0;
};
} // namespace manhunt2::android
