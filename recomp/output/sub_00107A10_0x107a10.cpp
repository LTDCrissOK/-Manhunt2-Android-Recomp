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

// Function: sub_00107A10
// Address: 0x107a10 - 0x107a30
void sub_00107A10_0x107a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107A10_0x107a10");
#endif

    switch (ctx->pc) {
        case 0x107a20u: goto label_107a20;
        default: break;
    }

    ctx->pc = 0x107a10u;

    // 0x107a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107a18: 0xc0f6d14  jal         func_3DB450
    ctx->pc = 0x107A18u;
    SET_GPR_U32(ctx, 31, 0x107A20u);
    ctx->pc = 0x3DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB450u, 0x107A18u, 0x107A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A20u;
label_107a20:
    // 0x107a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107a24: 0x3e00008  jr          $ra
    ctx->pc = 0x107A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A24u;
        // 0x107a28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107A2Cu;
    // 0x107a2c: 0x0  nop
    ctx->pc = 0x107a2cu;
    // NOP
    ctx->pc = 0x107a30u;
}
