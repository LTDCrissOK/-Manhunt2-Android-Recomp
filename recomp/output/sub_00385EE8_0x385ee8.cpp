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

// Function: sub_00385EE8
// Address: 0x385ee8 - 0x385ef8
void sub_00385EE8_0x385ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385EE8_0x385ee8");
#endif

    ctx->pc = 0x385ee8u;

    // 0x385ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x385EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EE8u;
        // 0x385eec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385EF0u;
    // 0x385ef0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x385ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x385ef4: 0x0  nop
    ctx->pc = 0x385ef4u;
    // NOP
    ctx->pc = 0x385ef8u;
}
