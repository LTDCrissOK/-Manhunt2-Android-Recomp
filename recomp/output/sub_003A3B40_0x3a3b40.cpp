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

// Function: sub_003A3B40
// Address: 0x3a3b40 - 0x3a3b50
void sub_003A3B40_0x3a3b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3B40_0x3a3b40");
#endif

    ctx->pc = 0x3a3b40u;

    // 0x3a3b40: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x3a3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x3a3b44: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B44u;
        // 0x3a3b48: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B4Cu;
    // 0x3a3b4c: 0x0  nop
    ctx->pc = 0x3a3b4cu;
    // NOP
    ctx->pc = 0x3a3b50u;
}
