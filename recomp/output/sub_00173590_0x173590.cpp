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

// Function: sub_00173590
// Address: 0x173590 - 0x1735a0
void sub_00173590_0x173590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173590_0x173590");
#endif

    ctx->pc = 0x173590u;

    // 0x173590: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x173590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x173594: 0x3e00008  jr          $ra
    ctx->pc = 0x173594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173594u;
        // 0x173598: 0xac8000b0  sw          $zero, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17359Cu;
    // 0x17359c: 0x0  nop
    ctx->pc = 0x17359cu;
    // NOP
    ctx->pc = 0x1735a0u;
}
