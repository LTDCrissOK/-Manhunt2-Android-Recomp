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

// Function: sub_00295918
// Address: 0x295918 - 0x295938
void sub_00295918_0x295918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295918_0x295918");
#endif

    switch (ctx->pc) {
        case 0x295928u: goto label_295928;
        default: break;
    }

    ctx->pc = 0x295918u;

    // 0x295918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29591c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295920: 0xc0a2db6  jal         func_28B6D8
    ctx->pc = 0x295920u;
    SET_GPR_U32(ctx, 31, 0x295928u);
    ctx->pc = 0x28B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B6D8u, 0x295920u, 0x295928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295928u;
label_295928:
    // 0x295928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29592c: 0x3e00008  jr          $ra
    ctx->pc = 0x29592Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29592Cu;
        // 0x295930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29592Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295934u;
    // 0x295934: 0x0  nop
    ctx->pc = 0x295934u;
    // NOP
    ctx->pc = 0x295938u;
}
