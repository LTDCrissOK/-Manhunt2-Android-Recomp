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

// Function: sub_00107790
// Address: 0x107790 - 0x1077b0
void sub_00107790_0x107790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107790_0x107790");
#endif

    switch (ctx->pc) {
        case 0x1077a0u: goto label_1077a0;
        default: break;
    }

    ctx->pc = 0x107790u;

    // 0x107790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107798: 0xc0f6c4c  jal         func_3DB130
    ctx->pc = 0x107798u;
    SET_GPR_U32(ctx, 31, 0x1077A0u);
    ctx->pc = 0x3DB130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB130u, 0x107798u, 0x1077A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077A0u;
label_1077a0:
    // 0x1077a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1077a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1077a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1077A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1077A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A4u;
        // 0x1077a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1077A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1077ACu;
    // 0x1077ac: 0x0  nop
    ctx->pc = 0x1077acu;
    // NOP
    ctx->pc = 0x1077b0u;
}
