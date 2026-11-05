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

// Function: sub_002D3E00
// Address: 0x2d3e00 - 0x2d3e10
void sub_002D3E00_0x2d3e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3E00_0x2d3e00");
#endif

    ctx->pc = 0x2d3e00u;

    // 0x2d3e00: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2d3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2d3e04: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E04u;
        // 0x2d3e08: 0xa080007c  sb          $zero, 0x7C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3E0Cu;
    // 0x2d3e0c: 0x0  nop
    ctx->pc = 0x2d3e0cu;
    // NOP
    ctx->pc = 0x2d3e10u;
}
