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

// Function: sub_003C9980
// Address: 0x3c9980 - 0x3c99a0
void sub_003C9980_0x3c9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9980_0x3c9980");
#endif

    switch (ctx->pc) {
        case 0x3c9988u: goto label_3c9988;
        case 0x3c9998u: goto label_3c9998;
        default: break;
    }

    ctx->pc = 0x3c9980u;

    // 0x3c9980: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x3c9980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x3c9984: 0xc  syscall     0
    ctx->pc = 0x3c9984u;
    ctx->pc = 0x3C9988u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9988:
    // 0x3c9988: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9990u;
    // 0x3c9990: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3c9990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3c9994: 0xc  syscall     0
    ctx->pc = 0x3c9994u;
    ctx->pc = 0x3C9998u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9998:
    // 0x3c9998: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C99A0u;
}
