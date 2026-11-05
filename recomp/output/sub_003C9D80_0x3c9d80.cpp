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

// Function: sub_003C9D80
// Address: 0x3c9d80 - 0x3c9d90
void sub_003C9D80_0x3c9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9D80_0x3c9d80");
#endif

    switch (ctx->pc) {
        case 0x3c9d88u: goto label_3c9d88;
        default: break;
    }

    ctx->pc = 0x3c9d80u;

    // 0x3c9d80: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3c9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3c9d84: 0xc  syscall     0
    ctx->pc = 0x3c9d84u;
    ctx->pc = 0x3C9D88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d88:
    // 0x3c9d88: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D90u;
}
