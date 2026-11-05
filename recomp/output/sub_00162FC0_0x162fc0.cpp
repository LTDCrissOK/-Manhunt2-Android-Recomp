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

// Function: sub_00162FC0
// Address: 0x162fc0 - 0x162fd0
void sub_00162FC0_0x162fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162FC0_0x162fc0");
#endif

    ctx->pc = 0x162fc0u;

    // 0x162fc0: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x162fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x162fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x162FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FC4u;
        // 0x162fc8: 0xac800334  sw          $zero, 0x334($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162FCCu;
    // 0x162fcc: 0x0  nop
    ctx->pc = 0x162fccu;
    // NOP
    ctx->pc = 0x162fd0u;
}
