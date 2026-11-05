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

// Function: sub_0010EE00
// Address: 0x10ee00 - 0x10ee28
void sub_0010EE00_0x10ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EE00_0x10ee00");
#endif

    switch (ctx->pc) {
        case 0x10ee1cu: goto label_10ee1c;
        default: break;
    }

    ctx->pc = 0x10ee00u;

    // 0x10ee00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ee04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ee08: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x10ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10ee0c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EE0Cu;
    {
        const bool branch_taken_0x10ee0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE0Cu;
        // 0x10ee10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee0c) {
            ctx->pc = 0x10EE20u;
            goto label_10ee20;
        }
    }
    ctx->pc = 0x10EE14u;
    // 0x10ee14: 0xc04ca9c  jal         func_132A70
    ctx->pc = 0x10EE14u;
    SET_GPR_U32(ctx, 31, 0x10EE1Cu);
    ctx->pc = 0x132A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A70u, 0x10EE14u, 0x10EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EE1Cu;
label_10ee1c:
    // 0x10ee1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ee1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10ee20:
    // 0x10ee20: 0x3e00008  jr          $ra
    ctx->pc = 0x10EE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EE20u;
        // 0x10ee24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EE28u;
}
