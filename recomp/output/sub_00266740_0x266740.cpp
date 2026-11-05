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

// Function: sub_00266740
// Address: 0x266740 - 0x266758
void sub_00266740_0x266740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266740_0x266740");
#endif

    ctx->pc = 0x266740u;

    // 0x266740: 0x8c83010c  lw          $v1, 0x10C($a0)
    ctx->pc = 0x266740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x266744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266748: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x266748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x26674c: 0x3e00008  jr          $ra
    ctx->pc = 0x26674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26674Cu;
        // 0x266750: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26674Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266754u;
    // 0x266754: 0x0  nop
    ctx->pc = 0x266754u;
    // NOP
    ctx->pc = 0x266758u;
}
