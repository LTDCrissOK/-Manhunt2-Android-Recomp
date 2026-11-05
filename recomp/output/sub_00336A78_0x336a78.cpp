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

// Function: sub_00336A78
// Address: 0x336a78 - 0x336a88
void sub_00336A78_0x336a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A78_0x336a78");
#endif

    ctx->pc = 0x336a78u;

    // 0x336a78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x336a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x336a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x336A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A7Cu;
        // 0x336a80: 0x8c622c90  lw          $v0, 0x2C90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11408)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A84u;
    // 0x336a84: 0x0  nop
    ctx->pc = 0x336a84u;
    // NOP
    ctx->pc = 0x336a88u;
}
