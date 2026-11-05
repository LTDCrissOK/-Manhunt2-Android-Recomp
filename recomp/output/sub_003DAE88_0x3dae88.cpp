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

// Function: sub_003DAE88
// Address: 0x3dae88 - 0x3daeb0
void sub_003DAE88_0x3dae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAE88_0x3dae88");
#endif

    switch (ctx->pc) {
        case 0x3dae98u: goto label_3dae98;
        case 0x3daea0u: goto label_3daea0;
        default: break;
    }

    ctx->pc = 0x3dae88u;

    // 0x3dae88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dae8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dae90: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAE90u;
    SET_GPR_U32(ctx, 31, 0x3DAE98u);
    ctx->pc = 0x3DAE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE90u;
    // 0x3dae94: 0x24040528  addiu       $a0, $zero, 0x528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAE90u, 0x3DAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE98u;
label_3dae98:
    // 0x3dae98: 0xc051420  jal         func_145080
    ctx->pc = 0x3DAE98u;
    SET_GPR_U32(ctx, 31, 0x3DAEA0u);
    ctx->pc = 0x3DAE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE98u;
    // 0x3dae9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x3DAE98u, 0x3DAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAEA0u;
label_3daea0:
    // 0x3daea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daea4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAEA4u;
        // 0x3daea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAEACu;
    // 0x3daeac: 0x0  nop
    ctx->pc = 0x3daeacu;
    // NOP
    ctx->pc = 0x3daeb0u;
}
