#!/usr/bin/env python3
"""Read-only Android boot audit for Manhunt 2 PS2Recomp.

No game assets are required to inspect the project configuration. Optionally
supply a locally owned ELF file to check its basic PS2 ELF metadata.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
import re
import struct
import sys

DEFAULT_BOOT_RE = re.compile(r'\.orElse\("([^"]+)"\)')
GRADLE_VERSION_RE = re.compile(r'versionName\s*=\s*"([^"]+)"')
REPO_RE = re.compile(r'GIT_REPOSITORY\s+(\S+)')
REVISION_RE = re.compile(r'GIT_TAG\s+(\S+)')
CMAKE_BOOT_RE = re.compile(r'PS2X_DEFAULT_BOOT_ELF=\$\{ps2xBootElf\}')


def inspect_elf(path: Path) -> dict[str, object]:
    """Inspect only the 52-byte ELF32 header; do not execute or modify files."""
    result: dict[str, object] = {"path": str(path), "exists": path.is_file()}
    if not path.is_file():
        result["error"] = "File not found"
        return result

    with path.open("rb") as stream:
        header = stream.read(52)
    result["size"] = path.stat().st_size
    if len(header) < 52 or header[:4] != b"\x7fELF":
        result["error"] = "Not a complete ELF32 header"
        return result
    if header[4] != 1 or header[5] not in (1, 2):
        result["error"] = "Unsupported ELF class or byte order"
        return result

    endianness = "<" if header[5] == 1 else ">"
    machine = struct.unpack_from(endianness + "H", header, 18)[0]
    entry_point = struct.unpack_from(endianness + "I", header, 24)[0]
    result.update(
        elf_class="ELF32",
        byte_order="little" if header[5] == 1 else "big",
        machine=machine,
        machine_name="MIPS" if machine == 8 else "other",
        entry_point=f"0x{entry_point:08X}",
        valid_ps2_elf_header=(machine == 8),
    )
    return result



def inspect_android_iso_handoff(repo: Path) -> dict[str, object]:
    """Report static wiring evidence, not proof of runtime execution."""
    java = repo / "android/app/src/main/java/com/example/manhunt2android/SetupActivity.java"
    native = repo / "android/app/src/main/cpp/native-lib.cpp"
    cmake = repo / "android/app/src/main/cpp/CMakeLists.txt"

    java_text = java.read_text(encoding="utf-8") if java.exists() else ""
    native_text = native.read_text(encoding="utf-8") if native.exists() else ""
    cmake_text = cmake.read_text(encoding="utf-8") if cmake.exists() else ""

    return {
        "setup_activity_present": java.exists(),
        "java_copies_iso_to_app_storage": "copyIsoToAppStorage(" in java_text,
        "java_launches_native_activity": "startActivity(intent)" in java_text
        and "android.app.NativeActivity.class" in java_text,
        "java_calls_elf_extractor": bool(re.search(r"\\b(?:extractElf|extractBootElf|extractElfFromIso)\\s*\\(", java_text)),
        "java_passes_iso_path_to_native": bool(re.search(r"\\b(?:nativeSetIsoPath|setNativeIsoPath|nativeSetBootPath)\\s*\\(", java_text)),
        "native_jni_iso_bridge_source": bool(re.search(r"JNIEXPORT|RegisterNatives", native_text))
        and bool(re.search(r"iso|bootPath|elf", native_text, re.I)),
        "native_bridge_attached_to_runner": "native-lib.cpp" in cmake_text
        and "target_sources(ps2EntryRunner" in cmake_text,
        "note": "Source-only inspection; native libraries and other branches may implement additional behavior.",
    }


def audit_repo(repo: Path) -> dict[str, object]:
    gradle = repo / "android/app/build.gradle.kts"
    cmake = repo / "android/app/src/main/cpp/CMakeLists.txt"
    output: dict[str, object] = {"repository": str(repo), "checks": {}}
    if not gradle.is_file() or not cmake.is_file():
        output["error"] = "Expected Android Gradle and CMake files not found"
        return output
    gradle_text = gradle.read_text(encoding="utf-8")
    cmake_text = cmake.read_text(encoding="utf-8")
    def capture(pattern: re.Pattern[str], value: str) -> str | None:
        match = pattern.search(value)
        return match.group(1) if match else None

    boot_path = capture(DEFAULT_BOOT_RE, gradle_text)
    output.update(
        app_version=capture(GRADLE_VERSION_RE, gradle_text),
        default_boot_path=boot_path,
        runtime_repo=capture(REPO_RE, cmake_text),
        runtime_revision=capture(REVISION_RE, cmake_text),
    )
    output["checks"] = {
        "boot_argument_forwarded_to_cmake": bool(CMAKE_BOOT_RE.search(gradle_text)),
        "native_runner_target_present": "ps2EntryRunner" in cmake_text,
        "default_boot_points_to_elf_not_iso": bool(boot_path and not boot_path.lower().endswith(".iso")),
        "runtime_revision_pinned": bool(output["runtime_revision"]),
    }
    output["iso_handoff_evidence"] = inspect_android_iso_handoff(repo)
    output["notes"] = [
        "An ISO detected by the Java UI is not proof the native runner loaded a PS2 ELF.",
        "The reported APK version may differ from the version in this checked-out source tree.",
        "This audit does not verify Android NativeActivity, EE/IOP initialization, or rendering.",
    ]
    return output


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--elf", type=Path, help="Optional locally owned PS2 ELF to check")
    args = parser.parse_args(argv)
    report = audit_repo(args.repo.resolve())
    if args.elf is not None:
        report["elf"] = inspect_elf(args.elf)
    print(json.dumps(report, indent=2, ensure_ascii=False))
    if "error" in report:
        return 2
    if not all(report["checks"].values()):
        return 1
    if args.elf is not None and not report["elf"].get("valid_ps2_elf_header", False):
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
