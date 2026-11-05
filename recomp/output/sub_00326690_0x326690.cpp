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

// Function: sub_00326690
// Address: 0x326690 - 0x326780
void sub_00326690_0x326690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326690_0x326690");
#endif

    switch (ctx->pc) {
        case 0x326768u: goto label_326768;
        default: break;
    }

    ctx->pc = 0x326690u;

    // 0x326690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326694: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x326698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32669c: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x32669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x3266a0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x3266a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x3266a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3266a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266a8: 0xc4400430  lwc1        $f0, 0x430($v0)
    ctx->pc = 0x3266a8u;
    { uint32_t bits = FAST_READ32(0x595CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3266ac: 0x8ce3be28  lw          $v1, -0x41D8($a3)
    ctx->pc = 0x3266acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE28u));
    // 0x3266b0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3266B0u;
    {
        const bool branch_taken_0x3266b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266B0u;
        // 0x3266b4: 0xe4400074  swc1        $f0, 0x74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266b0) {
            ctx->pc = 0x326770u;
            goto label_326770;
        }
    }
    ctx->pc = 0x3266B8u;
    // 0x3266b8: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x3266b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x3266bc: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x3266bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3266c0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3266c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3266c4: 0xf8610060  sqc2        $vf1, 0x60($v1)
    ctx->pc = 0x3266c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3266c8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3266c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3266cc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3266ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3266d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3266d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3266d4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3266d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3266d8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3266d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3266dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3266dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3266e0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3266e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3266e4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3266e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3266e8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x3266e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x3266ec: 0x24426df0  addiu       $v0, $v0, 0x6DF0
    ctx->pc = 0x3266ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28144));
    // 0x3266f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3266f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6DF0u));
    // 0x3266f4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x3266f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3266f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3266f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3266fc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3266fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326700: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x326700u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x326704: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x326704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x326708: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x326708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32670c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x32670cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326710: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x326710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326714: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x326714u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x326718: 0x4a0003bf  vwaitq
    ctx->pc = 0x326718u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x32671c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x32671cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326720: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x326720u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x326724: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x326724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x326728: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x326728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32672c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x32672cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x326730: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x326730u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x326734: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x326734u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326738: 0xf8610050  sqc2        $vf1, 0x50($v1)
    ctx->pc = 0x326738u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32673c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x32673cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326740: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x326740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326744: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x326744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x326748: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x326748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32674c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x32674cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x326750: 0x4a0003bf  vwaitq
    ctx->pc = 0x326750u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x326754: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x326754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x326758: 0xf8610050  sqc2        $vf1, 0x50($v1)
    ctx->pc = 0x326758u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32675c: 0x8ce2be28  lw          $v0, -0x41D8($a3)
    ctx->pc = 0x32675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950440)));
    // 0x326760: 0xc0c48da  jal         func_312368
    ctx->pc = 0x326760u;
    SET_GPR_U32(ctx, 31, 0x326768u);
    ctx->pc = 0x326764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326760u;
    // 0x326764: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x326760u, 0x326768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326768u;
label_326768:
    // 0x326768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x326768u;
    {
        const bool branch_taken_0x326768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326768u;
        // 0x32676c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326768) {
            ctx->pc = 0x326774u;
            goto label_326774;
        }
    }
    ctx->pc = 0x326770u;
label_326770:
    // 0x326770: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326774:
    // 0x326774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326778: 0x3e00008  jr          $ra
    ctx->pc = 0x326778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326778u;
        // 0x32677c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326780u;
}
