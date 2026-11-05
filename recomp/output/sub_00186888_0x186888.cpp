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

// Function: sub_00186888
// Address: 0x186888 - 0x186898
void sub_00186888_0x186888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186888_0x186888");
#endif

    ctx->pc = 0x186888u;

    // 0x186888: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x186888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18688c: 0x3e00008  jr          $ra
    ctx->pc = 0x18688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18688Cu;
        // 0x186890: 0x8c620ff4  lw          $v0, 0xFF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186894u;
    // 0x186894: 0x0  nop
    ctx->pc = 0x186894u;
    // NOP
    ctx->pc = 0x186898u;
}
