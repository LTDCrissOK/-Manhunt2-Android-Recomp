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

// Function: sub_003C9930
// Address: 0x3c9930 - 0x3c9980
void sub_003C9930_0x3c9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9930_0x3c9930");
#endif

    switch (ctx->pc) {
        case 0x3c9938u: goto label_3c9938;
        case 0x3c9948u: goto label_3c9948;
        case 0x3c9958u: goto label_3c9958;
        case 0x3c9968u: goto label_3c9968;
        case 0x3c9978u: goto label_3c9978;
        default: break;
    }

    ctx->pc = 0x3c9930u;

    // 0x3c9930: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x3c9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x3c9934: 0xc  syscall     0
    ctx->pc = 0x3c9934u;
    ctx->pc = 0x3C9938u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9938:
    // 0x3c9938: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9940u;
    // 0x3c9940: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x3c9940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x3c9944: 0xc  syscall     0
    ctx->pc = 0x3c9944u;
    ctx->pc = 0x3C9948u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9948:
    // 0x3c9948: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9950u;
    // 0x3c9950: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3c9950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3c9954: 0xc  syscall     0
    ctx->pc = 0x3c9954u;
    ctx->pc = 0x3C9958u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9958:
    // 0x3c9958: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9960u;
    // 0x3c9960: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3c9960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3c9964: 0xc  syscall     0
    ctx->pc = 0x3c9964u;
    ctx->pc = 0x3C9968u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9968:
    // 0x3c9968: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9970u;
    // 0x3c9970: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x3c9970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3c9974: 0xc  syscall     0
    ctx->pc = 0x3c9974u;
    ctx->pc = 0x3C9978u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9978:
    // 0x3c9978: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9980u;
}
