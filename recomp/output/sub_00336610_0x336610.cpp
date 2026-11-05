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

// Function: sub_00336610
// Address: 0x336610 - 0x336690
void sub_00336610_0x336610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336610_0x336610");
#endif

    switch (ctx->pc) {
        case 0x33662cu: goto label_33662c;
        case 0x336648u: goto label_336648;
        default: break;
    }

    ctx->pc = 0x336610u;

    // 0x336610: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x336610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x336614: 0x24436ea0  addiu       $v1, $v0, 0x6EA0
    ctx->pc = 0x336614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28320));
    // 0x336618: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x336618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EA4u));
    // 0x33661c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33661Cu;
    {
        const bool branch_taken_0x33661c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33661Cu;
        // 0x336620: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33661c) {
            ctx->pc = 0x336634u;
            goto label_336634;
        }
    }
    ctx->pc = 0x336624u;
    // 0x336624: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336624u;
    {
        const bool branch_taken_0x336624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336624u;
        // 0x336628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336624) {
            ctx->pc = 0x336638u;
            goto label_336638;
        }
    }
    ctx->pc = 0x33662Cu;
label_33662c:
    // 0x33662c: 0x3e00008  jr          $ra
    ctx->pc = 0x33662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33662Cu;
        // 0x336630: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33662Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336634u;
label_336634:
    // 0x336634: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x336634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_336638:
    // 0x336638: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x336638u;
    {
        const bool branch_taken_0x336638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336638u;
        // 0x33663c: 0x3c06005b  lui         $a2, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336638) {
            ctx->pc = 0x336688u;
            goto label_336688;
        }
    }
    ctx->pc = 0x336640u;
    // 0x336640: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x336640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336644: 0x0  nop
    ctx->pc = 0x336644u;
    // NOP
label_336648:
    // 0x336648: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336648u;
    {
        const bool branch_taken_0x336648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336648u;
        // 0x33664c: 0x24c36ea0  addiu       $v1, $a2, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336648) {
            ctx->pc = 0x336660u;
            goto label_336660;
        }
    }
    ctx->pc = 0x336650u;
    // 0x336650: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x336650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336654: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x336654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x336658: 0x1083fff4  beq         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x336658u;
    {
        const bool branch_taken_0x336658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336658u;
        // 0x33665c: 0x24c36ea0  addiu       $v1, $a2, 0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336658) {
            ctx->pc = 0x33662Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33662c;
        }
    }
    ctx->pc = 0x336660u;
label_336660:
    // 0x336660: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x336660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x336664: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x336664u;
    {
        const bool branch_taken_0x336664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336664u;
        // 0x336668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336664) {
            ctx->pc = 0x336670u;
            goto label_336670;
        }
    }
    ctx->pc = 0x33666Cu;
    // 0x33666c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_336670:
    // 0x336670: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336670u;
    {
        const bool branch_taken_0x336670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336670) {
            ctx->pc = 0x336680u;
            goto label_336680;
        }
    }
    ctx->pc = 0x336678u;
    // 0x336678: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x336678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33667c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x33667cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_336680:
    // 0x336680: 0x54a0fff1  bnel        $a1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x336680u;
    {
        const bool branch_taken_0x336680 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x336680) {
            ctx->pc = 0x336684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336680u;
            // 0x336684: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336648;
        }
    }
    ctx->pc = 0x336688u;
label_336688:
    // 0x336688: 0x3e00008  jr          $ra
    ctx->pc = 0x336688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336688u;
        // 0x33668c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336690u;
}
