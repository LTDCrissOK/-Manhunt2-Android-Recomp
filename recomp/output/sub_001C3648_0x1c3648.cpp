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

// Function: sub_001C3648
// Address: 0x1c3648 - 0x1c3658
void sub_001C3648_0x1c3648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3648_0x1c3648");
#endif

    ctx->pc = 0x1c3648u;

    // 0x1c3648: 0x8c8304bc  lw          $v1, 0x4BC($a0)
    ctx->pc = 0x1c3648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1212)));
    // 0x1c364c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C364Cu;
        // 0x1c3650: 0x8c620fec  lw          $v0, 0xFEC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C364Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3654u;
    // 0x1c3654: 0x0  nop
    ctx->pc = 0x1c3654u;
    // NOP
    ctx->pc = 0x1c3658u;
}
