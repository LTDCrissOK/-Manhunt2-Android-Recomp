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

// Function: sub_001AD130
// Address: 0x1ad130 - 0x1ad150
void sub_001AD130_0x1ad130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD130_0x1ad130");
#endif

    ctx->pc = 0x1ad130u;

    // 0x1ad130: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1ad130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad134: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x1ad134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x1ad138: 0x246335c8  addiu       $v1, $v1, 0x35C8
    ctx->pc = 0x1ad138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13768));
    // 0x1ad13c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ad13cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ad140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad144: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ad144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad148: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD148u;
        // 0x1ad14c: 0xac850154  sw          $a1, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD150u;
}
