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

// Function: sub_003177F0
// Address: 0x3177f0 - 0x317898
void sub_003177F0_0x3177f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003177F0_0x3177f0");
#endif

    switch (ctx->pc) {
        case 0x3177f0u: goto label_3177f0;
        case 0x3177f4u: goto label_3177f4;
        case 0x3177f8u: goto label_3177f8;
        case 0x3177fcu: goto label_3177fc;
        case 0x317800u: goto label_317800;
        case 0x317804u: goto label_317804;
        case 0x317808u: goto label_317808;
        case 0x31780cu: goto label_31780c;
        case 0x317810u: goto label_317810;
        case 0x317814u: goto label_317814;
        case 0x317818u: goto label_317818;
        case 0x31781cu: goto label_31781c;
        case 0x317820u: goto label_317820;
        case 0x317824u: goto label_317824;
        case 0x317828u: goto label_317828;
        case 0x31782cu: goto label_31782c;
        case 0x317830u: goto label_317830;
        case 0x317834u: goto label_317834;
        case 0x317838u: goto label_317838;
        case 0x31783cu: goto label_31783c;
        case 0x317840u: goto label_317840;
        case 0x317844u: goto label_317844;
        case 0x317848u: goto label_317848;
        case 0x31784cu: goto label_31784c;
        case 0x317850u: goto label_317850;
        case 0x317854u: goto label_317854;
        case 0x317858u: goto label_317858;
        case 0x31785cu: goto label_31785c;
        case 0x317860u: goto label_317860;
        case 0x317864u: goto label_317864;
        case 0x317868u: goto label_317868;
        case 0x31786cu: goto label_31786c;
        case 0x317870u: goto label_317870;
        case 0x317874u: goto label_317874;
        case 0x317878u: goto label_317878;
        case 0x31787cu: goto label_31787c;
        case 0x317880u: goto label_317880;
        case 0x317884u: goto label_317884;
        case 0x317888u: goto label_317888;
        case 0x31788cu: goto label_31788c;
        case 0x317890u: goto label_317890;
        case 0x317894u: goto label_317894;
        default: break;
    }

    ctx->pc = 0x3177f0u;

label_3177f0:
    // 0x3177f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3177f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3177f4:
    // 0x3177f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3177f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3177f8:
    // 0x3177f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3177f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3177fc:
    // 0x3177fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3177fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317800:
    // 0x317800: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x317800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_317804:
    // 0x317804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x317804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_317808:
    // 0x317808: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x317808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_31780c:
    // 0x31780c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31780cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_317810:
    // 0x317810: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x317810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_317814:
    // 0x317814: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x317814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_317818:
    // 0x317818: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_31781c:
    if (ctx->pc == 0x31781Cu) {
        ctx->pc = 0x31781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317818u;
        // 0x31781c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317820u;
        goto label_317820;
    }
    ctx->pc = 0x317818u;
    {
        const bool branch_taken_0x317818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317818u;
        // 0x31781c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317818) {
            ctx->pc = 0x317824u;
            goto label_317824;
        }
    }
    ctx->pc = 0x317820u;
label_317820:
    // 0x317820: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x317820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317824:
    // 0x317824: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
label_317828:
    if (ctx->pc == 0x317828u) {
        ctx->pc = 0x317828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317824u;
        // 0x317828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31782Cu;
        goto label_31782c;
    }
    ctx->pc = 0x317824u;
    {
        const bool branch_taken_0x317824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x317824) {
            ctx->pc = 0x317828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317824u;
            // 0x317828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317880u;
            goto label_317880;
        }
    }
    ctx->pc = 0x31782Cu;
label_31782c:
    // 0x31782c: 0x0  nop
    ctx->pc = 0x31782cu;
    // NOP
label_317830:
    // 0x317830: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_317834:
    if (ctx->pc == 0x317834u) {
        ctx->pc = 0x317834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317830u;
        // 0x317834: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317838u;
        goto label_317838;
    }
    ctx->pc = 0x317830u;
    {
        const bool branch_taken_0x317830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x317834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317830u;
        // 0x317834: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317830) {
            ctx->pc = 0x317848u;
            goto label_317848;
        }
    }
    ctx->pc = 0x317838u;
label_317838:
    // 0x317838: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x317838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_31783c:
    // 0x31783c: 0x40f809  jalr        $v0
label_317840:
    if (ctx->pc == 0x317840u) {
        ctx->pc = 0x317840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31783Cu;
        // 0x317840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317844u;
        goto label_317844;
    }
    ctx->pc = 0x31783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317844u);
        ctx->pc = 0x317840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31783Cu;
        // 0x317840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31783Cu, 0x317844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317844u;
label_317844:
    // 0x317844: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x317844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_317848:
    // 0x317848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x317848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31784c:
    // 0x31784c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x31784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_317850:
    // 0x317850: 0x40f809  jalr        $v0
label_317854:
    if (ctx->pc == 0x317854u) {
        ctx->pc = 0x317854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317850u;
        // 0x317854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317858u;
        goto label_317858;
    }
    ctx->pc = 0x317850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317858u);
        ctx->pc = 0x317854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317850u;
        // 0x317854: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317850u, 0x317858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317858u;
label_317858:
    // 0x317858: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_31785c:
    // 0x31785c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x31785cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_317860:
    // 0x317860: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_317864:
    if (ctx->pc == 0x317864u) {
        ctx->pc = 0x317864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317860u;
        // 0x317864: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317868u;
        goto label_317868;
    }
    ctx->pc = 0x317860u;
    {
        const bool branch_taken_0x317860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x317864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317860u;
        // 0x317864: 0x24620004  addiu       $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317860) {
            ctx->pc = 0x317874u;
            goto label_317874;
        }
    }
    ctx->pc = 0x317868u;
label_317868:
    // 0x317868: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_31786c:
    if (ctx->pc == 0x31786Cu) {
        ctx->pc = 0x31786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317868u;
        // 0x31786c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317870u;
        goto label_317870;
    }
    ctx->pc = 0x317868u;
    {
        const bool branch_taken_0x317868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x31786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317868u;
        // 0x31786c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317868) {
            ctx->pc = 0x317874u;
            goto label_317874;
        }
    }
    ctx->pc = 0x317870u;
label_317870:
    // 0x317870: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x317870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_317874:
    // 0x317874: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
label_317878:
    if (ctx->pc == 0x317878u) {
        ctx->pc = 0x31787Cu;
        goto label_31787c;
    }
    ctx->pc = 0x317874u;
    {
        const bool branch_taken_0x317874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x317874) {
            ctx->pc = 0x317830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317830;
        }
    }
    ctx->pc = 0x31787Cu;
label_31787c:
    // 0x31787c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31787cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_317880:
    // 0x317880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x317880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_317884:
    // 0x317884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x317884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_317888:
    // 0x317888: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x317888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31788c:
    // 0x31788c: 0x3e00008  jr          $ra
label_317890:
    if (ctx->pc == 0x317890u) {
        ctx->pc = 0x317890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31788Cu;
        // 0x317890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317894u;
        goto label_317894;
    }
    ctx->pc = 0x31788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31788Cu;
        // 0x317890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317894u;
label_317894:
    // 0x317894: 0x0  nop
    ctx->pc = 0x317894u;
    // NOP
    ctx->pc = 0x317898u;
}
