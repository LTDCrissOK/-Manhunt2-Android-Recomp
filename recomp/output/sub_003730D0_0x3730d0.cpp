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

// Function: sub_003730D0
// Address: 0x3730d0 - 0x3730e0
void sub_003730D0_0x3730d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003730D0_0x3730d0");
#endif

    ctx->pc = 0x3730d0u;

    // 0x3730d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3730d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3730d4: 0x8c43ccc0  lw          $v1, -0x3340($v0)
    ctx->pc = 0x3730d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x3730d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3730D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3730D8u;
        // 0x3730dc: 0x8462004c  lh          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3730D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730E0u;
}
