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

// Function: sub_003C9850
// Address: 0x3c9850 - 0x3c9890
void sub_003C9850_0x3c9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9850_0x3c9850");
#endif

    switch (ctx->pc) {
        case 0x3c9858u: goto label_3c9858;
        case 0x3c9868u: goto label_3c9868;
        case 0x3c9878u: goto label_3c9878;
        case 0x3c9888u: goto label_3c9888;
        default: break;
    }

    ctx->pc = 0x3c9850u;

    // 0x3c9850: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x3c9850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3c9854: 0xc  syscall     0
    ctx->pc = 0x3c9854u;
    ctx->pc = 0x3C9858u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9858:
    // 0x3c9858: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9860u;
    // 0x3c9860: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x3c9860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x3c9864: 0xc  syscall     0
    ctx->pc = 0x3c9864u;
    ctx->pc = 0x3C9868u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9868:
    // 0x3c9868: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9870u;
    // 0x3c9870: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3c9870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c9874: 0xc  syscall     0
    ctx->pc = 0x3c9874u;
    ctx->pc = 0x3C9878u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9878:
    // 0x3c9878: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9880u;
    // 0x3c9880: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x3c9880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x3c9884: 0xc  syscall     0
    ctx->pc = 0x3c9884u;
    ctx->pc = 0x3C9888u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9888:
    // 0x3c9888: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9890u;
}
