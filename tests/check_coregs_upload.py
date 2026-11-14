"""Compile/run the real pinned CoreGS upload fixture, without Vulkan or Android.

Usage: python3 tests/check_coregs_upload.py
Downloads sources into a temporary directory, applies the production patch,
then exercises the portable and (on x86) SSE2 paths against generic GS memory.
"""
import os
from pathlib import Path
import platform
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
PATCH = ROOT / "android/app/src/main/cpp/coregs/patches/coregs-android.patch"
REVISION = "7b9a763c0cddd98ed425ca9c1de51481745834ff"


def run(*args, **kwargs):
    subprocess.run(args, check=True, **kwargs)


def main():
    with tempfile.TemporaryDirectory(prefix="coregs-upload-") as directory:
        temp = Path(directory)
        source = temp / "coregs"
        run("git", "clone", "--quiet", "https://github.com/moesuito/coregs.git", str(source))
        run("git", "-C", str(source), "checkout", "--quiet", REVISION)
        run("git", "-C", str(source), "apply", "--check", str(PATCH))
        run("git", "-C", str(source), "apply", str(PATCH))
        src = source / "src"
        # A portable build must never even include an x86 intrinsic header.
        poison = temp / "no-x86"
        poison.mkdir()
        (poison / "emmintrin.h").write_text('#error "Portable uploader included SSE2 header"\n')
        modes = ["portable"]
        if platform.machine().lower() in ("x86_64", "amd64", "i386", "i686"):
            modes.append("sse2")
        for mode in modes:
            executable = temp / mode
            flags = (["-DCOREGS_UPLOAD_PORTABLE=1", f"-I{poison}"] if mode == "portable" else ["-msse2"])
            run(os.environ.get("CXX", "g++"), "-std=c++20", "-O2", *flags,
                f"-I{src}", f"-I{src / 'memory'}",
                str(src / "core2/core2_upload_fixture.cpp"),
                str(src / "core2/core2_upload.cpp"), str(src / "memory/hw_memory.cpp"),
                "-o", str(executable))
            print(f"CoreGS upload fixture: {mode}", flush=True)
            # Do not let the diagnostic environment switch bypass the SSE2 path.
            env = dict(os.environ, COREGS_CORE2_CT32_COLUMNS="1")
            run(str(executable), env=env)


if __name__ == "__main__":
    main()
