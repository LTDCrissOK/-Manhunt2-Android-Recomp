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

// Function: sub_0034E6D8
// Address: 0x34e6d8 - 0x34ea10
void sub_0034E6D8_0x34e6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E6D8_0x34e6d8");
#endif

    switch (ctx->pc) {
        case 0x34e720u: goto label_34e720;
        case 0x34e728u: goto label_34e728;
        case 0x34e7d8u: goto label_34e7d8;
        case 0x34e7f8u: goto label_34e7f8;
        case 0x34e844u: goto label_34e844;
        case 0x34e870u: goto label_34e870;
        case 0x34e884u: goto label_34e884;
        case 0x34e890u: goto label_34e890;
        case 0x34e898u: goto label_34e898;
        case 0x34e8a0u: goto label_34e8a0;
        case 0x34e8f4u: goto label_34e8f4;
        case 0x34e904u: goto label_34e904;
        case 0x34e914u: goto label_34e914;
        case 0x34e978u: goto label_34e978;
        case 0x34e9b4u: goto label_34e9b4;
        default: break;
    }

    ctx->pc = 0x34e6d8u;

    // 0x34e6d8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x34e6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x34e6dc: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x34e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x34e6e0: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x34e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x34e6e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e6e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e6e8: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x34e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x34e6ec: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x34e6ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34e6f0: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x34e6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x34e6f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x34e6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e6f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34e6f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e6fc: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x34e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x34e700: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x34e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x34e704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34e704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e708: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x34e708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x34e70c: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x34e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x34e710: 0xffbe0110  sd          $fp, 0x110($sp)
    ctx->pc = 0x34e710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 30));
    // 0x34e714: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x34e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x34e718: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34E718u;
    SET_GPR_U32(ctx, 31, 0x34E720u);
    ctx->pc = 0x34E71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E718u;
    // 0x34e71c: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34E718u, 0x34E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E720u;
label_34e720:
    // 0x34e720: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34E720u;
    SET_GPR_U32(ctx, 31, 0x34E728u);
    ctx->pc = 0x34E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E720u;
    // 0x34e724: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34E720u, 0x34E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E728u;
label_34e728:
    // 0x34e728: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x34e728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34e72c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34e72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34e730: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x34e730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34e734: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34e734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34e738: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x34e738u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x34e73c: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x34e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x34e740: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x34e740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34e744: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x34e744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34e748: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34e748u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e74c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x34e74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e750: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x34e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e754: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x34e754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e758: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x34e758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34e75c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34e75cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34e760: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34e760u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34e764: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x34e764u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34e768: 0x0  nop
    ctx->pc = 0x34e768u;
    // NOP
    // 0x34e76c: 0x0  nop
    ctx->pc = 0x34e76cu;
    // NOP
    // 0x34e770: 0x46010084  c1          0x10084
    ctx->pc = 0x34e770u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x34e774: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x34e774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x34e778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e77c: 0x0  nop
    ctx->pc = 0x34e77cu;
    // NOP
    // 0x34e780: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x34e780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e784: 0x0  nop
    ctx->pc = 0x34e784u;
    // NOP
    // 0x34e788: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x34E788u;
    {
        const bool branch_taken_0x34e788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E788u;
        // 0x34e78c: 0xe6020050  swc1        $f2, 0x50($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e788) {
            ctx->pc = 0x34E7B4u;
            goto label_34e7b4;
        }
    }
    ctx->pc = 0x34E790u;
    // 0x34e790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34e794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e798: 0x0  nop
    ctx->pc = 0x34e798u;
    // NOP
    // 0x34e79c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x34e79cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x34e7a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34e7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34e7a4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x34e7a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34e7a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34e7a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34e7ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34e7acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34e7b0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x34e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_34e7b4:
    // 0x34e7b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34e7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34e7b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x34e7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34e7bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x34e7bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e7c0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x34e7c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x34e7c4: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x34e7c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34e7c8: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x34e7c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34e7cc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x34e7ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e7d0: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x34e7d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x34e7d4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x34e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_34e7d8:
    // 0x34e7d8: 0x8e43c60c  lw          $v1, -0x39F4($s2)
    ctx->pc = 0x34e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e7dc: 0x2a28818  mult        $s1, $s5, $v0
    ctx->pc = 0x34e7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x34e7e0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x34e7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34e7e4: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x34e7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x34e7e8: 0x50400079  beql        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x34E7E8u;
    {
        const bool branch_taken_0x34e7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e7e8) {
            ctx->pc = 0x34E7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E7E8u;
            // 0x34e7ec: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E9D0u;
            goto label_34e9d0;
        }
    }
    ctx->pc = 0x34E7F0u;
    // 0x34e7f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34E7F0u;
    SET_GPR_U32(ctx, 31, 0x34E7F8u);
    ctx->pc = 0x34E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E7F0u;
    // 0x34e7f4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34E7F0u, 0x34E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E7F8u;
