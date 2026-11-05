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

// Function: sub_002B5958
// Address: 0x2b5958 - 0x2b5968
void sub_002B5958_0x2b5958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5958_0x2b5958");
#endif

    ctx->pc = 0x2b5958u;

    // 0x2b5958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b595c: 0xac8058f8  sw          $zero, 0x58F8($a0)
    ctx->pc = 0x2b595cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22776), GPR_U32(ctx, 0));
    // 0x2b5960: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5960u;
        // 0x2b5964: 0xac82591c  sw          $v0, 0x591C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5968u;
}
