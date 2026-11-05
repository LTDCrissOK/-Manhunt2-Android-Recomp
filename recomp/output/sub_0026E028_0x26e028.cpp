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

// Function: sub_0026E028
// Address: 0x26e028 - 0x26e080
void sub_0026E028_0x26e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E028_0x26e028");
#endif

    switch (ctx->pc) {
        case 0x26e038u: goto label_26e038;
        default: break;
    }

    ctx->pc = 0x26e028u;

    // 0x26e028: 0x8c830264  lw          $v1, 0x264($a0)
    ctx->pc = 0x26e028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x26e02c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26e030: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26E030u;
    {
        const bool branch_taken_0x26e030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E030u;
        // 0x26e034: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e030) {
            ctx->pc = 0x26E058u;
            goto label_26e058;
        }
    }
    ctx->pc = 0x26E038u;
label_26e038:
    // 0x26e038: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E038u;
    {
        const bool branch_taken_0x26e038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x26e038) {
            ctx->pc = 0x26E048u;
            goto label_26e048;
        }
    }
    ctx->pc = 0x26E040u;
    // 0x26e040: 0x3e00008  jr          $ra
    ctx->pc = 0x26E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E040u;
        // 0x26e044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E048u;
label_26e048:
    // 0x26e048: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E048u;
    {
        const bool branch_taken_0x26e048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e048) {
            ctx->pc = 0x26E04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E048u;
            // 0x26e04c: 0x8c860264  lw          $a2, 0x264($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E05Cu;
            goto label_26e05c;
        }
    }
    ctx->pc = 0x26E050u;
    // 0x26e050: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26e050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26e054: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x26e054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_26e058:
    // 0x26e058: 0x8c860264  lw          $a2, 0x264($a0)
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
label_26e05c:
    // 0x26e05c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x26e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26e060: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E060u;
    {
        const bool branch_taken_0x26e060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E060u;
        // 0x26e064: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e060) {
            ctx->pc = 0x26E06Cu;
            goto label_26e06c;
        }
    }
    ctx->pc = 0x26E068u;
    // 0x26e068: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26e06c:
    // 0x26e06c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x26E06Cu;
    {
        const bool branch_taken_0x26e06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e06c) {
            ctx->pc = 0x26E038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e038;
        }
    }
    ctx->pc = 0x26E074u;
    // 0x26e074: 0x3e00008  jr          $ra
    ctx->pc = 0x26E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E074u;
        // 0x26e078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E07Cu;
    // 0x26e07c: 0x0  nop
    ctx->pc = 0x26e07cu;
    // NOP
    ctx->pc = 0x26e080u;
}
