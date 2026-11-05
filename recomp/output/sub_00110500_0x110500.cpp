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

// Function: sub_00110500
// Address: 0x110500 - 0x110520
void sub_00110500_0x110500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110500_0x110500");
#endif

    switch (ctx->pc) {
        case 0x110510u: goto label_110510;
        default: break;
    }

    ctx->pc = 0x110500u;

    // 0x110500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110508: 0xc05dde8  jal         func_1777A0
    ctx->pc = 0x110508u;
    SET_GPR_U32(ctx, 31, 0x110510u);
    ctx->pc = 0x11050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110508u;
    // 0x11050c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1777A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1777A0u, 0x110508u, 0x110510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110510u;
label_110510:
    // 0x110510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110514: 0x3e00008  jr          $ra
    ctx->pc = 0x110514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110514u;
        // 0x110518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11051Cu;
    // 0x11051c: 0x0  nop
    ctx->pc = 0x11051cu;
    // NOP
    ctx->pc = 0x110520u;
}
