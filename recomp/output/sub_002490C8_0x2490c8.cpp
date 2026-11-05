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

// Function: sub_002490C8
// Address: 0x2490c8 - 0x2490f8
void sub_002490C8_0x2490c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002490C8_0x2490c8");
#endif

    ctx->pc = 0x2490c8u;

    // 0x2490c8: 0x8c830418  lw          $v1, 0x418($a0)
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1048)));
    // 0x2490cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2490ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2490d0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2490D0u;
    {
        const bool branch_taken_0x2490d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2490D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490D0u;
        // 0x2490d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490d0) {
            ctx->pc = 0x2490ECu;
            goto label_2490ec;
        }
    }
    ctx->pc = 0x2490D8u;
    // 0x2490d8: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x2490d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x2490dc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2490dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2490e0: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x2490e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
    // 0x2490e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2490e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2490e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2490e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2490ec:
    // 0x2490ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2490ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2490F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490ECu;
        // 0x2490f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2490ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2490F4u;
    // 0x2490f4: 0x0  nop
    ctx->pc = 0x2490f4u;
    // NOP
    ctx->pc = 0x2490f8u;
}
