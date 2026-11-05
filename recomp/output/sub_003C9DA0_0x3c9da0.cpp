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

// Function: sub_003C9DA0
// Address: 0x3c9da0 - 0x3c9db0
void sub_003C9DA0_0x3c9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9DA0_0x3c9da0");
#endif

    switch (ctx->pc) {
        case 0x3c9da8u: goto label_3c9da8;
        default: break;
    }

    ctx->pc = 0x3c9da0u;

    // 0x3c9da0: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x3c9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x3c9da4: 0xc  syscall     0
    ctx->pc = 0x3c9da4u;
    ctx->pc = 0x3C9DA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9da8:
    // 0x3c9da8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9DB0u;
}
