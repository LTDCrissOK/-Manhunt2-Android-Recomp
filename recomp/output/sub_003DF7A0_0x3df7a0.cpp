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

// Function: sub_003DF7A0
// Address: 0x3df7a0 - 0x3df7b0
void sub_003DF7A0_0x3df7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF7A0_0x3df7a0");
#endif

    ctx->pc = 0x3df7a0u;

    // 0x3df7a0: 0x7c800060  sq          $zero, 0x60($a0)
    ctx->pc = 0x3df7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 0));
    // 0x3df7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF7ACu;
    // 0x3df7ac: 0x0  nop
    ctx->pc = 0x3df7acu;
    // NOP
    ctx->pc = 0x3df7b0u;
}
