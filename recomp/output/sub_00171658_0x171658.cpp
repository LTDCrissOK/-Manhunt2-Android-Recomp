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

// Function: sub_00171658
// Address: 0x171658 - 0x171ba0
void sub_00171658_0x171658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171658_0x171658");
#endif

    switch (ctx->pc) {
        case 0x1716a4u: goto label_1716a4;
        case 0x1716acu: goto label_1716ac;
        case 0x1716e8u: goto label_1716e8;
        case 0x1716fcu: goto label_1716fc;
        case 0x17170cu: goto label_17170c;
        case 0x17172cu: goto label_17172c;
        case 0x171738u: goto label_171738;
        case 0x171750u: goto label_171750;
        case 0x171760u: goto label_171760;
        case 0x171780u: goto label_171780;
        case 0x171790u: goto label_171790;
        case 0x1717a0u: goto label_1717a0;
        case 0x1717b8u: goto label_1717b8;
        case 0x1717ccu: goto label_1717cc;
        case 0x1717dcu: goto label_1717dc;
        case 0x1717fcu: goto label_1717fc;
        case 0x17180cu: goto label_17180c;
        case 0x171840u: goto label_171840;
        case 0x171860u: goto label_171860;
        case 0x171874u: goto label_171874;
        case 0x17187cu: goto label_17187c;
        case 0x171888u: goto label_171888;
        case 0x17189cu: goto label_17189c;
        case 0x1718e4u: goto label_1718e4;
        case 0x171900u: goto label_171900;
        case 0x17190cu: goto label_17190c;
        case 0x171934u: goto label_171934;
        case 0x171948u: goto label_171948;
        case 0x171960u: goto label_171960;
        case 0x171970u: goto label_171970;
        case 0x171980u: goto label_171980;
        case 0x1719a4u: goto label_1719a4;
        case 0x1719c8u: goto label_1719c8;
        case 0x1719f0u: goto label_1719f0;
        case 0x171a10u: goto label_171a10;
        case 0x171a30u: goto label_171a30;
        case 0x171a40u: goto label_171a40;
        case 0x171a64u: goto label_171a64;
        case 0x171a80u: goto label_171a80;
        case 0x171ab0u: goto label_171ab0;
        case 0x171b30u: goto label_171b30;
        case 0x171b44u: goto label_171b44;
        case 0x171b58u: goto label_171b58;
        case 0x171b6cu: goto label_171b6c;
        default: break;
    }

    ctx->pc = 0x171658u;

    // 0x171658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x171658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17165c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x171660: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x171660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x171664: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x171664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171668: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x171668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x17166c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17166cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171670: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x171670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x171674: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x171674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x171678: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x171678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x17167c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x17167cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x171680: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x171680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x171684: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x171684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x171688: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x171688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x17168c: 0x8e620288  lw          $v0, 0x288($s3)
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x171690: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x171690u;
    {
        const bool branch_taken_0x171690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171690u;
        // 0x171694: 0x8e740270  lw          $s4, 0x270($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171690) {
            ctx->pc = 0x17169Cu;
            goto label_17169c;
        }
    }
    ctx->pc = 0x171698u;
    // 0x171698: 0x8e740228  lw          $s4, 0x228($s3)
    ctx->pc = 0x171698u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 552)));
label_17169c:
    // 0x17169c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x17169Cu;
    {
        const bool branch_taken_0x17169c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1716A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17169Cu;
        // 0x1716a0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17169c) {
            ctx->pc = 0x1716B4u;
            goto label_1716b4;
        }
    }
    ctx->pc = 0x1716A4u;
label_1716a4:
    // 0x1716a4: 0xc05c85e  jal         func_172178
    ctx->pc = 0x1716A4u;
    SET_GPR_U32(ctx, 31, 0x1716ACu);
    ctx->pc = 0x1716A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716A4u;
    // 0x1716a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172178u, 0x1716A4u, 0x1716ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716ACu;
label_1716ac:
    // 0x1716ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1716ACu;
    {
        const bool branch_taken_0x1716ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1716ac) {
            ctx->pc = 0x171730u;
            goto label_171730;
        }
    }
    ctx->pc = 0x1716B4u;
