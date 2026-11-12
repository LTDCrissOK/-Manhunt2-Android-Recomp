#include "android_video_output.h"
#include <android/log.h>
#include <array>

namespace manhunt2::android {
namespace {
constexpr char kTag[] = "Manhunt2Video";
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, kTag, __VA_ARGS__)
constexpr char kVS[] = R"(#version 300 es
precision highp float;
out vec2 uv;
void main() {
  vec2 p = vec2(float((gl_VertexID << 1) & 2), float(gl_VertexID & 2));
  uv = vec2(p.x, 1.0 - p.y);
  gl_Position = vec4(p * 2.0 - 1.0, 0.0, 1.0);
})";
constexpr char kFS[] = R"(#version 300 es
precision mediump float;
in vec2 uv;
uniform sampler2D frameTexture;
out vec4 color;
void main() { color = texture(frameTexture, uv); }
)";
GLuint compile(GLenum type, const char* source) {
  GLuint s = glCreateShader(type);
  glShaderSource(s, 1, &source, nullptr);
  glCompileShader(s);
  GLint ok = GL_FALSE;
  glGetShaderiv(s, GL_COMPILE_STATUS, &ok);
  if (ok != GL_TRUE) {
    std::array<char, 1024> log{};
    glGetShaderInfoLog(s, static_cast<GLsizei>(log.size()), nullptr, log.data());
    LOGE("Shader compile failed: %s", log.data());
    glDeleteShader(s);
    return 0;
  }
  return s;
}
}

AndroidVideoOutput::~AndroidVideoOutput() { shutdown(); }

bool AndroidVideoOutput::initialize(ANativeWindow* window) {
  if (!window) { LOGE("Null ANativeWindow"); return false; }
  shutdown();
  window_ = window;
  ANativeWindow_acquire(window_);
  display_ = eglGetDisplay(EGL_DEFAULT_DISPLAY);
  EGLint major = 0, minor = 0;
  if (display_ == EGL_NO_DISPLAY || eglInitialize(display_, &major, &minor) != EGL_TRUE) {
    LOGE("EGL initialization failed: 0x%x", eglGetError()); shutdown(); return false;
  }
  const EGLint attrs[] = {
    EGL_RENDERABLE_TYPE, EGL_OPENGL_ES3_BIT, EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
    EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8, EGL_BLUE_SIZE, 8, EGL_ALPHA_SIZE, 8, EGL_NONE
  };
  EGLConfig config = nullptr;
  EGLint count = 0;
  if (eglChooseConfig(display_, attrs, &config, 1, &count) != EGL_TRUE || count < 1) {
    LOGE("No EGL ES3 window config: 0x%x", eglGetError()); shutdown(); return false;
  }
  EGLint visual = 0;
  eglGetConfigAttrib(display_, config, EGL_NATIVE_VISUAL_ID, &visual);
  ANativeWindow_setBuffersGeometry(window_, 0, 0, visual);
  surface_ = eglCreateWindowSurface(display_, config, window_, nullptr);
  const EGLint ctxAttrs[] = {EGL_CONTEXT_CLIENT_VERSION, 3, EGL_NONE};
  if (surface_ == EGL_NO_SURFACE) {
    LOGE("eglCreateWindowSurface failed: 0x%x", eglGetError()); shutdown(); return false;
  }
  context_ = eglCreateContext(display_, config, EGL_NO_CONTEXT, ctxAttrs);
  if (context_ == EGL_NO_CONTEXT || eglMakeCurrent(display_, surface_, surface_, context_) != EGL_TRUE) {
    LOGE("EGL context activation failed: 0x%x", eglGetError()); shutdown(); return false;
  }
  if (!createProgram()) { shutdown(); return false; }
  glGenTextures(1, &texture_);
  glBindTexture(GL_TEXTURE_2D, texture_);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
  glDisable(GL_DEPTH_TEST);
  LOGE("EGL %d.%d / OpenGL ES 3 ready", major, minor);
  return true;
}

bool AndroidVideoOutput::createProgram() {
  GLuint vs = compile(GL_VERTEX_SHADER, kVS), fs = compile(GL_FRAGMENT_SHADER, kFS);
  if (!vs || !fs) { if (vs) glDeleteShader(vs); if (fs) glDeleteShader(fs); return false; }
  program_ = glCreateProgram();
  glAttachShader(program_, vs); glAttachShader(program_, fs); glLinkProgram(program_);
  glDeleteShader(vs); glDeleteShader(fs);
  GLint ok = GL_FALSE;
  glGetProgramiv(program_, GL_LINK_STATUS, &ok);
  if (ok != GL_TRUE) {
    std::array<char, 1024> log{};
    glGetProgramInfoLog(program_, static_cast<GLsizei>(log.size()), nullptr, log.data());
    LOGE("Program link failed: %s", log.data()); glDeleteProgram(program_); program_ = 0; return false;
  }
  textureUniform_ = glGetUniformLocation(program_, "frameTexture");
  return textureUniform_ >= 0;
}

bool AndroidVideoOutput::presentRgba8888(const std::uint8_t* pixels, int width, int height) {
  if (!isInitialized() || !pixels || width <= 0 || height <= 0) return false;
  if (eglMakeCurrent(display_, surface_, surface_, context_) != EGL_TRUE) {
    LOGE("eglMakeCurrent failed: 0x%x", eglGetError()); return false;
  }
  glViewport(0, 0, ANativeWindow_getWidth(window_), ANativeWindow_getHeight(window_));
  glBindTexture(GL_TEXTURE_2D, texture_);
  if (width != textureWidth_ || height != textureHeight_) {
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
    textureWidth_ = width; textureHeight_ = height;
  } else {
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, pixels);
  }
  glUseProgram(program_);
  glUniform1i(textureUniform_, 0);
  glDrawArrays(GL_TRIANGLES, 0, 3);
  GLenum err = glGetError();
  if (err != GL_NO_ERROR) { LOGE("GL frame error: 0x%x", err); return false; }
  if (eglSwapBuffers(display_, surface_) != EGL_TRUE) {
    LOGE("eglSwapBuffers failed: 0x%x", eglGetError()); return false;
  }
  return true;
}

void AndroidVideoOutput::shutdown() {
  if (display_ != EGL_NO_DISPLAY) {
    if (surface_ != EGL_NO_SURFACE && context_ != EGL_NO_CONTEXT) {
      eglMakeCurrent(display_, surface_, surface_, context_);
      if (texture_) glDeleteTextures(1, &texture_);
      if (program_) glDeleteProgram(program_);
    }
    eglMakeCurrent(display_, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
    if (context_ != EGL_NO_CONTEXT) eglDestroyContext(display_, context_);
    if (surface_ != EGL_NO_SURFACE) eglDestroySurface(display_, surface_);
    eglTerminate(display_);
  }
  if (window_) ANativeWindow_release(window_);
  display_ = EGL_NO_DISPLAY; surface_ = EGL_NO_SURFACE; context_ = EGL_NO_CONTEXT;
  window_ = nullptr; program_ = 0; texture_ = 0; textureUniform_ = -1;
  textureWidth_ = 0; textureHeight_ = 0;
}
} // namespace manhunt2::android
