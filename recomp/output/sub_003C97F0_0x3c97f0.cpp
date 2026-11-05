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

// Function: sub_003C97F0
// Address: 0x3c97f0 - 0x3c9830
void sub_003C97F0_0x3c97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C97F0_0x3c97f0");
#endif

    switch (ctx->pc) {
        case 0x3c97f8u: goto label_3c97f8;
        case 0x3c9808u: goto label_3c9808;
        case 0x3c9818u: goto label_3c9818;
        case 0x3c9828u: goto label_3c9828;
        default: break;
    }

    ctx->pc = 0x3c97f0u;

    // 0x3c97f0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x3c97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3c97f4: 0xc  syscall     0
    ctx->pc = 0x3c97f4u;
    ctx->pc = 0x3C97F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c97f8:
    // 0x3c97f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C97F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C97F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9800u;
    // 0x3c9800: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x3c9800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x3c9804: 0xc  syscall     0
    ctx->pc = 0x3c9804u;
    ctx->pc = 0x3C9808u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9808:
    // 0x3c9808: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9810u;
    // 0x3c9810: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x3c9810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3c9814: 0xc  syscall     0
    ctx->pc = 0x3c9814u;
    ctx->pc = 0x3C9818u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9818:
    // 0x3c9818: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9820u;
    // 0x3c9820: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3c9820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3c9824: 0xc  syscall     0
    ctx->pc = 0x3c9824u;
    ctx->pc = 0x3C9828u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9828:
    // 0x3c9828: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9830u;
}
