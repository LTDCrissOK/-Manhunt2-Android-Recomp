"""Standard-library tests for the read-only Android boot audit."""
import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest

AUDIT_PATH = Path(__file__).resolve().parents[1] / "tools" / "audit_android_boot.py"
spec = importlib.util.spec_from_file_location("audit_android_boot", AUDIT_PATH)
audit = importlib.util.module_from_spec(spec)
spec.loader.exec_module(audit)


class BootAuditTests(unittest.TestCase):
    def test_valid_mips_elf32_header(self):
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / "SLES_548.19"
            header = bytearray(52)
            header[:6] = b"\x7fELF\x01\x01"
            struct.pack_into("<H", header, 18, 8)
            struct.pack_into("<I", header, 24, 0x100000)
            path.write_bytes(header)
            result = audit.inspect_elf(path)
            self.assertTrue(result["valid_ps2_elf_header"])
            self.assertEqual(result["entry_point"], "0x00100000")

    def test_invalid_file(self):
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / "bad.elf"
            path.write_bytes(b"not an elf")
            self.assertIn("error", audit.inspect_elf(path))

    def test_non_mips_elf(self):
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / "x86.elf"
            header = bytearray(52)
            header[:6] = b"\x7fELF\x01\x01"
            struct.pack_into("<H", header, 18, 3)
            path.write_bytes(header)
            self.assertFalse(audit.inspect_elf(path)["valid_ps2_elf_header"])

    def test_missing_file(self):
        self.assertFalse(audit.inspect_elf(Path("/missing/nonexistent.elf"))["exists"])

    def test_project_configuration(self):
        root = Path(__file__).resolve().parents[1]
        report = audit.audit_repo(root)
        self.assertNotIn("error", report)
        self.assertTrue(report["checks"]["boot_argument_forwarded_to_cmake"])
        self.assertTrue(report["checks"]["native_runner_target_present"])


if __name__ == "__main__":
    unittest.main()
