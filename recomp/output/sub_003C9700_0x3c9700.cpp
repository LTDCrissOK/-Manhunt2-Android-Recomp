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

// Function: sub_003C9700
// Address: 0x3c9700 - 0x3c9710
void sub_003C9700_0x3c9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9700_0x3c9700");
#endif

    switch (ctx->pc) {
        case 0x3c9708u: goto label_3c9708;
        default: break;
    }

    ctx->pc = 0x3c9700u;

    // 0x3c9700: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3c9700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3c9704: 0xc  syscall     0
    ctx->pc = 0x3c9704u;
    ctx->pc = 0x3C9708u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9708:
    // 0x3c9708: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9710u;
}
