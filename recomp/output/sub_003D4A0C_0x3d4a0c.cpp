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

// Function: sub_003D4A0C
// Address: 0x3d4a0c - 0x3d4a28
void sub_003D4A0C_0x3d4a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4A0C_0x3d4a0c");
#endif

    switch (ctx->pc) {
        case 0x3d4a14u: goto label_3d4a14;
        case 0x3d4a18u: goto label_3d4a18;
        default: break;
    }

    ctx->pc = 0x3d4a0cu;

    // 0x3d4a0c: 0xc0f56a6  jal         func_3D5A98
    ctx->pc = 0x3D4A0Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A14u);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D4A0Cu, 0x3D4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A14u;
label_3d4a14:
    // 0x3d4a14: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3d4a14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d4a18:
    // 0x3d4a18: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3d4a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4a1c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3d4a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4a20: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A20u;
        // 0x3d4a24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4A28u;
}
