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

// Function: sub_00208778
// Address: 0x208778 - 0x208780
void sub_00208778_0x208778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208778_0x208778");
#endif

    ctx->pc = 0x208778u;

    // 0x208778: 0x3e00008  jr          $ra
    ctx->pc = 0x208778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208778u;
        // 0x20877c: 0x8c8233bc  lw          $v0, 0x33BC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13244)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208780u;
}
