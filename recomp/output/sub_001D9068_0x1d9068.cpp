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

// Function: sub_001D9068
// Address: 0x1d9068 - 0x1d9090
void sub_001D9068_0x1d9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9068_0x1d9068");
#endif

    switch (ctx->pc) {
        case 0x1d9078u: goto label_1d9078;
        case 0x1d9080u: goto label_1d9080;
        default: break;
    }

    ctx->pc = 0x1d9068u;

    // 0x1d9068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d906c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9070: 0xc079448  jal         func_1E5120
    ctx->pc = 0x1D9070u;
    SET_GPR_U32(ctx, 31, 0x1D9078u);
    ctx->pc = 0x1E5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5120u, 0x1D9070u, 0x1D9078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9078u;
label_1d9078:
    // 0x1d9078: 0xc0796b0  jal         func_1E5AC0
    ctx->pc = 0x1D9078u;
    SET_GPR_U32(ctx, 31, 0x1D9080u);
    ctx->pc = 0x1E5AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AC0u, 0x1D9078u, 0x1D9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9080u;
label_1d9080:
    // 0x1d9080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9084: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9084u;
        // 0x1d9088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D908Cu;
    // 0x1d908c: 0x0  nop
    ctx->pc = 0x1d908cu;
    // NOP
    ctx->pc = 0x1d9090u;
}
