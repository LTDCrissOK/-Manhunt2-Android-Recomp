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

// Function: sub_002FDD10
// Address: 0x2fdd10 - 0x2fe198
void sub_002FDD10_0x2fdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDD10_0x2fdd10");
#endif

    switch (ctx->pc) {
        case 0x2fdd58u: goto label_2fdd58;
        case 0x2fdd60u: goto label_2fdd60;
        case 0x2fdf08u: goto label_2fdf08;
        case 0x2fdfecu: goto label_2fdfec;
        case 0x2fe0d8u: goto label_2fe0d8;
        default: break;
    }

    ctx->pc = 0x2fdd10u;

    // 0x2fdd10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2fdd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2fdd14: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x2fdd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x2fdd18: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x2fdd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x2fdd1c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2fdd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fdd20: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x2fdd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x2fdd24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fdd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdd28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fdd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdd2c: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x2fdd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x2fdd30: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x2fdd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x2fdd34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fdd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdd38: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x2fdd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x2fdd3c: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2fdd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2fdd40: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x2fdd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x2fdd44: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2fdd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2fdd48: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x2fdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x2fdd4c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2fdd4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2fdd50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FDD50u;
    SET_GPR_U32(ctx, 31, 0x2FDD58u);
    ctx->pc = 0x2FDD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD50u;
    // 0x2fdd54: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FDD50u, 0x2FDD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD58u;
label_2fdd58:
    // 0x2fdd58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FDD58u;
    SET_GPR_U32(ctx, 31, 0x2FDD60u);
    ctx->pc = 0x2FDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDD58u;
    // 0x2fdd5c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FDD58u, 0x2FDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDD60u;
