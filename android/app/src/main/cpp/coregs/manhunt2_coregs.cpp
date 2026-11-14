#include "manhunt2_coregs.h"
#include <coregs/coregs.h>
#include <android/log.h>
#include <android/native_window.h>
#include <array>
#include <memory>
#include <mutex>
#include <stdexcept>
#include <string>

namespace {
// All GS and NativeActivity callbacks share this lock. No queue operation can
// overlap destruction of an Android surface, including APP_CMD_TERM_WINDOW.
struct State {
    std::mutex mutex;
    std::unique_ptr<coregs::Renderer> renderer;
    ANativeWindow *window = nullptr;
    uint32_t width = 0, height = 0;
    bool odd = false;
    std::array<uint64_t, 1024> privileged{};
    ~State() {
        renderer.reset();
        if (window) ANativeWindow_release(window);
    }
    coregs::Renderer &gs() {
        if (!renderer) {
            auto candidate = std::make_unique<coregs::Renderer>();
            coregs::Options options;
            options.scale = MANHUNT2_GS_SCALE;
            std::string error;
            if (!candidate->init(options, error)) fail(error);
            renderer = std::move(candidate);
            __android_log_print(ANDROID_LOG_INFO, "Manhunt2-CoreGS", "Vulkan initialized, scale=%u", options.scale);
        }
        return *renderer;
    }
    [[noreturn]] static void fail(const std::string &error) {
        __android_log_print(ANDROID_LOG_FATAL, "Manhunt2-CoreGS", "%s", error.c_str());
        // Never continue with a silently black/software-rendered frame.
        std::terminate();
    }
};
State &state() { static State s; return s; }
}
extern "C" void mh_gs_reset() {
    auto &s = state(); std::lock_guard lock(s.mutex);
    s.privileged.fill(0);
    if (s.renderer) { s.renderer->reset_context(); s.renderer->clear_vram(); }
}
extern "C" void mh_gs_window(void *native) {
    auto &s = state();
    std::lock_guard lock(s.mutex);
    auto *window = static_cast<ANativeWindow *>(native);
    if (s.window == window) return;
    if (s.renderer) s.renderer->detach_window();
    if (s.window) ANativeWindow_release(s.window);
    s.window = window;
    if (!window) return;
    ANativeWindow_acquire(window);
    s.width = ANativeWindow_getWidth(window);
    s.height = ANativeWindow_getHeight(window);
    std::string error;
    if (!s.gs().attach_window(window, s.width, s.height, error)) State::fail(error);
}
extern "C" void mh_gs_gif(int path, const uint8_t *data, uint32_t bytes) {
    if (!data || !bytes) return;
    if (path < 1 || path > 3 || bytes % 16) State::fail("Invalid GIF transfer");
    auto &s = state(); std::lock_guard lock(s.mutex);
    s.gs().gif_transfer(path, data, bytes);
}
extern "C" void mh_gs_write(uint32_t address, uint64_t value, unsigned bytes) {
    if (address < 0x12000000u || address > 0x12001fffu) return;
    auto &s = state(); std::lock_guard lock(s.mutex);
    const auto offset = address & 7u;
    auto &reg = s.privileged[(address - 0x12000000u) / 8];
    const uint64_t mask = bytes == 8 ? UINT64_MAX : ((uint64_t{1} << (bytes * 8)) - 1) << (offset * 8);
    reg = (reg & ~mask) | ((value << (offset * 8)) & mask);
    s.gs().write_privileged(address & ~7u, reg);
}
extern "C" void mh_gs_read_fifo(uint8_t *dst, uint32_t bytes) {
    auto &s = state(); std::lock_guard lock(s.mutex);
    s.gs().read_transfer_fifo(dst, bytes);
}
extern "C" void mh_gs_frame(uint64_t csr, uint64_t smode2) {
    auto &s = state(); std::lock_guard lock(s.mutex);
    auto &gs = s.gs();
    if (s.window) {
        const uint32_t w = ANativeWindow_getWidth(s.window), h = ANativeWindow_getHeight(s.window);
        if (w != s.width || h != s.height) {
            gs.resize_window(w, h); s.width = w; s.height = h;
        }
    }
    s.odd = (csr & (uint64_t{1} << 13)) != 0;
    gs.set_display_field(s.odd);
    gs.flush();
    gs.next_frame();
    if (s.window) gs.present(!(smode2 & 1) ? coregs::PresentPhase::progressive :
        s.odd ? coregs::PresentPhase::field_odd : coregs::PresentPhase::field_even);
}
