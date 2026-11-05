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

// Function: sub_001C9780
// Address: 0x1c9780 - 0x1c9998
void sub_001C9780_0x1c9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9780_0x1c9780");
#endif

    switch (ctx->pc) {
        case 0x1c97d0u: goto label_1c97d0;
        case 0x1c97d8u: goto label_1c97d8;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c98e0u: goto label_1c98e0;
        case 0x1c9938u: goto label_1c9938;
        default: break;
    }

    ctx->pc = 0x1c9780u;

    // 0x1c9780: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1c9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1c9784: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1c9784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1c9788: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1c9788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1c978c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c978cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9790: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1c9790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1c9794: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1c9794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c9798: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1c9798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1c979c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c979cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97a0: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1c97a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1c97a4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1c97a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97a8: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1c97a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1c97ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c97acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c97b0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1c97b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1c97b4: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1c97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1c97b8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x1c97b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1c97bc: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1c97bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1c97c0: 0x8e630318  lw          $v1, 0x318($s3)
    ctx->pc = 0x1c97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
    // 0x1c97c4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c97c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C97C8u;
    SET_GPR_U32(ctx, 31, 0x1C97D0u);
    ctx->pc = 0x1C97CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97C8u;
    // 0x1c97cc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C97C8u, 0x1C97D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97D0u;
label_1c97d0:
    // 0x1c97d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C97D0u;
    SET_GPR_U32(ctx, 31, 0x1C97D8u);
    ctx->pc = 0x1C97D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C97D0u;
    // 0x1c97d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C97D0u, 0x1C97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C97D8u;
label_1c97d8:
    // 0x1c97d8: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1c97d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c97dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c97dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c97e0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1c97e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c97e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c97e8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1c97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1c97ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c97ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c97f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c97f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c97f4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c97f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c97f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c97f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c97fc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c97fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9800: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1c9800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9804: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1c9804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9808: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1c9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c980c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c980cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c9810: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c9810u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c9814: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c9814u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c9818: 0x0  nop
    ctx->pc = 0x1c9818u;
    // NOP
    // 0x1c981c: 0x0  nop
    ctx->pc = 0x1c981cu;
    // NOP
    // 0x1c9820: 0x46000044  c1          0x44
    ctx->pc = 0x1c9820u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c9824: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c9824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c9828: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c9828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c982c: 0x0  nop
    ctx->pc = 0x1c982cu;
    // NOP
    // 0x1c9830: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1c9830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9834: 0x0  nop
    ctx->pc = 0x1c9834u;
    // NOP
    // 0x1c9838: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C9838u;
    {
        const bool branch_taken_0x1c9838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9838u;
        // 0x1c983c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9838) {
            ctx->pc = 0x1C9864u;
            goto label_1c9864;
        }
    }
    ctx->pc = 0x1C9840u;
    // 0x1c9840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c9844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9848: 0x0  nop
    ctx->pc = 0x1c9848u;
    // NOP
    // 0x1c984c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c984cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c9850: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c9850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c9854: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c9854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c9858: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c9858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c985c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c985cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9860: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c9860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c9864:
    // 0x1c9864: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c9864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9868: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1c9868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c986c: 0x0  nop
    ctx->pc = 0x1c986cu;
    // NOP
    // 0x1c9870: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x1C9870u;
    {
        const bool branch_taken_0x1c9870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9870u;
        // 0x1c9874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9870) {
            ctx->pc = 0x1C9964u;
            goto label_1c9964;
        }
    }
    ctx->pc = 0x1C9878u;
    // 0x1c9878: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C9878u;
    SET_GPR_U32(ctx, 31, 0x1C9880u);
    ctx->pc = 0x1C987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9878u;
    // 0x1c987c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C9878u, 0x1C9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9880u;
label_1c9880:
    // 0x1c9880: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C9880u;
    SET_GPR_U32(ctx, 31, 0x1C9888u);
    ctx->pc = 0x1C9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9880u;
    // 0x1c9884: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C9880u, 0x1C9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9888u;
