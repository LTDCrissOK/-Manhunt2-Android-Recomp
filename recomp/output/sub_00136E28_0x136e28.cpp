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

// Function: sub_00136E28
// Address: 0x136e28 - 0x136e30
void sub_00136E28_0x136e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E28_0x136e28");
#endif

    ctx->pc = 0x136e28u;

    // 0x136e28: 0x3e00008  jr          $ra
    ctx->pc = 0x136E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E28u;
        // 0x136e2c: 0xac8504b8  sw          $a1, 0x4B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136E30u;
}
