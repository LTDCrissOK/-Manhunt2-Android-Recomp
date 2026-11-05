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

// Function: sub_002ACD60
// Address: 0x2acd60 - 0x2acd78
void sub_002ACD60_0x2acd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACD60_0x2acd60");
#endif

    ctx->pc = 0x2acd60u;

    // 0x2acd60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2acd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2acd64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2acd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2acd68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2acd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2acd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2acd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2acd70: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD70u;
        // 0x2acd74: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACD78u;
}
