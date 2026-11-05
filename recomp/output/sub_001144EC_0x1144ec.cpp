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

// Function: sub_001144EC
// Address: 0x1144ec - 0x1144f4
void sub_001144EC_0x1144ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001144EC_0x1144ec");
#endif

    ctx->pc = 0x1144ecu;

    // 0x1144ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1144ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144ECu;
        // 0x1144f0: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1144ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1144F4u;
}
