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

// Function: sub_001144CC
// Address: 0x1144cc - 0x1144d4
void sub_001144CC_0x1144cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001144CC_0x1144cc");
#endif

    ctx->pc = 0x1144ccu;

    // 0x1144cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1144CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144CCu;
        // 0x1144d0: 0x3c020080  lui         $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144D4u;
}
