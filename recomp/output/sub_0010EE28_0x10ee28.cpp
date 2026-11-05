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

// Function: sub_0010EE28
// Address: 0x10ee28 - 0x10ee50
void sub_0010EE28_0x10ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE28_0x10ee28");
#endif

    switch (ctx->pc) {
        case 0x10ee44u: goto label_10ee44;
        default: break;
    }

    ctx->pc = 0x10ee28u;

    // 0x10ee28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ee2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ee2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ee30: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x10ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10ee34: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE34u;
    {
        const bool branch_taken_0x10ee34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE34u;
        // 0x10ee38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee34) {
            ctx->pc = 0x10EE48u;
            goto label_10ee48;
        }
    }
    ctx->pc = 0x10EE3Cu;
    // 0x10ee3c: 0xc04cab6  jal         func_132AD8
    ctx->pc = 0x10EE3Cu;
    SET_GPR_U32(ctx, 31, 0x10EE44u);
    ctx->pc = 0x132AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132AD8u, 0x10EE3Cu, 0x10EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE44u;
label_10ee44:
    // 0x10ee44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ee44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ee48:
    // 0x10ee48: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE48u;
        // 0x10ee4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE50u;
}
