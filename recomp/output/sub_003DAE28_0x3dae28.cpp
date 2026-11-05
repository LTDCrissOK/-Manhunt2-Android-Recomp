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

// Function: sub_003DAE28
// Address: 0x3dae28 - 0x3dae58
void sub_003DAE28_0x3dae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAE28_0x3dae28");
#endif

    switch (ctx->pc) {
        case 0x3dae38u: goto label_3dae38;
        case 0x3dae40u: goto label_3dae40;
        default: break;
    }

    ctx->pc = 0x3dae28u;

    // 0x3dae28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dae2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dae2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dae30: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAE30u;
    SET_GPR_U32(ctx, 31, 0x3DAE38u);
    ctx->pc = 0x3DAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE30u;
    // 0x3dae34: 0x24040b30  addiu       $a0, $zero, 0xB30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAE30u, 0x3DAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE38u;
label_3dae38:
    // 0x3dae38: 0xc050b38  jal         func_142CE0
    ctx->pc = 0x3DAE38u;
    SET_GPR_U32(ctx, 31, 0x3DAE40u);
    ctx->pc = 0x3DAE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE38u;
    // 0x3dae3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142CE0u, 0x3DAE38u, 0x3DAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE40u;
label_3dae40:
    // 0x3dae40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dae44: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE44u;
        // 0x3dae48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAE4Cu;
    // 0x3dae4c: 0x0  nop
    ctx->pc = 0x3dae4cu;
    // NOP
    // 0x3dae50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dae54: 0x0  nop
    ctx->pc = 0x3dae54u;
    // NOP
    ctx->pc = 0x3dae58u;
}
