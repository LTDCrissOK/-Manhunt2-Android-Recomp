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

// Function: sub_0035D8F8
// Address: 0x35d8f8 - 0x35d938
void sub_0035D8F8_0x35d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D8F8_0x35d8f8");
#endif

    ctx->pc = 0x35d8f8u;

    // 0x35d8f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d900: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d904: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D904u;
    {
        const bool branch_taken_0x35d904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D904u;
        // 0x35d908: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d904) {
            ctx->pc = 0x35D920u;
            goto label_35d920;
        }
    }
    ctx->pc = 0x35D90Cu;
    // 0x35d90c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d910: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D910u;
    {
        const bool branch_taken_0x35d910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D910u;
        // 0x35d914: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d910) {
            ctx->pc = 0x35D920u;
            goto label_35d920;
        }
    }
    ctx->pc = 0x35D918u;
    // 0x35d918: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35D918u;
    {
        const bool branch_taken_0x35d918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35d918) {
            ctx->pc = 0x35D924u;
            goto label_35d924;
        }
    }
    ctx->pc = 0x35D920u;
label_35d920:
    // 0x35d920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35d920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35d924:
    // 0x35d924: 0x3e00008  jr          $ra
    ctx->pc = 0x35D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D924u;
        // 0x35d928: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D92Cu;
    // 0x35d92c: 0x0  nop
    ctx->pc = 0x35d92cu;
    // NOP
    // 0x35d930: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35d930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x35d934: 0x0  nop
    ctx->pc = 0x35d934u;
    // NOP
    ctx->pc = 0x35d938u;
}
