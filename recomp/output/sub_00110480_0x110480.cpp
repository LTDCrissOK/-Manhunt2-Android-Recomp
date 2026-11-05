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

// Function: sub_00110480
// Address: 0x110480 - 0x1104a0
void sub_00110480_0x110480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110480_0x110480");
#endif

    switch (ctx->pc) {
        case 0x110490u: goto label_110490;
        default: break;
    }

    ctx->pc = 0x110480u;

    // 0x110480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110488: 0xc05ddb0  jal         func_1776C0
    ctx->pc = 0x110488u;
    SET_GPR_U32(ctx, 31, 0x110490u);
    ctx->pc = 0x11048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110488u;
    // 0x11048c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1776C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1776C0u, 0x110488u, 0x110490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110490u;
label_110490:
    // 0x110490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110494: 0x3e00008  jr          $ra
    ctx->pc = 0x110494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110494u;
        // 0x110498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11049Cu;
    // 0x11049c: 0x0  nop
    ctx->pc = 0x11049cu;
    // NOP
    ctx->pc = 0x1104a0u;
}
