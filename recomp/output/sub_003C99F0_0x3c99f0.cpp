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

// Function: sub_003C99F0
// Address: 0x3c99f0 - 0x3c9a40
void sub_003C99F0_0x3c99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C99F0_0x3c99f0");
#endif

    switch (ctx->pc) {
        case 0x3c99f8u: goto label_3c99f8;
        case 0x3c9a08u: goto label_3c9a08;
        case 0x3c9a18u: goto label_3c9a18;
        case 0x3c9a28u: goto label_3c9a28;
        case 0x3c9a38u: goto label_3c9a38;
        default: break;
    }

    ctx->pc = 0x3c99f0u;

    // 0x3c99f0: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x3c99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3c99f4: 0xc  syscall     0
    ctx->pc = 0x3c99f4u;
    ctx->pc = 0x3C99F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c99f8:
    // 0x3c99f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C99F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C99F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A00u;
    // 0x3c9a00: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x3c9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x3c9a04: 0xc  syscall     0
    ctx->pc = 0x3c9a04u;
    ctx->pc = 0x3C9A08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a08:
    // 0x3c9a08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A10u;
    // 0x3c9a10: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x3c9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3c9a14: 0xc  syscall     0
    ctx->pc = 0x3c9a14u;
    ctx->pc = 0x3C9A18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a18:
    // 0x3c9a18: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A20u;
    // 0x3c9a20: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x3c9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x3c9a24: 0xc  syscall     0
    ctx->pc = 0x3c9a24u;
    ctx->pc = 0x3C9A28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a28:
    // 0x3c9a28: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A30u;
    // 0x3c9a30: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x3c9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3c9a34: 0xc  syscall     0
    ctx->pc = 0x3c9a34u;
    ctx->pc = 0x3C9A38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a38:
    // 0x3c9a38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A40u;
}
