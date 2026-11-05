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

// Function: sub_003C9A40
// Address: 0x3c9a40 - 0x3c9a50
void sub_003C9A40_0x3c9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9A40_0x3c9a40");
#endif

    switch (ctx->pc) {
        case 0x3c9a48u: goto label_3c9a48;
        default: break;
    }

    ctx->pc = 0x3c9a40u;

    // 0x3c9a40: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x3c9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3c9a44: 0xc  syscall     0
    ctx->pc = 0x3c9a44u;
    ctx->pc = 0x3C9A48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a48:
    // 0x3c9a48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A50u;
}
