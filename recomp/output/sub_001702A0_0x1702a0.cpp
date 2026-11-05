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

// Function: sub_001702A0
// Address: 0x1702a0 - 0x1702b4
void sub_001702A0_0x1702a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001702A0_0x1702a0");
#endif

    ctx->pc = 0x1702a0u;

    // 0x1702a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1702a4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1702a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1702a8: 0x90e30260  lbu         $v1, 0x260($a3)
    ctx->pc = 0x1702a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x1702ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1702ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1702ACu;
        // 0x1702b0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1702ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1702B4u;
}
