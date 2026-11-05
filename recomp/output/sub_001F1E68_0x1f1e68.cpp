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

// Function: sub_001F1E68
// Address: 0x1f1e68 - 0x1f1e78
void sub_001F1E68_0x1f1e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1E68_0x1f1e68");
#endif

    ctx->pc = 0x1f1e68u;

    // 0x1f1e68: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1f1e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E6Cu;
        // 0x1f1e70: 0x8c6201a4  lw          $v0, 0x1A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1E74u;
    // 0x1f1e74: 0x0  nop
    ctx->pc = 0x1f1e74u;
    // NOP
    ctx->pc = 0x1f1e78u;
}
