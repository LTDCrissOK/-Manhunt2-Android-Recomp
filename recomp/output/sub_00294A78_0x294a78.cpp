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

// Function: sub_00294A78
// Address: 0x294a78 - 0x294a90
void sub_00294A78_0x294a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A78_0x294a78");
#endif

    ctx->pc = 0x294a78u;

    // 0x294a78: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x294a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x294a7c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x294a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x294a80: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x294a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x294a84: 0x3e00008  jr          $ra
    ctx->pc = 0x294A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A84u;
        // 0x294a88: 0xac870024  sw          $a3, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294A8Cu;
    // 0x294a8c: 0x0  nop
    ctx->pc = 0x294a8cu;
    // NOP
    ctx->pc = 0x294a90u;
}
