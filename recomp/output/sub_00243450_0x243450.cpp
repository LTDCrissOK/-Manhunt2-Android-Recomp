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

// Function: sub_00243450
// Address: 0x243450 - 0x243470
void sub_00243450_0x243450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243450_0x243450");
#endif

    switch (ctx->pc) {
        case 0x243460u: goto label_243460;
        default: break;
    }

    ctx->pc = 0x243450u;

    // 0x243450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243458: 0xc09296c  jal         func_24A5B0
    ctx->pc = 0x243458u;
    SET_GPR_U32(ctx, 31, 0x243460u);
    ctx->pc = 0x24A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A5B0u, 0x243458u, 0x243460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243460u;
label_243460:
    // 0x243460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243464: 0x3e00008  jr          $ra
    ctx->pc = 0x243464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243464u;
        // 0x243468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24346Cu;
    // 0x24346c: 0x0  nop
    ctx->pc = 0x24346cu;
    // NOP
    ctx->pc = 0x243470u;
}
