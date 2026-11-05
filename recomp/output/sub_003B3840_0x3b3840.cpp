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

// Function: sub_003B3840
// Address: 0x3b3840 - 0x3b3858
void sub_003B3840_0x3b3840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3840_0x3b3840");
#endif

    ctx->pc = 0x3b3840u;

    // 0x3b3840: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b3840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b3844: 0x246368f8  addiu       $v1, $v1, 0x68F8
    ctx->pc = 0x3b3844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26872));
    // 0x3b3848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b3848u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4268F8u));
    // 0x3b384c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b3850: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3850u;
        // 0x3b3854: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3858u;
}
