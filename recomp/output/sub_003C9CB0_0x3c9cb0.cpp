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

// Function: sub_003C9CB0
// Address: 0x3c9cb0 - 0x3c9ce0
void sub_003C9CB0_0x3c9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9CB0_0x3c9cb0");
#endif

    switch (ctx->pc) {
        case 0x3c9cb8u: goto label_3c9cb8;
        case 0x3c9cc8u: goto label_3c9cc8;
        case 0x3c9cd8u: goto label_3c9cd8;
        default: break;
    }

    ctx->pc = 0x3c9cb0u;

    // 0x3c9cb0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x3c9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x3c9cb4: 0xc  syscall     0
    ctx->pc = 0x3c9cb4u;
    ctx->pc = 0x3C9CB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9cb8:
    // 0x3c9cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9CC0u;
    // 0x3c9cc0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3c9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3c9cc4: 0xc  syscall     0
    ctx->pc = 0x3c9cc4u;
    ctx->pc = 0x3C9CC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9cc8:
    // 0x3c9cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9CD0u;
    // 0x3c9cd0: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x3c9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x3c9cd4: 0xc  syscall     0
    ctx->pc = 0x3c9cd4u;
    ctx->pc = 0x3C9CD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9cd8:
    // 0x3c9cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9CE0u;
}
