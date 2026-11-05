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

// Function: sub_00288730
// Address: 0x288730 - 0x288740
void sub_00288730_0x288730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288730_0x288730");
#endif

    ctx->pc = 0x288730u;

    // 0x288730: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x288734: 0x3e00008  jr          $ra
    ctx->pc = 0x288734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288734u;
        // 0x288738: 0x8c6225a8  lw          $v0, 0x25A8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9640)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28873Cu;
    // 0x28873c: 0x0  nop
    ctx->pc = 0x28873cu;
    // NOP
    ctx->pc = 0x288740u;
}
