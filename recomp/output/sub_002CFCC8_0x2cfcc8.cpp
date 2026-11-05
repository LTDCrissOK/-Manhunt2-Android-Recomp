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

// Function: sub_002CFCC8
// Address: 0x2cfcc8 - 0x2cfcd8
void sub_002CFCC8_0x2cfcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFCC8_0x2cfcc8");
#endif

    ctx->pc = 0x2cfcc8u;

    // 0x2cfcc8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x2cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2cfccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCCCu;
        // 0x2cfcd0: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFCD4u;
    // 0x2cfcd4: 0x0  nop
    ctx->pc = 0x2cfcd4u;
    // NOP
    ctx->pc = 0x2cfcd8u;
}
