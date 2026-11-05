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

// Function: sub_003DAFF0
// Address: 0x3daff0 - 0x3db018
void sub_003DAFF0_0x3daff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAFF0_0x3daff0");
#endif

    switch (ctx->pc) {
        case 0x3db000u: goto label_3db000;
        case 0x3db008u: goto label_3db008;
        default: break;
    }

    ctx->pc = 0x3daff0u;

    // 0x3daff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daff8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAFF8u;
    SET_GPR_U32(ctx, 31, 0x3DB000u);
    ctx->pc = 0x3DAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFF8u;
    // 0x3daffc: 0x24040684  addiu       $a0, $zero, 0x684 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAFF8u, 0x3DB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB000u;
label_3db000:
    // 0x3db000: 0xc054c32  jal         func_1530C8
    ctx->pc = 0x3DB000u;
    SET_GPR_U32(ctx, 31, 0x3DB008u);
    ctx->pc = 0x3DB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB000u;
    // 0x3db004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530C8u, 0x3DB000u, 0x3DB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB008u;
label_3db008:
    // 0x3db008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db00c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB00Cu;
        // 0x3db010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB014u;
    // 0x3db014: 0x0  nop
    ctx->pc = 0x3db014u;
    // NOP
    ctx->pc = 0x3db018u;
}
