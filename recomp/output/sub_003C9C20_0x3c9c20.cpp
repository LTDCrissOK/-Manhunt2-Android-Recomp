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

// Function: sub_003C9C20
// Address: 0x3c9c20 - 0x3c9c70
void sub_003C9C20_0x3c9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9C20_0x3c9c20");
#endif

    switch (ctx->pc) {
        case 0x3c9c28u: goto label_3c9c28;
        case 0x3c9c38u: goto label_3c9c38;
        case 0x3c9c48u: goto label_3c9c48;
        case 0x3c9c58u: goto label_3c9c58;
        case 0x3c9c68u: goto label_3c9c68;
        default: break;
    }

    ctx->pc = 0x3c9c20u;

    // 0x3c9c20: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3c9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3c9c24: 0xc  syscall     0
    ctx->pc = 0x3c9c24u;
    ctx->pc = 0x3C9C28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c28:
    // 0x3c9c28: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C30u;
    // 0x3c9c30: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x3c9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3c9c34: 0xc  syscall     0
    ctx->pc = 0x3c9c34u;
    ctx->pc = 0x3C9C38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c38:
    // 0x3c9c38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C40u;
    // 0x3c9c40: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x3c9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x3c9c44: 0xc  syscall     0
    ctx->pc = 0x3c9c44u;
    ctx->pc = 0x3C9C48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c48:
    // 0x3c9c48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C50u;
    // 0x3c9c50: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x3c9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x3c9c54: 0xc  syscall     0
    ctx->pc = 0x3c9c54u;
    ctx->pc = 0x3C9C58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c58:
    // 0x3c9c58: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C60u;
    // 0x3c9c60: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x3c9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x3c9c64: 0xc  syscall     0
    ctx->pc = 0x3c9c64u;
    ctx->pc = 0x3C9C68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c68:
    // 0x3c9c68: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C70u;
}