label_2fdd60:
    // 0x2fdd60: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2fdd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2fdd64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fdd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fdd68: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2fdd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2fdd6c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2fdd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2fdd70: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2fdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2fdd74: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fdd74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fdd78: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2fdd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2fdd7c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fdd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fdd80: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fdd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2fdd84: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2fdd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2fdd88: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2fdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2fdd8c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2fdd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2fdd90: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fdd90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fdd94: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fdd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fdd98: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2fdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2fdd9c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2fdd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2fdda0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2fdda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2fdda4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2fdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2fdda8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fdda8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fddac: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fddb0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x2fddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2fddb4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2fddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fddb8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2fddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2fddbc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2fddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2fddc0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2fddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2fddc4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2fddc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2fddc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fddc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fddcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2fddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fddd0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2fddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2fddd4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2fddd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2fddd8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2fdddc: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2fdddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2fdde0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2fdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2fdde4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fdde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdde8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fdde8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fddec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fddecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fddf0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2fddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fddf4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2fddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fddf8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2fddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2fddfc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2fddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fde00: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2fde00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fde04: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2fde04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fde08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fde08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fde0c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2fde0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2fde10: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2fde10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fde14: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2fde14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fde18: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2fde18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fde1c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2fde1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fde20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fde20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fde24: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fde24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fde28: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2fde28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fde2c: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2fde2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fde30: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2fde30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x2fde34: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x2fde34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2fde38: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x2fde38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x2fde3c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2fde3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x2fde40: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fde40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fde44: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2fde44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fde48: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fde48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fde4c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2fde4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fde50: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2fde50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fde54: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2fde54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fde58: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2fde58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fde5c: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x2fde5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fde60: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2fde60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2fde64: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2fde64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2fde68: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2fde68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2fde6c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x2fde6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2fde70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2fde70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fde74: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2fde74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fde78: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2fde7c: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2fde7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2fde80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fde80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fde84: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2fde84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2fde88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2fde88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fde8c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2fde8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2fde90: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2fde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fde94: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2fde94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2fde98: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2fde98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fde9c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2fde9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdea0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2fdea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdea4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fdea4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fdea8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fdea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fdeac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2fdeacu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fdeb0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x2fdeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdeb4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2fdeb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdeb8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2fdeb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdebc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDEBCu;
    {
        const bool branch_taken_0x2fdebc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEBCu;
        // 0x2fdec0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdebc) {
            ctx->pc = 0x2FDEE4u;
            goto label_2fdee4;
        }
    }
    ctx->pc = 0x2FDEC4u;
    // 0x2fdec4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fdec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdec8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fdec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fdecc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fdeccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fded0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fded0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fded4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fded4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fded8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fded8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fdedc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fdedcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fdee0: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fdee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdee4:
    // 0x2fdee4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2fdee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fdee8: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x2fdee8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
    // 0x2fdeec: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2fdeecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdef0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2fdef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdef4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fdef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fdef8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fdef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fdefc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2fdefcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdf00: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x2fdf00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fdf04: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fdf04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fdf08:
    // 0x2fdf08: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fdf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2fdf0c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fdf0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fdf10: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fdf10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdf14: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fdf14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fdf18: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fdf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fdf1c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2fdf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdf20: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2fdf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdf24: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2fdf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdf28: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fdf28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fdf2c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fdf2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fdf30: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fdf30u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fdf34: 0x0  nop
    ctx->pc = 0x2fdf34u;
    // NOP
    // 0x2fdf38: 0x0  nop
    ctx->pc = 0x2fdf38u;
    // NOP
    // 0x2fdf3c: 0x46000044  c1          0x44
    ctx->pc = 0x2fdf3cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fdf40: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fdf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fdf44: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2fdf44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdf48: 0x0  nop
    ctx->pc = 0x2fdf48u;
    // NOP
    // 0x2fdf4c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDF4Cu;
    {
        const bool branch_taken_0x2fdf4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF4Cu;
        // 0x2fdf50: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf4c) {
            ctx->pc = 0x2FDF74u;
            goto label_2fdf74;
        }
    }
    ctx->pc = 0x2FDF54u;
    // 0x2fdf54: 0x0  nop
    ctx->pc = 0x2fdf54u;
    // NOP
    // 0x2fdf58: 0x0  nop
    ctx->pc = 0x2fdf58u;
    // NOP
    // 0x2fdf5c: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2fdf5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x2fdf60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fdf60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fdf64: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fdf64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fdf68: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fdf68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fdf6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fdf6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fdf70: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fdf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdf74:
    // 0x2fdf74: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x2fdf74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fdf78: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fdf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fdf7c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fdf7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fdf80: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fdf80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdf84: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fdf84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fdf88: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fdf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fdf8c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2fdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdf90: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2fdf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdf94: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2fdf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdf98: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fdf98u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fdf9c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fdf9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fdfa0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fdfa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fdfa4: 0x0  nop
    ctx->pc = 0x2fdfa4u;
    // NOP
    // 0x2fdfa8: 0x0  nop
    ctx->pc = 0x2fdfa8u;
    // NOP
    // 0x2fdfac: 0x46000044  c1          0x44
    ctx->pc = 0x2fdfacu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fdfb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fdfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fdfb4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2fdfb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdfb8: 0x0  nop
    ctx->pc = 0x2fdfb8u;
    // NOP
    // 0x2fdfbc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2FDFBCu;
    {
        const bool branch_taken_0x2fdfbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFBCu;
        // 0x2fdfc0: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfbc) {
            ctx->pc = 0x2FDFE4u;
            goto label_2fdfe4;
        }
    }
    ctx->pc = 0x2FDFC4u;
    // 0x2fdfc4: 0x0  nop
    ctx->pc = 0x2fdfc4u;
    // NOP
    // 0x2fdfc8: 0x0  nop
    ctx->pc = 0x2fdfc8u;
    // NOP
    // 0x2fdfcc: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2fdfccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x2fdfd0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fdfd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fdfd4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fdfd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fdfd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fdfd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fdfdc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fdfdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fdfe0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fdfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdfe4:
    // 0x2fdfe4: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x2FDFE4u;
    SET_GPR_U32(ctx, 31, 0x2FDFECu);
    ctx->pc = 0x2FDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDFE4u;
    // 0x2fdfe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x2FDFE4u, 0x2FDFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDFECu;
