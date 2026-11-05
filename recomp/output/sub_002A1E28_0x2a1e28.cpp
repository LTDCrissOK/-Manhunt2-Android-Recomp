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

// Function: sub_002A1E28
// Address: 0x2a1e28 - 0x2a1e38
void sub_002A1E28_0x2a1e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1E28_0x2a1e28");
#endif

    ctx->pc = 0x2a1e28u;

    // 0x2a1e28: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x2a1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x2a1e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1E2Cu;
        // 0x2a1e30: 0xac850024  sw          $a1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1E34u;
    // 0x2a1e34: 0x0  nop
    ctx->pc = 0x2a1e34u;
    // NOP
    ctx->pc = 0x2a1e38u;
}
