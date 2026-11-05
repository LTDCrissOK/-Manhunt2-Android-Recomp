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

// Function: sub_0016C290
// Address: 0x16c290 - 0x16c2d0
void sub_0016C290_0x16c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C290_0x16c290");
#endif

    ctx->pc = 0x16c290u;

    // 0x16c290: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x16c290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x16c294: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16c294u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16c298: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x16c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x16c29c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x16c29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16c2a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c2a4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x16c2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16c2a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c2ac: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16c2acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c2b0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x16c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x16c2b4: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x16c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x16c2b8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16c2bc: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x16c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x16c2c0: 0x8c8201a4  lw          $v0, 0x1A4($a0)
    ctx->pc = 0x16c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x16c2c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16c2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2C8u;
        // 0x16c2cc: 0xac8201a4  sw          $v0, 0x1A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C2D0u;
}
