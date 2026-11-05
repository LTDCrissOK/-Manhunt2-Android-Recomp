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

// Function: sub_003CC080
// Address: 0x3cc080 - 0x3cc0a8
void sub_003CC080_0x3cc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC080_0x3cc080");
#endif

    switch (ctx->pc) {
        case 0x3cc098u: goto label_3cc098;
        default: break;
    }

    ctx->pc = 0x3cc080u;

    // 0x3cc080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cc084: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3cc084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc088: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC088u;
    {
        const bool branch_taken_0x3cc088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC088u;
        // 0x3cc08c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc088) {
            ctx->pc = 0x3CC098u;
            goto label_3cc098;
        }
    }
    ctx->pc = 0x3CC090u;
    // 0x3cc090: 0xc0f2c12  jal         func_3CB048
    ctx->pc = 0x3CC090u;
    SET_GPR_U32(ctx, 31, 0x3CC098u);
    ctx->pc = 0x3CB048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB048u, 0x3CC090u, 0x3CC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC098u;
label_3cc098:
    // 0x3cc098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0A0u;
        // 0x3cc0a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC0A8u;
}
