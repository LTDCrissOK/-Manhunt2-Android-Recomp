#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033EAD8
// Address: 0x33ead8 - 0x33ee18
void sub_0033EAD8_0x33ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EAD8_0x33ead8");
#endif

    ctx->pc = 0x33ead8u;

    // 0x33ead8: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x33ead8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x33eadc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33eadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33eae0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x33eae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33eae4: 0x2508f250  addiu       $t0, $t0, -0xDB0
    ctx->pc = 0x33eae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963792));
    // 0x33eae8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x33eae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x33eaec: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x33eaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x33eaf0: 0x8d0b01f4  lw          $t3, 0x1F4($t0)
    ctx->pc = 0x33eaf0u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x4BF444u));
    // 0x33eaf4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33eaf8: 0x8d0901f8  lw          $t1, 0x1F8($t0)
    ctx->pc = 0x33eaf8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4BF448u));
    // 0x33eafc: 0x2462d1e0  addiu       $v0, $v1, -0x2E20
    ctx->pc = 0x33eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955488));
    // 0x33eb00: 0x8d0601fc  lw          $a2, 0x1FC($t0)
    ctx->pc = 0x33eb00u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BF44Cu));
    // 0x33eb04: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x33eb04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33eb08: 0x8d050200  lw          $a1, 0x200($t0)
    ctx->pc = 0x33eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BF450u));
    // 0x33eb0c: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x33eb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x33eb10: 0x8d040204  lw          $a0, 0x204($t0)
    ctx->pc = 0x33eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF454u));
    // 0x33eb14: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x33eb14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33eb18: 0xac6bd1e0  sw          $t3, -0x2E20($v1)
    ctx->pc = 0x33eb18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6BD1E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD1E0u, _value); } while (0);
    // 0x33eb1c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x33eb1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33eb20: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x33eb20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6BD1FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD1FCu, _value); } while (0);
    // 0x33eb24: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x33eb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BD218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD218u, _value); } while (0);
    // 0x33eb28: 0xac450054  sw          $a1, 0x54($v0)
    ctx->pc = 0x33eb28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD234u, _value); } while (0);
    // 0x33eb2c: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x33eb2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BD250u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD250u, _value); } while (0);
    // 0x33eb30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x33eb30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD1E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD1E4u, _value); } while (0);
    // 0x33eb34: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x33eb34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD1E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD1E8u, _value); } while (0);
    // 0x33eb38: 0xe447000c  swc1        $f7, 0xC($v0)
    ctx->pc = 0x33eb38u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD1ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD1ECu, _value); } while (0); }
    // 0x33eb3c: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x33eb3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD1F0u, _value); } while (0);
    // 0x33eb40: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x33eb40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD1F8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD1F8u, _value); } while (0);
    // 0x33eb44: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x33eb44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD200u, _value); } while (0);
    // 0x33eb48: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x33eb48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD204u, _value); } while (0);
    // 0x33eb4c: 0xe4420028  swc1        $f2, 0x28($v0)
    ctx->pc = 0x33eb4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD208u, _value); } while (0); }
    // 0x33eb50: 0xac4a002c  sw          $t2, 0x2C($v0)
    ctx->pc = 0x33eb50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD20Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD20Cu, _value); } while (0);
    // 0x33eb54: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x33eb54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD214u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD214u, _value); } while (0);
    // 0x33eb58: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x33eb58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD21Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD21Cu, _value); } while (0);
    // 0x33eb5c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x33eb5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD220u, _value); } while (0);
    // 0x33eb60: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x33eb60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD224u, _value); } while (0); }
    // 0x33eb64: 0xac4a0048  sw          $t2, 0x48($v0)
    ctx->pc = 0x33eb64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD228u, _value); } while (0);
    // 0x33eb68: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x33eb68u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD230u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD230u, _value); } while (0);
    // 0x33eb6c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x33eb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD238u, _value); } while (0);
    // 0x33eb70: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x33eb70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD23Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD23Cu, _value); } while (0);
    // 0x33eb74: 0xe4420060  swc1        $f2, 0x60($v0)
    ctx->pc = 0x33eb74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD240u, _value); } while (0); }
    // 0x33eb78: 0xac4a0064  sw          $t2, 0x64($v0)
    ctx->pc = 0x33eb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD244u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD244u, _value); } while (0);
    // 0x33eb7c: 0xa040006c  sb          $zero, 0x6C($v0)
    ctx->pc = 0x33eb7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD24Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD24Cu, _value); } while (0);
    // 0x33eb80: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x33eb80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD254u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD254u, _value); } while (0);
    // 0x33eb84: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x33eb84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD258u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD258u, _value); } while (0);
    // 0x33eb88: 0xe442007c  swc1        $f2, 0x7C($v0)
    ctx->pc = 0x33eb88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD25Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD25Cu, _value); } while (0); }
    // 0x33eb8c: 0xac4a0080  sw          $t2, 0x80($v0)
    ctx->pc = 0x33eb8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD260u, _value); } while (0);
    // 0x33eb90: 0x8d030208  lw          $v1, 0x208($t0)
    ctx->pc = 0x33eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BF458u));
    // 0x33eb94: 0x8d04020c  lw          $a0, 0x20C($t0)
    ctx->pc = 0x33eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF45Cu));
    // 0x33eb98: 0x8d050210  lw          $a1, 0x210($t0)
    ctx->pc = 0x33eb98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BF460u));
    // 0x33eb9c: 0x8d060214  lw          $a2, 0x214($t0)
    ctx->pc = 0x33eb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BF464u));
    // 0x33eba0: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x33eba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x33eba4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x33eba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x33eba8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x33eba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33ebac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x33ebacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x33ebb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x33ebb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x33ebb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33ebb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33ebb8: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x33ebb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BD26Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD26Cu, _value); } while (0);
    // 0x33ebbc: 0xac4400a8  sw          $a0, 0xA8($v0)
    ctx->pc = 0x33ebbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BD288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD288u, _value); } while (0);
    // 0x33ebc0: 0xac4500c4  sw          $a1, 0xC4($v0)
    ctx->pc = 0x33ebc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD2A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2A4u, _value); } while (0);
    // 0x33ebc4: 0xac4600e0  sw          $a2, 0xE0($v0)
    ctx->pc = 0x33ebc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BD2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2C0u, _value); } while (0);
    // 0x33ebc8: 0xac4b00fc  sw          $t3, 0xFC($v0)
    ctx->pc = 0x33ebc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6BD2DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2DCu, _value); } while (0);
    // 0x33ebcc: 0xa0400088  sb          $zero, 0x88($v0)
    ctx->pc = 0x33ebccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD268u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD268u, _value); } while (0);
    // 0x33ebd0: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x33ebd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD270u, _value); } while (0);
    // 0x33ebd4: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x33ebd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD274u, _value); } while (0);
    // 0x33ebd8: 0xe4470098  swc1        $f7, 0x98($v0)
    ctx->pc = 0x33ebd8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD278u, _value); } while (0); }
    // 0x33ebdc: 0xac4a009c  sw          $t2, 0x9C($v0)
    ctx->pc = 0x33ebdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD27Cu, _value); } while (0);
    // 0x33ebe0: 0xa04000a4  sb          $zero, 0xA4($v0)
    ctx->pc = 0x33ebe0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD284u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD284u, _value); } while (0);
    // 0x33ebe4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x33ebe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD28Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD28Cu, _value); } while (0);
    // 0x33ebe8: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x33ebe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD290u, _value); } while (0);
    // 0x33ebec: 0xe44700b4  swc1        $f7, 0xB4($v0)
    ctx->pc = 0x33ebecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD294u, _value); } while (0); }
    // 0x33ebf0: 0xac4a00b8  sw          $t2, 0xB8($v0)
    ctx->pc = 0x33ebf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD298u, _value); } while (0);
    // 0x33ebf4: 0xa04000c0  sb          $zero, 0xC0($v0)
    ctx->pc = 0x33ebf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD2A0u, _value); } while (0);
    // 0x33ebf8: 0xac4000c8  sw          $zero, 0xC8($v0)
    ctx->pc = 0x33ebf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2A8u, _value); } while (0);
    // 0x33ebfc: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x33ebfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2ACu, _value); } while (0);
    // 0x33ec00: 0xe44700d0  swc1        $f7, 0xD0($v0)
    ctx->pc = 0x33ec00u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2B0u, _value); } while (0); }
    // 0x33ec04: 0xac4a00d4  sw          $t2, 0xD4($v0)
    ctx->pc = 0x33ec04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2B4u, _value); } while (0);
    // 0x33ec08: 0xa04000dc  sb          $zero, 0xDC($v0)
    ctx->pc = 0x33ec08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2BCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD2BCu, _value); } while (0);
    // 0x33ec0c: 0xe44300e4  swc1        $f3, 0xE4($v0)
    ctx->pc = 0x33ec0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2C4u, _value); } while (0); }
    // 0x33ec10: 0xe44400e8  swc1        $f4, 0xE8($v0)
    ctx->pc = 0x33ec10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2C8u, _value); } while (0); }
    // 0x33ec14: 0xe44200ec  swc1        $f2, 0xEC($v0)
    ctx->pc = 0x33ec14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2CCu, _value); } while (0); }
    // 0x33ec18: 0xac4a00f0  sw          $t2, 0xF0($v0)
    ctx->pc = 0x33ec18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD2D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2D0u, _value); } while (0);
    // 0x33ec1c: 0xa04000f8  sb          $zero, 0xF8($v0)
    ctx->pc = 0x33ec1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2D8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD2D8u, _value); } while (0);
    // 0x33ec20: 0xe4430100  swc1        $f3, 0x100($v0)
    ctx->pc = 0x33ec20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2E0u, _value); } while (0); }
    // 0x33ec24: 0xe4440104  swc1        $f4, 0x104($v0)
    ctx->pc = 0x33ec24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2E4u, _value); } while (0); }
    // 0x33ec28: 0xe4420108  swc1        $f2, 0x108($v0)
    ctx->pc = 0x33ec28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2E8u, _value); } while (0); }
    // 0x33ec2c: 0xac47010c  sw          $a3, 0x10C($v0)
    ctx->pc = 0x33ec2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD2ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2ECu, _value); } while (0);
    // 0x33ec30: 0x8d040220  lw          $a0, 0x220($t0)
    ctx->pc = 0x33ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF470u));
    // 0x33ec34: 0x8d060224  lw          $a2, 0x224($t0)
    ctx->pc = 0x33ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BF474u));
    // 0x33ec38: 0x8d090218  lw          $t1, 0x218($t0)
    ctx->pc = 0x33ec38u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4BF468u));
    // 0x33ec3c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x33ec3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x33ec40: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x33ec40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x33ec44: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33ec44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33ec48: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x33ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x33ec4c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x33ec4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x33ec50: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x33ec50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x33ec54: 0xa0400114  sb          $zero, 0x114($v0)
    ctx->pc = 0x33ec54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD2F4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD2F4u, _value); } while (0);
    // 0x33ec58: 0xac440118  sw          $a0, 0x118($v0)
    ctx->pc = 0x33ec58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BD2F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2F8u, _value); } while (0);
    // 0x33ec5c: 0xe443011c  swc1        $f3, 0x11C($v0)
    ctx->pc = 0x33ec5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD2FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD2FCu, _value); } while (0); }
    // 0x33ec60: 0xe4440120  swc1        $f4, 0x120($v0)
    ctx->pc = 0x33ec60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD300u, _value); } while (0); }
    // 0x33ec64: 0xe4420124  swc1        $f2, 0x124($v0)
    ctx->pc = 0x33ec64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD304u, _value); } while (0); }
    // 0x33ec68: 0xac470128  sw          $a3, 0x128($v0)
    ctx->pc = 0x33ec68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD308u, _value); } while (0);
    // 0x33ec6c: 0xa0400130  sb          $zero, 0x130($v0)
    ctx->pc = 0x33ec6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD310u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD310u, _value); } while (0);
    // 0x33ec70: 0xac460134  sw          $a2, 0x134($v0)
    ctx->pc = 0x33ec70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BD314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD314u, _value); } while (0);
    // 0x33ec74: 0xe4450138  swc1        $f5, 0x138($v0)
    ctx->pc = 0x33ec74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD318u, _value); } while (0); }
    // 0x33ec78: 0xe446013c  swc1        $f6, 0x13C($v0)
    ctx->pc = 0x33ec78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD31Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD31Cu, _value); } while (0); }
    // 0x33ec7c: 0xe4420140  swc1        $f2, 0x140($v0)
    ctx->pc = 0x33ec7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD320u, _value); } while (0); }
    // 0x33ec80: 0xac470144  sw          $a3, 0x144($v0)
    ctx->pc = 0x33ec80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD324u, _value); } while (0);
    // 0x33ec84: 0xa040014c  sb          $zero, 0x14C($v0)
    ctx->pc = 0x33ec84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD32Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD32Cu, _value); } while (0);
    // 0x33ec88: 0xac490150  sw          $t1, 0x150($v0)
    ctx->pc = 0x33ec88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6BD330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD330u, _value); } while (0);
    // 0x33ec8c: 0xe4430154  swc1        $f3, 0x154($v0)
    ctx->pc = 0x33ec8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD334u, _value); } while (0); }
    // 0x33ec90: 0xe4440158  swc1        $f4, 0x158($v0)
    ctx->pc = 0x33ec90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD338u, _value); } while (0); }
    // 0x33ec94: 0xe442015c  swc1        $f2, 0x15C($v0)
    ctx->pc = 0x33ec94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD33Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD33Cu, _value); } while (0); }
    // 0x33ec98: 0xac470160  sw          $a3, 0x160($v0)
    ctx->pc = 0x33ec98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD340u, _value); } while (0);
    // 0x33ec9c: 0xa0400168  sb          $zero, 0x168($v0)
    ctx->pc = 0x33ec9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD348u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD348u, _value); } while (0);
    // 0x33eca0: 0xac44016c  sw          $a0, 0x16C($v0)
    ctx->pc = 0x33eca0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BD34Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD34Cu, _value); } while (0);
    // 0x33eca4: 0xe4430170  swc1        $f3, 0x170($v0)
    ctx->pc = 0x33eca4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD350u, _value); } while (0); }
    // 0x33eca8: 0xe4440174  swc1        $f4, 0x174($v0)
    ctx->pc = 0x33eca8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD354u, _value); } while (0); }
    // 0x33ecac: 0xe4420178  swc1        $f2, 0x178($v0)
    ctx->pc = 0x33ecacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD358u, _value); } while (0); }
    // 0x33ecb0: 0xac47017c  sw          $a3, 0x17C($v0)
    ctx->pc = 0x33ecb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD35Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD35Cu, _value); } while (0);
    // 0x33ecb4: 0xa0400184  sb          $zero, 0x184($v0)
    ctx->pc = 0x33ecb4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD364u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD364u, _value); } while (0);
    // 0x33ecb8: 0xac460188  sw          $a2, 0x188($v0)
    ctx->pc = 0x33ecb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BD368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD368u, _value); } while (0);
    // 0x33ecbc: 0xe443018c  swc1        $f3, 0x18C($v0)
    ctx->pc = 0x33ecbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD36Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD36Cu, _value); } while (0); }
    // 0x33ecc0: 0xe4440190  swc1        $f4, 0x190($v0)
    ctx->pc = 0x33ecc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD370u, _value); } while (0); }
    // 0x33ecc4: 0xe4420194  swc1        $f2, 0x194($v0)
    ctx->pc = 0x33ecc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD374u, _value); } while (0); }
    // 0x33ecc8: 0xac470198  sw          $a3, 0x198($v0)
    ctx->pc = 0x33ecc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD378u, _value); } while (0);
    // 0x33eccc: 0xa04001a0  sb          $zero, 0x1A0($v0)
    ctx->pc = 0x33ecccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD380u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD380u, _value); } while (0);
    // 0x33ecd0: 0x8d050228  lw          $a1, 0x228($t0)
    ctx->pc = 0x33ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BF478u));
    // 0x33ecd4: 0x8d03021c  lw          $v1, 0x21C($t0)
    ctx->pc = 0x33ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BF46Cu));
    // 0x33ecd8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x33ecd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x33ecdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x33ecdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x33ece0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33ece0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ece4: 0x3c013e85  lui         $at, 0x3E85
    ctx->pc = 0x33ece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16005 << 16));
    // 0x33ece8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x33ece8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x33ecec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33ececu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ecf0: 0xac4301c0  sw          $v1, 0x1C0($v0)
    ctx->pc = 0x33ecf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BD3A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3A0u, _value); } while (0);
    // 0x33ecf4: 0xe44001c4  swc1        $f0, 0x1C4($v0)
    ctx->pc = 0x33ecf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3A4u, _value); } while (0); }
    // 0x33ecf8: 0xe44101c8  swc1        $f1, 0x1C8($v0)
    ctx->pc = 0x33ecf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3A8u, _value); } while (0); }
    // 0x33ecfc: 0xac4c01d0  sw          $t4, 0x1D0($v0)
    ctx->pc = 0x33ecfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x6BD3B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3B0u, _value); } while (0);
    // 0x33ed00: 0xe44501e0  swc1        $f5, 0x1E0($v0)
    ctx->pc = 0x33ed00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3C0u, _value); } while (0); }
    // 0x33ed04: 0xe44601e4  swc1        $f6, 0x1E4($v0)
    ctx->pc = 0x33ed04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3C4u, _value); } while (0); }
    // 0x33ed08: 0xac4401f8  sw          $a0, 0x1F8($v0)
    ctx->pc = 0x33ed08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BD3D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3D8u, _value); } while (0);
    // 0x33ed0c: 0xac490214  sw          $t1, 0x214($v0)
    ctx->pc = 0x33ed0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6BD3F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3F4u, _value); } while (0);
    // 0x33ed10: 0xac4401a4  sw          $a0, 0x1A4($v0)
    ctx->pc = 0x33ed10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BD384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD384u, _value); } while (0);
    // 0x33ed14: 0xe44301a8  swc1        $f3, 0x1A8($v0)
    ctx->pc = 0x33ed14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD388u, _value); } while (0); }
    // 0x33ed18: 0xe44401ac  swc1        $f4, 0x1AC($v0)
    ctx->pc = 0x33ed18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD38Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD38Cu, _value); } while (0); }
    // 0x33ed1c: 0xe44201b0  swc1        $f2, 0x1B0($v0)
    ctx->pc = 0x33ed1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD390u, _value); } while (0); }
    // 0x33ed20: 0xac4701b4  sw          $a3, 0x1B4($v0)
    ctx->pc = 0x33ed20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD394u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD394u, _value); } while (0);
    // 0x33ed24: 0xa04001bc  sb          $zero, 0x1BC($v0)
    ctx->pc = 0x33ed24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD39Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD39Cu, _value); } while (0);
    // 0x33ed28: 0xe44201cc  swc1        $f2, 0x1CC($v0)
    ctx->pc = 0x33ed28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3ACu, _value); } while (0); }
    // 0x33ed2c: 0xa04001d8  sb          $zero, 0x1D8($v0)
    ctx->pc = 0x33ed2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD3B8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD3B8u, _value); } while (0);
    // 0x33ed30: 0xac4601dc  sw          $a2, 0x1DC($v0)
    ctx->pc = 0x33ed30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BD3BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3BCu, _value); } while (0);
    // 0x33ed34: 0xe44201e8  swc1        $f2, 0x1E8($v0)
    ctx->pc = 0x33ed34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3C8u, _value); } while (0); }
    // 0x33ed38: 0xac4701ec  sw          $a3, 0x1EC($v0)
    ctx->pc = 0x33ed38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD3CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3CCu, _value); } while (0);
    // 0x33ed3c: 0xa04001f4  sb          $zero, 0x1F4($v0)
    ctx->pc = 0x33ed3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD3D4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD3D4u, _value); } while (0);
    // 0x33ed40: 0xe44301fc  swc1        $f3, 0x1FC($v0)
    ctx->pc = 0x33ed40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3DCu, _value); } while (0); }
    // 0x33ed44: 0xe4440200  swc1        $f4, 0x200($v0)
    ctx->pc = 0x33ed44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3E0u, _value); } while (0); }
    // 0x33ed48: 0xe4420204  swc1        $f2, 0x204($v0)
    ctx->pc = 0x33ed48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3E4u, _value); } while (0); }
    // 0x33ed4c: 0xac470208  sw          $a3, 0x208($v0)
    ctx->pc = 0x33ed4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD3E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3E8u, _value); } while (0);
    // 0x33ed50: 0xa0400210  sb          $zero, 0x210($v0)
    ctx->pc = 0x33ed50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD3F0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD3F0u, _value); } while (0);
    // 0x33ed54: 0xe4430218  swc1        $f3, 0x218($v0)
    ctx->pc = 0x33ed54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3F8u, _value); } while (0); }
    // 0x33ed58: 0xe444021c  swc1        $f4, 0x21C($v0)
    ctx->pc = 0x33ed58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD3FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD3FCu, _value); } while (0); }
    // 0x33ed5c: 0xe4420220  swc1        $f2, 0x220($v0)
    ctx->pc = 0x33ed5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD400u, _value); } while (0); }
    // 0x33ed60: 0xac470224  sw          $a3, 0x224($v0)
    ctx->pc = 0x33ed60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD404u, _value); } while (0);
    // 0x33ed64: 0xa040022c  sb          $zero, 0x22C($v0)
    ctx->pc = 0x33ed64u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD40Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD40Cu, _value); } while (0);
    // 0x33ed68: 0xac450230  sw          $a1, 0x230($v0)
    ctx->pc = 0x33ed68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD410u, _value); } while (0);
    // 0x33ed6c: 0xe4430234  swc1        $f3, 0x234($v0)
    ctx->pc = 0x33ed6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD414u, _value); } while (0); }
    // 0x33ed70: 0xac46024c  sw          $a2, 0x24C($v0)
    ctx->pc = 0x33ed70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BD42Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD42Cu, _value); } while (0);
    // 0x33ed74: 0xac4502bc  sw          $a1, 0x2BC($v0)
    ctx->pc = 0x33ed74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD49Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD49Cu, _value); } while (0);
    // 0x33ed78: 0xe44302c0  swc1        $f3, 0x2C0($v0)
    ctx->pc = 0x33ed78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD4A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4A0u, _value); } while (0); }
    // 0x33ed7c: 0xe44402c4  swc1        $f4, 0x2C4($v0)
    ctx->pc = 0x33ed7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD4A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4A4u, _value); } while (0); }
    // 0x33ed80: 0xe44202c8  swc1        $f2, 0x2C8($v0)
    ctx->pc = 0x33ed80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4A8u, _value); } while (0); }
    // 0x33ed84: 0xac4702cc  sw          $a3, 0x2CC($v0)
    ctx->pc = 0x33ed84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD4ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4ACu, _value); } while (0);
    // 0x33ed88: 0xe4440238  swc1        $f4, 0x238($v0)
    ctx->pc = 0x33ed88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD418u, _value); } while (0); }
    // 0x33ed8c: 0xe442023c  swc1        $f2, 0x23C($v0)
    ctx->pc = 0x33ed8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD41Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD41Cu, _value); } while (0); }
    // 0x33ed90: 0xac470240  sw          $a3, 0x240($v0)
    ctx->pc = 0x33ed90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD420u, _value); } while (0);
    // 0x33ed94: 0xa0400248  sb          $zero, 0x248($v0)
    ctx->pc = 0x33ed94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD428u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD428u, _value); } while (0);
    // 0x33ed98: 0xe4430250  swc1        $f3, 0x250($v0)
    ctx->pc = 0x33ed98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD430u, _value); } while (0); }
    // 0x33ed9c: 0xe4440254  swc1        $f4, 0x254($v0)
    ctx->pc = 0x33ed9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD434u, _value); } while (0); }
    // 0x33eda0: 0xe4420258  swc1        $f2, 0x258($v0)
    ctx->pc = 0x33eda0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD438u, _value); } while (0); }
    // 0x33eda4: 0xac47025c  sw          $a3, 0x25C($v0)
    ctx->pc = 0x33eda4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD43Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD43Cu, _value); } while (0);
    // 0x33eda8: 0xa0400264  sb          $zero, 0x264($v0)
    ctx->pc = 0x33eda8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD444u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD444u, _value); } while (0);
    // 0x33edac: 0xac450268  sw          $a1, 0x268($v0)
    ctx->pc = 0x33edacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD448u, _value); } while (0);
    // 0x33edb0: 0xe443026c  swc1        $f3, 0x26C($v0)
    ctx->pc = 0x33edb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD44Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD44Cu, _value); } while (0); }
    // 0x33edb4: 0xe4440270  swc1        $f4, 0x270($v0)
    ctx->pc = 0x33edb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD450u, _value); } while (0); }
    // 0x33edb8: 0xe4420274  swc1        $f2, 0x274($v0)
    ctx->pc = 0x33edb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD454u, _value); } while (0); }
    // 0x33edbc: 0xac470278  sw          $a3, 0x278($v0)
    ctx->pc = 0x33edbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD458u, _value); } while (0);
    // 0x33edc0: 0xa0400280  sb          $zero, 0x280($v0)
    ctx->pc = 0x33edc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD460u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD460u, _value); } while (0);
    // 0x33edc4: 0xac450284  sw          $a1, 0x284($v0)
    ctx->pc = 0x33edc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD464u, _value); } while (0);
    // 0x33edc8: 0xe4430288  swc1        $f3, 0x288($v0)
    ctx->pc = 0x33edc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD468u, _value); } while (0); }
    // 0x33edcc: 0xe444028c  swc1        $f4, 0x28C($v0)
    ctx->pc = 0x33edccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD46Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD46Cu, _value); } while (0); }
    // 0x33edd0: 0xe4420290  swc1        $f2, 0x290($v0)
    ctx->pc = 0x33edd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD470u, _value); } while (0); }
    // 0x33edd4: 0xac470294  sw          $a3, 0x294($v0)
    ctx->pc = 0x33edd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD474u, _value); } while (0);
    // 0x33edd8: 0xa040029c  sb          $zero, 0x29C($v0)
    ctx->pc = 0x33edd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD47Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD47Cu, _value); } while (0);
    // 0x33eddc: 0xac4502a0  sw          $a1, 0x2A0($v0)
    ctx->pc = 0x33eddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BD480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD480u, _value); } while (0);
    // 0x33ede0: 0xe44302a4  swc1        $f3, 0x2A4($v0)
    ctx->pc = 0x33ede0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD484u, _value); } while (0); }
    // 0x33ede4: 0xe44402a8  swc1        $f4, 0x2A8($v0)
    ctx->pc = 0x33ede4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD488u, _value); } while (0); }
    // 0x33ede8: 0xe44202ac  swc1        $f2, 0x2AC($v0)
    ctx->pc = 0x33ede8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD48Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD48Cu, _value); } while (0); }
    // 0x33edec: 0xac4702b0  sw          $a3, 0x2B0($v0)
    ctx->pc = 0x33edecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BD490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD490u, _value); } while (0);
    // 0x33edf0: 0xa04002b8  sb          $zero, 0x2B8($v0)
    ctx->pc = 0x33edf0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD498u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD498u, _value); } while (0);
    // 0x33edf4: 0xa04002d4  sb          $zero, 0x2D4($v0)
    ctx->pc = 0x33edf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD4B4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD4B4u, _value); } while (0);
    // 0x33edf8: 0x8d03022c  lw          $v1, 0x22C($t0)
    ctx->pc = 0x33edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BF47Cu));
    // 0x33edfc: 0xa04d02f0  sb          $t5, 0x2F0($v0)
    ctx->pc = 0x33edfcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x6BD4D0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BD4D0u, _value); } while (0);
    // 0x33ee00: 0xac4302d8  sw          $v1, 0x2D8($v0)
    ctx->pc = 0x33ee00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BD4B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4B8u, _value); } while (0);
    // 0x33ee04: 0xe44702e4  swc1        $f7, 0x2E4($v0)
    ctx->pc = 0x33ee04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BD4C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4C4u, _value); } while (0); }
    // 0x33ee08: 0xac4a02e8  sw          $t2, 0x2E8($v0)
    ctx->pc = 0x33ee08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6BD4C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4C8u, _value); } while (0);
    // 0x33ee0c: 0xac4002dc  sw          $zero, 0x2DC($v0)
    ctx->pc = 0x33ee0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BD4BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BD4BCu, _value); } while (0);
    // 0x33ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x33EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE10u;
        // 0x33ee14: 0xac4002e0  sw          $zero, 0x2E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EE18u;
}
