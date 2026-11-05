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

// Function: sub_0013DD00
// Address: 0x13dd00 - 0x13dd10
void sub_0013DD00_0x13dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DD00_0x13dd00");
#endif

    ctx->pc = 0x13dd00u;

    // 0x13dd00: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x13dd00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x13dd04: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13dd08: 0x3e00008  jr          $ra
    ctx->pc = 0x13DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD08u;
        // 0x13dd0c: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DD10u;
}
