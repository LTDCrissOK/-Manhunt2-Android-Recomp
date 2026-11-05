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

// Function: sub_001AC0F0
// Address: 0x1ac0f0 - 0x1ac110
void sub_001AC0F0_0x1ac0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC0F0_0x1ac0f0");
#endif

    switch (ctx->pc) {
        case 0x1ac100u: goto label_1ac100;
        default: break;
    }

    ctx->pc = 0x1ac0f0u;

    // 0x1ac0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac0f8: 0xc092a44  jal         func_24A910
    ctx->pc = 0x1AC0F8u;
    SET_GPR_U32(ctx, 31, 0x1AC100u);
    ctx->pc = 0x24A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A910u, 0x1AC0F8u, 0x1AC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC100u;
label_1ac100:
    // 0x1ac100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac104: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC104u;
        // 0x1ac108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC10Cu;
    // 0x1ac10c: 0x0  nop
    ctx->pc = 0x1ac10cu;
    // NOP
    ctx->pc = 0x1ac110u;
}
