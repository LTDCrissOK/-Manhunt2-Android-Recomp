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

// Function: sub_001FD4E8
// Address: 0x1fd4e8 - 0x1fd500
void sub_001FD4E8_0x1fd4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD4E8_0x1fd4e8");
#endif

    ctx->pc = 0x1fd4e8u;

    // 0x1fd4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4E8u;
        // 0x1fd4ec: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD4F0u;
    // 0x1fd4f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd4f4: 0x0  nop
    ctx->pc = 0x1fd4f4u;
    // NOP
    // 0x1fd4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd4fc: 0x0  nop
    ctx->pc = 0x1fd4fcu;
    // NOP
    ctx->pc = 0x1fd500u;
}
