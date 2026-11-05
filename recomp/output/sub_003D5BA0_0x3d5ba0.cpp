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

// Function: sub_003D5BA0
// Address: 0x3d5ba0 - 0x3d5bc0
void sub_003D5BA0_0x3d5ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5BA0_0x3d5ba0");
#endif

    switch (ctx->pc) {
        case 0x3d5bb0u: goto label_3d5bb0;
        default: break;
    }

    ctx->pc = 0x3d5ba0u;

    // 0x3d5ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5ba8: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x3D5BA8u;
    SET_GPR_U32(ctx, 31, 0x3D5BB0u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x3D5BA8u, 0x3D5BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5BB0u;
label_3d5bb0:
    // 0x3d5bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5BB4u;
        // 0x3d5bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5BBCu;
    // 0x3d5bbc: 0x0  nop
    ctx->pc = 0x3d5bbcu;
    // NOP
    ctx->pc = 0x3d5bc0u;
}