label_1716b4:
    // 0x1716b4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1716b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1716b8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1716b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716bc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1716c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1716c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1716c4: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x1716c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1716c8: 0x12a0fff6  beqz        $s5, . + 4 + (-0xA << 2)
    ctx->pc = 0x1716C8u;
    {
        const bool branch_taken_0x1716c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716C8u;
        // 0x1716cc: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716c8) {
            ctx->pc = 0x1716A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1716a4;
        }
    }
    ctx->pc = 0x1716D0u;
    // 0x1716d0: 0x92a20234  lbu         $v0, 0x234($s5)
    ctx->pc = 0x1716d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 564)));
    // 0x1716d4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x1716d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1716d8: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x1716d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1716dc: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1716dcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1716e0: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1716E0u;
    SET_GPR_U32(ctx, 31, 0x1716E8u);
    ctx->pc = 0x1716E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716E0u;
    // 0x1716e4: 0x8c700010  lw          $s0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1716E0u, 0x1716E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716E8u;
label_1716e8:
    // 0x1716e8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1716e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1716ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1716ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716f0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1716f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1716f4: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1716F4u;
    SET_GPR_U32(ctx, 31, 0x1716FCu);
    ctx->pc = 0x1716F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716F4u;
    // 0x1716f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1716F4u, 0x1716FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716FCu;
label_1716fc:
    // 0x1716fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1716FCu;
    {
        const bool branch_taken_0x1716fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716FCu;
        // 0x171700: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716fc) {
            ctx->pc = 0x171740u;
            goto label_171740;
        }
    }
    ctx->pc = 0x171704u;
    // 0x171704: 0xc05c85e  jal         func_172178
    ctx->pc = 0x171704u;
    SET_GPR_U32(ctx, 31, 0x17170Cu);
    ctx->pc = 0x171708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171704u;
    // 0x171708: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172178u, 0x171704u, 0x17170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17170Cu;
label_17170c:
    // 0x17170c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17170Cu;
    {
        const bool branch_taken_0x17170c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17170c) {
            ctx->pc = 0x171730u;
            goto label_171730;
        }
    }
    ctx->pc = 0x171714u;
    // 0x171714: 0x8e62028c  lw          $v0, 0x28C($s3)
    ctx->pc = 0x171714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x171718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171718u;
    {
        const bool branch_taken_0x171718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171718u;
        // 0x17171c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171718) {
            ctx->pc = 0x171730u;
            goto label_171730;
        }
    }
    ctx->pc = 0x171720u;
    // 0x171720: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171724: 0xc04970e  jal         func_125C38
    ctx->pc = 0x171724u;
    SET_GPR_U32(ctx, 31, 0x17172Cu);
    ctx->pc = 0x171728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171724u;
    // 0x171728: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x171724u, 0x17172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17172Cu;
label_17172c:
    // 0x17172c: 0xa2a00234  sb          $zero, 0x234($s5)
    ctx->pc = 0x17172cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 564), (uint8_t)GPR_U32(ctx, 0));
label_171730:
    // 0x171730: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x171730u;
    SET_GPR_U32(ctx, 31, 0x171738u);
    ctx->pc = 0x171734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171730u;
    // 0x171734: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x171730u, 0x171738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171738u;
label_171738:
    // 0x171738: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x171738u;
    {
        const bool branch_taken_0x171738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171738u;
        // 0x17173c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171738) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171740u;
label_171740:
    // 0x171740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171748: 0xc05ca20  jal         func_172880
    ctx->pc = 0x171748u;
    SET_GPR_U32(ctx, 31, 0x171750u);
    ctx->pc = 0x17174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171748u;
    // 0x17174c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x171748u, 0x171750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171750u;
label_171750:
    // 0x171750: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x171750u;
    {
        const bool branch_taken_0x171750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171750u;
        // 0x171754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171750) {
            ctx->pc = 0x1717A8u;
            goto label_1717a8;
        }
    }
    ctx->pc = 0x171758u;
    // 0x171758: 0xc05c85e  jal         func_172178
    ctx->pc = 0x171758u;
    SET_GPR_U32(ctx, 31, 0x171760u);
    ctx->pc = 0x17175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171758u;
    // 0x17175c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172178u, 0x171758u, 0x171760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171760u;
