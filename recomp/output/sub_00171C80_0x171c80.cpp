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

// Function: sub_00171C80
// Address: 0x171c80 - 0x171ca0
void sub_00171C80_0x171c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171C80_0x171c80");
#endif

    switch (ctx->pc) {
        case 0x171c90u: goto label_171c90;
        default: break;
    }

    ctx->pc = 0x171c80u;

    // 0x171c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171c88: 0xc05cda0  jal         func_173680
    ctx->pc = 0x171C88u;
    SET_GPR_U32(ctx, 31, 0x171C90u);
    ctx->pc = 0x173680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173680u, 0x171C88u, 0x171C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C90u;
label_171c90:
    // 0x171c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c94: 0x3e00008  jr          $ra
    ctx->pc = 0x171C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C94u;
        // 0x171c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C9Cu;
    // 0x171c9c: 0x0  nop
    ctx->pc = 0x171c9cu;
    // NOP
    ctx->pc = 0x171ca0u;
}
