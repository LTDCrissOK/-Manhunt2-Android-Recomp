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

// Function: sub_00118530
// Address: 0x118530 - 0x118550
void sub_00118530_0x118530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118530_0x118530");
#endif

    ctx->pc = 0x118530u;

    // 0x118530: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x118530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118534: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x118534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x118538: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x118538u;
    {
        const bool branch_taken_0x118538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x118538) {
            ctx->pc = 0x11853Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118538u;
            // 0x11853c: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118548u;
            goto label_118548;
        }
    }
    ctx->pc = 0x118540u;
    // 0x118540: 0x3e00008  jr          $ra
    ctx->pc = 0x118540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118540u;
        // 0x118544: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118548u;
label_118548:
    // 0x118548: 0x3e00008  jr          $ra
    ctx->pc = 0x118548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118548u;
        // 0x11854c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118550u;
}
