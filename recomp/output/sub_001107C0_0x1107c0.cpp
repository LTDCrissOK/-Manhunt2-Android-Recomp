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

// Function: sub_001107C0
// Address: 0x1107c0 - 0x1107e8
void sub_001107C0_0x1107c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001107C0_0x1107c0");
#endif

    switch (ctx->pc) {
        case 0x1107dcu: goto label_1107dc;
        default: break;
    }

    ctx->pc = 0x1107c0u;

    // 0x1107c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1107c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1107c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1107c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1107c8: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x1107c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1107cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1107CCu;
    {
        const bool branch_taken_0x1107cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107CCu;
        // 0x1107d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107cc) {
            ctx->pc = 0x1107E0u;
            goto label_1107e0;
        }
    }
    ctx->pc = 0x1107D4u;
    // 0x1107d4: 0xc05df04  jal         func_177C10
    ctx->pc = 0x1107D4u;
    SET_GPR_U32(ctx, 31, 0x1107DCu);
    ctx->pc = 0x177C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177C10u, 0x1107D4u, 0x1107DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1107DCu;
label_1107dc:
    // 0x1107dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1107dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1107e0:
    // 0x1107e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1107E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107E0u;
        // 0x1107e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1107E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1107E8u;
}
