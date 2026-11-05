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

// Function: sub_001AC070
// Address: 0x1ac070 - 0x1ac090
void sub_001AC070_0x1ac070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC070_0x1ac070");
#endif

    switch (ctx->pc) {
        case 0x1ac080u: goto label_1ac080;
        default: break;
    }

    ctx->pc = 0x1ac070u;

    // 0x1ac070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac078: 0xc092736  jal         func_249CD8
    ctx->pc = 0x1AC078u;
    SET_GPR_U32(ctx, 31, 0x1AC080u);
    ctx->pc = 0x249CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249CD8u, 0x1AC078u, 0x1AC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC080u;
label_1ac080:
    // 0x1ac080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac084: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC084u;
        // 0x1ac088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC08Cu;
    // 0x1ac08c: 0x0  nop
    ctx->pc = 0x1ac08cu;
    // NOP
    ctx->pc = 0x1ac090u;
}
