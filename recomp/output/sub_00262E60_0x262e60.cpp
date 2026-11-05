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

// Function: sub_00262E60
// Address: 0x262e60 - 0x262e78
void sub_00262E60_0x262e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262E60_0x262e60");
#endif

    ctx->pc = 0x262e60u;

    // 0x262e60: 0x8c83027c  lw          $v1, 0x27C($a0)
    ctx->pc = 0x262e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x262e64: 0x8c820280  lw          $v0, 0x280($a0)
    ctx->pc = 0x262e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x262e68: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x262e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x262e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x262E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E6Cu;
        // 0x262e70: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E74u;
    // 0x262e74: 0x0  nop
    ctx->pc = 0x262e74u;
    // NOP
    ctx->pc = 0x262e78u;
}
