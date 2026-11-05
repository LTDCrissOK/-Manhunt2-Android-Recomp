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

// Function: sub_002B97F0
// Address: 0x2b97f0 - 0x2b9828
void sub_002B97F0_0x2b97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97F0_0x2b97f0");
#endif

    ctx->pc = 0x2b97f0u;

    // 0x2b97f0: 0x24a2fffc  addiu       $v0, $a1, -0x4
    ctx->pc = 0x2b97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x2b97f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b97f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b97f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B97F8u;
    {
        const bool branch_taken_0x2b97f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97F8u;
        // 0x2b97fc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97f8) {
            ctx->pc = 0x2B9818u;
            goto label_2b9818;
        }
    }
    ctx->pc = 0x2B9800u;
    // 0x2b9800: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9800u;
    {
        const bool branch_taken_0x2b9800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9800u;
        // 0x2b9804: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9800) {
            ctx->pc = 0x2B9818u;
            goto label_2b9818;
        }
    }
    ctx->pc = 0x2B9808u;
    // 0x2b9808: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9808u;
    {
        const bool branch_taken_0x2b9808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9808u;
        // 0x2b980c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9808) {
            ctx->pc = 0x2B9818u;
            goto label_2b9818;
        }
    }
    ctx->pc = 0x2B9810u;
    // 0x2b9810: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B9810u;
    {
        const bool branch_taken_0x2b9810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9810) {
            ctx->pc = 0x2B9820u;
            goto label_2b9820;
        }
    }
    ctx->pc = 0x2B9818u;
label_2b9818:
    // 0x2b9818: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9818u;
        // 0x2b981c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9820u;
label_2b9820:
    // 0x2b9820: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9820u;
        // 0x2b9824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9828u;
}
