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

// Function: sub_00308E20
// Address: 0x308e20 - 0x308e40
void sub_00308E20_0x308e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308E20_0x308e20");
#endif

    switch (ctx->pc) {
        case 0x308e34u: goto label_308e34;
        default: break;
    }

    ctx->pc = 0x308e20u;

    // 0x308e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308e24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308e2c: 0xc0c2370  jal         func_308DC0
    ctx->pc = 0x308E2Cu;
    SET_GPR_U32(ctx, 31, 0x308E34u);
    ctx->pc = 0x308E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E2Cu;
    // 0x308e30: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308DC0u, 0x308E2Cu, 0x308E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E34u;
label_308e34:
    // 0x308e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308e38: 0x3e00008  jr          $ra
    ctx->pc = 0x308E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E38u;
        // 0x308e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E40u;
}
