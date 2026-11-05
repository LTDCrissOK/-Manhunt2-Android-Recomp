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

// Function: sub_001AB9B0
// Address: 0x1ab9b0 - 0x1ab9e0
void sub_001AB9B0_0x1ab9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB9B0_0x1ab9b0");
#endif

    switch (ctx->pc) {
        case 0x1ab9d4u: goto label_1ab9d4;
        default: break;
    }

    ctx->pc = 0x1ab9b0u;

    // 0x1ab9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab9b4: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1ab9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab9bc: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1ab9c0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9C0u;
        // 0x1ab9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1AB9CCu;
            goto label_1ab9cc;
        }
    }
    ctx->pc = 0x1AB9C8u;
    // 0x1ab9c8: 0xac820190  sw          $v0, 0x190($a0)
    ctx->pc = 0x1ab9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 2));
label_1ab9cc:
    // 0x1ab9cc: 0xc06a844  jal         func_1AA110
    ctx->pc = 0x1AB9CCu;
    SET_GPR_U32(ctx, 31, 0x1AB9D4u);
    ctx->pc = 0x1AA110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA110u, 0x1AB9CCu, 0x1AB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9D4u;
label_1ab9d4:
    // 0x1ab9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9D8u;
        // 0x1ab9dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB9E0u;
}
