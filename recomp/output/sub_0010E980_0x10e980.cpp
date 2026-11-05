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

// Function: sub_0010E980
// Address: 0x10e980 - 0x10e990
void sub_0010E980_0x10e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E980_0x10e980");
#endif

    ctx->pc = 0x10e980u;

    // 0x10e980: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10e984: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10e988: 0x3e00008  jr          $ra
    ctx->pc = 0x10E988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E988u;
        // 0x10e98c: 0xac8301b8  sw          $v1, 0x1B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E990u;
}
