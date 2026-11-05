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

// Function: sub_002A90F0
// Address: 0x2a90f0 - 0x2a9100
void sub_002A90F0_0x2a90f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A90F0_0x2a90f0");
#endif

    ctx->pc = 0x2a90f0u;

    // 0x2a90f0: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x2a90f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x2a90f4: 0xa080008c  sb          $zero, 0x8C($a0)
    ctx->pc = 0x2a90f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a90f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A90F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A90FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90F8u;
        // 0x2a90fc: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A90F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9100u;
}
