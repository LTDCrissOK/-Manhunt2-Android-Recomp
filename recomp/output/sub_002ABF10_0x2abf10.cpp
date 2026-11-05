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

// Function: sub_002ABF10
// Address: 0x2abf10 - 0x2abf20
void sub_002ABF10_0x2abf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF10_0x2abf10");
#endif

    ctx->pc = 0x2abf10u;

    // 0x2abf10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2abf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2abf14: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF14u;
        // 0x2abf18: 0x8c622b00  lw          $v0, 0x2B00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF1Cu;
    // 0x2abf1c: 0x0  nop
    ctx->pc = 0x2abf1cu;
    // NOP
    ctx->pc = 0x2abf20u;
}
