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

// Function: sub_003DACB0
// Address: 0x3dacb0 - 0x3dacd8
void sub_003DACB0_0x3dacb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DACB0_0x3dacb0");
#endif

    switch (ctx->pc) {
        case 0x3dacc0u: goto label_3dacc0;
        case 0x3dacc8u: goto label_3dacc8;
        default: break;
    }

    ctx->pc = 0x3dacb0u;

    // 0x3dacb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dacb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dacb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dacb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dacb8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DACB8u;
    SET_GPR_U32(ctx, 31, 0x3DACC0u);
    ctx->pc = 0x3DACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACB8u;
    // 0x3dacbc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DACB8u, 0x3DACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACC0u;
label_3dacc0:
    // 0x3dacc0: 0xc04004e  jal         func_100138
    ctx->pc = 0x3DACC0u;
    SET_GPR_U32(ctx, 31, 0x3DACC8u);
    ctx->pc = 0x3DACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DACC0u;
    // 0x3dacc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100138u, 0x3DACC0u, 0x3DACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DACC8u;
label_3dacc8:
    // 0x3dacc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dacc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daccc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACCCu;
        // 0x3dacd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DACCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DACD4u;
    // 0x3dacd4: 0x0  nop
    ctx->pc = 0x3dacd4u;
    // NOP
    ctx->pc = 0x3dacd8u;
}
