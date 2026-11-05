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

// Function: sub_003730F0
// Address: 0x3730f0 - 0x373100
void sub_003730F0_0x3730f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003730F0_0x3730f0");
#endif

    ctx->pc = 0x3730f0u;

    // 0x3730f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3730f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3730f4: 0x8c43ccc0  lw          $v1, -0x3340($v0)
    ctx->pc = 0x3730f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x3730f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3730F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730F8u;
        // 0x3730fc: 0x8462005c  lh          $v0, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373100u;
}
