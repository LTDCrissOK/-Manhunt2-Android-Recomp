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

// Function: sub_002FFAB8
// Address: 0x2ffab8 - 0x2ffac8
void sub_002FFAB8_0x2ffab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFAB8_0x2ffab8");
#endif

    ctx->pc = 0x2ffab8u;

    // 0x2ffab8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ffab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ffabc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFABCu;
        // 0x2ffac0: 0xac405958  sw          $zero, 0x5958($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22872), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFAC4u;
    // 0x2ffac4: 0x0  nop
    ctx->pc = 0x2ffac4u;
    // NOP
    ctx->pc = 0x2ffac8u;
}
