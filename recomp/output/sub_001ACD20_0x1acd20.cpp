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

// Function: sub_001ACD20
// Address: 0x1acd20 - 0x1acd40
void sub_001ACD20_0x1acd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACD20_0x1acd20");
#endif

    switch (ctx->pc) {
        case 0x1acd34u: goto label_1acd34;
        default: break;
    }

    ctx->pc = 0x1acd20u;

    // 0x1acd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1acd24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1acd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1acd2c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ACD2Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD34u);
    ctx->pc = 0x1ACD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD2Cu;
    // 0x1acd30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ACD2Cu, 0x1ACD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACD34u;
label_1acd34:
    // 0x1acd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acd38: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD38u;
        // 0x1acd3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD40u;
}
