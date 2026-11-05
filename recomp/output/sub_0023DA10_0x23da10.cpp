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

// Function: sub_0023DA10
// Address: 0x23da10 - 0x23da28
void sub_0023DA10_0x23da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DA10_0x23da10");
#endif

    ctx->pc = 0x23da10u;

    // 0x23da10: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x23da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x23da14: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x23da18: 0x38420032  xori        $v0, $v0, 0x32
    ctx->pc = 0x23da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)50);
    // 0x23da1c: 0x3e00008  jr          $ra
    ctx->pc = 0x23DA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA1Cu;
        // 0x23da20: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DA24u;
    // 0x23da24: 0x0  nop
    ctx->pc = 0x23da24u;
    // NOP
    ctx->pc = 0x23da28u;
}
