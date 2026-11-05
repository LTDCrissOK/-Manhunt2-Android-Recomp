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

// Function: sub_001CD318
// Address: 0x1cd318 - 0x1cd328
void sub_001CD318_0x1cd318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD318_0x1cd318");
#endif

    ctx->pc = 0x1cd318u;

    // 0x1cd318: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD31Cu;
        // 0x1cd320: 0xac4489b4  sw          $a0, -0x764C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937012), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD324u;
    // 0x1cd324: 0x0  nop
    ctx->pc = 0x1cd324u;
    // NOP
    ctx->pc = 0x1cd328u;
}
