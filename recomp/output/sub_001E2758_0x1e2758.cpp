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

// Function: sub_001E2758
// Address: 0x1e2758 - 0x1e2868
void sub_001E2758_0x1e2758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2758_0x1e2758");
#endif

    switch (ctx->pc) {
        case 0x1e2788u: goto label_1e2788;
        default: break;
    }

    ctx->pc = 0x1e2758u;

    // 0x1e2758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e2758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e275c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e275cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e2760: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e2760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e2764: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e2764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2768: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e2768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1e276c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e276cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2770: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e2770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e2774: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e2774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2778: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e277c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e277cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2780: 0xc078968  jal         func_1E25A0
    ctx->pc = 0x1E2780u;
    SET_GPR_U32(ctx, 31, 0x1E2788u);
    ctx->pc = 0x1E2784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2780u;
    // 0x1e2784: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E25A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E25A0u, 0x1E2780u, 0x1E2788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2788u;
label_1e2788:
    // 0x1e2788: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1E2788u;
    {
        const bool branch_taken_0x1e2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2788u;
        // 0x1e278c: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2788) {
            ctx->pc = 0x1E2848u;
            goto label_1e2848;
        }
    }
    ctx->pc = 0x1E2790u;
    // 0x1e2790: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x1e2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2794: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1e2794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2798: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e279c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e27a0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e27a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e27a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1e27a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e27a8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1e27a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e27ac: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1e27acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e27b0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e27b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e27b4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e27b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e27b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e27b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e27bc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1e27bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e27c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e27c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e27c4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e27c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e27c8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e27c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e27cc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e27ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e27d0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e27d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e27d4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e27d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e27d8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e27d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e27dc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1e27dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e27e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e27e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e27e4: 0x0  nop
    ctx->pc = 0x1e27e4u;
    // NOP
    // 0x1e27e8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1E27E8u;
    {
        const bool branch_taken_0x1e27e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27E8u;
        // 0x1e27ec: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27e8) {
            ctx->pc = 0x1E2848u;
            goto label_1e2848;
        }
    }
    ctx->pc = 0x1E27F0u;
    // 0x1e27f0: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1e27f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e27f4: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x1e27f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1e27f8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e27f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e27fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e27fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2800: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2804: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e2804u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2808: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e2808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e280c: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x1e280cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1e2810: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1e2810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e2814: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e2814u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2818: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2818u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e281c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e281cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2820: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e2820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2824: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e2824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2828: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e2828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e282c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e282cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e2830: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e2830u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e2834: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e2834u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e2838: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e2838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e283c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e283cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2840u;
    {
        const bool branch_taken_0x1e2840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2840u;
        // 0x1e2844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2840) {
            ctx->pc = 0x1E284Cu;
            goto label_1e284c;
        }
    }
    ctx->pc = 0x1E2848u;
label_1e2848:
    // 0x1e2848: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e284c:
    // 0x1e284c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e284cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2850: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e2850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e2854: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e2854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2858: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1e2858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e285c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2860: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2860u;
        // 0x1e2864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2868u;
}
