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

// Function: sub_002EF828
// Address: 0x2ef828 - 0x2ef838
void sub_002EF828_0x2ef828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF828_0x2ef828");
#endif

    ctx->pc = 0x2ef828u;

    // 0x2ef828: 0xac801444  sw          $zero, 0x1444($a0)
    ctx->pc = 0x2ef828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5188), GPR_U32(ctx, 0));
    // 0x2ef82c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF82Cu;
        // 0x2ef830: 0xa0801440  sb          $zero, 0x1440($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5184), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF834u;
    // 0x2ef834: 0x0  nop
    ctx->pc = 0x2ef834u;
    // NOP
    ctx->pc = 0x2ef838u;
}
