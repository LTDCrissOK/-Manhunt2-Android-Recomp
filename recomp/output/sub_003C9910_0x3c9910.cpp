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

// Function: sub_003C9910
// Address: 0x3c9910 - 0x3c9930
void sub_003C9910_0x3c9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9910_0x3c9910");
#endif

    switch (ctx->pc) {
        case 0x3c9918u: goto label_3c9918;
        case 0x3c9928u: goto label_3c9928;
        default: break;
    }

    ctx->pc = 0x3c9910u;

    // 0x3c9910: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x3c9910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3c9914: 0xc  syscall     0
    ctx->pc = 0x3c9914u;
    ctx->pc = 0x3C9918u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9918:
    // 0x3c9918: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9920u;
    // 0x3c9920: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x3c9920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x3c9924: 0xc  syscall     0
    ctx->pc = 0x3c9924u;
    ctx->pc = 0x3C9928u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9928:
    // 0x3c9928: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9930u;
}
