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

// Function: sub_002A6DF0
// Address: 0x2a6df0 - 0x2a6e00
void sub_002A6DF0_0x2a6df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6DF0_0x2a6df0");
#endif

    ctx->pc = 0x2a6df0u;

    // 0x2a6df0: 0xac8002b8  sw          $zero, 0x2B8($a0)
    ctx->pc = 0x2a6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 0));
    // 0x2a6df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6DF4u;
        // 0x2a6df8: 0xac8002b4  sw          $zero, 0x2B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6DFCu;
    // 0x2a6dfc: 0x0  nop
    ctx->pc = 0x2a6dfcu;
    // NOP
    ctx->pc = 0x2a6e00u;
}
