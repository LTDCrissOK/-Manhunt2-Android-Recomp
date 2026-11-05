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

// Function: sub_003C9830
// Address: 0x3c9830 - 0x3c9850
void sub_003C9830_0x3c9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9830_0x3c9830");
#endif

    switch (ctx->pc) {
        case 0x3c9838u: goto label_3c9838;
        case 0x3c9848u: goto label_3c9848;
        default: break;
    }

    ctx->pc = 0x3c9830u;

    // 0x3c9830: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x3c9830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3c9834: 0xc  syscall     0
    ctx->pc = 0x3c9834u;
    ctx->pc = 0x3C9838u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9838:
    // 0x3c9838: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9840u;
    // 0x3c9840: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x3c9840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
    // 0x3c9844: 0xc  syscall     0
    ctx->pc = 0x3c9844u;
    ctx->pc = 0x3C9848u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9848:
    // 0x3c9848: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9850u;
}
