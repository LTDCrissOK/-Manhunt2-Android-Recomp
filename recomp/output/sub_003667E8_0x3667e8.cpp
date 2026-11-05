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

// Function: sub_003667E8
// Address: 0x3667e8 - 0x366810
void sub_003667E8_0x3667e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003667E8_0x3667e8");
#endif

    switch (ctx->pc) {
        case 0x3667f8u: goto label_3667f8;
        default: break;
    }

    ctx->pc = 0x3667e8u;

    // 0x3667e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3667e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3667ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3667ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3667f0: 0xc0d9924  jal         func_366490
    ctx->pc = 0x3667F0u;
    SET_GPR_U32(ctx, 31, 0x3667F8u);
    ctx->pc = 0x366490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366490u, 0x3667F0u, 0x3667F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667F8u;
label_3667f8:
    // 0x3667f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3667f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3667fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3667FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667FCu;
        // 0x366800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3667FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366804u;
    // 0x366804: 0x0  nop
    ctx->pc = 0x366804u;
    // NOP
    // 0x366808: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36680c: 0x0  nop
    ctx->pc = 0x36680cu;
    // NOP
    ctx->pc = 0x366810u;
}
