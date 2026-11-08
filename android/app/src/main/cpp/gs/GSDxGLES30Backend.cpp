#include "GSDxGLES30Backend.h"

#include <algorithm>
#include <android/log.h>

namespace {
constexpr const char* kTag = "Manhunt2-GSdx-GLES30";
}

GSDxGLES30Backend::~GSDxGLES30Backend() {
#if defined(__ANDROID__)
    if (m_hasGLESContext && m_presentationTexture != 0) {
        glDeleteTextures(1, &m_presentationTexture);
    }
#endif
}

void GSDxGLES30Backend::Initialize(uint8_t* vram, uint32_t vramSize) {
    m_referenceBackend.Initialize(vram, vramSize);
#if defined(__ANDROID__)
    m_hasGLESContext = glGetString(GL_VERSION) != nullptr;
    if (m_hasGLESContext && m_presentationTexture == 0) {
        glGenTextures(1, &m_presentationTexture);
        glBindTexture(GL_TEXTURE_2D, m_presentationTexture);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glBindTexture(GL_TEXTURE_2D, 0);
    }
    __android_log_print(ANDROID_LOG_INFO, kTag,
        "GS backend initialized; GLES context %s", m_hasGLESContext ? "available" : "not current");
#endif
}
void GSDxGLES30Backend::Reset() { m_referenceBackend.Reset(); }
void GSDxGLES30Backend::Submit(const GSPrimitiveBatch& b) { m_referenceBackend.Submit(b); }
void GSDxGLES30Backend::LoadClut(const GSTex0Reg& t, const GSTexClutReg& c) { m_referenceBackend.LoadClut(t,c); }
void GSDxGLES30Backend::BeginTransfer(const GSTransferCommand& c) { m_referenceBackend.BeginTransfer(c); }
void GSDxGLES30Backend::UploadImage(const uint8_t* d, uint32_t n) { m_referenceBackend.UploadImage(d,n); }
void GSDxGLES30Backend::Flush() { m_referenceBackend.Flush(); }
void GSDxGLES30Backend::TextureFlush() { m_referenceBackend.TextureFlush(); }
void GSDxGLES30Backend::Sync(GSSyncReason r) { m_referenceBackend.Sync(r); }

PresentationFrame GSDxGLES30Backend::Present(const GSPresentationRequest& request) {
    PresentationFrame frame = m_referenceBackend.Present(request);
    UploadPresentationTexture(frame);
    return frame;
}

void GSDxGLES30Backend::UploadPresentationTexture(const PresentationFrame& frame) {
#if defined(__ANDROID__)
    if (!m_hasGLESContext || m_presentationTexture == 0 || !frame || frame.width == 0 || frame.height == 0)
        return;
    glBindTexture(GL_TEXTURE_2D, m_presentationTexture);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA8,
        static_cast<GLsizei>(frame.width), static_cast<GLsizei>(frame.height),
        0, GL_RGBA, GL_UNSIGNED_BYTE, frame.pixels.data());
    glBindTexture(GL_TEXTURE_2D, 0);
#endif
}

bool GSDxGLES30Backend::ClearFramebuffer(const GSContext& c, uint32_t rgba) {
    return m_referenceBackend.ClearFramebuffer(c, rgba);
}
uint32_t GSDxGLES30Backend::ConsumeLocalToHostBytes(uint8_t* d, uint32_t n) {
    return m_referenceBackend.ConsumeLocalToHostBytes(d,n);
}
uint32_t GSDxGLES30Backend::ReadVram(uint32_t p,uint32_t b,uint32_t w,uint32_t x,uint32_t y) const {
    return m_referenceBackend.ReadVram(p,b,w,x,y);
}
void GSDxGLES30Backend::WriteVram(uint32_t p,uint32_t b,uint32_t w,uint32_t x,uint32_t y,uint32_t v) {
    m_referenceBackend.WriteVram(p,b,w,x,y,v);
}
void GSDxGLES30Backend::SnapshotVram(std::vector<uint8_t>& out) const {
    m_referenceBackend.SnapshotVram(out);
}
GSTransferSnapshot GSDxGLES30Backend::GetTransferSnapshot() const {
    return m_referenceBackend.GetTransferSnapshot();
}
