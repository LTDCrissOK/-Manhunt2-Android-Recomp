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

// Function: sub_0028BA60
// Address: 0x28ba60 - 0x28ba88
void sub_0028BA60_0x28ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BA60_0x28ba60");
#endif

    switch (ctx->pc) {
        case 0x28ba70u: goto label_28ba70;
        case 0x28ba78u: goto label_28ba78;
        default: break;
    }

    ctx->pc = 0x28ba60u;

    // 0x28ba60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ba64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ba68: 0xc0a2e6c  jal         func_28B9B0
    ctx->pc = 0x28BA68u;
    SET_GPR_U32(ctx, 31, 0x28BA70u);
    ctx->pc = 0x28B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B9B0u, 0x28BA68u, 0x28BA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA70u;
label_28ba70:
    // 0x28ba70: 0xc0a2ea2  jal         func_28BA88
    ctx->pc = 0x28BA70u;
    SET_GPR_U32(ctx, 31, 0x28BA78u);
    ctx->pc = 0x28BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BA88u, 0x28BA70u, 0x28BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BA78u;
label_28ba78:
    // 0x28ba78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ba7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28BA7Cu;
        // 0x28ba80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28BA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28BA84u;
    // 0x28ba84: 0x0  nop
    ctx->pc = 0x28ba84u;
    // NOP
    ctx->pc = 0x28ba88u;
}
