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

// Function: sub_0035D8E0
// Address: 0x35d8e0 - 0x35d8f8
void sub_0035D8E0_0x35d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D8E0_0x35d8e0");
#endif

    ctx->pc = 0x35d8e0u;

    // 0x35d8e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d8e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d8e8: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x35d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x35d8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x35D8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D8ECu;
        // 0x35d8f0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D8F4u;
    // 0x35d8f4: 0x0  nop
    ctx->pc = 0x35d8f4u;
    // NOP
    ctx->pc = 0x35d8f8u;
}
