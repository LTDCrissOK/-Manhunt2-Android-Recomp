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

// Function: sub_003DE0A0
// Address: 0x3de0a0 - 0x3de0b8
void sub_003DE0A0_0x3de0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE0A0_0x3de0a0");
#endif

    ctx->pc = 0x3de0a0u;

    // 0x3de0a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3de0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de0a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3de0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3de0a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3de0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3de0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0ACu;
        // 0x3de0b0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE0B4u;
    // 0x3de0b4: 0x0  nop
    ctx->pc = 0x3de0b4u;
    // NOP
    ctx->pc = 0x3de0b8u;
}
