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

// Function: sub_00118CC0
// Address: 0x118cc0 - 0x118cf8
void sub_00118CC0_0x118cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118CC0_0x118cc0");
#endif

    ctx->pc = 0x118cc0u;

    // 0x118cc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x118cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x118cc4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x118cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x118cc8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118CC8u;
    {
        const bool branch_taken_0x118cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x118CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CC8u;
        // 0x118ccc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118cc8) {
            ctx->pc = 0x118CE0u;
            goto label_118ce0;
        }
    }
    ctx->pc = 0x118CD0u;
    // 0x118cd0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x118CD0u;
    {
        const bool branch_taken_0x118cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x118cd0) {
            ctx->pc = 0x118CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118CD0u;
            // 0x118cd4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118CECu;
            goto label_118cec;
        }
    }
    ctx->pc = 0x118CD8u;
    // 0x118cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x118CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CE0u;
label_118ce0:
    // 0x118ce0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x118CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CE4u;
        // 0x118ce8: 0xac45001c  sw          $a1, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CECu;
label_118cec:
    // 0x118cec: 0x3e00008  jr          $ra
    ctx->pc = 0x118CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CECu;
        // 0x118cf0: 0xac450024  sw          $a1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118CF4u;
    // 0x118cf4: 0x0  nop
    ctx->pc = 0x118cf4u;
    // NOP
    ctx->pc = 0x118cf8u;
}
