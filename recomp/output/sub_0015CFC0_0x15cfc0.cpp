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

// Function: sub_0015CFC0
// Address: 0x15cfc0 - 0x15cfe0
void sub_0015CFC0_0x15cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CFC0_0x15cfc0");
#endif

    switch (ctx->pc) {
        case 0x15cfd0u: goto label_15cfd0;
        default: break;
    }

    ctx->pc = 0x15cfc0u;

    // 0x15cfc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15cfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15cfc8: 0xc0573a2  jal         func_15CE88
    ctx->pc = 0x15CFC8u;
    SET_GPR_U32(ctx, 31, 0x15CFD0u);
    ctx->pc = 0x15CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFC8u;
    // 0x15cfcc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CE88u, 0x15CFC8u, 0x15CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFD0u;
label_15cfd0:
    // 0x15cfd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15cfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFD4u;
        // 0x15cfd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CFDCu;
    // 0x15cfdc: 0x0  nop
    ctx->pc = 0x15cfdcu;
    // NOP
    ctx->pc = 0x15cfe0u;
}
