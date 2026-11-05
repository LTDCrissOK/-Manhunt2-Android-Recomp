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

// Function: sub_0010FA28
// Address: 0x10fa28 - 0x10fa38
void sub_0010FA28_0x10fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA28_0x10fa28");
#endif

    ctx->pc = 0x10fa28u;

    // 0x10fa28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10fa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA2Cu;
        // 0x10fa30: 0xac8201fc  sw          $v0, 0x1FC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA34u;
    // 0x10fa34: 0x0  nop
    ctx->pc = 0x10fa34u;
    // NOP
    ctx->pc = 0x10fa38u;
}
