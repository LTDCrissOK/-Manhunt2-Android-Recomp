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

// Function: sub_002D3DF0
// Address: 0x2d3df0 - 0x2d3e00
void sub_002D3DF0_0x2d3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3DF0_0x2d3df0");
#endif

    ctx->pc = 0x2d3df0u;

    // 0x2d3df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3df4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2d3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2d3df8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DF8u;
        // 0x2d3dfc: 0xa082007c  sb          $v0, 0x7C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3E00u;
}
