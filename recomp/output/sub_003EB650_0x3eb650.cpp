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

// Function: sub_003EB650
// Address: 0x3eb650 - 0x3eb788
void sub_003EB650_0x3eb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB650_0x3eb650");
#endif

    switch (ctx->pc) {
        case 0x3eb650u: goto label_3eb650;
        case 0x3eb654u: goto label_3eb654;
        case 0x3eb658u: goto label_3eb658;
        case 0x3eb65cu: goto label_3eb65c;
        case 0x3eb660u: goto label_3eb660;
        case 0x3eb664u: goto label_3eb664;
        case 0x3eb668u: goto label_3eb668;
        case 0x3eb66cu: goto label_3eb66c;
        case 0x3eb670u: goto label_3eb670;
        case 0x3eb674u: goto label_3eb674;
        case 0x3eb678u: goto label_3eb678;
        case 0x3eb67cu: goto label_3eb67c;
        case 0x3eb680u: goto label_3eb680;
        case 0x3eb684u: goto label_3eb684;
        case 0x3eb688u: goto label_3eb688;
        case 0x3eb68cu: goto label_3eb68c;
        case 0x3eb690u: goto label_3eb690;
        case 0x3eb694u: goto label_3eb694;
        case 0x3eb698u: goto label_3eb698;
        case 0x3eb69cu: goto label_3eb69c;
        case 0x3eb6a0u: goto label_3eb6a0;
        case 0x3eb6a4u: goto label_3eb6a4;
        case 0x3eb6a8u: goto label_3eb6a8;
        case 0x3eb6acu: goto label_3eb6ac;
        case 0x3eb6b0u: goto label_3eb6b0;
        case 0x3eb6b4u: goto label_3eb6b4;
        case 0x3eb6b8u: goto label_3eb6b8;
        case 0x3eb6bcu: goto label_3eb6bc;
        case 0x3eb6c0u: goto label_3eb6c0;
        case 0x3eb6c4u: goto label_3eb6c4;
        case 0x3eb6c8u: goto label_3eb6c8;
        case 0x3eb6ccu: goto label_3eb6cc;
        case 0x3eb6d0u: goto label_3eb6d0;
        case 0x3eb6d4u: goto label_3eb6d4;
        case 0x3eb6d8u: goto label_3eb6d8;
        case 0x3eb6dcu: goto label_3eb6dc;
        case 0x3eb6e0u: goto label_3eb6e0;
        case 0x3eb6e4u: goto label_3eb6e4;
        case 0x3eb6e8u: goto label_3eb6e8;
        case 0x3eb6ecu: goto label_3eb6ec;
        case 0x3eb6f0u: goto label_3eb6f0;
        case 0x3eb6f4u: goto label_3eb6f4;
        case 0x3eb6f8u: goto label_3eb6f8;
        case 0x3eb6fcu: goto label_3eb6fc;
        case 0x3eb700u: goto label_3eb700;
        case 0x3eb704u: goto label_3eb704;
        case 0x3eb708u: goto label_3eb708;
        case 0x3eb70cu: goto label_3eb70c;
        case 0x3eb710u: goto label_3eb710;
        case 0x3eb714u: goto label_3eb714;
        case 0x3eb718u: goto label_3eb718;
        case 0x3eb71cu: goto label_3eb71c;
        case 0x3eb720u: goto label_3eb720;
        case 0x3eb724u: goto label_3eb724;
        case 0x3eb728u: goto label_3eb728;
        case 0x3eb72cu: goto label_3eb72c;
        case 0x3eb730u: goto label_3eb730;
        case 0x3eb734u: goto label_3eb734;
        case 0x3eb738u: goto label_3eb738;
        case 0x3eb73cu: goto label_3eb73c;
        case 0x3eb740u: goto label_3eb740;
        case 0x3eb744u: goto label_3eb744;
        case 0x3eb748u: goto label_3eb748;
        case 0x3eb74cu: goto label_3eb74c;
        case 0x3eb750u: goto label_3eb750;
        case 0x3eb754u: goto label_3eb754;
        case 0x3eb758u: goto label_3eb758;
        case 0x3eb75cu: goto label_3eb75c;
        case 0x3eb760u: goto label_3eb760;
        case 0x3eb764u: goto label_3eb764;
        case 0x3eb768u: goto label_3eb768;
        case 0x3eb76cu: goto label_3eb76c;
        case 0x3eb770u: goto label_3eb770;
        case 0x3eb774u: goto label_3eb774;
        case 0x3eb778u: goto label_3eb778;
        case 0x3eb77cu: goto label_3eb77c;
        case 0x3eb780u: goto label_3eb780;
        case 0x3eb784u: goto label_3eb784;
        default: break;
    }

    ctx->pc = 0x3eb650u;

