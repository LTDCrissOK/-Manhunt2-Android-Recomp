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

// Function: sub_003DAD50
// Address: 0x3dad50 - 0x3dad78
void sub_003DAD50_0x3dad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAD50_0x3dad50");
#endif

    switch (ctx->pc) {
        case 0x3dad60u: goto label_3dad60;
        case 0x3dad68u: goto label_3dad68;
        default: break;
    }

    ctx->pc = 0x3dad50u;

    // 0x3dad50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dad54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dad58: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAD58u;
    SET_GPR_U32(ctx, 31, 0x3DAD60u);
    ctx->pc = 0x3DAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD58u;
    // 0x3dad5c: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAD58u, 0x3DAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD60u;
label_3dad60:
    // 0x3dad60: 0xc04baf4  jal         func_12EBD0
    ctx->pc = 0x3DAD60u;
    SET_GPR_U32(ctx, 31, 0x3DAD68u);
    ctx->pc = 0x3DAD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD60u;
    // 0x3dad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBD0u, 0x3DAD60u, 0x3DAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD68u;
label_3dad68:
    // 0x3dad68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dad68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dad6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD6Cu;
        // 0x3dad70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAD74u;
    // 0x3dad74: 0x0  nop
    ctx->pc = 0x3dad74u;
    // NOP
    ctx->pc = 0x3dad78u;
}
