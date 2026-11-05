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

// Function: sub_0019E790
// Address: 0x19e790 - 0x19e7a0
void sub_0019E790_0x19e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E790_0x19e790");
#endif

    ctx->pc = 0x19e790u;

    // 0x19e790: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x19e790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x19e794: 0x3e00008  jr          $ra
    ctx->pc = 0x19E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E794u;
        // 0x19e798: 0x8c620914  lw          $v0, 0x914($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2324)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E79Cu;
    // 0x19e79c: 0x0  nop
    ctx->pc = 0x19e79cu;
    // NOP
    ctx->pc = 0x19e7a0u;
}
