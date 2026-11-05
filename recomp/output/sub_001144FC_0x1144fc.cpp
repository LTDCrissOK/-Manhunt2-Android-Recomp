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

// Function: sub_001144FC
// Address: 0x1144fc - 0x114504
void sub_001144FC_0x1144fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001144FC_0x1144fc");
#endif

    ctx->pc = 0x1144fcu;

    // 0x1144fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1144FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144FCu;
        // 0x114500: 0x3c0200e0  lui         $v0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114504u;
}
