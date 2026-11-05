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

// Function: sub_001BEAE8
// Address: 0x1beae8 - 0x1beb10
void sub_001BEAE8_0x1beae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEAE8_0x1beae8");
#endif

    ctx->pc = 0x1beae8u;

    // 0x1beae8: 0x8c820314  lw          $v0, 0x314($a0)
    ctx->pc = 0x1beae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 788)));
    // 0x1beaec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEAECu;
    {
        const bool branch_taken_0x1beaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beaec) {
            ctx->pc = 0x1BEB08u;
            goto label_1beb08;
        }
    }
    ctx->pc = 0x1BEAF4u;
    // 0x1beaf4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1beaf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEAF8u;
    {
        const bool branch_taken_0x1beaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beaf8) {
            ctx->pc = 0x1BEB08u;
            goto label_1beb08;
        }
    }
    ctx->pc = 0x1BEB00u;
    // 0x1beb00: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB00u;
        // 0x1beb04: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEB08u;
label_1beb08:
    // 0x1beb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB08u;
        // 0x1beb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEB10u;
}
