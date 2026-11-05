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

// Function: sub_00326118
// Address: 0x326118 - 0x326130
void sub_00326118_0x326118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326118_0x326118");
#endif

    ctx->pc = 0x326118u;

    // 0x326118: 0x3e00008  jr          $ra
    ctx->pc = 0x326118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326120u;
    // 0x326120: 0x0  nop
    ctx->pc = 0x326120u;
    // NOP
    // 0x326124: 0x0  nop
    ctx->pc = 0x326124u;
    // NOP
    // 0x326128: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x326128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x32612c: 0x0  nop
    ctx->pc = 0x32612cu;
    // NOP
    ctx->pc = 0x326130u;
}
