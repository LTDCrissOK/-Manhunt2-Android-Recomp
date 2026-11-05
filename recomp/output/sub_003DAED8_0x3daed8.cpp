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

// Function: sub_003DAED8
// Address: 0x3daed8 - 0x3daf00
void sub_003DAED8_0x3daed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAED8_0x3daed8");
#endif

    switch (ctx->pc) {
        case 0x3daee8u: goto label_3daee8;
        case 0x3daef0u: goto label_3daef0;
        default: break;
    }

    ctx->pc = 0x3daed8u;

    // 0x3daed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daee0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAEE0u;
    SET_GPR_U32(ctx, 31, 0x3DAEE8u);
    ctx->pc = 0x3DAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAEE0u;
    // 0x3daee4: 0x24040574  addiu       $a0, $zero, 0x574 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAEE0u, 0x3DAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAEE8u;
label_3daee8:
    // 0x3daee8: 0xc051792  jal         func_145E48
    ctx->pc = 0x3DAEE8u;
    SET_GPR_U32(ctx, 31, 0x3DAEF0u);
    ctx->pc = 0x3DAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAEE8u;
    // 0x3daeec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145E48u, 0x3DAEE8u, 0x3DAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAEF0u;
label_3daef0:
    // 0x3daef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daef4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAEF4u;
        // 0x3daef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAEFCu;
    // 0x3daefc: 0x0  nop
    ctx->pc = 0x3daefcu;
    // NOP
    ctx->pc = 0x3daf00u;
}
