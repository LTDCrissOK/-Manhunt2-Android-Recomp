"""Check production patches against the exact 0.1.1 runtime and raylib sources.
Run separately from offline unit tests; requires GitHub access, not Android SDK.
"""
from pathlib import Path
import re
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
PATCHES = ROOT / "android/app/src/main/cpp/coregs/patches"


def run(*args):
    subprocess.run(args, check=True)


def main():
    cmake = (ROOT / "android/app/src/main/cpp/CMakeLists.txt").read_text()
    revision = re.search(r"GIT_TAG ([0-9a-f]{40})", cmake).group(1)
    with tempfile.TemporaryDirectory(prefix="manhunt2-runtime-") as tmp:
        for name, url, tag, patch in [
            ("runtime", "https://github.com/LTDCrissOK/PS2Recomp.git", revision, "ps2recomp-coregs.patch"),
            ("raylib", "https://github.com/raysan5/raylib.git", "5.5", "raylib-coregs.patch"),
        ]:
            source = Path(tmp) / name
            run("git", "clone", "--quiet", url, str(source))
            run("git", "-C", str(source), "checkout", "--quiet", tag)
            run("git", "-C", str(source), "apply", "--check", str(PATCHES / patch))
            run("git", "-C", str(source), "apply", str(PATCHES / patch))
            run("git", "-C", str(source), "apply", "--reverse", "--check", str(PATCHES / patch))
            if name == "runtime":
                runtime = (source / "ps2xRuntime/src/lib/ps2_runtime.cpp").read_text()
                assert "mh_gs_frame(display.csr.load(), display.smode2)" in runtime
                assert "mh_gs_window(GetWindowHandle())" in runtime
                assert "AndroidVideoOutput androidVideoOutput;" not in runtime
                assert "androidVideoOutput.draw(" not in runtime
                assert "ps2AndroidUpdateTouchState();" in runtime
                assert "writePersistentDiagnostic(diagnostic.str());" in runtime
                context = (source / "ps2xRuntime/include/ps2_runtime.h").read_text()
                # Generated 0.1.1 VCALLMSR code requires this context member.
                assert "vu0_cmsar0" in context or any(
                    "vu0_cmsar0" in p.read_text(errors="replace")
                    for p in (source / "ps2xRuntime/include").rglob("*.h"))
            else:
                android = (source / "src/platforms/rcore_android.c").read_text()
                assert "eglCreateWindowSurface(" not in android
                assert "eglCreatePbufferSurface(" in android
                assert "EGL_CONTEXT_CLIENT_VERSION, 2," in android
                assert "glDrawBuffersEXT(count, buffers);" in (source / "src/rlgl.h").read_text()
            print(f"{name}: clean patch and reverse check passed", flush=True)


if __name__ == "__main__":
    main()
