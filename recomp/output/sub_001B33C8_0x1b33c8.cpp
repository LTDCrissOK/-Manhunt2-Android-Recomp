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

// Function: sub_001B33C8
// Address: 0x1b33c8 - 0x1b33e0
void sub_001B33C8_0x1b33c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B33C8_0x1b33c8");
#endif

    ctx->pc = 0x1b33c8u;

    // 0x1b33c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b33cc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1b33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1b33d0: 0xa0820048  sb          $v0, 0x48($a0)
    ctx->pc = 0x1b33d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b33d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B33D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B33D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33D4u;
        // 0x1b33d8: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B33D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B33DCu;
    // 0x1b33dc: 0x0  nop
    ctx->pc = 0x1b33dcu;
    // NOP
    ctx->pc = 0x1b33e0u;
}
