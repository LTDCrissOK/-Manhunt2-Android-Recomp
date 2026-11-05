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

// Function: sub_003C99D0
// Address: 0x3c99d0 - 0x3c99e0
void sub_003C99D0_0x3c99d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C99D0_0x3c99d0");
#endif

    switch (ctx->pc) {
        case 0x3c99d8u: goto label_3c99d8;
        default: break;
    }

    ctx->pc = 0x3c99d0u;

    // 0x3c99d0: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x3c99d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x3c99d4: 0xc  syscall     0
    ctx->pc = 0x3c99d4u;
    ctx->pc = 0x3C99D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c99d8:
    // 0x3c99d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C99D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C99D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C99E0u;
}
