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

// Function: sub_0013E260
// Address: 0x13e260 - 0x13e270
void sub_0013E260_0x13e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E260_0x13e260");
#endif

    ctx->pc = 0x13e260u;

    // 0x13e260: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x13e260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x13e264: 0x3e00008  jr          $ra
    ctx->pc = 0x13E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E264u;
        // 0x13e268: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E26Cu;
    // 0x13e26c: 0x0  nop
    ctx->pc = 0x13e26cu;
    // NOP
    ctx->pc = 0x13e270u;
}
