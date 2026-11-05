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

// Function: sub_001CBFB8
// Address: 0x1cbfb8 - 0x1cbfd0
void sub_001CBFB8_0x1cbfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBFB8_0x1cbfb8");
#endif

    ctx->pc = 0x1cbfb8u;

    // 0x1cbfb8: 0x8c83011c  lw          $v1, 0x11C($a0)
    ctx->pc = 0x1cbfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x1cbfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFBCu;
        // 0x1cbfc0: 0x8c620ff8  lw          $v0, 0xFF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBFC4u;
    // 0x1cbfc4: 0x0  nop
    ctx->pc = 0x1cbfc4u;
    // NOP
    // 0x1cbfc8: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x1cbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1cbfcc: 0x0  nop
    ctx->pc = 0x1cbfccu;
    // NOP
    ctx->pc = 0x1cbfd0u;
}
