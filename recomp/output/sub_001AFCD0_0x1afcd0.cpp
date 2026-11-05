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

// Function: sub_001AFCD0
// Address: 0x1afcd0 - 0x1afcf8
void sub_001AFCD0_0x1afcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFCD0_0x1afcd0");
#endif

    switch (ctx->pc) {
        case 0x1afce8u: goto label_1afce8;
        default: break;
    }

    ctx->pc = 0x1afcd0u;

    // 0x1afcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afcd4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1afcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afcdc: 0x2406018f  addiu       $a2, $zero, 0x18F
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x1afce0: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFCE0u;
    SET_GPR_U32(ctx, 31, 0x1AFCE8u);
    ctx->pc = 0x1AFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFCE0u;
    // 0x1afce4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFCE0u, 0x1AFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFCE8u;
label_1afce8:
    // 0x1afce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afcec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCECu;
        // 0x1afcf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFCF4u;
    // 0x1afcf4: 0x0  nop
    ctx->pc = 0x1afcf4u;
    // NOP
    ctx->pc = 0x1afcf8u;
}
