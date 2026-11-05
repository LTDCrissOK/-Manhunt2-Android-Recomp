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

// Function: sub_003C9DB0
// Address: 0x3c9db0 - 0x3c9dd0
void sub_003C9DB0_0x3c9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9DB0_0x3c9db0");
#endif

    switch (ctx->pc) {
        case 0x3c9db8u: goto label_3c9db8;
        case 0x3c9dc8u: goto label_3c9dc8;
        default: break;
    }

    ctx->pc = 0x3c9db0u;

    // 0x3c9db0: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x3c9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x3c9db4: 0xc  syscall     0
    ctx->pc = 0x3c9db4u;
    ctx->pc = 0x3C9DB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9db8:
    // 0x3c9db8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9DC0u;
    // 0x3c9dc0: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x3c9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x3c9dc4: 0xc  syscall     0
    ctx->pc = 0x3c9dc4u;
    ctx->pc = 0x3C9DC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9dc8:
    // 0x3c9dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9DD0u;
}
