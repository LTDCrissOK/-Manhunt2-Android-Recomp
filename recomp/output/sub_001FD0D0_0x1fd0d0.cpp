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

// Function: sub_001FD0D0
// Address: 0x1fd0d0 - 0x1fd0e0
void sub_001FD0D0_0x1fd0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0D0_0x1fd0d0");
#endif

    ctx->pc = 0x1fd0d0u;

    // 0x1fd0d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fd0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fd0d4: 0x8c439330  lw          $v1, -0x6CD0($v0)
    ctx->pc = 0x1fd0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9330u));
    // 0x1fd0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0D8u;
        // 0x1fd0dc: 0x8c626394  lw          $v0, 0x6394($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25492)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD0E0u;
}
