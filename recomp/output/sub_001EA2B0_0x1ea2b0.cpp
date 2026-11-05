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

// Function: sub_001EA2B0
// Address: 0x1ea2b0 - 0x1ea2c8
void sub_001EA2B0_0x1ea2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA2B0_0x1ea2b0");
#endif

    ctx->pc = 0x1ea2b0u;

    // 0x1ea2b0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1ea2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1ea2b4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1ea2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1ea2b8: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1ea2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1ea2bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ea2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ea2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2C0u;
        // 0x1ea2c4: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA2C8u;
}
