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

// Function: sub_003D0160
// Address: 0x3d0160 - 0x3d0178
void sub_003D0160_0x3d0160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0160_0x3d0160");
#endif

    switch (ctx->pc) {
        case 0x3d0168u: goto label_3d0168;
        default: break;
    }

    ctx->pc = 0x3d0160u;

    // 0x3d0160: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x3d0160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x3d0164: 0xc  syscall     0
    ctx->pc = 0x3d0164u;
    ctx->pc = 0x3D0168u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d0168:
    // 0x3d0168: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0170u;
    // 0x3d0170: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3d0170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d0174: 0x0  nop
    ctx->pc = 0x3d0174u;
    // NOP
    ctx->pc = 0x3d0178u;
}
