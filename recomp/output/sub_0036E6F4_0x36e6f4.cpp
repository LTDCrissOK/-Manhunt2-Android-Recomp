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

// Function: sub_0036E6F4
// Address: 0x36e6f4 - 0x36e708
void sub_0036E6F4_0x36e6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E6F4_0x36e6f4");
#endif

    switch (ctx->pc) {
        case 0x36e6fcu: goto label_36e6fc;
        default: break;
    }

    ctx->pc = 0x36e6f4u;

    // 0x36e6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e6f8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x36e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_36e6fc:
    // 0x36e6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E704u;
    // 0x36e704: 0x0  nop
    ctx->pc = 0x36e704u;
    // NOP
    ctx->pc = 0x36e708u;
}
