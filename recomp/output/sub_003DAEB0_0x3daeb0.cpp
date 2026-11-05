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

// Function: sub_003DAEB0
// Address: 0x3daeb0 - 0x3daed8
void sub_003DAEB0_0x3daeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAEB0_0x3daeb0");
#endif

    switch (ctx->pc) {
        case 0x3daec0u: goto label_3daec0;
        case 0x3daec8u: goto label_3daec8;
        default: break;
    }

    ctx->pc = 0x3daeb0u;

    // 0x3daeb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daeb8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAEB8u;
    SET_GPR_U32(ctx, 31, 0x3DAEC0u);
    ctx->pc = 0x3DAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAEB8u;
    // 0x3daebc: 0x24040528  addiu       $a0, $zero, 0x528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAEB8u, 0x3DAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAEC0u;
label_3daec0:
    // 0x3daec0: 0xc0515fa  jal         func_1457E8
    ctx->pc = 0x3DAEC0u;
    SET_GPR_U32(ctx, 31, 0x3DAEC8u);
    ctx->pc = 0x3DAEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAEC0u;
    // 0x3daec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1457E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1457E8u, 0x3DAEC0u, 0x3DAEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAEC8u;
label_3daec8:
    // 0x3daec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daecc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAECCu;
        // 0x3daed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAED4u;
    // 0x3daed4: 0x0  nop
    ctx->pc = 0x3daed4u;
    // NOP
    ctx->pc = 0x3daed8u;
}
