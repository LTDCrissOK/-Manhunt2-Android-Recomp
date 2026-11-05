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

// Function: sub_002659E0
// Address: 0x2659e0 - 0x2659f0
void sub_002659E0_0x2659e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002659E0_0x2659e0");
#endif

    ctx->pc = 0x2659e0u;

    // 0x2659e0: 0xac8002e0  sw          $zero, 0x2E0($a0)
    ctx->pc = 0x2659e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 0));
    // 0x2659e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2659E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2659E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2659E4u;
        // 0x2659e8: 0xa08002dc  sb          $zero, 0x2DC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 732), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2659E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2659ECu;
    // 0x2659ec: 0x0  nop
    ctx->pc = 0x2659ecu;
    // NOP
    ctx->pc = 0x2659f0u;
}
