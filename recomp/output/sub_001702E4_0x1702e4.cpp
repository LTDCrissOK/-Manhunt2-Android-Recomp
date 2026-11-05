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

// Function: sub_001702E4
// Address: 0x1702e4 - 0x1702f8
void sub_001702E4_0x1702e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001702E4_0x1702e4");
#endif

    switch (ctx->pc) {
        case 0x1702ecu: goto label_1702ec;
        default: break;
    }

    ctx->pc = 0x1702e4u;

    // 0x1702e4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1702e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1702e8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x1702e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_1702ec:
    // 0x1702ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1702ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1702ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1702F4u;
    // 0x1702f4: 0x0  nop
    ctx->pc = 0x1702f4u;
    // NOP
    ctx->pc = 0x1702f8u;
}
