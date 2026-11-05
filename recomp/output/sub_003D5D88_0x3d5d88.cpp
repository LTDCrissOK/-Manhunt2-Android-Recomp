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

// Function: sub_003D5D88
// Address: 0x3d5d88 - 0x3d5db8
void sub_003D5D88_0x3d5d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5D88_0x3d5d88");
#endif

    switch (ctx->pc) {
        case 0x3d5d98u: goto label_3d5d98;
        case 0x3d5dacu: goto label_3d5dac;
        default: break;
    }

    ctx->pc = 0x3d5d88u;

    // 0x3d5d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5d90: 0xc0f5306  jal         func_3D4C18
    ctx->pc = 0x3D5D90u;
    SET_GPR_U32(ctx, 31, 0x3D5D98u);
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D5D90u, 0x3D5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D98u;
label_3d5d98:
    // 0x3d5d98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5d9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5D9Cu;
    {
        const bool branch_taken_0x3d5d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D9Cu;
        // 0x3d5da0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5d9c) {
            ctx->pc = 0x3D5DACu;
            goto label_3d5dac;
        }
    }
    ctx->pc = 0x3D5DA4u;
    // 0x3d5da4: 0xc0f56a6  jal         func_3D5A98
    ctx->pc = 0x3D5DA4u;
    SET_GPR_U32(ctx, 31, 0x3D5DACu);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D5DA4u, 0x3D5DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5DACu;
label_3d5dac:
    // 0x3d5dac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3d5dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x3d5db0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5DB0u;
        // 0x3d5db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5DB8u;
}
