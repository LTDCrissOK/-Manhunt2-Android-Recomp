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

// Function: sub_00148418
// Address: 0x148418 - 0x148428
void sub_00148418_0x148418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148418_0x148418");
#endif

    ctx->pc = 0x148418u;

    // 0x148418: 0x7c8006d0  sq          $zero, 0x6D0($a0)
    ctx->pc = 0x148418u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1744), GPR_VEC(ctx, 0));
    // 0x14841c: 0x3e00008  jr          $ra
    ctx->pc = 0x14841Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14841Cu;
        // 0x148420: 0xac8006e0  sw          $zero, 0x6E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14841Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148424u;
    // 0x148424: 0x0  nop
    ctx->pc = 0x148424u;
    // NOP
    ctx->pc = 0x148428u;
}