label_34e7f8:
    // 0x34e7f8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x34e7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x34e7fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34e7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e800: 0xe6940020  swc1        $f20, 0x20($s4)
    ctx->pc = 0x34e800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x34e804: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x34e804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x34e808: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x34e808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34e80c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x34e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x34e810: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x34e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e814: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x34e814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e818: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x34e818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34e81c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x34e81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34e820: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x34e820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x34e824: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x34e824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34e828: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x34e828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34e82c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x34e82cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x34e830: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x34e830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34e834: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x34e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34e838: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e83c: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x34E83Cu;
    SET_GPR_U32(ctx, 31, 0x34E844u);
    ctx->pc = 0x34E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E83Cu;
    // 0x34e840: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x34E83Cu, 0x34E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E844u;
label_34e844:
    // 0x34e844: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x34E844u;
    {
        const bool branch_taken_0x34e844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E844u;
        // 0x34e848: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e844) {
            ctx->pc = 0x34E9CCu;
            goto label_34e9cc;
        }
    }
    ctx->pc = 0x34E84Cu;
    // 0x34e84c: 0x8e45c60c  lw          $a1, -0x39F4($s2)
    ctx->pc = 0x34e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e850: 0x244765b0  addiu       $a3, $v0, 0x65B0
    ctx->pc = 0x34e850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
    // 0x34e854: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x34e854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34e858: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x34e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x34e85c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x34e85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x34e860: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x34e860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34e864: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x34e864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34e868: 0xc07f672  jal         func_1FD9C8
    ctx->pc = 0x34E868u;
    SET_GPR_U32(ctx, 31, 0x34E870u);
    ctx->pc = 0x34E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E868u;
    // 0x34e86c: 0x24449b10  addiu       $a0, $v0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9C8u, 0x34E868u, 0x34E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E870u;
label_34e870:
    // 0x34e870: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x34e870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x34e874: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34e874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e878: 0x24735ad0  addiu       $s3, $v1, 0x5AD0
    ctx->pc = 0x34e878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 23248));
    // 0x34e87c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x34E87Cu;
    SET_GPR_U32(ctx, 31, 0x34E884u);
    ctx->pc = 0x34E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E87Cu;
    // 0x34e880: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x34E87Cu, 0x34E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E884u;
label_34e884:
    // 0x34e884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34e884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e888: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34E888u;
    SET_GPR_U32(ctx, 31, 0x34E890u);
    ctx->pc = 0x34E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E888u;
    // 0x34e88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34E888u, 0x34E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E890u;
label_34e890:
    // 0x34e890: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34E890u;
    SET_GPR_U32(ctx, 31, 0x34E898u);
    ctx->pc = 0x34E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E890u;
    // 0x34e894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34E890u, 0x34E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E898u;
label_34e898:
    // 0x34e898: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34E898u;
    SET_GPR_U32(ctx, 31, 0x34E8A0u);
    ctx->pc = 0x34E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E898u;
    // 0x34e89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34E898u, 0x34E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8A0u;
label_34e8a0:
    // 0x34e8a0: 0x8e42c60c  lw          $v0, -0x39F4($s2)
    ctx->pc = 0x34e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e8a4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x34e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x34e8a8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x34e8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x34e8ac: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x34e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x34e8b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34e8b4: 0x24a44f20  addiu       $a0, $a1, 0x4F20
    ctx->pc = 0x34e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20256));
    // 0x34e8b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x34e8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e8bc: 0x24c565c0  addiu       $a1, $a2, 0x65C0
    ctx->pc = 0x34e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 26048));
    // 0x34e8c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34e8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34e8c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8c8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x34e8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x34e8cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8d0: 0x8e42c60c  lw          $v0, -0x39F4($s2)
    ctx->pc = 0x34e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e8d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34e8d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x34e8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e8dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x34e8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x34e8e0: 0x8e42c60c  lw          $v0, -0x39F4($s2)
    ctx->pc = 0x34e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e8e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34e8e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x34e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e8ec: 0xc0b0a1c  jal         func_2C2870
    ctx->pc = 0x34E8ECu;
    SET_GPR_U32(ctx, 31, 0x34E8F4u);
    ctx->pc = 0x34E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E8ECu;
    // 0x34e8f0: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2870u, 0x34E8ECu, 0x34E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8F4u;
