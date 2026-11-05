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

// Function: sub_003A3B30
// Address: 0x3a3b30 - 0x3a3b40
void sub_003A3B30_0x3a3b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3B30_0x3a3b30");
#endif

    ctx->pc = 0x3a3b30u;

    // 0x3a3b30: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x3a3b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x3a3b34: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B34u;
        // 0x3a3b38: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B3Cu;
    // 0x3a3b3c: 0x0  nop
    ctx->pc = 0x3a3b3cu;
    // NOP
    ctx->pc = 0x3a3b40u;
}
