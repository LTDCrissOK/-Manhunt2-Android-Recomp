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

// Function: sub_001BEAD0
// Address: 0x1bead0 - 0x1beae8
void sub_001BEAD0_0x1bead0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEAD0_0x1bead0");
#endif

    ctx->pc = 0x1bead0u;

    // 0x1bead0: 0x8c830314  lw          $v1, 0x314($a0)
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 788)));
    // 0x1bead4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEAD4u;
    {
        const bool branch_taken_0x1bead4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAD4u;
        // 0x1bead8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bead4) {
            ctx->pc = 0x1BEAE0u;
            goto label_1beae0;
        }
    }
    ctx->pc = 0x1BEADCu;
    // 0x1beadc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1beadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1beae0:
    // 0x1beae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAE8u;
}
