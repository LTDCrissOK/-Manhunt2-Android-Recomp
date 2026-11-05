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

// Function: sub_001BB7B8
// Address: 0x1bb7b8 - 0x1bb7c8
void sub_001BB7B8_0x1bb7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB7B8_0x1bb7b8");
#endif

    ctx->pc = 0x1bb7b8u;

    // 0x1bb7b8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1bb7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1bb7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7BCu;
        // 0x1bb7c0: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB7C4u;
    // 0x1bb7c4: 0x0  nop
    ctx->pc = 0x1bb7c4u;
    // NOP
    ctx->pc = 0x1bb7c8u;
}
