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

// Function: sub_003713D8
// Address: 0x3713d8 - 0x3713e8
void sub_003713D8_0x3713d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003713D8_0x3713d8");
#endif

    ctx->pc = 0x3713d8u;

    // 0x3713d8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3713d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3713dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3713DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3713E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713DCu;
        // 0x3713e0: 0xac820044  sw          $v0, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3713DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3713E4u;
    // 0x3713e4: 0x0  nop
    ctx->pc = 0x3713e4u;
    // NOP
    ctx->pc = 0x3713e8u;
}