label_171760:
    // 0x171760: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x171760u;
    {
        const bool branch_taken_0x171760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x171764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171760u;
        // 0x171764: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171760) {
            ctx->pc = 0x171788u;
            goto label_171788;
        }
    }
    ctx->pc = 0x171768u;
    // 0x171768: 0x8e62028c  lw          $v0, 0x28C($s3)
    ctx->pc = 0x171768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x17176c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17176Cu;
    {
        const bool branch_taken_0x17176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17176Cu;
        // 0x171770: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17176c) {
            ctx->pc = 0x171788u;
            goto label_171788;
        }
    }
    ctx->pc = 0x171774u;
    // 0x171774: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171778: 0xc04970e  jal         func_125C38
    ctx->pc = 0x171778u;
    SET_GPR_U32(ctx, 31, 0x171780u);
    ctx->pc = 0x17177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171778u;
    // 0x17177c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x171778u, 0x171780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171780u;
label_171780:
    // 0x171780: 0xa2a00234  sb          $zero, 0x234($s5)
    ctx->pc = 0x171780u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x171784: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_171788:
    // 0x171788: 0xc05d0de  jal         func_174378
    ctx->pc = 0x171788u;
    SET_GPR_U32(ctx, 31, 0x171790u);
    ctx->pc = 0x17178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171788u;
    // 0x17178c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174378u, 0x171788u, 0x171790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171790u;
label_171790:
    // 0x171790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x171790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171798: 0xc05c720  jal         func_171C80
    ctx->pc = 0x171798u;
    SET_GPR_U32(ctx, 31, 0x1717A0u);
    ctx->pc = 0x17179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171798u;
    // 0x17179c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x171798u, 0x1717A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717A0u;
label_1717a0:
    // 0x1717a0: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1717A0u;
    {
        const bool branch_taken_0x1717a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1717A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717A0u;
        // 0x1717a4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717a0) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x1717A8u;
label_1717a8:
    // 0x1717a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1717a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1717ac: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1717acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1717b0: 0xc05ca20  jal         func_172880
    ctx->pc = 0x1717B0u;
    SET_GPR_U32(ctx, 31, 0x1717B8u);
    ctx->pc = 0x1717B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717B0u;
    // 0x1717b4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x1717B0u, 0x1717B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717B8u;
label_1717b8:
    // 0x1717b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1717B8u;
    {
        const bool branch_taken_0x1717b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1717BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717B8u;
        // 0x1717bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717b8) {
            ctx->pc = 0x171814u;
            goto label_171814;
        }
    }
    ctx->pc = 0x1717C0u;
    // 0x1717c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1717c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1717c4: 0xc05ca62  jal         func_172988
    ctx->pc = 0x1717C4u;
    SET_GPR_U32(ctx, 31, 0x1717CCu);
    ctx->pc = 0x1717C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717C4u;
    // 0x1717c8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172988u, 0x1717C4u, 0x1717CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717CCu;
label_1717cc:
    // 0x1717cc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1717CCu;
    {
        const bool branch_taken_0x1717cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1717cc) {
            ctx->pc = 0x1717D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1717CCu;
            // 0x1717d0: 0x92620009  lbu         $v0, 0x9($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171818u;
            goto label_171818;
        }
    }
    ctx->pc = 0x1717D4u;
    // 0x1717d4: 0xc05c85e  jal         func_172178
    ctx->pc = 0x1717D4u;
    SET_GPR_U32(ctx, 31, 0x1717DCu);
    ctx->pc = 0x1717D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717D4u;
    // 0x1717d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172178u, 0x1717D4u, 0x1717DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717DCu;
label_1717dc:
    // 0x1717dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1717DCu;
    {
        const bool branch_taken_0x1717dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1717dc) {
            ctx->pc = 0x1717E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1717DCu;
            // 0x1717e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171804u;
            goto label_171804;
        }
    }
    ctx->pc = 0x1717E4u;
    // 0x1717e4: 0x8e62028c  lw          $v0, 0x28C($s3)
    ctx->pc = 0x1717e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x1717e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1717E8u;
    {
        const bool branch_taken_0x1717e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1717ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717E8u;
        // 0x1717ec: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717e8) {
            ctx->pc = 0x171800u;
            goto label_171800;
        }
    }
    ctx->pc = 0x1717F0u;
    // 0x1717f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1717f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717f4: 0xc04970e  jal         func_125C38
    ctx->pc = 0x1717F4u;
    SET_GPR_U32(ctx, 31, 0x1717FCu);
    ctx->pc = 0x1717F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717F4u;
    // 0x1717f8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x1717F4u, 0x1717FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717FCu;
