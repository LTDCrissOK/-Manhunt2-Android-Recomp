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

// Function: sub_00336A88
// Address: 0x336a88 - 0x336a98
void sub_00336A88_0x336a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A88_0x336a88");
#endif

    ctx->pc = 0x336a88u;

    // 0x336a88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x336a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x336A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A8Cu;
        // 0x336a90: 0xac442c90  sw          $a0, 0x2C90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A94u;
    // 0x336a94: 0x0  nop
    ctx->pc = 0x336a94u;
    // NOP
    ctx->pc = 0x336a98u;
}
