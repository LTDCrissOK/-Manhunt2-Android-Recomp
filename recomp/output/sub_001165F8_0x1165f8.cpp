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

// Function: sub_001165F8
// Address: 0x1165f8 - 0x1166d0
void sub_001165F8_0x1165f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001165F8_0x1165f8");
#endif

    switch (ctx->pc) {
        case 0x1165f8u: goto label_1165f8;
        case 0x1165fcu: goto label_1165fc;
        case 0x116600u: goto label_116600;
        case 0x116604u: goto label_116604;
        case 0x116608u: goto label_116608;
        case 0x11660cu: goto label_11660c;
        case 0x116610u: goto label_116610;
        case 0x116614u: goto label_116614;
        case 0x116618u: goto label_116618;
        case 0x11661cu: goto label_11661c;
        case 0x116620u: goto label_116620;
        case 0x116624u: goto label_116624;
        case 0x116628u: goto label_116628;
        case 0x11662cu: goto label_11662c;
        case 0x116630u: goto label_116630;
        case 0x116634u: goto label_116634;
        case 0x116638u: goto label_116638;
        case 0x11663cu: goto label_11663c;
        case 0x116640u: goto label_116640;
        case 0x116644u: goto label_116644;
        case 0x116648u: goto label_116648;
        case 0x11664cu: goto label_11664c;
        case 0x116650u: goto label_116650;
        case 0x116654u: goto label_116654;
        case 0x116658u: goto label_116658;
        case 0x11665cu: goto label_11665c;
        case 0x116660u: goto label_116660;
        case 0x116664u: goto label_116664;
        case 0x116668u: goto label_116668;
        case 0x11666cu: goto label_11666c;
        case 0x116670u: goto label_116670;
        case 0x116674u: goto label_116674;
        case 0x116678u: goto label_116678;
        case 0x11667cu: goto label_11667c;
        case 0x116680u: goto label_116680;
        case 0x116684u: goto label_116684;
        case 0x116688u: goto label_116688;
        case 0x11668cu: goto label_11668c;
        case 0x116690u: goto label_116690;
        case 0x116694u: goto label_116694;
        case 0x116698u: goto label_116698;
        case 0x11669cu: goto label_11669c;
        case 0x1166a0u: goto label_1166a0;
        case 0x1166a4u: goto label_1166a4;
        case 0x1166a8u: goto label_1166a8;
        case 0x1166acu: goto label_1166ac;
        case 0x1166b0u: goto label_1166b0;
        case 0x1166b4u: goto label_1166b4;
        case 0x1166b8u: goto label_1166b8;
        case 0x1166bcu: goto label_1166bc;
        case 0x1166c0u: goto label_1166c0;
        case 0x1166c4u: goto label_1166c4;
        case 0x1166c8u: goto label_1166c8;
        case 0x1166ccu: goto label_1166cc;
        default: break;
    }

    ctx->pc = 0x1165f8u;

label_1165f8:
    // 0x1165f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1165f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1165fc:
    // 0x1165fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1165fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_116600:
    // 0x116600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x116600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_116604:
    // 0x116604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_116608:
    // 0x116608: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x116608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11660c:
    // 0x11660c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x11660cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_116610:
    // 0x116610: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_116614:
    if (ctx->pc == 0x116614u) {
        ctx->pc = 0x116614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116610u;
        // 0x116614: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116618u;
        goto label_116618;
    }
    ctx->pc = 0x116610u;
    {
        const bool branch_taken_0x116610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116610u;
        // 0x116614: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116610) {
            ctx->pc = 0x1166BCu;
            goto label_1166bc;
        }
    }
    ctx->pc = 0x116618u;
label_116618:
    // 0x116618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x116618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11661c:
    // 0x11661c: 0x2442b0a0  addiu       $v0, $v0, -0x4F60
    ctx->pc = 0x11661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946976));
label_116620:
    // 0x116620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_116624:
    // 0x116624: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_116628:
    // 0x116628: 0x800008  jr          $a0
label_11662c:
    if (ctx->pc == 0x11662Cu) {
        ctx->pc = 0x116630u;
        goto label_116630;
    }
    ctx->pc = 0x116628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116630u: goto label_116630;
            case 0x116654u: goto label_116654;
            case 0x116664u: goto label_116664;
            case 0x11667Cu: goto label_11667c;
            case 0x1166A0u: goto label_1166a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116628u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x116630u;
label_116630:
    // 0x116630: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x116630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116634:
    // 0x116634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116638:
    // 0x116638: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x116638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_11663c:
    // 0x11663c: 0x40f809  jalr        $v0
label_116640:
    if (ctx->pc == 0x116640u) {
        ctx->pc = 0x116640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11663Cu;
        // 0x116640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116644u;
        goto label_116644;
    }
    ctx->pc = 0x11663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116644u);
        ctx->pc = 0x116640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11663Cu;
        // 0x116640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11663Cu, 0x116644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116644u;
label_116644:
    // 0x116644: 0xc0459c2  jal         func_116708
label_116648:
    if (ctx->pc == 0x116648u) {
        ctx->pc = 0x116648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116644u;
        // 0x116648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11664Cu;
        goto label_11664c;
    }
    ctx->pc = 0x116644u;
    SET_GPR_U32(ctx, 31, 0x11664Cu);
    ctx->pc = 0x116648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116644u;
    // 0x116648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116708u, 0x116644u, 0x11664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11664Cu;
label_11664c:
    // 0x11664c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_116650:
    if (ctx->pc == 0x116650u) {
        ctx->pc = 0x116650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11664Cu;
        // 0x116650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116654u;
        goto label_116654;
    }
    ctx->pc = 0x11664Cu;
    {
        const bool branch_taken_0x11664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11664Cu;
        // 0x116650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11664c) {
            ctx->pc = 0x1166C0u;
            goto label_1166c0;
        }
    }
    ctx->pc = 0x116654u;
