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

// Function: sub_002F1630
// Address: 0x2f1630 - 0x2f1788
void sub_002F1630_0x2f1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1630_0x2f1630");
#endif

    switch (ctx->pc) {
        case 0x2f168cu: goto label_2f168c;
        case 0x2f16bcu: goto label_2f16bc;
        case 0x2f16c8u: goto label_2f16c8;
        case 0x2f16f4u: goto label_2f16f4;
        case 0x2f1700u: goto label_2f1700;
        case 0x2f1708u: goto label_2f1708;
        case 0x2f1714u: goto label_2f1714;
        case 0x2f1724u: goto label_2f1724;
        case 0x2f1748u: goto label_2f1748;
        case 0x2f1758u: goto label_2f1758;
        default: break;
    }

    ctx->pc = 0x2f1630u;

    // 0x2f1630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f1634: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f1634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f1638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f1638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f163c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f1640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f1644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f1648: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f1648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f164c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1650: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f1654: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2f1654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f1658: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2f1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2f165c: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F165Cu;
    {
        const bool branch_taken_0x2f165c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F165Cu;
        // 0x2f1660: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f165c) {
            ctx->pc = 0x2F1758u;
            goto label_2f1758;
        }
    }
    ctx->pc = 0x2F1664u;
    // 0x2f1664: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2F1664u;
    {
        const bool branch_taken_0x2f1664 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1664) {
            ctx->pc = 0x2F1694u;
            goto label_2f1694;
        }
    }
    ctx->pc = 0x2F166Cu;
    // 0x2f166c: 0x8e2311e4  lw          $v1, 0x11E4($s1)
    ctx->pc = 0x2f166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
    // 0x2f1670: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2f1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2f1674: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f1674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f1678: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f1678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2f167c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F167Cu;
    {
        const bool branch_taken_0x2f167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F167Cu;
        // 0x2f1680: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f167c) {
            ctx->pc = 0x2F1694u;
            goto label_2f1694;
        }
    }
    ctx->pc = 0x2F1684u;
    // 0x2f1684: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x2F1684u;
    SET_GPR_U32(ctx, 31, 0x2F168Cu);
    ctx->pc = 0x2F1688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1684u;
    // 0x2f1688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x2F1684u, 0x2F168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F168Cu;
label_2f168c:
    // 0x2f168c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F168Cu;
    {
        const bool branch_taken_0x2f168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F168Cu;
        // 0x2f1690: 0x8e2312bc  lw          $v1, 0x12BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f168c) {
            ctx->pc = 0x2F175Cu;
            goto label_2f175c;
        }
    }
    ctx->pc = 0x2F1694u;
label_2f1694:
    // 0x2f1694: 0x54e0000d  bnel        $a3, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2F1694u;
    {
        const bool branch_taken_0x2f1694 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1694) {
            ctx->pc = 0x2F1698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1694u;
            // 0x2f1698: 0x8e3011e4  lw          $s0, 0x11E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F16CCu;
            goto label_2f16cc;
        }
    }
    ctx->pc = 0x2F169Cu;
    // 0x2f169c: 0x8e2211e4  lw          $v0, 0x11E4($s1)
    ctx->pc = 0x2f169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
    // 0x2f16a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f16a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f16a4: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2f16a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f16a8: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x2f16a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2f16ac: 0x30c60007  andi        $a2, $a2, 0x7
    ctx->pc = 0x2f16acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x2f16b0: 0x38c60007  xori        $a2, $a2, 0x7
    ctx->pc = 0x2f16b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)7);
    // 0x2f16b4: 0xc069bfc  jal         func_1A6FF0
    ctx->pc = 0x2F16B4u;
    SET_GPR_U32(ctx, 31, 0x2F16BCu);
    ctx->pc = 0x2F16B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16B4u;
    // 0x2f16b8: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FF0u, 0x2F16B4u, 0x2F16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16BCu;
label_2f16bc:
    // 0x2f16bc: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x2f16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f16c0: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x2F16C0u;
    SET_GPR_U32(ctx, 31, 0x2F16C8u);
    ctx->pc = 0x2F16C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16C0u;
    // 0x2f16c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2F16C0u, 0x2F16C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16C8u;
label_2f16c8:
    // 0x2f16c8: 0x8e3011e4  lw          $s0, 0x11E4($s1)
    ctx->pc = 0x2f16c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4580)));
