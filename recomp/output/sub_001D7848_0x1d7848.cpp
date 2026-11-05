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

// Function: sub_001D7848
// Address: 0x1d7848 - 0x1d7858
void sub_001D7848_0x1d7848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7848_0x1d7848");
#endif

    ctx->pc = 0x1d7848u;

    // 0x1d7848: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d784c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D784Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D784Cu;
        // 0x1d7850: 0xac44916c  sw          $a0, -0x6E94($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294938988), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D784Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7854u;
    // 0x1d7854: 0x0  nop
    ctx->pc = 0x1d7854u;
    // NOP
    ctx->pc = 0x1d7858u;
}
