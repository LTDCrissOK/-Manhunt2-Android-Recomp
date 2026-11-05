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

// Function: sub_003D7610
// Address: 0x3d7610 - 0x3d7630
void sub_003D7610_0x3d7610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7610_0x3d7610");
#endif

    switch (ctx->pc) {
        case 0x3d7620u: goto label_3d7620;
        default: break;
    }

    ctx->pc = 0x3d7610u;

    // 0x3d7610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d7610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d7614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d7614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d7618: 0xc0f5c8a  jal         func_3D7228
    ctx->pc = 0x3D7618u;
    SET_GPR_U32(ctx, 31, 0x3D7620u);
    ctx->pc = 0x3D7228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7228u, 0x3D7618u, 0x3D7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7620u;
label_3d7620:
    // 0x3d7620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d7620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7624: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7624u;
        // 0x3d7628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D762Cu;
    // 0x3d762c: 0x0  nop
    ctx->pc = 0x3d762cu;
    // NOP
    ctx->pc = 0x3d7630u;
}
