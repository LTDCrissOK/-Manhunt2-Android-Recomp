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

// Function: sub_00135750
// Address: 0x135750 - 0x135760
void sub_00135750_0x135750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135750_0x135750");
#endif

    ctx->pc = 0x135750u;

    // 0x135750: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x135750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135754: 0xac40024c  sw          $zero, 0x24C($v0)
    ctx->pc = 0x135754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 588), GPR_U32(ctx, 0));
    // 0x135758: 0x3e00008  jr          $ra
    ctx->pc = 0x135758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135758u;
        // 0x13575c: 0xac400248  sw          $zero, 0x248($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135760u;
}
