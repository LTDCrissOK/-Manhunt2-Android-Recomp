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

// Function: sub_001B2CA8
// Address: 0x1b2ca8 - 0x1b2cc8
void sub_001B2CA8_0x1b2ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2CA8_0x1b2ca8");
#endif

    ctx->pc = 0x1b2ca8u;

    // 0x1b2ca8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1b2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1b2cac: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1b2cb0: 0x2463bc70  addiu       $v1, $v1, -0x4390
    ctx->pc = 0x1b2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950000));
    // 0x1b2cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2cbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CC0u;
        // 0x1b2cc4: 0xac85008c  sw          $a1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2CC8u;
}