label_3eb650:
    // 0x3eb650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb654:
    // 0x3eb654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb658:
    // 0x3eb658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb65c:
    // 0x3eb65c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb660:
    // 0x3eb660: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb664:
    // 0x3eb664: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb668:
    // 0x3eb668: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb66c:
    // 0x3eb66c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb670:
    if (ctx->pc == 0x3EB670u) {
        ctx->pc = 0x3EB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB66Cu;
        // 0x3eb670: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB674u;
        goto label_3eb674;
    }
    ctx->pc = 0x3EB66Cu;
    {
        const bool branch_taken_0x3eb66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB66Cu;
        // 0x3eb670: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb66c) {
            ctx->pc = 0x3EB6ECu;
            goto label_3eb6ec;
        }
    }
    ctx->pc = 0x3EB674u;
label_3eb674:
    // 0x3eb674: 0x0  nop
    ctx->pc = 0x3eb674u;
    // NOP
label_3eb678:
    // 0x3eb678: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb67c:
    // 0x3eb67c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb680:
    // 0x3eb680: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb684:
    if (ctx->pc == 0x3EB684u) {
        ctx->pc = 0x3EB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB680u;
        // 0x3eb684: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB688u;
        goto label_3eb688;
    }
    ctx->pc = 0x3EB680u;
    {
        const bool branch_taken_0x3eb680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb680) {
            ctx->pc = 0x3EB684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB680u;
            // 0x3eb684: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB6DCu;
            goto label_3eb6dc;
        }
    }
    ctx->pc = 0x3EB688u;
label_3eb688:
    // 0x3eb688: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb68c:
    // 0x3eb68c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb690:
    // 0x3eb690: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb694:
    // 0x3eb694: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb698:
    if (ctx->pc == 0x3EB698u) {
        ctx->pc = 0x3EB698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB694u;
        // 0x3eb698: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB69Cu;
        goto label_3eb69c;
    }
    ctx->pc = 0x3EB694u;
    {
        const bool branch_taken_0x3eb694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb694) {
            ctx->pc = 0x3EB698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB694u;
            // 0x3eb698: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB6C8u;
            goto label_3eb6c8;
        }
    }
    ctx->pc = 0x3EB69Cu;
label_3eb69c:
    // 0x3eb69c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb6a0:
    // 0x3eb6a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb6a4:
    // 0x3eb6a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb6a8:
    // 0x3eb6a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb6ac:
    // 0x3eb6ac: 0x40f809  jalr        $v0
label_3eb6b0:
    if (ctx->pc == 0x3EB6B0u) {
        ctx->pc = 0x3EB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6ACu;
        // 0x3eb6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6B4u;
        goto label_3eb6b4;
    }
    ctx->pc = 0x3EB6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB6B4u);
        ctx->pc = 0x3EB6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6ACu;
        // 0x3eb6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB6ACu, 0x3EB6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB6B4u;
