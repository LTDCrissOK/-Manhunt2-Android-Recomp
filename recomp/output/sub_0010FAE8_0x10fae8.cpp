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

// Function: sub_0010FAE8
// Address: 0x10fae8 - 0x10fb10
void sub_0010FAE8_0x10fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FAE8_0x10fae8");
#endif

    switch (ctx->pc) {
        case 0x10fb04u: goto label_10fb04;
        default: break;
    }

    ctx->pc = 0x10fae8u;

    // 0x10fae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10faec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10faf0: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10faf4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FAF4u;
    {
        const bool branch_taken_0x10faf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAF4u;
        // 0x10faf8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10faf4) {
            ctx->pc = 0x10FB08u;
            goto label_10fb08;
        }
    }
    ctx->pc = 0x10FAFCu;
    // 0x10fafc: 0xc04cb6c  jal         func_132DB0
    ctx->pc = 0x10FAFCu;
    SET_GPR_U32(ctx, 31, 0x10FB04u);
    ctx->pc = 0x132DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DB0u, 0x10FAFCu, 0x10FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB04u;
label_10fb04:
    // 0x10fb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fb08:
    // 0x10fb08: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB08u;
        // 0x10fb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB10u;
}
