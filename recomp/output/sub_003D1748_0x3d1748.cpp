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

// Function: sub_003D1748
// Address: 0x3d1748 - 0x3d1758
void sub_003D1748_0x3d1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1748_0x3d1748");
#endif

    switch (ctx->pc) {
        case 0x3d1750u: goto label_3d1750;
        default: break;
    }

    ctx->pc = 0x3d1748u;

    // 0x3d1748: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x3d1748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x3d174c: 0xc  syscall     0
    ctx->pc = 0x3d174cu;
    ctx->pc = 0x3D1750u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d1750:
    // 0x3d1750: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1758u;
}
