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

// Function: sub_001B36D0
// Address: 0x1b36d0 - 0x1b36e0
void sub_001B36D0_0x1b36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B36D0_0x1b36d0");
#endif

    ctx->pc = 0x1b36d0u;

    // 0x1b36d0: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x1b36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x1b36d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B36D4u;
        // 0x1b36d8: 0xac8000b0  sw          $zero, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B36D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B36DCu;
    // 0x1b36dc: 0x0  nop
    ctx->pc = 0x1b36dcu;
    // NOP
    ctx->pc = 0x1b36e0u;
}
