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

// Function: sub_002C47B0
// Address: 0x2c47b0 - 0x2c47d0
void sub_002C47B0_0x2c47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C47B0_0x2c47b0");
#endif

    switch (ctx->pc) {
        case 0x2c47c0u: goto label_2c47c0;
        default: break;
    }

    ctx->pc = 0x2c47b0u;

    // 0x2c47b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c47b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c47b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c47b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c47b8: 0xc09dcc6  jal         func_277318
    ctx->pc = 0x2C47B8u;
    SET_GPR_U32(ctx, 31, 0x2C47C0u);
    ctx->pc = 0x2C47BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C47B8u;
    // 0x2c47bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2C47B8u, 0x2C47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C47C0u;
label_2c47c0:
    // 0x2c47c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c47c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c47c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C47C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47C4u;
        // 0x2c47c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C47C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C47CCu;
    // 0x2c47cc: 0x0  nop
    ctx->pc = 0x2c47ccu;
    // NOP
    ctx->pc = 0x2c47d0u;
}
