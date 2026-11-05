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

// Function: sub_003C9E10
// Address: 0x3c9e10 - 0x3c9e20
void sub_003C9E10_0x3c9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9E10_0x3c9e10");
#endif

    switch (ctx->pc) {
        case 0x3c9e18u: goto label_3c9e18;
        default: break;
    }

    ctx->pc = 0x3c9e10u;

    // 0x3c9e10: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x3c9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x3c9e14: 0xc  syscall     0
    ctx->pc = 0x3c9e14u;
    ctx->pc = 0x3C9E18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9e18:
    // 0x3c9e18: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9E20u;
}
