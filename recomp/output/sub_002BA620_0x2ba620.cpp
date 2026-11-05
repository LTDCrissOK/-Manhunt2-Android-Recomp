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

// Function: sub_002BA620
// Address: 0x2ba620 - 0x2ba660
void sub_002BA620_0x2ba620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA620_0x2ba620");
#endif

    switch (ctx->pc) {
        case 0x2ba638u: goto label_2ba638;
        default: break;
    }

    ctx->pc = 0x2ba620u;

    // 0x2ba620: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ba620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ba624: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA624u;
    {
        const bool branch_taken_0x2ba624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba624) {
            ctx->pc = 0x2BA658u;
            goto label_2ba658;
        }
    }
    ctx->pc = 0x2BA62Cu;
    // 0x2ba62c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ba62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ba630: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA630u;
    {
        const bool branch_taken_0x2ba630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA630u;
        // 0x2ba634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba630) {
            ctx->pc = 0x2BA658u;
            goto label_2ba658;
        }
    }
    ctx->pc = 0x2BA638u;
label_2ba638:
    // 0x2ba638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ba638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ba63c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ba63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ba640: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2ba640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ba644: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2ba644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ba648: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ba648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ba64c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2ba64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ba650: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BA650u;
    {
        const bool branch_taken_0x2ba650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA650u;
        // 0x2ba654: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba650) {
            ctx->pc = 0x2BA638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA658u;
label_2ba658:
    // 0x2ba658: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA660u;
}