label_3eb6b4:
    // 0x3eb6b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb6b8:
    // 0x3eb6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb6bc:
    // 0x3eb6bc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb6c0:
    if (ctx->pc == 0x3EB6C0u) {
        ctx->pc = 0x3EB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6BCu;
        // 0x3eb6c0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6C4u;
        goto label_3eb6c4;
    }
    ctx->pc = 0x3EB6BCu;
    {
        const bool branch_taken_0x3eb6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6BCu;
        // 0x3eb6c0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6bc) {
            ctx->pc = 0x3EB6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb6a0;
        }
    }
    ctx->pc = 0x3EB6C4u;
label_3eb6c4:
    // 0x3eb6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb6c8:
    // 0x3eb6c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb6cc:
    // 0x3eb6cc: 0xc0f528a  jal         func_3D4A28
label_3eb6d0:
    if (ctx->pc == 0x3EB6D0u) {
        ctx->pc = 0x3EB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6CCu;
        // 0x3eb6d0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6D4u;
        goto label_3eb6d4;
    }
    ctx->pc = 0x3EB6CCu;
    SET_GPR_U32(ctx, 31, 0x3EB6D4u);
    ctx->pc = 0x3EB6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB6CCu;
    // 0x3eb6d0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB6CCu, 0x3EB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB6D4u;
label_3eb6d4:
    // 0x3eb6d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb6d8:
    // 0x3eb6d8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb6dc:
    // 0x3eb6dc: 0xc0f5222  jal         func_3D4888
label_3eb6e0:
    if (ctx->pc == 0x3EB6E0u) {
        ctx->pc = 0x3EB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6DCu;
        // 0x3eb6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6E4u;
        goto label_3eb6e4;
    }
    ctx->pc = 0x3EB6DCu;
    SET_GPR_U32(ctx, 31, 0x3EB6E4u);
    ctx->pc = 0x3EB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB6DCu;
    // 0x3eb6e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB6DCu, 0x3EB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB6E4u;
label_3eb6e4:
    // 0x3eb6e4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb6e8:
    if (ctx->pc == 0x3EB6E8u) {
        ctx->pc = 0x3EB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6E4u;
        // 0x3eb6e8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6ECu;
        goto label_3eb6ec;
    }
    ctx->pc = 0x3EB6E4u;
    {
        const bool branch_taken_0x3eb6e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6E4u;
        // 0x3eb6e8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6e4) {
            ctx->pc = 0x3EB678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb678;
        }
    }
    ctx->pc = 0x3EB6ECu;
label_3eb6ec:
    // 0x3eb6ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb6f0:
    // 0x3eb6f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb6f4:
    if (ctx->pc == 0x3EB6F4u) {
        ctx->pc = 0x3EB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6F0u;
        // 0x3eb6f4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB6F8u;
        goto label_3eb6f8;
    }
    ctx->pc = 0x3EB6F0u;
    {
        const bool branch_taken_0x3eb6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB6F0u;
        // 0x3eb6f4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb6f0) {
            ctx->pc = 0x3EB76Cu;
            goto label_3eb76c;
        }
    }
    ctx->pc = 0x3EB6F8u;
label_3eb6f8:
    // 0x3eb6f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb6fc:
    // 0x3eb6fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb700:
    // 0x3eb700: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb704:
    if (ctx->pc == 0x3EB704u) {
        ctx->pc = 0x3EB704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB700u;
        // 0x3eb704: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB708u;
        goto label_3eb708;
    }
    ctx->pc = 0x3EB700u;
    {
        const bool branch_taken_0x3eb700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb700) {
            ctx->pc = 0x3EB704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB700u;
            // 0x3eb704: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB75Cu;
            goto label_3eb75c;
        }
    }
    ctx->pc = 0x3EB708u;
label_3eb708:
    // 0x3eb708: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb70c:
    // 0x3eb70c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb710:
    // 0x3eb710: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb714:
    // 0x3eb714: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb718:
    if (ctx->pc == 0x3EB718u) {
        ctx->pc = 0x3EB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB714u;
        // 0x3eb718: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB71Cu;
        goto label_3eb71c;
    }
    ctx->pc = 0x3EB714u;
    {
        const bool branch_taken_0x3eb714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb714) {
            ctx->pc = 0x3EB718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB714u;
            // 0x3eb718: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB748u;
            goto label_3eb748;
        }
    }
    ctx->pc = 0x3EB71Cu;
