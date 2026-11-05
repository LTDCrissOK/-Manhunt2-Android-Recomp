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

// Function: sub_00132E68
// Address: 0x132e68 - 0x132e90
void sub_00132E68_0x132e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132E68_0x132e68");
#endif

    ctx->pc = 0x132e68u;

    // 0x132e68: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x132e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x132e6c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x132e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x132e70: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x132e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x132e74: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x132e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x132e78: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x132e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x132e7c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x132e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x132e80: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x132e80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x132e84: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x132e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x132e88: 0x3e00008  jr          $ra
    ctx->pc = 0x132E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E88u;
        // 0x132e8c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132E90u;
}
