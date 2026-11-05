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

// Function: sub_00262DC8
// Address: 0x262dc8 - 0x262de0
void sub_00262DC8_0x262dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262DC8_0x262dc8");
#endif

    ctx->pc = 0x262dc8u;

    // 0x262dc8: 0x8c830274  lw          $v1, 0x274($a0)
    ctx->pc = 0x262dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x262dcc: 0x8c820280  lw          $v0, 0x280($a0)
    ctx->pc = 0x262dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x262dd0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x262dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x262dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x262DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DD4u;
        // 0x262dd8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262DDCu;
    // 0x262ddc: 0x0  nop
    ctx->pc = 0x262ddcu;
    // NOP
    ctx->pc = 0x262de0u;
}