label_1c9888:
    // 0x1c9888: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c9888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c988c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1c988cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c9890: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1c9890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1c9894: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x1c9894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x1c9898: 0x26620044  addiu       $v0, $s3, 0x44
    ctx->pc = 0x1c9898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x1c989c: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c98a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c98a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c98a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c98a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c98ac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1c98acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c98b0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C98B0u;
    {
        const bool branch_taken_0x1c98b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98B0u;
        // 0x1c98b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98b0) {
            ctx->pc = 0x1C9960u;
            goto label_1c9960;
        }
    }
    ctx->pc = 0x1C98B8u;
    // 0x1c98b8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1c98b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1c98bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c98bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c98c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c98c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1c98c4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1c98c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c98c8: 0x3c013ed8  lui         $at, 0x3ED8
    ctx->pc = 0x1c98c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16088 << 16));
    // 0x1c98cc: 0x342151ea  ori         $at, $at, 0x51EA
    ctx->pc = 0x1c98ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20970);
    // 0x1c98d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c98d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c98d4: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x1c98d8: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1c98d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c98dc: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1c98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1c98e0:
    // 0x1c98e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c98e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c98e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c98ec: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1c98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1c98f0: 0x50760014  beql        $v1, $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C98F0u;
    {
        const bool branch_taken_0x1c98f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x1c98f0) {
            ctx->pc = 0x1C98F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C98F0u;
            // 0x1c98f4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9944u;
            goto label_1c9944;
        }
    }
    ctx->pc = 0x1C98F8u;
    // 0x1c98f8: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x1c98fc: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1c98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1c9900: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C9900u;
    {
        const bool branch_taken_0x1c9900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9900u;
        // 0x1c9904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9900) {
            ctx->pc = 0x1C9940u;
            goto label_1c9940;
        }
    }
    ctx->pc = 0x1C9908u;
    // 0x1c9908: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1c990c: 0xc6a1c6a4  lwc1        $f1, -0x395C($s5)
    ctx->pc = 0x1c990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9910: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9914: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1c9914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c9918: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x1c9918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1c991c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1c991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1c9920: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1c9920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9924: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c9928: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1c9928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c992c: 0xe6350020  swc1        $f21, 0x20($s1)
    ctx->pc = 0x1c992cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1c9930: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1C9930u;
    SET_GPR_U32(ctx, 31, 0x1C9938u);
    ctx->pc = 0x1C9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9930u;
    // 0x1c9934: 0xe6340030  swc1        $f20, 0x30($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1C9930u, 0x1C9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9938u;
label_1c9938:
    // 0x1c9938: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9938u;
    {
        const bool branch_taken_0x1c9938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9938u;
        // 0x1c993c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9938) {
            ctx->pc = 0x1C9964u;
            goto label_1c9964;
        }
    }
    ctx->pc = 0x1C9940u;
label_1c9940:
    // 0x1c9940: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1c9944:
    // 0x1c9944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c9944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c9948: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x1c9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c994c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c994cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9950: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c9954: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c9954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c9958: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C9958u;
    {
        const bool branch_taken_0x1c9958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9958) {
            ctx->pc = 0x1C995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9958u;
            // 0x1c995c: 0x8e620044  lw          $v0, 0x44($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C98E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c98e0;
        }
    }
    ctx->pc = 0x1C9960u;
label_1c9960:
    // 0x1c9960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9964:
    // 0x1c9964: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1c9964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c9968: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1c9968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1c996c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1c996cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c9970: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1c9970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1c9974: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1c9974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c9978: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1c9978u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1c997c: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1c997cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c9980: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1c9980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1c9984: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x1c9984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c9988: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x1c9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c998c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C998Cu;
        // 0x1c9990: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9994u;
    // 0x1c9994: 0x0  nop
    ctx->pc = 0x1c9994u;
    // NOP
    ctx->pc = 0x1c9998u;
}
