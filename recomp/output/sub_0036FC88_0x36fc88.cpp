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

// Function: sub_0036FC88
// Address: 0x36fc88 - 0x36fca8
void sub_0036FC88_0x36fc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FC88_0x36fc88");
#endif

    switch (ctx->pc) {
        case 0x36fc98u: goto label_36fc98;
        default: break;
    }

    ctx->pc = 0x36fc88u;

    // 0x36fc88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36fc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36fc8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36fc90: 0xc0f3cd8  jal         func_3CF360
    ctx->pc = 0x36FC90u;
    SET_GPR_U32(ctx, 31, 0x36FC98u);
    ctx->pc = 0x36FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FC90u;
    // 0x36fc94: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF360u, 0x36FC90u, 0x36FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FC98u;
label_36fc98:
    // 0x36fc98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36fc9c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x36fc9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x36fca0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FCA0u;
        // 0x36fca4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FCA8u;
}
