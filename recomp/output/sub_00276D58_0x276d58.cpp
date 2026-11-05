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

// Function: sub_00276D58
// Address: 0x276d58 - 0x276d78
void sub_00276D58_0x276d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276D58_0x276d58");
#endif

    switch (ctx->pc) {
        case 0x276d68u: goto label_276d68;
        default: break;
    }

    ctx->pc = 0x276d58u;

    // 0x276d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276d5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276d60: 0xc084048  jal         func_210120
    ctx->pc = 0x276D60u;
    SET_GPR_U32(ctx, 31, 0x276D68u);
    ctx->pc = 0x210120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210120u, 0x276D60u, 0x276D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D68u;
label_276d68:
    // 0x276d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x276D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D6Cu;
        // 0x276d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276D74u;
    // 0x276d74: 0x0  nop
    ctx->pc = 0x276d74u;
    // NOP
    ctx->pc = 0x276d78u;
}
