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

// Function: sub_001AD720
// Address: 0x1ad720 - 0x1ad740
void sub_001AD720_0x1ad720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD720_0x1ad720");
#endif

    ctx->pc = 0x1ad720u;

    // 0x1ad720: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ad720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad724: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ad728: 0x246370b8  addiu       $v1, $v1, 0x70B8
    ctx->pc = 0x1ad728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28856));
    // 0x1ad72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad734: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ad734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad738: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD738u;
        // 0x1ad73c: 0xac850154  sw          $a1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD740u;
}
