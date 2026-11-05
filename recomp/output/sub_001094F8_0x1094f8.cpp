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

// Function: sub_001094F8
// Address: 0x1094f8 - 0x109518
void sub_001094F8_0x1094f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001094F8_0x1094f8");
#endif

    switch (ctx->pc) {
        case 0x109508u: goto label_109508;
        default: break;
    }

    ctx->pc = 0x1094f8u;

    // 0x1094f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1094f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1094fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1094fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109500: 0xc0432a8  jal         func_10CAA0
    ctx->pc = 0x109500u;
    SET_GPR_U32(ctx, 31, 0x109508u);
    ctx->pc = 0x10CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAA0u, 0x109500u, 0x109508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109508u;
label_109508:
    // 0x109508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10950c: 0x3e00008  jr          $ra
    ctx->pc = 0x10950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10950Cu;
        // 0x109510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109514u;
    // 0x109514: 0x0  nop
    ctx->pc = 0x109514u;
    // NOP
    ctx->pc = 0x109518u;
}
