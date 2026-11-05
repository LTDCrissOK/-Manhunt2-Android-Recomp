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

// Function: sub_001B2C28
// Address: 0x1b2c28 - 0x1b2c48
void sub_001B2C28_0x1b2c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C28_0x1b2c28");
#endif

    ctx->pc = 0x1b2c28u;

    // 0x1b2c28: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1b2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1b2c2c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1b2c30: 0x2463ba50  addiu       $v1, $v1, -0x45B0
    ctx->pc = 0x1b2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949456));
    // 0x1b2c34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2c3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C40u;
        // 0x1b2c44: 0xac85008c  sw          $a1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C48u;
}
