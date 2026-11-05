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

// Function: sub_00148408
// Address: 0x148408 - 0x148418
void sub_00148408_0x148408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148408_0x148408");
#endif

    ctx->pc = 0x148408u;

    // 0x148408: 0x7c8006b0  sq          $zero, 0x6B0($a0)
    ctx->pc = 0x148408u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1712), GPR_VEC(ctx, 0));
    // 0x14840c: 0x3e00008  jr          $ra
    ctx->pc = 0x14840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14840Cu;
        // 0x148410: 0xac8006c0  sw          $zero, 0x6C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148414u;
    // 0x148414: 0x0  nop
    ctx->pc = 0x148414u;
    // NOP
    ctx->pc = 0x148418u;
}
