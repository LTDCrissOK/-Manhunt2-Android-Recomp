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

// Function: sub_002A8350
// Address: 0x2a8350 - 0x2a8360
void sub_002A8350_0x2a8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8350_0x2a8350");
#endif

    ctx->pc = 0x2a8350u;

    // 0x2a8350: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x2a8350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x2a8354: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8354u;
        // 0x2a8358: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A835Cu;
    // 0x2a835c: 0x0  nop
    ctx->pc = 0x2a835cu;
    // NOP
    ctx->pc = 0x2a8360u;
}
