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

// Function: sub_003C9D40
// Address: 0x3c9d40 - 0x3c9d60
void sub_003C9D40_0x3c9d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9D40_0x3c9d40");
#endif

    switch (ctx->pc) {
        case 0x3c9d48u: goto label_3c9d48;
        case 0x3c9d58u: goto label_3c9d58;
        default: break;
    }

    ctx->pc = 0x3c9d40u;

    // 0x3c9d40: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x3c9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x3c9d44: 0xc  syscall     0
    ctx->pc = 0x3c9d44u;
    ctx->pc = 0x3C9D48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d48:
    // 0x3c9d48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D50u;
    // 0x3c9d50: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x3c9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
    // 0x3c9d54: 0xc  syscall     0
    ctx->pc = 0x3c9d54u;
    ctx->pc = 0x3C9D58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9d58:
    // 0x3c9d58: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9D60u;
}
