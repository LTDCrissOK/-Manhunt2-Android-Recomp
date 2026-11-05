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

// Function: sub_00288980
// Address: 0x288980 - 0x2889a0
void sub_00288980_0x288980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288980_0x288980");
#endif

    switch (ctx->pc) {
        case 0x288990u: goto label_288990;
        default: break;
    }

    ctx->pc = 0x288980u;

    // 0x288980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x288980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x288984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288988: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x288988u;
    SET_GPR_U32(ctx, 31, 0x288990u);
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x288988u, 0x288990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288990u;
label_288990:
    // 0x288990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288994: 0x3e00008  jr          $ra
    ctx->pc = 0x288994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288994u;
        // 0x288998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28899Cu;
    // 0x28899c: 0x0  nop
    ctx->pc = 0x28899cu;
    // NOP
    ctx->pc = 0x2889a0u;
}
