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

// Function: sub_003D4A88
// Address: 0x3d4a88 - 0x3d4aa0
void sub_003D4A88_0x3d4a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4A88_0x3d4a88");
#endif

    switch (ctx->pc) {
        case 0x3d4a90u: goto label_3d4a90;
        case 0x3d4a94u: goto label_3d4a94;
        default: break;
    }

    ctx->pc = 0x3d4a88u;

    // 0x3d4a88: 0xc0f56a6  jal         func_3D5A98
    ctx->pc = 0x3D4A88u;
    SET_GPR_U32(ctx, 31, 0x3D4A90u);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D4A88u, 0x3D4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A90u;
label_3d4a90:
    // 0x3d4a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d4a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d4a94:
    // 0x3d4a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d4a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4a98: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A98u;
        // 0x3d4a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4AA0u;
}
