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

// Function: sub_00107630
// Address: 0x107630 - 0x107650
void sub_00107630_0x107630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107630_0x107630");
#endif

    switch (ctx->pc) {
        case 0x107640u: goto label_107640;
        default: break;
    }

    ctx->pc = 0x107630u;

    // 0x107630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107638: 0xc0f6bde  jal         func_3DAF78
    ctx->pc = 0x107638u;
    SET_GPR_U32(ctx, 31, 0x107640u);
    ctx->pc = 0x3DAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAF78u, 0x107638u, 0x107640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107640u;
label_107640:
    // 0x107640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107644: 0x3e00008  jr          $ra
    ctx->pc = 0x107644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107644u;
        // 0x107648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10764Cu;
    // 0x10764c: 0x0  nop
    ctx->pc = 0x10764cu;
    // NOP
    ctx->pc = 0x107650u;
}
