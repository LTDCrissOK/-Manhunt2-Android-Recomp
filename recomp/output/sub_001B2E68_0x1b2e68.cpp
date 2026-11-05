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

// Function: sub_001B2E68
// Address: 0x1b2e68 - 0x1b2e88
void sub_001B2E68_0x1b2e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2E68_0x1b2e68");
#endif

    ctx->pc = 0x1b2e68u;

    // 0x1b2e68: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1b2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1b2e6c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1b2e70: 0x2463c3e0  addiu       $v1, $v1, -0x3C20
    ctx->pc = 0x1b2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951904));
    // 0x1b2e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2e7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E80u;
        // 0x1b2e84: 0xac85008c  sw          $a1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2E88u;
}
