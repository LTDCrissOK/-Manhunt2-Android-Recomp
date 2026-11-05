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

// Function: sub_00280F70
// Address: 0x280f70 - 0x280f80
void sub_00280F70_0x280f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F70_0x280f70");
#endif

    ctx->pc = 0x280f70u;

    // 0x280f70: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x280f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280f74: 0x3e00008  jr          $ra
    ctx->pc = 0x280F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F74u;
        // 0x280f78: 0xac44cf94  sw          $a0, -0x306C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954900), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F7Cu;
    // 0x280f7c: 0x0  nop
    ctx->pc = 0x280f7cu;
    // NOP
    ctx->pc = 0x280f80u;
}
