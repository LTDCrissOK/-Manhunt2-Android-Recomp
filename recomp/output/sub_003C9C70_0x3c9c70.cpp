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

// Function: sub_003C9C70
// Address: 0x3c9c70 - 0x3c9cb0
void sub_003C9C70_0x3c9c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9C70_0x3c9c70");
#endif

    switch (ctx->pc) {
        case 0x3c9c78u: goto label_3c9c78;
        case 0x3c9c88u: goto label_3c9c88;
        case 0x3c9c98u: goto label_3c9c98;
        case 0x3c9ca8u: goto label_3c9ca8;
        default: break;
    }

    ctx->pc = 0x3c9c70u;

    // 0x3c9c70: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x3c9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x3c9c74: 0xc  syscall     0
    ctx->pc = 0x3c9c74u;
    ctx->pc = 0x3C9C78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c78:
    // 0x3c9c78: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C80u;
    // 0x3c9c80: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x3c9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3c9c84: 0xc  syscall     0
    ctx->pc = 0x3c9c84u;
    ctx->pc = 0x3C9C88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c88:
    // 0x3c9c88: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C90u;
    // 0x3c9c90: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x3c9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x3c9c94: 0xc  syscall     0
    ctx->pc = 0x3c9c94u;
    ctx->pc = 0x3C9C98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c98:
    // 0x3c9c98: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9CA0u;
    // 0x3c9ca0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x3c9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x3c9ca4: 0xc  syscall     0
    ctx->pc = 0x3c9ca4u;
    ctx->pc = 0x3C9CA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ca8:
    // 0x3c9ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9CB0u;
}
