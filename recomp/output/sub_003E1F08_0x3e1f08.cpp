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

// Function: sub_003E1F08
// Address: 0x3e1f08 - 0x3e1f18
void sub_003E1F08_0x3e1f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1F08_0x3e1f08");
#endif

    ctx->pc = 0x3e1f08u;

    // 0x3e1f08: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1F10u;
    // 0x3e1f10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3e1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e1f14: 0x0  nop
    ctx->pc = 0x3e1f14u;
    // NOP
    ctx->pc = 0x3e1f18u;
}
