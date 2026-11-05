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

// Function: sub_003E2738
// Address: 0x3e2738 - 0x3e2740
void sub_003E2738_0x3e2738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2738_0x3e2738");
#endif

    ctx->pc = 0x3e2738u;

    // 0x3e2738: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2738u;
        // 0x3e273c: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2740u;
}