label_2f16cc:
    // 0x2f16cc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2f16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2f16d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f16d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f16d4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f16d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2f16d8: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F16D8u;
    {
        const bool branch_taken_0x2f16d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f16d8) {
            ctx->pc = 0x2F16DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F16D8u;
            // 0x2f16dc: 0x8e2312bc  lw          $v1, 0x12BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F175Cu;
            goto label_2f175c;
        }
    }
    ctx->pc = 0x2F16E0u;
    // 0x2f16e0: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F16E0u;
    {
        const bool branch_taken_0x2f16e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f16e0) {
            ctx->pc = 0x2F1700u;
            goto label_2f1700;
        }
    }
    ctx->pc = 0x2F16E8u;
    // 0x2f16e8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2f16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f16ec: 0xc069d30  jal         func_1A74C0
    ctx->pc = 0x2F16ECu;
    SET_GPR_U32(ctx, 31, 0x2F16F4u);
    ctx->pc = 0x2F16F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16ECu;
    // 0x2f16f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74C0u, 0x2F16ECu, 0x2F16F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F16F4u;
label_2f16f4:
    // 0x2f16f4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2f16f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f16f8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x2F16F8u;
    SET_GPR_U32(ctx, 31, 0x2F1700u);
    ctx->pc = 0x2F16FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F16F8u;
    // 0x2f16fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2F16F8u, 0x2F1700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1700u;
label_2f1700:
    // 0x2f1700: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x2F1700u;
    SET_GPR_U32(ctx, 31, 0x2F1708u);
    ctx->pc = 0x2F1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1700u;
    // 0x2f1704: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x2F1700u, 0x2F1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1708u;
label_2f1708:
    // 0x2f1708: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f1708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f170c: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x2F170Cu;
    SET_GPR_U32(ctx, 31, 0x2F1714u);
    ctx->pc = 0x2F1710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F170Cu;
    // 0x2f1710: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2F170Cu, 0x2F1714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1714u;
label_2f1714:
    // 0x2f1714: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1714u;
    {
        const bool branch_taken_0x2f1714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1714u;
        // 0x2f1718: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1714) {
            ctx->pc = 0x2F172Cu;
            goto label_2f172c;
        }
    }
    ctx->pc = 0x2F171Cu;
    // 0x2f171c: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x2F171Cu;
    SET_GPR_U32(ctx, 31, 0x2F1724u);
    ctx->pc = 0x2F1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F171Cu;
    // 0x2f1720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x2F171Cu, 0x2F1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1724u;
label_2f1724:
    // 0x2f1724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F1724u;
    {
        const bool branch_taken_0x2f1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1724u;
        // 0x2f1728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1724) {
            ctx->pc = 0x2F173Cu;
            goto label_2f173c;
        }
    }
    ctx->pc = 0x2F172Cu;
label_2f172c:
    // 0x2f172c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2f172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2f1730: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2f1730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2f1734: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x2f1734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x2f1738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f173c:
    // 0x2f173c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2f173cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f1740: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F1740u;
    SET_GPR_U32(ctx, 31, 0x2F1748u);
    ctx->pc = 0x2F1744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1740u;
    // 0x2f1744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F1740u, 0x2F1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1748u;
label_2f1748:
    // 0x2f1748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f174c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2f174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f1750: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F1750u;
    SET_GPR_U32(ctx, 31, 0x2F1758u);
    ctx->pc = 0x2F1754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1750u;
    // 0x2f1754: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F1750u, 0x2F1758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1758u;
label_2f1758:
    // 0x2f1758: 0x8e2312bc  lw          $v1, 0x12BC($s1)
    ctx->pc = 0x2f1758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4796)));
label_2f175c:
    // 0x2f175c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1760: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1760u;
    {
        const bool branch_taken_0x2f1760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1760u;
        // 0x2f1764: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1760) {
            ctx->pc = 0x2F1770u;
            goto label_2f1770;
        }
    }
    ctx->pc = 0x2F1768u;
    // 0x2f1768: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f1768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f176c: 0xae2212bc  sw          $v0, 0x12BC($s1)
    ctx->pc = 0x2f176cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4796), GPR_U32(ctx, 2));
label_2f1770:
    // 0x2f1770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f1770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f1774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1778: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f1778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f177c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f177cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1780: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1780u;
        // 0x2f1784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1788u;
}
