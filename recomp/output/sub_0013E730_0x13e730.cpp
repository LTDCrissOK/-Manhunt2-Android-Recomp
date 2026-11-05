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

// Function: sub_0013E730
// Address: 0x13e730 - 0x13e740
void sub_0013E730_0x13e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E730_0x13e730");
#endif

    ctx->pc = 0x13e730u;

    // 0x13e730: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x13e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x13e734: 0x3e00008  jr          $ra
    ctx->pc = 0x13E734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E734u;
        // 0x13e738: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E73Cu;
    // 0x13e73c: 0x0  nop
    ctx->pc = 0x13e73cu;
    // NOP
    ctx->pc = 0x13e740u;
}
