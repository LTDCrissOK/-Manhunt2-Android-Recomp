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

// Function: sub_0037D4A8
// Address: 0x37d4a8 - 0x37d598
void sub_0037D4A8_0x37d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D4A8_0x37d4a8");
#endif

    switch (ctx->pc) {
        case 0x37d4e0u: goto label_37d4e0;
        default: break;
    }

    ctx->pc = 0x37d4a8u;

    // 0x37d4a8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d4a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d4ac: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x37d4acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37d4b0: 0x4a2201bc  vmulax.w    $ACC, $vf0, $vf2x
    ctx->pc = 0x37d4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x37d4b4: 0x4a2200bd  vmadday.w   $ACC, $vf0, $vf2y
    ctx->pc = 0x37d4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x37d4b8: 0x4a22008a  vmaddz.w    $vf2, $vf0, $vf2z
    ctx->pc = 0x37d4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37d4bc: 0x4be203be  vrsqrt      $Q, $vf0w, $vf2w
    ctx->pc = 0x37d4bcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x37d4c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x37d4c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x37d4c4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x37d4c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x37d4c8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x37d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4CCu;
        // 0x37d4d0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D4D4u;
    // 0x37d4d4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d4d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d4d8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x37d4d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37d4dc: 0x4a2201bc  vmulax.w    $ACC, $vf0, $vf2x
    ctx->pc = 0x37d4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
label_37d4e0:
    // 0x37d4e0: 0x4a2200bd  vmadday.w   $ACC, $vf0, $vf2y
    ctx->pc = 0x37d4e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x37d4e4: 0x4a22008a  vmaddz.w    $vf2, $vf0, $vf2z
    ctx->pc = 0x37d4e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37d4e8: 0x4be203be  vrsqrt      $Q, $vf0w, $vf2w
    ctx->pc = 0x37d4e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x37d4ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x37d4ecu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x37d4f0: 0x4be008dc  vmulq.xyzw  $vf3, $vf1, $Q
    ctx->pc = 0x37d4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d4f4: 0x4b8203bd  .word       0x4B8203BD                   # vsqrt       $Q, $vf2w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x37d4f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x37d4f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x37d4f8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x37d4fc: 0x4b0000a0  vaddq.x     $vf2, $vf0, $Q
    ctx->pc = 0x37d4fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37d500: 0x0  nop
    ctx->pc = 0x37d500u;
    // NOP
    // 0x37d504: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x37d504u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x37d508: 0x0  nop
    ctx->pc = 0x37d508u;
    // NOP
    // 0x37d50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d510: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d514: 0x3e00008  jr          $ra
    ctx->pc = 0x37D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D514u;
        // 0x37d518: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D51Cu;
    // 0x37d51c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d51cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d520: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x37d520u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x37d524: 0x4a0002ff  vnop
    ctx->pc = 0x37d524u;
    // NOP operation, no action needed for VU0
    // 0x37d528: 0x4a0002ff  vnop
    ctx->pc = 0x37d528u;
    // NOP operation, no action needed for VU0
    // 0x37d52c: 0x4a0002ff  vnop
    ctx->pc = 0x37d52cu;
    // NOP operation, no action needed for VU0
    // 0x37d530: 0x3e00008  jr          $ra
    ctx->pc = 0x37D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D530u;
        // 0x37d534: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D538u;
    // 0x37d538: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d53c: 0x4be1093c  vitof0.xyzw $vf1, $vf1
    ctx->pc = 0x37d53cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[1]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x37d540: 0x4a0002ff  vnop
    ctx->pc = 0x37d540u;
    // NOP operation, no action needed for VU0
    // 0x37d544: 0x4a0002ff  vnop
    ctx->pc = 0x37d544u;
    // NOP operation, no action needed for VU0
    // 0x37d548: 0x4a0002ff  vnop
    ctx->pc = 0x37d548u;
    // NOP operation, no action needed for VU0
    // 0x37d54c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D54Cu;
        // 0x37d550: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D554u;
    // 0x37d554: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d554u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d558: 0x4be1097d  vftoi4.xyzw $vf1, $vf1
    ctx->pc = 0x37d558u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x37d55c: 0x4a0002ff  vnop
    ctx->pc = 0x37d55cu;
    // NOP operation, no action needed for VU0
    // 0x37d560: 0x4a0002ff  vnop
    ctx->pc = 0x37d560u;
    // NOP operation, no action needed for VU0
    // 0x37d564: 0x4a0002ff  vnop
    ctx->pc = 0x37d564u;
    // NOP operation, no action needed for VU0
    // 0x37d568: 0x3e00008  jr          $ra
    ctx->pc = 0x37D568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D568u;
        // 0x37d56c: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D570u;
    // 0x37d570: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x37d570u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x37d574: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d574u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d578: 0x4bc109ff  .word       0x4BC109FF                   # vclipw.xyz  $vf1, $vf1w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x37d578u;
    { __m128 fs = ctx->vu0_vf[1]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x37d57c: 0x4a0002ff  vnop
    ctx->pc = 0x37d57cu;
    // NOP operation, no action needed for VU0
    // 0x37d580: 0x4a0002ff  vnop
    ctx->pc = 0x37d580u;
    // NOP operation, no action needed for VU0
    // 0x37d584: 0x4a0002ff  vnop
    ctx->pc = 0x37d584u;
    // NOP operation, no action needed for VU0
    // 0x37d588: 0x4a0002ff  vnop
    ctx->pc = 0x37d588u;
    // NOP operation, no action needed for VU0
    // 0x37d58c: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x37d58cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x37d590: 0x3e00008  jr          $ra
    ctx->pc = 0x37D590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D598u;
}
