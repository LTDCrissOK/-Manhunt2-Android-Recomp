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

// Function: sub_003E2770
// Address: 0x3e2770 - 0x3e2780
void sub_003E2770_0x3e2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2770_0x3e2770");
#endif

    ctx->pc = 0x3e2770u;

    // 0x3e2770: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x3e2770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x3e2774: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2774u;
        // 0x3e2778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E277Cu;
    // 0x3e277c: 0x0  nop
    ctx->pc = 0x3e277cu;
    // NOP
    ctx->pc = 0x3e2780u;
}
