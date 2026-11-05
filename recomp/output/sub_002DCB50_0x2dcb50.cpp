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

// Function: sub_002DCB50
// Address: 0x2dcb50 - 0x2dcb68
void sub_002DCB50_0x2dcb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCB50_0x2dcb50");
#endif

    ctx->pc = 0x2dcb50u;

    // 0x2dcb50: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x2dcb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2dcb54: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dcb58: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dcb58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcb5c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2dcb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dcb60: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCB68u;
}
