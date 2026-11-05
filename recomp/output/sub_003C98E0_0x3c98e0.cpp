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

// Function: sub_003C98E0
// Address: 0x3c98e0 - 0x3c9910
void sub_003C98E0_0x3c98e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C98E0_0x3c98e0");
#endif

    switch (ctx->pc) {
        case 0x3c98e8u: goto label_3c98e8;
        case 0x3c98f8u: goto label_3c98f8;
        case 0x3c9908u: goto label_3c9908;
        default: break;
    }

    ctx->pc = 0x3c98e0u;

    // 0x3c98e0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x3c98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x3c98e4: 0xc  syscall     0
    ctx->pc = 0x3c98e4u;
    ctx->pc = 0x3C98E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c98e8:
    // 0x3c98e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C98E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C98E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C98F0u;
    // 0x3c98f0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x3c98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3c98f4: 0xc  syscall     0
    ctx->pc = 0x3c98f4u;
    ctx->pc = 0x3C98F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c98f8:
    // 0x3c98f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C98F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C98F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9900u;
    // 0x3c9900: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x3c9900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x3c9904: 0xc  syscall     0
    ctx->pc = 0x3c9904u;
    ctx->pc = 0x3C9908u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9908:
    // 0x3c9908: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9910u;
}
