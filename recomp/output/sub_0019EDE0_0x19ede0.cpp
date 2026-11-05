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

// Function: sub_0019EDE0
// Address: 0x19ede0 - 0x19edf0
void sub_0019EDE0_0x19ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EDE0_0x19ede0");
#endif

    ctx->pc = 0x19ede0u;

    // 0x19ede0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19ede4: 0x3e00008  jr          $ra
    ctx->pc = 0x19EDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDE4u;
        // 0x19ede8: 0x8c432b00  lw          $v1, 0x2B00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EDECu;
    // 0x19edec: 0x0  nop
    ctx->pc = 0x19edecu;
    // NOP
    ctx->pc = 0x19edf0u;
}
