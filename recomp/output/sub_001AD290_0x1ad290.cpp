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

// Function: sub_001AD290
// Address: 0x1ad290 - 0x1ad2b0
void sub_001AD290_0x1ad290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD290_0x1ad290");
#endif

    ctx->pc = 0x1ad290u;

    // 0x1ad290: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ad290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad294: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ad294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ad298: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x1ad298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x1ad29c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad2a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ad2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2A8u;
        // 0x1ad2ac: 0xac850154  sw          $a1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD2B0u;
}