label_3eb71c:
    // 0x3eb71c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb720:
    // 0x3eb720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb724:
    // 0x3eb724: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb728:
    // 0x3eb728: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb72c:
    // 0x3eb72c: 0x40f809  jalr        $v0
label_3eb730:
    if (ctx->pc == 0x3EB730u) {
        ctx->pc = 0x3EB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB72Cu;
        // 0x3eb730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB734u;
        goto label_3eb734;
    }
    ctx->pc = 0x3EB72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB734u);
        ctx->pc = 0x3EB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB72Cu;
        // 0x3eb730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB72Cu, 0x3EB734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB734u;
label_3eb734:
    // 0x3eb734: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb738:
    // 0x3eb738: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb73c:
    // 0x3eb73c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb740:
    if (ctx->pc == 0x3EB740u) {
        ctx->pc = 0x3EB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB73Cu;
        // 0x3eb740: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB744u;
        goto label_3eb744;
    }
    ctx->pc = 0x3EB73Cu;
    {
        const bool branch_taken_0x3eb73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB73Cu;
        // 0x3eb740: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb73c) {
            ctx->pc = 0x3EB720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb720;
        }
    }
    ctx->pc = 0x3EB744u;
label_3eb744:
    // 0x3eb744: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb748:
    // 0x3eb748: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb74c:
    // 0x3eb74c: 0xc0f528a  jal         func_3D4A28
label_3eb750:
    if (ctx->pc == 0x3EB750u) {
        ctx->pc = 0x3EB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB74Cu;
        // 0x3eb750: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB754u;
        goto label_3eb754;
    }
    ctx->pc = 0x3EB74Cu;
    SET_GPR_U32(ctx, 31, 0x3EB754u);
    ctx->pc = 0x3EB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB74Cu;
    // 0x3eb750: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB74Cu, 0x3EB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB754u;
label_3eb754:
    // 0x3eb754: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb758:
    // 0x3eb758: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb75c:
    // 0x3eb75c: 0xc0f5222  jal         func_3D4888
label_3eb760:
    if (ctx->pc == 0x3EB760u) {
        ctx->pc = 0x3EB760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB75Cu;
        // 0x3eb760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB764u;
        goto label_3eb764;
    }
    ctx->pc = 0x3EB75Cu;
    SET_GPR_U32(ctx, 31, 0x3EB764u);
    ctx->pc = 0x3EB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB75Cu;
    // 0x3eb760: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB75Cu, 0x3EB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB764u;
label_3eb764:
    // 0x3eb764: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb768:
    if (ctx->pc == 0x3EB768u) {
        ctx->pc = 0x3EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB764u;
        // 0x3eb768: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB76Cu;
        goto label_3eb76c;
    }
    ctx->pc = 0x3EB764u;
    {
        const bool branch_taken_0x3eb764 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB764u;
        // 0x3eb768: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb764) {
            ctx->pc = 0x3EB6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb6f8;
        }
    }
    ctx->pc = 0x3EB76Cu;
label_3eb76c:
    // 0x3eb76c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb770:
    // 0x3eb770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb774:
    // 0x3eb774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb778:
    // 0x3eb778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb77c:
    // 0x3eb77c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb780:
    // 0x3eb780: 0x3e00008  jr          $ra
label_3eb784:
    if (ctx->pc == 0x3EB784u) {
        ctx->pc = 0x3EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB780u;
        // 0x3eb784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB788u;
        goto label_fallthrough_0x3eb780;
    }
    ctx->pc = 0x3EB780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB780u;
        // 0x3eb784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb780:
    ctx->pc = 0x3EB788u;
}
