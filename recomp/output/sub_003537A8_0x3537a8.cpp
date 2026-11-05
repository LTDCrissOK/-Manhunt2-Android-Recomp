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

// Function: sub_003537A8
// Address: 0x3537a8 - 0x3537b8
void sub_003537A8_0x3537a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003537A8_0x3537a8");
#endif

    ctx->pc = 0x3537a8u;

    // 0x3537a8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3537a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3537ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3537acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3537b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3537B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3537B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537B0u;
        // 0x3537b4: 0xa062c510  sb          $v0, -0x3AF0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294952208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3537B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3537B8u;
}
