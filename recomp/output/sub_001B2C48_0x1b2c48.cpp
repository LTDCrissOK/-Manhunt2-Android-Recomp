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

// Function: sub_001B2C48
// Address: 0x1b2c48 - 0x1b2c68
void sub_001B2C48_0x1b2c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C48_0x1b2c48");
#endif

    ctx->pc = 0x1b2c48u;

    // 0x1b2c48: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1b2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1b2c4c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1b2c50: 0x2463bad8  addiu       $v1, $v1, -0x4528
    ctx->pc = 0x1b2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949592));
    // 0x1b2c54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b2c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2c5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C60u;
        // 0x1b2c64: 0xac85008c  sw          $a1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2C68u;
}
