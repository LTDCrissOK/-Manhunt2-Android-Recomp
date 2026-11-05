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

// Function: sub_001044D0
// Address: 0x1044d0 - 0x1044e0
void sub_001044D0_0x1044d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001044D0_0x1044d0");
#endif

    ctx->pc = 0x1044d0u;

    // 0x1044d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1044d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1044d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1044D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1044D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044D4u;
        // 0x1044d8: 0xac440730  sw          $a0, 0x730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1044D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1044DCu;
    // 0x1044dc: 0x0  nop
    ctx->pc = 0x1044dcu;
    // NOP
    ctx->pc = 0x1044e0u;
}
