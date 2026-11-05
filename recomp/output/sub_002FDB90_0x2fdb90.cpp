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

// Function: sub_002FDB90
// Address: 0x2fdb90 - 0x2fdb98
void sub_002FDB90_0x2fdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB90_0x2fdb90");
#endif

    ctx->pc = 0x2fdb90u;

    // 0x2fdb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB90u;
        // 0x2fdb94: 0xa08510cd  sb          $a1, 0x10CD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4301), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDB98u;
}
