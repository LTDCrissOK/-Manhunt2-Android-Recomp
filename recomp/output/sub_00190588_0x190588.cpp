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

// Function: sub_00190588
// Address: 0x190588 - 0x190670
void sub_00190588_0x190588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190588_0x190588");
#endif

    switch (ctx->pc) {
        case 0x1905b0u: goto label_1905b0;
        default: break;
    }

    ctx->pc = 0x190588u;

    // 0x190588: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190588u;
    {
        const bool branch_taken_0x190588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x190588) {
            ctx->pc = 0x19058Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190588u;
            // 0x19058c: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19059Cu;
            goto label_19059c;
        }
    }
    ctx->pc = 0x190590u;
    // 0x190590: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x190590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x190594: 0x3e00008  jr          $ra
    ctx->pc = 0x190594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190594u;
        // 0x190598: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19059Cu;
label_19059c:
    // 0x19059c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x19059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1905a0: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x1905a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x1905a4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1905a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1905a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1905A8u;
    {
        const bool branch_taken_0x1905a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905A8u;
        // 0x1905ac: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905a8) {
            ctx->pc = 0x1905C0u;
            goto label_1905c0;
        }
    }
    ctx->pc = 0x1905B0u;
label_1905b0:
    // 0x1905b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1905B0u;
    {
        const bool branch_taken_0x1905b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905b0) {
            ctx->pc = 0x1905B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1905B0u;
            // 0x1905b4: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1905C4u;
            goto label_1905c4;
        }
    }
    ctx->pc = 0x1905B8u;
    // 0x1905b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1905bc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1905bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1905c0:
    // 0x1905c0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1905c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_1905c4:
    // 0x1905c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1905c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905c8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1905cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1905CCu;
    {
        const bool branch_taken_0x1905cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905CCu;
        // 0x1905d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905cc) {
            ctx->pc = 0x1905D8u;
            goto label_1905d8;
        }
    }
    ctx->pc = 0x1905D4u;
    // 0x1905d4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1905d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1905d8:
    // 0x1905d8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1905D8u;
    {
        const bool branch_taken_0x1905d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905d8) {
            ctx->pc = 0x1905DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1905D8u;
            // 0x1905dc: 0x8c830050  lw          $v1, 0x50($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1905F4u;
            goto label_1905f4;
        }
    }
    ctx->pc = 0x1905E0u;
    // 0x1905e0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1905e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1905e4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1905E4u;
    {
        const bool branch_taken_0x1905e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1905e4) {
            ctx->pc = 0x1905B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1905b0;
        }
    }
    ctx->pc = 0x1905ECu;
    // 0x1905ec: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x1905ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x1905f0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1905f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1905f4:
    // 0x1905f4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1905F4u;
    {
        const bool branch_taken_0x1905f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1905F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905F4u;
        // 0x1905f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905f4) {
            ctx->pc = 0x19061Cu;
            goto label_19061c;
        }
    }
    ctx->pc = 0x1905FCu;
    // 0x1905fc: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x190600: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x190600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x190604: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190604u;
    {
        const bool branch_taken_0x190604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190604u;
        // 0x190608: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190604) {
            ctx->pc = 0x190610u;
            goto label_190610;
        }
    }
    ctx->pc = 0x19060Cu;
    // 0x19060c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19060cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190610:
    // 0x190610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190614: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x190614u;
    {
        const bool branch_taken_0x190614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x190614) {
            ctx->pc = 0x190618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190614u;
            // 0x190618: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19061Cu;
            goto label_19061c;
        }
    }
    ctx->pc = 0x19061Cu;
label_19061c:
    // 0x19061c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x19061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x190620: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x190620u;
    {
        const bool branch_taken_0x190620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x190624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190620u;
        // 0x190624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190620) {
            ctx->pc = 0x190650u;
            goto label_190650;
        }
    }
    ctx->pc = 0x190628u;
    // 0x190628: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x190628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19062c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x19062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x190630: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190630u;
    {
        const bool branch_taken_0x190630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190630u;
        // 0x190634: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190630) {
            ctx->pc = 0x19063Cu;
            goto label_19063c;
        }
    }
    ctx->pc = 0x190638u;
    // 0x190638: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x190638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19063c:
    // 0x19063c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190640: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190640u;
    {
        const bool branch_taken_0x190640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x190640) {
            ctx->pc = 0x190644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190640u;
            // 0x190644: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190654u;
            goto label_190654;
        }
    }
    ctx->pc = 0x190648u;
    // 0x190648: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19064c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x19064cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_190650:
    // 0x190650: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_190654:
    // 0x190654: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190654u;
    {
        const bool branch_taken_0x190654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190654) {
            ctx->pc = 0x190658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190654u;
            // 0x190658: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190668u;
            goto label_190668;
        }
    }
    ctx->pc = 0x19065Cu;
    // 0x19065c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x19065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x190660: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x190660u;
    {
        const bool branch_taken_0x190660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190660) {
            ctx->pc = 0x190664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190660u;
            // 0x190664: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190668u;
            goto label_190668;
        }
    }
    ctx->pc = 0x190668u;
label_190668:
    // 0x190668: 0x3e00008  jr          $ra
    ctx->pc = 0x190668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190668u;
        // 0x19066c: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190670u;
}
