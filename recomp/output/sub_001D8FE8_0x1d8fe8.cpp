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

// Function: sub_001D8FE8
// Address: 0x1d8fe8 - 0x1d9028
void sub_001D8FE8_0x1d8fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8FE8_0x1d8fe8");
#endif

    switch (ctx->pc) {
        case 0x1d8ff8u: goto label_1d8ff8;
        case 0x1d9000u: goto label_1d9000;
        case 0x1d9008u: goto label_1d9008;
        case 0x1d9010u: goto label_1d9010;
        case 0x1d9018u: goto label_1d9018;
        default: break;
    }

    ctx->pc = 0x1d8fe8u;

    // 0x1d8fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8ff0: 0xc0793ae  jal         func_1E4EB8
    ctx->pc = 0x1D8FF0u;
    SET_GPR_U32(ctx, 31, 0x1D8FF8u);
    ctx->pc = 0x1E4EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4EB8u, 0x1D8FF0u, 0x1D8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FF8u;
label_1d8ff8:
    // 0x1d8ff8: 0xc079648  jal         func_1E5920
    ctx->pc = 0x1D8FF8u;
    SET_GPR_U32(ctx, 31, 0x1D9000u);
    ctx->pc = 0x1E5920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5920u, 0x1D8FF8u, 0x1D9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9000u;
label_1d9000:
    // 0x1d9000: 0xc079da8  jal         func_1E76A0
    ctx->pc = 0x1D9000u;
    SET_GPR_U32(ctx, 31, 0x1D9008u);
    ctx->pc = 0x1E76A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E76A0u, 0x1D9000u, 0x1D9008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9008u;
label_1d9008:
    // 0x1d9008: 0xc07a20a  jal         func_1E8828
    ctx->pc = 0x1D9008u;
    SET_GPR_U32(ctx, 31, 0x1D9010u);
    ctx->pc = 0x1E8828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8828u, 0x1D9008u, 0x1D9010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9010u;
label_1d9010:
    // 0x1d9010: 0xc07aafc  jal         func_1EABF0
    ctx->pc = 0x1D9010u;
    SET_GPR_U32(ctx, 31, 0x1D9018u);
    ctx->pc = 0x1EABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EABF0u, 0x1D9010u, 0x1D9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9018u;
label_1d9018:
    // 0x1d9018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d901c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D901Cu;
        // 0x1d9020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9024u;
    // 0x1d9024: 0x0  nop
    ctx->pc = 0x1d9024u;
    // NOP
    ctx->pc = 0x1d9028u;
}
