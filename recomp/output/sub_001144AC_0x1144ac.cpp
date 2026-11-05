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

// Function: sub_001144AC
// Address: 0x1144ac - 0x1144b4
void sub_001144AC_0x1144ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001144AC_0x1144ac");
#endif

    ctx->pc = 0x1144acu;

    // 0x1144ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1144ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144ACu;
        // 0x1144b0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144B4u;
}
