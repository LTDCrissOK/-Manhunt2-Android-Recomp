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

// Function: sub_0013E270
// Address: 0x13e270 - 0x13e288
void sub_0013E270_0x13e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E270_0x13e270");
#endif

    ctx->pc = 0x13e270u;

    // 0x13e270: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x13e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x13e274: 0x3e00008  jr          $ra
    ctx->pc = 0x13E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E274u;
        // 0x13e278: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E27Cu;
    // 0x13e27c: 0x0  nop
    ctx->pc = 0x13e27cu;
    // NOP
    // 0x13e280: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e284: 0x0  nop
    ctx->pc = 0x13e284u;
    // NOP
    ctx->pc = 0x13e288u;
}
