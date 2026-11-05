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

// Function: sub_00243430
// Address: 0x243430 - 0x243450
void sub_00243430_0x243430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243430_0x243430");
#endif

    switch (ctx->pc) {
        case 0x243440u: goto label_243440;
        default: break;
    }

    ctx->pc = 0x243430u;

    // 0x243430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243438: 0xc0929dc  jal         func_24A770
    ctx->pc = 0x243438u;
    SET_GPR_U32(ctx, 31, 0x243440u);
    ctx->pc = 0x24A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A770u, 0x243438u, 0x243440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243440u;
label_243440:
    // 0x243440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243444: 0x3e00008  jr          $ra
    ctx->pc = 0x243444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243444u;
        // 0x243448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24344Cu;
    // 0x24344c: 0x0  nop
    ctx->pc = 0x24344cu;
    // NOP
    ctx->pc = 0x243450u;
}