label_1717fc:
    // 0x1717fc: 0xa2a00234  sb          $zero, 0x234($s5)
    ctx->pc = 0x1717fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 564), (uint8_t)GPR_U32(ctx, 0));
label_171800:
    // 0x171800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x171800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_171804:
    // 0x171804: 0xc05c766  jal         func_171D98
    ctx->pc = 0x171804u;
    SET_GPR_U32(ctx, 31, 0x17180Cu);
    ctx->pc = 0x171808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171804u;
    // 0x171808: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D98u, 0x171804u, 0x17180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17180Cu;
label_17180c:
    // 0x17180c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x17180Cu;
    {
        const bool branch_taken_0x17180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17180Cu;
        // 0x171810: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17180c) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171814u;
label_171814:
    // 0x171814: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x171814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_171818:
    // 0x171818: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x171818u;
    {
        const bool branch_taken_0x171818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171818u;
        // 0x17181c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171818) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171820u;
    // 0x171820: 0x8e62028c  lw          $v0, 0x28C($s3)
    ctx->pc = 0x171820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 652)));
    // 0x171824: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x171824u;
    {
        const bool branch_taken_0x171824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171824) {
            ctx->pc = 0x171828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171824u;
            // 0x171828: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171914u;
            goto label_171914;
        }
    }
    ctx->pc = 0x17182Cu;
    // 0x17182c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171830: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x171830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x171834: 0x24070029  addiu       $a3, $zero, 0x29
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x171838: 0xc04fb7a  jal         func_13EDE8
    ctx->pc = 0x171838u;
    SET_GPR_U32(ctx, 31, 0x171840u);
    ctx->pc = 0x17183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171838u;
    // 0x17183c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x171838u, 0x171840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171840u;
label_171840:
    // 0x171840: 0x26f29a08  addiu       $s2, $s7, -0x65F8
    ctx->pc = 0x171840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x171844: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x171844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x171848: 0x26520108  addiu       $s2, $s2, 0x108
    ctx->pc = 0x171848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
    // 0x17184c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x17184cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x171850: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x171850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x171854: 0x261087a0  addiu       $s0, $s0, -0x7860
    ctx->pc = 0x171854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936480));
    // 0x171858: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x171858u;
    SET_GPR_U32(ctx, 31, 0x171860u);
    ctx->pc = 0x17185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171858u;
    // 0x17185c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x171858u, 0x171860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171860u;
label_171860:
    // 0x171860: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x171860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171864: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x171864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17186c: 0xc04668a  jal         func_119A28
    ctx->pc = 0x17186Cu;
    SET_GPR_U32(ctx, 31, 0x171874u);
    ctx->pc = 0x171870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17186Cu;
    // 0x171870: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x17186Cu, 0x171874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171874u;
label_171874:
    // 0x171874: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x171874u;
    SET_GPR_U32(ctx, 31, 0x17187Cu);
    ctx->pc = 0x171878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171874u;
    // 0x171878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x171874u, 0x17187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17187Cu;
label_17187c:
    // 0x17187c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171880: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x171880u;
    SET_GPR_U32(ctx, 31, 0x171888u);
    ctx->pc = 0x171884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171880u;
    // 0x171884: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x171880u, 0x171888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171888u;
label_171888:
    // 0x171888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17188c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171890: 0x8e620288  lw          $v0, 0x288($s3)
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x171894: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x171894u;
    SET_GPR_U32(ctx, 31, 0x17189Cu);
    ctx->pc = 0x171898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171894u;
    // 0x171898: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x171894u, 0x17189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17189Cu;