label_34e8f4:
    // 0x34e8f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E8F4u;
    {
        const bool branch_taken_0x34e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8f4) {
            ctx->pc = 0x34E904u;
            goto label_34e904;
        }
    }
    ctx->pc = 0x34E8FCu;
    // 0x34e8fc: 0xc0b0ef2  jal         func_2C3BC8
    ctx->pc = 0x34E8FCu;
    SET_GPR_U32(ctx, 31, 0x34E904u);
    ctx->pc = 0x34E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E8FCu;
    // 0x34e900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x34E8FCu, 0x34E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E904u;
label_34e904:
    // 0x34e904: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E904u;
    {
        const bool branch_taken_0x34e904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E904u;
        // 0x34e908: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e904) {
            ctx->pc = 0x34E914u;
            goto label_34e914;
        }
    }
    ctx->pc = 0x34E90Cu;
    // 0x34e90c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x34E90Cu;
    SET_GPR_U32(ctx, 31, 0x34E914u);
    ctx->pc = 0x34E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E90Cu;
    // 0x34e910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x34E90Cu, 0x34E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E914u;
label_34e914:
    // 0x34e914: 0x8e44c60c  lw          $a0, -0x39F4($s2)
    ctx->pc = 0x34e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e91c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x34e91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x34e920: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x34e920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x34e924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x34e924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34e928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e92c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x34e92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x34e930: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x34e930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x34e934: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x34e934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e938: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34e938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34e93c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x34e93cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x34e940: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x34e940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34e944: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x34e944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x34e948: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x34e948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x34e94c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x34e94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x34e950: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x34e950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34e954: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x34e954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x34e958: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x34e958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x34e95c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x34e95cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34e960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34e960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34e964: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x34e964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x34e968: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x34e968u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34e96c: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x34e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x34e970: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x34E970u;
    SET_GPR_U32(ctx, 31, 0x34E978u);
    ctx->pc = 0x34E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E970u;
    // 0x34e974: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x34E970u, 0x34E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E978u;
label_34e978:
    // 0x34e978: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34e97c: 0x8e43c60c  lw          $v1, -0x39F4($s2)
    ctx->pc = 0x34e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e980: 0xa0572cf4  sb          $s7, 0x2CF4($v0)
    ctx->pc = 0x34e980u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x482CF4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CF4u, _value); } while (0);
    // 0x34e984: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x34e984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34e988: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x34e988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x34e98c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x34e98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34e990: 0xf841be40  sqc2        $vf1, -0x41C0($v0)
    ctx->pc = 0x34e990u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5BBE40u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5BBE40u, _value); } while (0);
    // 0x34e994: 0xa0600045  sb          $zero, 0x45($v1)
    ctx->pc = 0x34e994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e998: 0x8e42c60c  lw          $v0, -0x39F4($s2)
    ctx->pc = 0x34e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e99c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x34e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x34e9a0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x34e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x34e9a4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34E9A4u;
    {
        const bool branch_taken_0x34e9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E9A4u;
        // 0x34e9a8: 0x8ec22cec  lw          $v0, 0x2CEC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e9a4) {
            ctx->pc = 0x34E9C4u;
            goto label_34e9c4;
        }
    }
    ctx->pc = 0x34E9ACu;
    // 0x34e9ac: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x34E9ACu;
    SET_GPR_U32(ctx, 31, 0x34E9B4u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x34E9ACu, 0x34E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E9B4u;
label_34e9b4:
    // 0x34e9b4: 0x8e43c60c  lw          $v1, -0x39F4($s2)
    ctx->pc = 0x34e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952460)));
    // 0x34e9b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x34e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34e9bc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x34e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x34e9c0: 0x8ec22cec  lw          $v0, 0x2CEC($s6)
    ctx->pc = 0x34e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11500)));
label_34e9c4:
    // 0x34e9c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34e9c8: 0xaec22cec  sw          $v0, 0x2CEC($s6)
    ctx->pc = 0x34e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 11500), GPR_U32(ctx, 2));
label_34e9cc:
    // 0x34e9cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x34e9ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_34e9d0:
    // 0x34e9d0: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x34e9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34e9d4: 0x5440ff80  bnel        $v0, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x34E9D4u;
    {
        const bool branch_taken_0x34e9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e9d4) {
            ctx->pc = 0x34E9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34E9D4u;
            // 0x34e9d8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34E7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e7d8;
        }
    }
    ctx->pc = 0x34E9DCu;
    // 0x34e9dc: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x34e9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34e9e0: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x34e9e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34e9e4: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x34e9e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x34e9e8: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x34e9e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x34e9ec: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x34e9ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x34e9f0: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x34e9f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e9f4: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x34e9f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x34e9f8: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x34e9f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x34e9fc: 0xdfbe0110  ld          $fp, 0x110($sp)
    ctx->pc = 0x34e9fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x34ea00: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x34ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34ea04: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x34ea04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x34EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA08u;
        // 0x34ea0c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EA10u;
}
