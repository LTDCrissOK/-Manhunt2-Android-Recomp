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

// Function: sub_002D6BE0
// Address: 0x2d6be0 - 0x2d6bf0
void sub_002D6BE0_0x2d6be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6BE0_0x2d6be0");
#endif

    ctx->pc = 0x2d6be0u;

    // 0x2d6be0: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x2d6be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2d6be4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6BE4u;
        // 0x2d6be8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6BECu;
    // 0x2d6bec: 0x0  nop
    ctx->pc = 0x2d6becu;
    // NOP
    ctx->pc = 0x2d6bf0u;
}