label_17189c:
    // 0x17189c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17189cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718a0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1718a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1718a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1718a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1718a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1718ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1718acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1718b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1718B0u;
    {
        const bool branch_taken_0x1718b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1718b0) {
            ctx->pc = 0x1718B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1718B0u;
            // 0x1718b4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1718C0u;
            goto label_1718c0;
        }
    }
    ctx->pc = 0x1718B8u;
    // 0x1718b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1718B8u;
    {
        const bool branch_taken_0x1718b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718B8u;
        // 0x1718bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718b8) {
            ctx->pc = 0x1718C8u;
            goto label_1718c8;
        }
    }
    ctx->pc = 0x1718C0u;
label_1718c0:
    // 0x1718c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1718c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1718c4: 0x24690070  addiu       $t1, $v1, 0x70
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1718c8:
    // 0x1718c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1718c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1718cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1718ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718d0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x1718d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1718d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718d8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1718d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718dc: 0xc0496a4  jal         func_125A90
    ctx->pc = 0x1718DCu;
    SET_GPR_U32(ctx, 31, 0x1718E4u);
    ctx->pc = 0x1718E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718DCu;
    // 0x1718e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A90u, 0x1718DCu, 0x1718E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1718E4u;
label_1718e4:
    // 0x1718e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1718e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1718e8: 0x8e630288  lw          $v1, 0x288($s3)
    ctx->pc = 0x1718e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x1718ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1718ECu;
    {
        const bool branch_taken_0x1718ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718ECu;
        // 0x1718f0: 0xae62028c  sw          $v0, 0x28C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718ec) {
            ctx->pc = 0x171900u;
            goto label_171900;
        }
    }
    ctx->pc = 0x1718F4u;
    // 0x1718f4: 0x8e650284  lw          $a1, 0x284($s3)
    ctx->pc = 0x1718f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x1718f8: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x1718F8u;
    SET_GPR_U32(ctx, 31, 0x171900u);
    ctx->pc = 0x1718FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1718F8u;
    // 0x1718fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x1718F8u, 0x171900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171900u;
label_171900:
    // 0x171900: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171904: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x171904u;
    SET_GPR_U32(ctx, 31, 0x17190Cu);
    ctx->pc = 0x171908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171904u;
    // 0x171908: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x171904u, 0x17190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17190Cu;
label_17190c:
    // 0x17190c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x17190Cu;
    {
        const bool branch_taken_0x17190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17190Cu;
        // 0x171910: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17190c) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171914u;
label_171914:
    // 0x171914: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171918: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x171918u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17191c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x17191cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171920: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x171920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x171924: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x171924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x171928: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17192c: 0xc049828  jal         func_1260A0
    ctx->pc = 0x17192Cu;
    SET_GPR_U32(ctx, 31, 0x171934u);
    ctx->pc = 0x171930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17192Cu;
    // 0x171930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x17192Cu, 0x171934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171934u;
label_171934:
    // 0x171934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171938: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x171938u;
    {
        const bool branch_taken_0x171938 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171938u;
        // 0x17193c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171938) {
            ctx->pc = 0x171968u;
            goto label_171968;
        }
    }
    ctx->pc = 0x171940u;
    // 0x171940: 0xc05c85e  jal         func_172178
    ctx->pc = 0x171940u;
    SET_GPR_U32(ctx, 31, 0x171948u);
    ctx->pc = 0x171944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171940u;
    // 0x171944: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172178u, 0x171940u, 0x171948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171948u;
label_171948:
    // 0x171948: 0x8e620288  lw          $v0, 0x288($s3)
    ctx->pc = 0x171948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x17194c: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x17194Cu;
    {
        const bool branch_taken_0x17194c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17194Cu;
        // 0x171950: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17194c) {
            ctx->pc = 0x171B50u;
            goto label_171b50;
        }
    }
    ctx->pc = 0x171954u;
    // 0x171954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171958: 0xc05ce00  jal         func_173800
    ctx->pc = 0x171958u;
    SET_GPR_U32(ctx, 31, 0x171960u);
    ctx->pc = 0x17195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171958u;
    // 0x17195c: 0x24850290  addiu       $a1, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173800u, 0x171958u, 0x171960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171960u;
