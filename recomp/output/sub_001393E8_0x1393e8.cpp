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

// Function: sub_001393E8
// Address: 0x1393e8 - 0x139408
void sub_001393E8_0x1393e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001393E8_0x1393e8");
#endif

    switch (ctx->pc) {
        case 0x1393f8u: goto label_1393f8;
        default: break;
    }

    ctx->pc = 0x1393e8u;

    // 0x1393e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1393e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1393ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1393ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1393f0: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x1393F0u;
    SET_GPR_U32(ctx, 31, 0x1393F8u);
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x1393F0u, 0x1393F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1393F8u;
label_1393f8:
    // 0x1393f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1393f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1393fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1393FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1393FCu;
        // 0x139400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1393FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139404u;
    // 0x139404: 0x0  nop
    ctx->pc = 0x139404u;
    // NOP
    ctx->pc = 0x139408u;
}
