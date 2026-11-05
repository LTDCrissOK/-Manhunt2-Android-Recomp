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

// Function: sub_0012CFC0
// Address: 0x12cfc0 - 0x12cfe0
void sub_0012CFC0_0x12cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CFC0_0x12cfc0");
#endif

    switch (ctx->pc) {
        case 0x12cfd0u: goto label_12cfd0;
        default: break;
    }

    ctx->pc = 0x12cfc0u;

    // 0x12cfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12cfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cfc8: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x12CFC8u;
    SET_GPR_U32(ctx, 31, 0x12CFD0u);
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x12CFC8u, 0x12CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFD0u;
label_12cfd0:
    // 0x12cfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x12CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFD4u;
        // 0x12cfd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CFDCu;
    // 0x12cfdc: 0x0  nop
    ctx->pc = 0x12cfdcu;
    // NOP
    ctx->pc = 0x12cfe0u;
}
