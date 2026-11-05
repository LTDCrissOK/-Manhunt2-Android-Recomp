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

// Function: sub_003DB740
// Address: 0x3db740 - 0x3db760
void sub_003DB740_0x3db740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB740_0x3db740");
#endif

    switch (ctx->pc) {
        case 0x3db750u: goto label_3db750;
        default: break;
    }

    ctx->pc = 0x3db740u;

    // 0x3db740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db748: 0xc04237e  jal         func_108DF8
    ctx->pc = 0x3DB748u;
    SET_GPR_U32(ctx, 31, 0x3DB750u);
    ctx->pc = 0x108DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108DF8u, 0x3DB748u, 0x3DB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB750u;
label_3db750:
    // 0x3db750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db754: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB754u;
        // 0x3db758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB75Cu;
    // 0x3db75c: 0x0  nop
    ctx->pc = 0x3db75cu;
    // NOP
    ctx->pc = 0x3db760u;
}
