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

// Function: sub_00373100
// Address: 0x373100 - 0x373110
void sub_00373100_0x373100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373100_0x373100");
#endif

    ctx->pc = 0x373100u;

    // 0x373100: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x373100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x373104: 0x8c43ccc0  lw          $v1, -0x3340($v0)
    ctx->pc = 0x373104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x373108: 0x3e00008  jr          $ra
    ctx->pc = 0x373108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373108u;
        // 0x37310c: 0x84620058  lh          $v0, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373110u;
}
