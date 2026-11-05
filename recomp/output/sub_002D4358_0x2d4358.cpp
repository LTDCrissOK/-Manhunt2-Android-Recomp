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

// Function: sub_002D4358
// Address: 0x2d4358 - 0x2d4378
void sub_002D4358_0x2d4358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4358_0x2d4358");
#endif

    switch (ctx->pc) {
        case 0x2d4368u: goto label_2d4368;
        default: break;
    }

    ctx->pc = 0x2d4358u;

    // 0x2d4358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d435c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d435cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4360: 0xc0b50a8  jal         func_2D42A0
    ctx->pc = 0x2D4360u;
    SET_GPR_U32(ctx, 31, 0x2D4368u);
    ctx->pc = 0x2D42A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42A0u, 0x2D4360u, 0x2D4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4368u;
label_2d4368:
    // 0x2d4368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d436c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D436Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D436Cu;
        // 0x2d4370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D436Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4374u;
    // 0x2d4374: 0x0  nop
    ctx->pc = 0x2d4374u;
    // NOP
    ctx->pc = 0x2d4378u;
}
