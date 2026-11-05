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

// Function: sub_003A0C50
// Address: 0x3a0c50 - 0x3a0c60
void sub_003A0C50_0x3a0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0C50_0x3a0c50");
#endif

    ctx->pc = 0x3a0c50u;

    // 0x3a0c50: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C50u;
        // 0x3a0c54: 0x8c821958  lw          $v0, 0x1958($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6488)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0C58u;
    // 0x3a0c58: 0xac85195c  sw          $a1, 0x195C($a0)
    ctx->pc = 0x3a0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6492), GPR_U32(ctx, 5));
    // 0x3a0c5c: 0x0  nop
    ctx->pc = 0x3a0c5cu;
    // NOP
    ctx->pc = 0x3a0c60u;
}