label_171960:
    // 0x171960: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x171960u;
    {
        const bool branch_taken_0x171960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171960u;
        // 0x171964: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171960) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171968u;
label_171968:
    // 0x171968: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x171968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17196c: 0x0  nop
    ctx->pc = 0x17196cu;
    // NOP
label_171970:
    // 0x171970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171974: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x171974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x171978: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x171978u;
    SET_GPR_U32(ctx, 31, 0x171980u);
    ctx->pc = 0x17197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171978u;
    // 0x17197c: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x171978u, 0x171980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171980u;
label_171980:
    // 0x171980: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x171980u;
    {
        const bool branch_taken_0x171980 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x171984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171980u;
        // 0x171984: 0x93a60010  lbu         $a2, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171980) {
            ctx->pc = 0x171A14u;
            goto label_171a14;
        }
    }
    ctx->pc = 0x171988u;
    // 0x171988: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x171988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17198c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x17198cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171990: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x171990u;
    {
        const bool branch_taken_0x171990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x171990) {
            ctx->pc = 0x1719A8u;
            goto label_1719a8;
        }
    }
    ctx->pc = 0x171998u;
    // 0x171998: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x171998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17199c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17199Cu;
    SET_GPR_U32(ctx, 31, 0x1719A4u);
    ctx->pc = 0x1719A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17199Cu;
    // 0x1719a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17199Cu, 0x1719A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719A4u;
label_1719a4:
    // 0x1719a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1719a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1719a8:
    // 0x1719a8: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1719A8u;
    {
        const bool branch_taken_0x1719a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A8u;
        // 0x1719ac: 0x93a60010  lbu         $a2, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719a8) {
            ctx->pc = 0x171A14u;
            goto label_171a14;
        }
    }
    ctx->pc = 0x1719B0u;
    // 0x1719b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1719b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1719B4u;
    {
        const bool branch_taken_0x1719b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1719b4) {
            ctx->pc = 0x1719CCu;
            goto label_1719cc;
        }
    }
    ctx->pc = 0x1719BCu;
    // 0x1719bc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1719bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1719c0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1719C0u;
    SET_GPR_U32(ctx, 31, 0x1719C8u);
    ctx->pc = 0x1719C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719C0u;
    // 0x1719c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1719C0u, 0x1719C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719C8u;
label_1719c8:
    // 0x1719c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1719c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1719cc:
    // 0x1719cc: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1719CCu;
    {
        const bool branch_taken_0x1719cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719CCu;
        // 0x1719d0: 0x93a60010  lbu         $a2, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719cc) {
            ctx->pc = 0x171A14u;
            goto label_171a14;
        }
    }
    ctx->pc = 0x1719D4u;
    // 0x1719d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1719d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1719d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1719d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1719dc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1719DCu;
    {
        const bool branch_taken_0x1719dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1719dc) {
            ctx->pc = 0x1719E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1719DCu;
            // 0x1719e0: 0x8e620288  lw          $v0, 0x288($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1719FCu;
            goto label_1719fc;
        }
    }
    ctx->pc = 0x1719E4u;
    // 0x1719e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1719e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1719e8: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1719E8u;
    SET_GPR_U32(ctx, 31, 0x1719F0u);
    ctx->pc = 0x1719ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1719E8u;
    // 0x1719ec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1719E8u, 0x1719F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1719F0u;
label_1719f0:
    // 0x1719f0: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x1719f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x1719f4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1719f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1719f8: 0x8e620288  lw          $v0, 0x288($s3)
    ctx->pc = 0x1719f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
label_1719fc:
    // 0x1719fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1719FCu;
    {
        const bool branch_taken_0x1719fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1719fc) {
            ctx->pc = 0x171A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1719FCu;
            // 0x171a00: 0x93a60010  lbu         $a2, 0x10($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171A14u;
            goto label_171a14;
        }
    }
    ctx->pc = 0x171A04u;
    // 0x171a04: 0x8e650284  lw          $a1, 0x284($s3)
    ctx->pc = 0x171a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x171a08: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x171A08u;
    SET_GPR_U32(ctx, 31, 0x171A10u);
    ctx->pc = 0x171A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A08u;
    // 0x171a0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x171A08u, 0x171A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A10u;
