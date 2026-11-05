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

// Function: sub_001EA420
// Address: 0x1ea420 - 0x1ea448
void sub_001EA420_0x1ea420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA420_0x1ea420");
#endif

    ctx->pc = 0x1ea420u;

    // 0x1ea420: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ea420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea424: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ea424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea42c: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x1ea42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x1ea430: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1ea430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x1ea434: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1ea434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1ea438: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1ea438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1ea43c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1ea43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1ea440: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA440u;
        // 0x1ea444: 0xac800050  sw          $zero, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA448u;
}
