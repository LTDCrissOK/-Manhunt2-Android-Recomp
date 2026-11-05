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

// Function: sub_00110F68
// Address: 0x110f68 - 0x110f88
void sub_00110F68_0x110f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F68_0x110f68");
#endif

    ctx->pc = 0x110f68u;

    // 0x110f68: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x110f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x110f6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110F6Cu;
    {
        const bool branch_taken_0x110f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110f6c) {
            ctx->pc = 0x110F80u;
            goto label_110f80;
        }
    }
    ctx->pc = 0x110F74u;
    // 0x110f74: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x110f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x110f78: 0x3e00008  jr          $ra
    ctx->pc = 0x110F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F78u;
        // 0x110f7c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F80u;
label_110f80:
    // 0x110f80: 0x3e00008  jr          $ra
    ctx->pc = 0x110F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F80u;
        // 0x110f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F88u;
}
