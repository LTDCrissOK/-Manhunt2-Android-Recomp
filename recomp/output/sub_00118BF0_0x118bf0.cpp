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

// Function: sub_00118BF0
// Address: 0x118bf0 - 0x118c10
void sub_00118BF0_0x118bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118BF0_0x118bf0");
#endif

    ctx->pc = 0x118bf0u;

    // 0x118bf0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118bf4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x118bf8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118BF8u;
    {
        const bool branch_taken_0x118bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x118BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BF8u;
        // 0x118bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118bf8) {
            ctx->pc = 0x118C08u;
            goto label_118c08;
        }
    }
    ctx->pc = 0x118C00u;
    // 0x118c00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118c04: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x118c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_118c08:
    // 0x118c08: 0x3e00008  jr          $ra
    ctx->pc = 0x118C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C08u;
        // 0x118c0c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C10u;
}