label_171a10:
    // 0x171a10: 0x93a60010  lbu         $a2, 0x10($sp)
    ctx->pc = 0x171a10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_171a14:
    // 0x171a14: 0x27c4a080  addiu       $a0, $fp, -0x5F80
    ctx->pc = 0x171a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942848));
    // 0x171a18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a1c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x171a24: 0x10b00a  movz        $s6, $zero, $s0
    ctx->pc = 0x171a24u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x171a28: 0xc049828  jal         func_1260A0
    ctx->pc = 0x171A28u;
    SET_GPR_U32(ctx, 31, 0x171A30u);
    ctx->pc = 0x171A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A28u;
    // 0x171a2c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x171A28u, 0x171A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A30u;
label_171a30:
    // 0x171a30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a38: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x171A38u;
    SET_GPR_U32(ctx, 31, 0x171A40u);
    ctx->pc = 0x171A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A38u;
    // 0x171a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x171A38u, 0x171A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A40u;
label_171a40:
    // 0x171a40: 0x5620ffcb  bnel        $s1, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x171A40u;
    {
        const bool branch_taken_0x171a40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x171a40) {
            ctx->pc = 0x171A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171A40u;
            // 0x171a44: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171970;
        }
    }
    ctx->pc = 0x171A48u;
    // 0x171a48: 0x12c00048  beqz        $s6, . + 4 + (0x48 << 2)
    ctx->pc = 0x171A48u;
    {
        const bool branch_taken_0x171a48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A48u;
        // 0x171a4c: 0x27c4a080  addiu       $a0, $fp, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a48) {
            ctx->pc = 0x171B6Cu;
            goto label_171b6c;
        }
    }
    ctx->pc = 0x171A50u;
    // 0x171a50: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x171a50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x171a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a5c: 0xc049828  jal         func_1260A0
    ctx->pc = 0x171A5Cu;
    SET_GPR_U32(ctx, 31, 0x171A64u);
    ctx->pc = 0x171A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A5Cu;
    // 0x171a60: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x171A5Cu, 0x171A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A64u;
label_171a64:
    // 0x171a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a68: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x171A68u;
    {
        const bool branch_taken_0x171a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A68u;
        // 0x171a6c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a68) {
            ctx->pc = 0x171B3Cu;
            goto label_171b3c;
        }
    }
    ctx->pc = 0x171A70u;
    // 0x171a70: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x171a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171a74: 0x24569c14  addiu       $s6, $v0, -0x63EC
    ctx->pc = 0x171a74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x171a78: 0x26720290  addiu       $s2, $s3, 0x290
    ctx->pc = 0x171a78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x171a7c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x171a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_171a80:
    // 0x171a80: 0x8e620288  lw          $v0, 0x288($s3)
    ctx->pc = 0x171a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x171a84: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x171A84u;
    {
        const bool branch_taken_0x171a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A84u;
        // 0x171a88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a84) {
            ctx->pc = 0x171AF4u;
            goto label_171af4;
        }
    }
    ctx->pc = 0x171A8Cu;
    // 0x171a8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x171a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x171a90: 0x8e620284  lw          $v0, 0x284($s3)
    ctx->pc = 0x171a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 644)));
    // 0x171a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171a98: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x171a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x171a9c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x171a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171aa0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x171AA0u;
    {
        const bool branch_taken_0x171aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x171AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AA0u;
        // 0x171aa4: 0x93a60010  lbu         $a2, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171aa0) {
            ctx->pc = 0x171B18u;
            goto label_171b18;
        }
    }
    ctx->pc = 0x171AA8u;
    // 0x171aa8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x171AA8u;
    SET_GPR_U32(ctx, 31, 0x171AB0u);
    ctx->pc = 0x171AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AA8u;
    // 0x171aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x171AA8u, 0x171AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171AB0u;
label_171ab0:
    // 0x171ab0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x171ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x171ab4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x171ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x171ab8: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x171ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x171abc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x171ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x171ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x171ac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171ac8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x171ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171acc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x171ACCu;
    {
        const bool branch_taken_0x171acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x171acc) {
            ctx->pc = 0x171AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171ACCu;
            // 0x171ad0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171ADCu;
            goto label_171adc;
        }
    }
    ctx->pc = 0x171AD4u;
    // 0x171ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171AD4u;
    {
        const bool branch_taken_0x171ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AD4u;
        // 0x171ad8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ad4) {
            ctx->pc = 0x171AE4u;
            goto label_171ae4;
        }
    }
    ctx->pc = 0x171ADCu;