label_116654:
    // 0x116654: 0xc08da4c  jal         func_236930
label_116658:
    if (ctx->pc == 0x116658u) {
        ctx->pc = 0x116658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116654u;
        // 0x116658: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11665Cu;
        goto label_11665c;
    }
    ctx->pc = 0x116654u;
    SET_GPR_U32(ctx, 31, 0x11665Cu);
    ctx->pc = 0x116658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116654u;
    // 0x116658: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236930u, 0x116654u, 0x11665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11665Cu;
label_11665c:
    // 0x11665c: 0x10000018  b           . + 4 + (0x18 << 2)
label_116660:
    if (ctx->pc == 0x116660u) {
        ctx->pc = 0x116660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11665Cu;
        // 0x116660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116664u;
        goto label_116664;
    }
    ctx->pc = 0x11665Cu;
    {
        const bool branch_taken_0x11665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11665Cu;
        // 0x116660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11665c) {
            ctx->pc = 0x1166C0u;
            goto label_1166c0;
        }
    }
    ctx->pc = 0x116664u;
label_116664:
    // 0x116664: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x116664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116668:
    // 0x116668: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x116668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_11666c:
    // 0x11666c: 0xc08da04  jal         func_236810
label_116670:
    if (ctx->pc == 0x116670u) {
        ctx->pc = 0x116670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11666Cu;
        // 0x116670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116674u;
        goto label_116674;
    }
    ctx->pc = 0x11666Cu;
    SET_GPR_U32(ctx, 31, 0x116674u);
    ctx->pc = 0x116670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11666Cu;
    // 0x116670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236810u, 0x11666Cu, 0x116674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116674u;
label_116674:
    // 0x116674: 0x10000012  b           . + 4 + (0x12 << 2)
label_116678:
    if (ctx->pc == 0x116678u) {
        ctx->pc = 0x116678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116674u;
        // 0x116678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11667Cu;
        goto label_11667c;
    }
    ctx->pc = 0x116674u;
    {
        const bool branch_taken_0x116674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116674u;
        // 0x116678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116674) {
            ctx->pc = 0x1166C0u;
            goto label_1166c0;
        }
    }
    ctx->pc = 0x11667Cu;
label_11667c:
    // 0x11667c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116680:
    // 0x116680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116684:
    // 0x116684: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x116684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_116688:
    // 0x116688: 0x40f809  jalr        $v0
label_11668c:
    if (ctx->pc == 0x11668Cu) {
        ctx->pc = 0x11668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116688u;
        // 0x11668c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116690u;
        goto label_116690;
    }
    ctx->pc = 0x116688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x116690u);
        ctx->pc = 0x11668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116688u;
        // 0x11668c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116688u, 0x116690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116690u;
label_116690:
    // 0x116690: 0xc08da68  jal         func_2369A0
label_116694:
    if (ctx->pc == 0x116694u) {
        ctx->pc = 0x116694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116690u;
        // 0x116694: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116698u;
        goto label_116698;
    }
    ctx->pc = 0x116690u;
    SET_GPR_U32(ctx, 31, 0x116698u);
    ctx->pc = 0x116694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116690u;
    // 0x116694: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2369A0u, 0x116690u, 0x116698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116698u;
label_116698:
    // 0x116698: 0x10000009  b           . + 4 + (0x9 << 2)
label_11669c:
    if (ctx->pc == 0x11669Cu) {
        ctx->pc = 0x11669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116698u;
        // 0x11669c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166A0u;
        goto label_1166a0;
    }
    ctx->pc = 0x116698u;
    {
        const bool branch_taken_0x116698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116698u;
        // 0x11669c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116698) {
            ctx->pc = 0x1166C0u;
            goto label_1166c0;
        }
    }
    ctx->pc = 0x1166A0u;
label_1166a0:
    // 0x1166a0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1166a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1166a4:
    // 0x1166a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1166a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1166a8:
    // 0x1166a8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1166a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1166ac:
    // 0x1166ac: 0x40f809  jalr        $v0
label_1166b0:
    if (ctx->pc == 0x1166B0u) {
        ctx->pc = 0x1166B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166ACu;
        // 0x1166b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166B4u;
        goto label_1166b4;
    }
    ctx->pc = 0x1166ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1166B4u);
        ctx->pc = 0x1166B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166ACu;
        // 0x1166b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166ACu, 0x1166B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1166B4u;
label_1166b4:
    // 0x1166b4: 0xc08da84  jal         func_236A10
label_1166b8:
    if (ctx->pc == 0x1166B8u) {
        ctx->pc = 0x1166B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166B4u;
        // 0x1166b8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166BCu;
        goto label_1166bc;
    }
    ctx->pc = 0x1166B4u;
    SET_GPR_U32(ctx, 31, 0x1166BCu);
    ctx->pc = 0x1166B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166B4u;
    // 0x1166b8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A10u, 0x1166B4u, 0x1166BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166BCu;
label_1166bc:
    // 0x1166bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1166bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1166c0:
    // 0x1166c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1166c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1166c4:
    // 0x1166c4: 0x3e00008  jr          $ra
label_1166c8:
    if (ctx->pc == 0x1166C8u) {
        ctx->pc = 0x1166C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166C4u;
        // 0x1166c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166CCu;
        goto label_1166cc;
    }
    ctx->pc = 0x1166C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1166C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166C4u;
        // 0x1166c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1166CCu;
label_1166cc:
    // 0x1166cc: 0x0  nop
    ctx->pc = 0x1166ccu;
    // NOP
    ctx->pc = 0x1166d0u;
}
