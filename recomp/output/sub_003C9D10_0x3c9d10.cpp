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

// Function: sub_003C9D10
// Address: 0x3c9d10 - 0x3c9d40
void sub_003C9D10_0x3c9d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9D10_0x3c9d10");
#endif

    switch (ctx->pc) {
        case 0x3c9d18u: goto label_3c9d18;
        case 0x3c9d28u: goto label_3c9d28;
        case 0x3c9d38u: goto label_3c9d38;
        default: break;
    }

    ctx->pc = 0x3c9d10u;

    // 0x3c9d10: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x3c9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x3c9d14: 0xc  syscall     0
    ctx->pc = 0x3c9d14u;
    ctx->pc = 0x3C9D18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d18:
    // 0x3c9d18: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D20u;
    // 0x3c9d20: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3c9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3c9d24: 0xc  syscall     0
    ctx->pc = 0x3c9d24u;
    ctx->pc = 0x3C9D28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d28:
    // 0x3c9d28: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D30u;
    // 0x3c9d30: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x3c9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x3c9d34: 0xc  syscall     0
    ctx->pc = 0x3c9d34u;
    ctx->pc = 0x3C9D38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d38:
    // 0x3c9d38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D40u;
}
