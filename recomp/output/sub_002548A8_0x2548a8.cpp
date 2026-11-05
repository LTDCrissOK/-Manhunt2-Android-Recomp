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

// Function: sub_002548A8
// Address: 0x2548a8 - 0x2548b8
void sub_002548A8_0x2548a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548A8_0x2548a8");
#endif

    ctx->pc = 0x2548a8u;

    // 0x2548a8: 0x8c830ff4  lw          $v1, 0xFF4($a0)
    ctx->pc = 0x2548a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x2548ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2548ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2548B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548ACu;
        // 0x2548b0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2548ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548B4u;
    // 0x2548b4: 0x0  nop
    ctx->pc = 0x2548b4u;
    // NOP
    ctx->pc = 0x2548b8u;
}
