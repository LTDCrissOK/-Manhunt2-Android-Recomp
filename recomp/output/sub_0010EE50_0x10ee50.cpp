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

// Function: sub_0010EE50
// Address: 0x10ee50 - 0x10ee78
void sub_0010EE50_0x10ee50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE50_0x10ee50");
#endif

    switch (ctx->pc) {
        case 0x10ee6cu: goto label_10ee6c;
        default: break;
    }

    ctx->pc = 0x10ee50u;

    // 0x10ee50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ee50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ee54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ee58: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x10ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10ee5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE5Cu;
    {
        const bool branch_taken_0x10ee5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE5Cu;
        // 0x10ee60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee5c) {
            ctx->pc = 0x10EE70u;
            goto label_10ee70;
        }
    }
    ctx->pc = 0x10EE64u;
    // 0x10ee64: 0xc04cace  jal         func_132B38
    ctx->pc = 0x10EE64u;
    SET_GPR_U32(ctx, 31, 0x10EE6Cu);
    ctx->pc = 0x132B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132B38u, 0x10EE64u, 0x10EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE6Cu;
label_10ee6c:
    // 0x10ee6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ee6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ee70:
    // 0x10ee70: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE70u;
        // 0x10ee74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE78u;
}
