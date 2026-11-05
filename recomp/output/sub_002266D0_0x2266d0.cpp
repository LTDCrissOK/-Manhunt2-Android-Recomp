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

// Function: sub_002266D0
// Address: 0x2266d0 - 0x2266f0
void sub_002266D0_0x2266d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266D0_0x2266d0");
#endif

    ctx->pc = 0x2266d0u;

    // 0x2266d0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2266D0u;
    {
        const bool branch_taken_0x2266d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2266d0) {
            ctx->pc = 0x2266D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2266D0u;
            // 0x2266d4: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2266E4u;
            goto label_2266e4;
        }
    }
    ctx->pc = 0x2266D8u;
    // 0x2266d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2266dc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2266dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2266e0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2266e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2266e4:
    // 0x2266e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2266e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2266e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2266E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266E8u;
        // 0x2266ec: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2266E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2266F0u;
}
