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

// Function: sub_0025AE20
// Address: 0x25ae20 - 0x25ae70
void sub_0025AE20_0x25ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AE20_0x25ae20");
#endif

    ctx->pc = 0x25ae20u;

    // 0x25ae20: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x25ae20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x25ae24: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x25ae24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25ae28: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25ae28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25ae2c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x25ae2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25ae30: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25ae30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25ae34: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x25ae34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x25ae38: 0x4a0003bf  vwaitq
    ctx->pc = 0x25ae38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25ae3c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x25ae3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25ae40: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x25ae40u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25ae44: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x25ae44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ae48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25ae48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae4c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x25ae4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25ae50: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x25ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae54: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25ae58: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x25ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ae5c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x25ae5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x25ae60: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x25ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae64: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE64u;
        // 0x25ae68: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AE6Cu;
    // 0x25ae6c: 0x0  nop
    ctx->pc = 0x25ae6cu;
    // NOP
    ctx->pc = 0x25ae70u;
}
