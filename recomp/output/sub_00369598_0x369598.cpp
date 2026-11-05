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

// Function: sub_00369598
// Address: 0x369598 - 0x3695c0
void sub_00369598_0x369598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369598_0x369598");
#endif

    switch (ctx->pc) {
        case 0x3695b4u: goto label_3695b4;
        default: break;
    }

    ctx->pc = 0x369598u;

    // 0x369598: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x369598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36959c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36959cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3695a0: 0x8c44ca74  lw          $a0, -0x358C($v0)
    ctx->pc = 0x3695a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BCA74u));
    // 0x3695a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3695A4u;
    {
        const bool branch_taken_0x3695a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3695A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695A4u;
        // 0x3695a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3695a4) {
            ctx->pc = 0x3695B4u;
            goto label_3695b4;
        }
    }
    ctx->pc = 0x3695ACu;
    // 0x3695ac: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3695ACu;
    SET_GPR_U32(ctx, 31, 0x3695B4u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3695ACu, 0x3695B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695B4u;
label_3695b4:
    // 0x3695b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3695b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3695b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3695B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3695BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695B8u;
        // 0x3695bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3695B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3695C0u;
}
