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

// Function: sub_001AADE8
// Address: 0x1aade8 - 0x1aae08
void sub_001AADE8_0x1aade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AADE8_0x1aade8");
#endif

    switch (ctx->pc) {
        case 0x1aadf8u: goto label_1aadf8;
        default: break;
    }

    ctx->pc = 0x1aade8u;

    // 0x1aade8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aade8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aadec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aadecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aadf0: 0xc092db0  jal         func_24B6C0
    ctx->pc = 0x1AADF0u;
    SET_GPR_U32(ctx, 31, 0x1AADF8u);
    ctx->pc = 0x24B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B6C0u, 0x1AADF0u, 0x1AADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADF8u;
label_1aadf8:
    // 0x1aadf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aadf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aadfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AADFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADFCu;
        // 0x1aae00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AADFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAE04u;
    // 0x1aae04: 0x0  nop
    ctx->pc = 0x1aae04u;
    // NOP
    ctx->pc = 0x1aae08u;
}
