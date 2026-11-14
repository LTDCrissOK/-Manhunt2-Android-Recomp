"""Host contract tests; no Android SDK/GPU needed. Run: python -m unittest discover -s tests.
The fake Renderer tests bridge ordering/lifetime, not Vulkan or game correctness.
"""
import pathlib
import shutil
import subprocess
import tempfile
import unittest

ROOT = pathlib.Path(__file__).resolve().parents[1]
BRIDGE = ROOT / "android/app/src/main/cpp/coregs"


class BridgeContract(unittest.TestCase):
    @unittest.skipUnless(shutil.which("g++"), "g++ required")
    def test_lifecycle_packets_registers_and_frame(self):
        with tempfile.TemporaryDirectory() as directory:
            tmp = pathlib.Path(directory)
            (tmp / "coregs").mkdir()
            (tmp / "android").mkdir()
            (tmp / "coregs/coregs.h").write_text(r'''
#pragma once
#include <cstdint>
#include <string>
#include <vector>
namespace coregs {
inline std::vector<std::string> events;
inline uint64_t last_value; inline unsigned last_address;
struct Options { unsigned scale = 1; };
enum class PresentPhase { progressive, field_even, field_odd };
struct Renderer {
 bool init(const Options &o, std::string &) { events.push_back("init"); return o.scale == 2; }
 bool attach_window(void *, unsigned, unsigned, std::string &) { events.push_back("attach"); return true; }
 void detach_window() { events.push_back("detach"); }
 void resize_window(unsigned, unsigned) { events.push_back("resize"); }
 void gif_transfer(int path, const uint8_t *, unsigned) { events.push_back("gif" + std::to_string(path)); }
 void write_privileged(unsigned a, uint64_t v) { last_address=a; last_value=v; }
 void read_transfer_fifo(void *p, unsigned n) { for (unsigned i=0;i<n;++i) static_cast<uint8_t*>(p)[i]=0xab; }
 void set_display_field(bool odd) { events.push_back(odd ? "odd" : "even"); }
 void reset_context() { events.push_back("reset"); }
 void clear_vram() { events.push_back("clear"); }
 void flush() { events.push_back("flush"); }
 void next_frame() { events.push_back("next"); }
 void present(PresentPhase p) { events.push_back(p == PresentPhase::progressive ? "progressive" : "field"); }
}; }
''')
            (tmp / "android/log.h").write_text('''#pragma once
#define ANDROID_LOG_INFO 4
#define ANDROID_LOG_FATAL 7
inline int __android_log_print(int, const char *, const char *, ...) { return 0; }
''')
            (tmp / "android/native_window.h").write_text('''#pragma once
struct ANativeWindow { int refs=0; unsigned w=640,h=448; };
inline void ANativeWindow_acquire(ANativeWindow *w) { ++w->refs; }
inline void ANativeWindow_release(ANativeWindow *w) { --w->refs; }
inline unsigned ANativeWindow_getWidth(ANativeWindow *w) { return w->w; }
inline unsigned ANativeWindow_getHeight(ANativeWindow *w) { return w->h; }
''')
            main = tmp / "test.cpp"
            main.write_text(r'''
#include "manhunt2_coregs.cpp"
#include <cassert>
#include <algorithm>
int main() {
 ANativeWindow w;
 mh_gs_window(&w); assert(w.refs == 1);
 auto count = coregs::events.size(); mh_gs_window(&w); assert(count == coregs::events.size());
 uint8_t packet[16]{};
 for (int p=1;p<=3;++p) mh_gs_gif(p, packet, 16);
 mh_gs_write(0x12000000, 0x12345678, 4);
 mh_gs_write(0x12000004, 0xabcdef01, 4);
 assert(coregs::last_address == 0x12000000);
 assert(coregs::last_value == 0xabcdef0112345678ULL);
 mh_gs_read_fifo(packet, 16); assert(packet[0] == 0xab && packet[15] == 0xab);
 w.w = 1280; coregs::events.clear(); mh_gs_frame(1u << 13, 0);
 assert((coregs::events == std::vector<std::string>{"resize","odd","flush","next","progressive"}));
 coregs::events.clear(); mh_gs_frame(0, 1);
 assert((coregs::events == std::vector<std::string>{"even","flush","next","field"}));
 mh_gs_reset(); assert(coregs::events.back() == "clear");
 mh_gs_window(nullptr); assert(w.refs == 0);
 coregs::events.clear(); mh_gs_frame(0, 0);
 assert((coregs::events == std::vector<std::string>{"even","flush","next"}));
}
''')
            exe = tmp / "test"
            subprocess.run(["g++", "-std=c++20", "-pthread", "-DMANHUNT2_GS_SCALE=2",
                            f"-I{tmp}", f"-I{BRIDGE}", str(main), "-o", str(exe)], check=True)
            subprocess.run([str(exe)], check=True)


if __name__ == "__main__":
    unittest.main()
