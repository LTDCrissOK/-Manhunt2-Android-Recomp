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

// Function: sub_002D34F8
// Address: 0x2d34f8 - 0x2d3500
void sub_002D34F8_0x2d34f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D34F8_0x2d34f8");
#endif

    ctx->pc = 0x2d34f8u;

    // 0x2d34f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D34F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34F8u;
        // 0x2d34fc: 0xa080000c  sb          $zero, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D34F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3500u;
}
