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

// Function: sub_00312368
// Address: 0x312368 - 0x312378
void sub_00312368_0x312368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312368_0x312368");
#endif

    ctx->pc = 0x312368u;

    // 0x312368: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x312368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x31236c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312370: 0x3e00008  jr          $ra
    ctx->pc = 0x312370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312370u;
        // 0x312374: 0xa0620038  sb          $v0, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312378u;
}
