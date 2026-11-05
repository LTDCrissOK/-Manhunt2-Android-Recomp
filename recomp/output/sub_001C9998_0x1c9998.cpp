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

// Function: sub_001C9998
// Address: 0x1c9998 - 0x1c99b0
void sub_001C9998_0x1c9998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9998_0x1c9998");
#endif

    ctx->pc = 0x1c9998u;

    // 0x1c9998: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1c9998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1c999c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c999cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c99a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1c99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1c99a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1c99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1c99a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99A8u;
        // 0x1c99ac: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99B0u;
}
