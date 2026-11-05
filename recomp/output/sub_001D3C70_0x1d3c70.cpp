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

// Function: sub_001D3C70
// Address: 0x1d3c70 - 0x1d3c88
void sub_001D3C70_0x1d3c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3C70_0x1d3c70");
#endif

    ctx->pc = 0x1d3c70u;

    // 0x1d3c70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d3c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c74: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d3c78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d3c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d3c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C7Cu;
        // 0x1d3c80: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C84u;
    // 0x1d3c84: 0x0  nop
    ctx->pc = 0x1d3c84u;
    // NOP
    ctx->pc = 0x1d3c88u;
}