label_2fdfec:
    // 0x2fdfec: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2FDFECu;
    {
        const bool branch_taken_0x2fdfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDFECu;
        // 0x2fdff0: 0x7ba20070  lq          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdfec) {
            ctx->pc = 0x2FE100u;
            goto label_2fe100;
        }
    }
    ctx->pc = 0x2FDFF4u;
    // 0x2fdff4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fdff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2fdff8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fdff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fdffc: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fdffcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe000: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe004: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fe004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe008: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2fe008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe00c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2fe00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe010: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2fe010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe014: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fe014u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fe018: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fe018u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fe01c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fe01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fe020: 0x0  nop
    ctx->pc = 0x2fe020u;
    // NOP
    // 0x2fe024: 0x0  nop
    ctx->pc = 0x2fe024u;
    // NOP
    // 0x2fe028: 0x46000044  c1          0x44
    ctx->pc = 0x2fe028u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fe02c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fe02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fe030: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2fe030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe034: 0x0  nop
    ctx->pc = 0x2fe034u;
    // NOP
    // 0x2fe038: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE038u;
    {
        const bool branch_taken_0x2fe038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE038u;
        // 0x2fe03c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe038) {
            ctx->pc = 0x2FE060u;
            goto label_2fe060;
        }
    }
    ctx->pc = 0x2FE040u;
    // 0x2fe040: 0x0  nop
    ctx->pc = 0x2fe040u;
    // NOP
    // 0x2fe044: 0x0  nop
    ctx->pc = 0x2fe044u;
    // NOP
    // 0x2fe048: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2fe048u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x2fe04c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fe04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fe050: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fe050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe054: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fe054u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fe058: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fe058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe05c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fe05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fe060:
    // 0x2fe060: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fe060u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fe064: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fe064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fe068: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fe068u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fe06c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2fe06cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe070: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe074: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fe074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe078: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x2fe078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe07c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2fe07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe080: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2fe080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe084: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fe084u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fe088: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fe088u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fe08c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fe08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fe090: 0x0  nop
    ctx->pc = 0x2fe090u;
    // NOP
    // 0x2fe094: 0x0  nop
    ctx->pc = 0x2fe094u;
    // NOP
    // 0x2fe098: 0x46000044  c1          0x44
    ctx->pc = 0x2fe098u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fe09c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fe09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fe0a0: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2fe0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe0a4: 0x0  nop
    ctx->pc = 0x2fe0a4u;
    // NOP
    // 0x2fe0a8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE0A8u;
    {
        const bool branch_taken_0x2fe0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0A8u;
        // 0x2fe0ac: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0a8) {
            ctx->pc = 0x2FE0D0u;
            goto label_2fe0d0;
        }
    }
    ctx->pc = 0x2FE0B0u;
    // 0x2fe0b0: 0x0  nop
    ctx->pc = 0x2fe0b0u;
    // NOP
    // 0x2fe0b4: 0x0  nop
    ctx->pc = 0x2fe0b4u;
    // NOP
    // 0x2fe0b8: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x2fe0b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x2fe0bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2fe0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fe0c0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fe0c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fe0c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fe0c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fe0c8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2fe0c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe0cc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2fe0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fe0d0:
    // 0x2fe0d0: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x2FE0D0u;
    SET_GPR_U32(ctx, 31, 0x2FE0D8u);
    ctx->pc = 0x2FE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0D0u;
    // 0x2fe0d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x2FE0D0u, 0x2FE0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0D8u;
label_2fe0d8:
    // 0x2fe0d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE0D8u;
    {
        const bool branch_taken_0x2fe0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0D8u;
        // 0x2fe0dc: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0d8) {
            ctx->pc = 0x2FE100u;
            goto label_2fe100;
        }
    }
    ctx->pc = 0x2FE0E0u;
    // 0x2fe0e0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2fe0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe0e4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2fe0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe0e8: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2fe0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe0ec: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2fe0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2fe0f0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2fe0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2fe0f4: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2fe0f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2fe0f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2FE0F8u;
    {
        const bool branch_taken_0x2fe0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0F8u;
        // 0x2fe0fc: 0xe643000c  swc1        $f3, 0xC($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0f8) {
            ctx->pc = 0x2FE158u;
            goto label_2fe158;
        }
    }
    ctx->pc = 0x2FE100u;
label_2fe100:
    // 0x2fe100: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2fe100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2fe104: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x2fe104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fe108: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe10c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2fe10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe110: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2fe110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2fe114: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x2fe114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fe118: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fe118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fe11c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2fe11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fe120: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2fe120u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2fe124: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x2fe124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2fe128: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
    ctx->pc = 0x2FE128u;
    {
        const bool branch_taken_0x2fe128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE128u;
        // 0x2fe12c: 0x7ba20060  lq          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe128) {
            ctx->pc = 0x2FDF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdf08;
        }
    }
    ctx->pc = 0x2FE130u;
    // 0x2fe130: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fe130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2fe134: 0xc4415b60  lwc1        $f1, 0x5B60($v0)
    ctx->pc = 0x2fe134u;
    { uint32_t bits = FAST_READ32(0x575B60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe138: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x2fe138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x2fe13c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2fe13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2fe140: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2fe140u;
    { uint32_t bits = FAST_READ32(0x575B64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe144: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2fe144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2fe148: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2fe148u;
    { uint32_t bits = FAST_READ32(0x575B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe14c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2fe14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2fe150: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2fe150u;
    { uint32_t bits = FAST_READ32(0x575B6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe154: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x2fe154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_2fe158:
    // 0x2fe158: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2fe158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe15c: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2fe15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fe160: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x2fe160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2fe164: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x2fe164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fe168: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x2fe168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fe16c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x2fe16cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fe170: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x2fe170u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2fe174: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x2fe174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fe178: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x2fe178u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2fe17c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2fe17cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2fe180: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x2fe180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2fe184: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2fe184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fe188: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2fe188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fe18c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE18Cu;
        // 0x2fe190: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE194u;
    // 0x2fe194: 0x0  nop
    ctx->pc = 0x2fe194u;
    // NOP
    ctx->pc = 0x2fe198u;
}
