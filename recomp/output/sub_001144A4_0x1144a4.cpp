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

// Function: sub_001144A4
// Address: 0x1144a4 - 0x1144ac
void sub_001144A4_0x1144a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001144A4_0x1144a4");
#endif

    ctx->pc = 0x1144a4u;

    // 0x1144a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1144A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144A4u;
        // 0x1144a8: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144ACu;
}
