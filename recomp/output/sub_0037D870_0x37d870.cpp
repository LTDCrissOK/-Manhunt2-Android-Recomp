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

// Function: sub_0037D870
// Address: 0x37d870 - 0x37d880
void sub_0037D870_0x37d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D870_0x37d870");
#endif

    ctx->pc = 0x37d870u;

    // 0x37d870: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37d874: 0x3e00008  jr          $ra
    ctx->pc = 0x37D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D874u;
        // 0x37d878: 0xac402d5c  sw          $zero, 0x2D5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D87Cu;
    // 0x37d87c: 0x0  nop
    ctx->pc = 0x37d87cu;
    // NOP
    ctx->pc = 0x37d880u;
}
