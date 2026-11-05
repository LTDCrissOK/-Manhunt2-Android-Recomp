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

// Function: sub_003C97C0
// Address: 0x3c97c0 - 0x3c97f0
void sub_003C97C0_0x3c97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C97C0_0x3c97c0");
#endif

    switch (ctx->pc) {
        case 0x3c97c8u: goto label_3c97c8;
        case 0x3c97d8u: goto label_3c97d8;
        case 0x3c97e0u: goto label_3c97e0;
        case 0x3c97e8u: goto label_3c97e8;
        default: break;
    }

    ctx->pc = 0x3c97c0u;

    // 0x3c97c0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3c97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3c97c4: 0xc  syscall     0
    ctx->pc = 0x3c97c4u;
    ctx->pc = 0x3C97C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c97c8:
    // 0x3c97c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C97C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C97C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C97D0u;
    // 0x3c97d0: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3c97d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3c97d4: 0xc  syscall     0
    ctx->pc = 0x3c97d4u;
    ctx->pc = 0x3C97D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c97d8:
    // 0x3c97d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C97D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C97D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C97E0u;
label_3c97e0:
    // 0x3c97e0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3c97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3c97e4: 0xc  syscall     0
    ctx->pc = 0x3c97e4u;
    ctx->pc = 0x3C97E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c97e8:
    // 0x3c97e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C97E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C97E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C97F0u;
}
