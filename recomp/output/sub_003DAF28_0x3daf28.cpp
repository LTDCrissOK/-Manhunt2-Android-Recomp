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

// Function: sub_003DAF28
// Address: 0x3daf28 - 0x3daf50
void sub_003DAF28_0x3daf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAF28_0x3daf28");
#endif

    switch (ctx->pc) {
        case 0x3daf38u: goto label_3daf38;
        case 0x3daf40u: goto label_3daf40;
        default: break;
    }

    ctx->pc = 0x3daf28u;

    // 0x3daf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daf2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daf30: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAF30u;
    SET_GPR_U32(ctx, 31, 0x3DAF38u);
    ctx->pc = 0x3DAF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF30u;
    // 0x3daf34: 0x24040630  addiu       $a0, $zero, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAF30u, 0x3DAF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF38u;
label_3daf38:
    // 0x3daf38: 0xc052820  jal         func_14A080
    ctx->pc = 0x3DAF38u;
    SET_GPR_U32(ctx, 31, 0x3DAF40u);
    ctx->pc = 0x3DAF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF38u;
    // 0x3daf3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A080u, 0x3DAF38u, 0x3DAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF40u;
label_3daf40:
    // 0x3daf40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daf44: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF44u;
        // 0x3daf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAF4Cu;
    // 0x3daf4c: 0x0  nop
    ctx->pc = 0x3daf4cu;
    // NOP
    ctx->pc = 0x3daf50u;
}
