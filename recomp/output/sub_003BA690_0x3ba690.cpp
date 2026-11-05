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

// Function: sub_003BA690
// Address: 0x3ba690 - 0x3ba6a0
void sub_003BA690_0x3ba690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA690_0x3ba690");
#endif

    ctx->pc = 0x3ba690u;

    // 0x3ba690: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ba690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ba694: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA694u;
        // 0x3ba698: 0x2442c8e0  addiu       $v0, $v0, -0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA69Cu;
    // 0x3ba69c: 0x0  nop
    ctx->pc = 0x3ba69cu;
    // NOP
    ctx->pc = 0x3ba6a0u;
}
