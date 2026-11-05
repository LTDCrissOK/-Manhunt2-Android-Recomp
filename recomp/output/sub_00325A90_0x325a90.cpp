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

// Function: sub_00325A90
// Address: 0x325a90 - 0x325aa8
void sub_00325A90_0x325a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325A90_0x325a90");
#endif

    ctx->pc = 0x325a90u;

    // 0x325a90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325a94: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x325a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x325a98: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x325a98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x325a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x325A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A9Cu;
        // 0x325aa0: 0xac83be28  sw          $v1, -0x41D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294950440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325AA4u;
    // 0x325aa4: 0x0  nop
    ctx->pc = 0x325aa4u;
    // NOP
    ctx->pc = 0x325aa8u;
}
