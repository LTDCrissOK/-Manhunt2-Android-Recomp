#pragma once

#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_cpu_backend.h"

#if defined(__ANDROID__)
#include <GLES3/gl3.h>
#endif

// Android bridge: preserves PS2Recomp's GS memory/transfer semantics through
// its reference CPU backend and uploads completed RGBA frames to a GLES 3.0
// texture. This is an integration step, not the full PCSX2 GSdx rasterizer.
class GSDxGLES30Backend final : public GSRasterBackend {
public:
    GSDxGLES30Backend() = default;
    ~GSDxGLES30Backend() override;

    void Initialize(uint8_t* vram, uint32_t vramSize) override;
    void Reset() override;
    void Submit(const GSPrimitiveBatch& batch) override;
    void LoadClut(const GSTex0Reg& tex0, const GSTexClutReg& texclut) override;
    void BeginTransfer(const GSTransferCommand& command) override;
    void UploadImage(const uint8_t* data, uint32_t sizeBytes) override;
    void Flush() override;
    void TextureFlush() override;
    void Sync(GSSyncReason reason) override;
    PresentationFrame Present(const GSPresentationRequest& request) override;
    bool ClearFramebuffer(const GSContext& context, uint32_t rgba) override;
    uint32_t ConsumeLocalToHostBytes(uint8_t* dst, uint32_t maxBytes) override;
    uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override;
    void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override;
    void SnapshotVram(std::vector<uint8_t>& out) const override;
    GSTransferSnapshot GetTransferSnapshot() const override;

    GLuint PresentationTexture() const noexcept { return m_presentationTexture; }
    bool HasGLESContext() const noexcept { return m_hasGLESContext; }

private:
    void UploadPresentationTexture(const PresentationFrame& frame);
    GSCpuBackend m_referenceBackend;
    GLuint m_presentationTexture = 0;
    bool m_hasGLESContext = false;
};
