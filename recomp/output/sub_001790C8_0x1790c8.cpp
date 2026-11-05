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

// Function: sub_001790C8
// Address: 0x1790c8 - 0x1790f8
void sub_001790C8_0x1790c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001790C8_0x1790c8");
#endif

    ctx->pc = 0x1790c8u;

    // 0x1790c8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1790C8u;
    {
        const bool branch_taken_0x1790c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1790CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790C8u;
        // 0x1790cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790c8) {
            ctx->pc = 0x1790D8u;
            goto label_1790d8;
        }
    }
    ctx->pc = 0x1790D0u;
    // 0x1790d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1790D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790D0u;
        // 0x1790d4: 0xac860590  sw          $a2, 0x590($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1424), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1790D8u;
label_1790d8:
    // 0x1790d8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1790D8u;
    {
        const bool branch_taken_0x1790d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1790DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790D8u;
        // 0x1790dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790d8) {
            ctx->pc = 0x1790E8u;
            goto label_1790e8;
        }
    }
    ctx->pc = 0x1790E0u;
    // 0x1790e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1790E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790E0u;
        // 0x1790e4: 0xac86058c  sw          $a2, 0x58C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1790E8u;
label_1790e8:
    // 0x1790e8: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1790E8u;
    {
        const bool branch_taken_0x1790e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1790e8) {
            ctx->pc = 0x1790ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1790E8u;
            // 0x1790ec: 0xac860588  sw          $a2, 0x588($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790F0u;
            goto label_1790f0;
        }
    }
    ctx->pc = 0x1790F0u;
label_1790f0:
    // 0x1790f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1790F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1790F8u;
}
