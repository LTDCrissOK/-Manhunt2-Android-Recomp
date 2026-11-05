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

// Function: sub_0037D438
// Address: 0x37d438 - 0x37d4a8
void sub_0037D438_0x37d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D438_0x37d438");
#endif

    ctx->pc = 0x37d438u;

    // 0x37d438: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x37d438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x37d43c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x37d43cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d440: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x37d440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37d444: 0x4be110ea  vmul.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x37d444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d448: 0x4b0321bc  vmulax.x    $ACC, $vf4, $vf3x
    ctx->pc = 0x37d448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x37d44c: 0x4b0320bd  vmadday.x   $ACC, $vf4, $vf3y
    ctx->pc = 0x37d44cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x37d450: 0x4b0320be  vmaddaz.x   $ACC, $vf4, $vf3z
    ctx->pc = 0x37d450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x37d454: 0x4b03208b  vmaddw.x    $vf2, $vf4, $vf3w
    ctx->pc = 0x37d454u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37d458: 0x0  nop
    ctx->pc = 0x37d458u;
    // NOP
    // 0x37d45c: 0x0  nop
    ctx->pc = 0x37d45cu;
    // NOP
    // 0x37d460: 0x0  nop
    ctx->pc = 0x37d460u;
    // NOP
    // 0x37d464: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x37d464u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x37d468: 0x0  nop
    ctx->pc = 0x37d468u;
    // NOP
    // 0x37d46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d470: 0x3e00008  jr          $ra
    ctx->pc = 0x37D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D478u;
    // 0x37d478: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37d478u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37d47c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x37d47cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37d480: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x37d480u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x37d484: 0x4bc110ee  vopmsub.xyz $vf3, $vf2, $vf1
    ctx->pc = 0x37d484u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d488: 0x0  nop
    ctx->pc = 0x37d488u;
    // NOP
    // 0x37d48c: 0x0  nop
    ctx->pc = 0x37d48cu;
    // NOP
    // 0x37d490: 0x0  nop
    ctx->pc = 0x37d490u;
    // NOP
    // 0x37d494: 0x0  nop
    ctx->pc = 0x37d494u;
    // NOP
    // 0x37d498: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d498u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d49c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D49Cu;
        // 0x37d4a0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D4A4u;
    // 0x37d4a4: 0x0  nop
    ctx->pc = 0x37d4a4u;
    // NOP
    ctx->pc = 0x37d4a8u;
}
