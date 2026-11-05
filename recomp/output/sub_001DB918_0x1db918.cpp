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

// Function: sub_001DB918
// Address: 0x1db918 - 0x1db928
void sub_001DB918_0x1db918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB918_0x1db918");
#endif

    ctx->pc = 0x1db918u;

    // 0x1db918: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1db918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1db91c: 0x8c4394c8  lw          $v1, -0x6B38($v0)
    ctx->pc = 0x1db91cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F94C8u));
    // 0x1db920: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB920u;
        // 0x1db924: 0xaca300b0  sw          $v1, 0xB0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB928u;
}
