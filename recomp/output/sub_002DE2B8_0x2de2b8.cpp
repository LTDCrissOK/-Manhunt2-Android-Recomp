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

// Function: sub_002DE2B8
// Address: 0x2de2b8 - 0x2de2f8
void sub_002DE2B8_0x2de2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2B8_0x2de2b8");
#endif

    ctx->pc = 0x2de2b8u;

    // 0x2de2b8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2de2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2de2bc: 0x8c860084  lw          $a2, 0x84($a0)
    ctx->pc = 0x2de2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2de2c0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2de2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2de2c4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2de2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de2c8: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2de2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2de2cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2de2ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de2d0: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x2de2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de2d4: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2de2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2de2d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2de2d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de2dc: 0xf8c10020  sqc2        $vf1, 0x20($a2)
    ctx->pc = 0x2de2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de2e0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2de2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2de2e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2de2e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2de2e8: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x2de2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2de2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE2F4u;
    // 0x2de2f4: 0x0  nop
    ctx->pc = 0x2de2f4u;
    // NOP
    ctx->pc = 0x2de2f8u;
}
