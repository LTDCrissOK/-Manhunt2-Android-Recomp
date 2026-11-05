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

// Function: sub_003C9DD0
// Address: 0x3c9dd0 - 0x3c9e00
void sub_003C9DD0_0x3c9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9DD0_0x3c9dd0");
#endif

    switch (ctx->pc) {
        case 0x3c9dd8u: goto label_3c9dd8;
        case 0x3c9de8u: goto label_3c9de8;
        case 0x3c9df8u: goto label_3c9df8;
        default: break;
    }

    ctx->pc = 0x3c9dd0u;

    // 0x3c9dd0: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x3c9dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x3c9dd4: 0xc  syscall     0
    ctx->pc = 0x3c9dd4u;
    ctx->pc = 0x3C9DD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9dd8:
    // 0x3c9dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9DE0u;
    // 0x3c9de0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x3c9de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x3c9de4: 0xc  syscall     0
    ctx->pc = 0x3c9de4u;
    ctx->pc = 0x3C9DE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9de8:
    // 0x3c9de8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9DF0u;
    // 0x3c9df0: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x3c9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x3c9df4: 0xc  syscall     0
    ctx->pc = 0x3c9df4u;
    ctx->pc = 0x3C9DF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9df8:
    // 0x3c9df8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9E00u;
}
