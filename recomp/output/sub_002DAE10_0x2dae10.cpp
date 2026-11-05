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

// Function: sub_002DAE10
// Address: 0x2dae10 - 0x2dae18
void sub_002DAE10_0x2dae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAE10_0x2dae10");
#endif

    ctx->pc = 0x2dae10u;

    // 0x2dae10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAE10u;
        // 0x2dae14: 0xac806394  sw          $zero, 0x6394($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 25492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAE18u;
}
