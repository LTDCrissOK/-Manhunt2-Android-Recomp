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

// Function: sub_003C9D60
// Address: 0x3c9d60 - 0x3c9d70
void sub_003C9D60_0x3c9d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9D60_0x3c9d60");
#endif

    switch (ctx->pc) {
        case 0x3c9d68u: goto label_3c9d68;
        default: break;
    }

    ctx->pc = 0x3c9d60u;

    // 0x3c9d60: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x3c9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x3c9d64: 0xc  syscall     0
    ctx->pc = 0x3c9d64u;
    ctx->pc = 0x3C9D68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d68:
    // 0x3c9d68: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D70u;
}
