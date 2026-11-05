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

// Function: sub_00344C78
// Address: 0x344c78 - 0x344cc8
void sub_00344C78_0x344c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344C78_0x344c78");
#endif

    ctx->pc = 0x344c78u;

    // 0x344c78: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x344c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x344c7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344C7Cu;
    {
        const bool branch_taken_0x344c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C7Cu;
        // 0x344c80: 0x24820050  addiu       $v0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c7c) {
            ctx->pc = 0x344CB4u;
            goto label_344cb4;
        }
    }
    ctx->pc = 0x344C84u;
    // 0x344c84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344c84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344c88: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x344c88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344c8c: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x344c8cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x344c90: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x344c90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x344c94: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x344c94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x344c98: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x344c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344c9c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x344c9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344ca0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x344ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x344ca4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x344ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344ca8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x344ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344cac: 0x3e00008  jr          $ra
    ctx->pc = 0x344CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344CB4u;
label_344cb4:
    // 0x344cb4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344cb8: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x344cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x344CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344CC4u;
    // 0x344cc4: 0x0  nop
    ctx->pc = 0x344cc4u;
    // NOP
    ctx->pc = 0x344cc8u;
}
