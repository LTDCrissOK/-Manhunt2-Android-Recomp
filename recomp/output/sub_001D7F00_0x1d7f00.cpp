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

// Function: sub_001D7F00
// Address: 0x1d7f00 - 0x1d7f20
void sub_001D7F00_0x1d7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7F00_0x1d7f00");
#endif

    ctx->pc = 0x1d7f00u;

    // 0x1d7f00: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d7f04: 0x8c629190  lw          $v0, -0x6E70($v1)
    ctx->pc = 0x1d7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9190u));
    // 0x1d7f08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7F08u;
    {
        const bool branch_taken_0x1d7f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f08) {
            ctx->pc = 0x1D7F18u;
            goto label_1d7f18;
        }
    }
    ctx->pc = 0x1D7F10u;
    // 0x1d7f10: 0xac609190  sw          $zero, -0x6E70($v1)
    ctx->pc = 0x1d7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939024), GPR_U32(ctx, 0));
    // 0x1d7f14: 0xac409194  sw          $zero, -0x6E6C($v0)
    ctx->pc = 0x1d7f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939028), GPR_U32(ctx, 0));
label_1d7f18:
    // 0x1d7f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F20u;
}
