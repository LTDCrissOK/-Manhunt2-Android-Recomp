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

// Function: sub_00132730
// Address: 0x132730 - 0x132778
void sub_00132730_0x132730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132730_0x132730");
#endif

    ctx->pc = 0x132730u;

    // 0x132730: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x132734: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132734u;
    {
        const bool branch_taken_0x132734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x132738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132734u;
        // 0x132738: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132734) {
            ctx->pc = 0x132744u;
            goto label_132744;
        }
    }
    ctx->pc = 0x13273Cu;
    // 0x13273c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13273Cu;
    {
        const bool branch_taken_0x13273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13273Cu;
        // 0x132740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13273c) {
            ctx->pc = 0x13276Cu;
            goto label_13276c;
        }
    }
    ctx->pc = 0x132744u;
label_132744:
    // 0x132744: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x132744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x132748: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x132748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13274c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13274Cu;
    {
        const bool branch_taken_0x13274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13274Cu;
        // 0x132750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13274c) {
            ctx->pc = 0x13276Cu;
            goto label_13276c;
        }
    }
    ctx->pc = 0x132754u;
    // 0x132754: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x132754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x132758: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132758u;
    {
        const bool branch_taken_0x132758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x132758) {
            ctx->pc = 0x13276Cu;
            goto label_13276c;
        }
    }
    ctx->pc = 0x132760u;
    // 0x132760: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x132760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x132764: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x132764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x132768: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x132768u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_13276c:
    // 0x13276c: 0x3e00008  jr          $ra
    ctx->pc = 0x13276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13276Cu;
        // 0x132770: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13276Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132774u;
    // 0x132774: 0x0  nop
    ctx->pc = 0x132774u;
    // NOP
    ctx->pc = 0x132778u;
}