label_171adc:
    // 0x171adc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171ae0: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x171ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_171ae4:
    // 0x171ae4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x171ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171ae8: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x171ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171aec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x171AECu;
    {
        const bool branch_taken_0x171aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AECu;
        // 0x171af0: 0xae350020  sw          $s5, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171aec) {
            ctx->pc = 0x171B14u;
            goto label_171b14;
        }
    }
    ctx->pc = 0x171AF4u;
label_171af4:
    // 0x171af4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x171af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x171af8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x171af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x171afc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x171afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x171b00: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x171b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x171b04: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x171b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x171b08: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x171b08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171b0c: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x171b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x171b10: 0xae350020  sw          $s5, 0x20($s1)
    ctx->pc = 0x171b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
label_171b14:
    // 0x171b14: 0x93a60010  lbu         $a2, 0x10($sp)
    ctx->pc = 0x171b14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_171b18:
    // 0x171b18: 0x27c4a080  addiu       $a0, $fp, -0x5F80
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942848));
    // 0x171b1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b20: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x171b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x171b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x171b28: 0xc049828  jal         func_1260A0
    ctx->pc = 0x171B28u;
    SET_GPR_U32(ctx, 31, 0x171B30u);
    ctx->pc = 0x171B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B28u;
    // 0x171b2c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A0u, 0x171B28u, 0x171B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B30u;
label_171b30:
    // 0x171b30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b34: 0x5620ffd2  bnel        $s1, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x171B34u;
    {
        const bool branch_taken_0x171b34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x171b34) {
            ctx->pc = 0x171B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171B34u;
            // 0x171b38: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171a80;
        }
    }
    ctx->pc = 0x171B3Cu;
label_171b3c:
    // 0x171b3c: 0xc05c85e  jal         func_172178
    ctx->pc = 0x171B3Cu;
    SET_GPR_U32(ctx, 31, 0x171B44u);
    ctx->pc = 0x171B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B3Cu;
    // 0x171b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172178u, 0x171B3Cu, 0x171B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B44u;
label_171b44:
    // 0x171b44: 0x8e620288  lw          $v0, 0x288($s3)
    ctx->pc = 0x171b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x171b48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171B48u;
    {
        const bool branch_taken_0x171b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B48u;
        // 0x171b4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b48) {
            ctx->pc = 0x171B60u;
            goto label_171b60;
        }
    }
    ctx->pc = 0x171B50u;
label_171b50:
    // 0x171b50: 0xc05c810  jal         func_172040
    ctx->pc = 0x171B50u;
    SET_GPR_U32(ctx, 31, 0x171B58u);
    ctx->pc = 0x171B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B50u;
    // 0x171b54: 0x8c850284  lw          $a1, 0x284($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172040u, 0x171B50u, 0x171B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B58u;
label_171b58:
    // 0x171b58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x171B58u;
    {
        const bool branch_taken_0x171b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B58u;
        // 0x171b5c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171b58) {
            ctx->pc = 0x171B70u;
            goto label_171b70;
        }
    }
    ctx->pc = 0x171B60u;
label_171b60:
    // 0x171b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x171b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b64: 0xc05ce00  jal         func_173800
    ctx->pc = 0x171B64u;
    SET_GPR_U32(ctx, 31, 0x171B6Cu);
    ctx->pc = 0x171B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B64u;
    // 0x171b68: 0x24850290  addiu       $a1, $a0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173800u, 0x171B64u, 0x171B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B6Cu;
label_171b6c:
    // 0x171b6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x171b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171b70:
    // 0x171b70: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x171b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171b74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x171b74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171b78: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x171b78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171b7c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x171b7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171b80: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x171b80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x171b84: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x171b84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171b88: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x171b88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x171b8c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x171b8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171b90: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x171b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x171b94: 0x3e00008  jr          $ra
    ctx->pc = 0x171B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B94u;
        // 0x171b98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B9Cu;
    // 0x171b9c: 0x0  nop
    ctx->pc = 0x171b9cu;
    // NOP
    ctx->pc = 0x171ba0u;
}
