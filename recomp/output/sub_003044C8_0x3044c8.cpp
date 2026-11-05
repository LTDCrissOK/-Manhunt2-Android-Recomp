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

// Function: sub_003044C8
// Address: 0x3044c8 - 0x3044d0
void sub_003044C8_0x3044c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003044C8_0x3044c8");
#endif

    ctx->pc = 0x3044c8u;

    // 0x3044c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3044C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3044CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044C8u;
        // 0x3044cc: 0xa0801170  sb          $zero, 0x1170($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4464), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3044C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3044D0u;
}
