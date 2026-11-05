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

// Function: sub_003C9CE0
// Address: 0x3c9ce0 - 0x3c9d10
void sub_003C9CE0_0x3c9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9CE0_0x3c9ce0");
#endif

    switch (ctx->pc) {
        case 0x3c9ce8u: goto label_3c9ce8;
        case 0x3c9cf8u: goto label_3c9cf8;
        case 0x3c9d08u: goto label_3c9d08;
        default: break;
    }

    ctx->pc = 0x3c9ce0u;

    // 0x3c9ce0: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x3c9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x3c9ce4: 0xc  syscall     0
    ctx->pc = 0x3c9ce4u;
    ctx->pc = 0x3C9CE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ce8:
    // 0x3c9ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9CF0u;
    // 0x3c9cf0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x3c9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x3c9cf4: 0xc  syscall     0
    ctx->pc = 0x3c9cf4u;
    ctx->pc = 0x3C9CF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9cf8:
    // 0x3c9cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D00u;
    // 0x3c9d00: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x3c9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x3c9d04: 0xc  syscall     0
    ctx->pc = 0x3c9d04u;
    ctx->pc = 0x3C9D08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d08:
    // 0x3c9d08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D10u;
}
