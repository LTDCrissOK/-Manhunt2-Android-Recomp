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

// Function: sub_00367A28
// Address: 0x367a28 - 0x367a50
void sub_00367A28_0x367a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367A28_0x367a28");
#endif

    switch (ctx->pc) {
        case 0x367a40u: goto label_367a40;
        default: break;
    }

    ctx->pc = 0x367a28u;

    // 0x367a28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x367a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x367a2c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x367a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x367a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x367a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367a34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367a38: 0xc0dc318  jal         func_370C60
    ctx->pc = 0x367A38u;
    SET_GPR_U32(ctx, 31, 0x367A40u);
    ctx->pc = 0x367A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367A38u;
    // 0x367a3c: 0x2484dca0  addiu       $a0, $a0, -0x2360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370C60u, 0x367A38u, 0x367A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A40u;
label_367a40:
    // 0x367a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x367a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367a44: 0x3e00008  jr          $ra
    ctx->pc = 0x367A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A44u;
        // 0x367a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367A4Cu;
    // 0x367a4c: 0x0  nop
    ctx->pc = 0x367a4cu;
    // NOP
    ctx->pc = 0x367a50u;
}
