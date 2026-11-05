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

// Function: sub_002F37B8
// Address: 0x2f37b8 - 0x2f3900
void sub_002F37B8_0x2f37b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F37B8_0x2f37b8");
#endif

    switch (ctx->pc) {
        case 0x2f38ccu: goto label_2f38cc;
        default: break;
    }

    ctx->pc = 0x2f37b8u;

    // 0x2f37b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f37b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f37bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f37bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f37c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2f37c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f37c4: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x2f37c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x2f37c8: 0x8c850104  lw          $a1, 0x104($a0)
    ctx->pc = 0x2f37c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2f37cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f37d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f37d4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2f37d8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f37dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f37dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f37e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f37e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f37e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f37e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f37e8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f37e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f37ec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f37f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f37f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f37f4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f37f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f37f8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2f37f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f37fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f37fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f3800: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f3800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f3804: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f3804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f3808: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2f3808u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f380c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3810: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f3810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3814: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f3814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f3818: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f3818u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2f381c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f381cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2f3820: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f3820u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2f3824: 0x46140504  c1          0x140504
    ctx->pc = 0x2f3824u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f3828: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f3828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f382c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f382cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f3830: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f3830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f3834: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f3834u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2f3838: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f3838u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2f383c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f383cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2f3840: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f3840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3844: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f3844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3848: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f3848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f384c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2f3850: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2f3850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3854: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2f3854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3858: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f3858u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f385c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2f385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3860: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f3860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3864: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f3864u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2f3868: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2f3868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f386c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2f386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3870: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2f3870u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2f3874: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f3874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f3878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f387c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f387cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f3880: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f3880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3884: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2f3884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3888: 0x0  nop
    ctx->pc = 0x2f3888u;
    // NOP
    // 0x2f388c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F388Cu;
    {
        const bool branch_taken_0x2f388c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f388c) {
            ctx->pc = 0x2F389Cu;
            goto label_2f389c;
        }
    }
    ctx->pc = 0x2F3894u;
    // 0x2f3894: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3894u;
    {
        const bool branch_taken_0x2f3894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3894u;
        // 0x2f3898: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3894) {
            ctx->pc = 0x2F38ACu;
            goto label_2f38ac;
        }
    }
    ctx->pc = 0x2F389Cu;
label_2f389c:
    // 0x2f389c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2f389cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f38a0: 0x0  nop
    ctx->pc = 0x2f38a0u;
    // NOP
    // 0x2f38a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F38A4u;
    {
        const bool branch_taken_0x2f38a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f38a4) {
            ctx->pc = 0x2F38A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F38A4u;
            // 0x2f38a8: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F38ACu;
            goto label_2f38ac;
        }
    }
    ctx->pc = 0x2F38ACu;
label_2f38ac:
    // 0x2f38ac: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2f38acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2f38b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f38b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f38b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f38b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f38b8: 0x0  nop
    ctx->pc = 0x2f38b8u;
    // NOP
    // 0x2f38bc: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2f38bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2f38c0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2f38c0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2f38c4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2F38C4u;
    SET_GPR_U32(ctx, 31, 0x2F38CCu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2F38C4u, 0x2F38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F38CCu;
label_2f38cc:
    // 0x2f38cc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2f38ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2f38d0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2f38d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2f38d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f38d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f38d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f38dc: 0xc441b758  lwc1        $f1, -0x48A8($v0)
    ctx->pc = 0x2f38dcu;
    { uint32_t bits = FAST_READ32(0x3FB758u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f38e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f38e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f38e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f38e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f38e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f38e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f38ec: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2f38ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2f38f0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2f38f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f38f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F38F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38F4u;
        // 0x2f38f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F38F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F38FCu;
    // 0x2f38fc: 0x0  nop
    ctx->pc = 0x2f38fcu;
    // NOP
    ctx->pc = 0x2f3900u;
}
