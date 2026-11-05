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

// Function: sub_0011C600
// Address: 0x11c600 - 0x11c7c8
void sub_0011C600_0x11c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C600_0x11c600");
#endif

    switch (ctx->pc) {
        case 0x11c600u: goto label_11c600;
        case 0x11c604u: goto label_11c604;
        case 0x11c608u: goto label_11c608;
        case 0x11c60cu: goto label_11c60c;
        case 0x11c610u: goto label_11c610;
        case 0x11c614u: goto label_11c614;
        case 0x11c618u: goto label_11c618;
        case 0x11c61cu: goto label_11c61c;
        case 0x11c620u: goto label_11c620;
        case 0x11c624u: goto label_11c624;
        case 0x11c628u: goto label_11c628;
        case 0x11c62cu: goto label_11c62c;
        case 0x11c630u: goto label_11c630;
        case 0x11c634u: goto label_11c634;
        case 0x11c638u: goto label_11c638;
        case 0x11c63cu: goto label_11c63c;
        case 0x11c640u: goto label_11c640;
        case 0x11c644u: goto label_11c644;
        case 0x11c648u: goto label_11c648;
        case 0x11c64cu: goto label_11c64c;
        case 0x11c650u: goto label_11c650;
        case 0x11c654u: goto label_11c654;
        case 0x11c658u: goto label_11c658;
        case 0x11c65cu: goto label_11c65c;
        case 0x11c660u: goto label_11c660;
        case 0x11c664u: goto label_11c664;
        case 0x11c668u: goto label_11c668;
        case 0x11c66cu: goto label_11c66c;
        case 0x11c670u: goto label_11c670;
        case 0x11c674u: goto label_11c674;
        case 0x11c678u: goto label_11c678;
        case 0x11c67cu: goto label_11c67c;
        case 0x11c680u: goto label_11c680;
        case 0x11c684u: goto label_11c684;
        case 0x11c688u: goto label_11c688;
        case 0x11c68cu: goto label_11c68c;
        case 0x11c690u: goto label_11c690;
        case 0x11c694u: goto label_11c694;
        case 0x11c698u: goto label_11c698;
        case 0x11c69cu: goto label_11c69c;
        case 0x11c6a0u: goto label_11c6a0;
        case 0x11c6a4u: goto label_11c6a4;
        case 0x11c6a8u: goto label_11c6a8;
        case 0x11c6acu: goto label_11c6ac;
        case 0x11c6b0u: goto label_11c6b0;
        case 0x11c6b4u: goto label_11c6b4;
        case 0x11c6b8u: goto label_11c6b8;
        case 0x11c6bcu: goto label_11c6bc;
        case 0x11c6c0u: goto label_11c6c0;
        case 0x11c6c4u: goto label_11c6c4;
        case 0x11c6c8u: goto label_11c6c8;
        case 0x11c6ccu: goto label_11c6cc;
        case 0x11c6d0u: goto label_11c6d0;
        case 0x11c6d4u: goto label_11c6d4;
        case 0x11c6d8u: goto label_11c6d8;
        case 0x11c6dcu: goto label_11c6dc;
        case 0x11c6e0u: goto label_11c6e0;
        case 0x11c6e4u: goto label_11c6e4;
        case 0x11c6e8u: goto label_11c6e8;
        case 0x11c6ecu: goto label_11c6ec;
        case 0x11c6f0u: goto label_11c6f0;
        case 0x11c6f4u: goto label_11c6f4;
        case 0x11c6f8u: goto label_11c6f8;
        case 0x11c6fcu: goto label_11c6fc;
        case 0x11c700u: goto label_11c700;
        case 0x11c704u: goto label_11c704;
        case 0x11c708u: goto label_11c708;
        case 0x11c70cu: goto label_11c70c;
        case 0x11c710u: goto label_11c710;
        case 0x11c714u: goto label_11c714;
        case 0x11c718u: goto label_11c718;
        case 0x11c71cu: goto label_11c71c;
        case 0x11c720u: goto label_11c720;
        case 0x11c724u: goto label_11c724;
        case 0x11c728u: goto label_11c728;
        case 0x11c72cu: goto label_11c72c;
        case 0x11c730u: goto label_11c730;
        case 0x11c734u: goto label_11c734;
        case 0x11c738u: goto label_11c738;
        case 0x11c73cu: goto label_11c73c;
        case 0x11c740u: goto label_11c740;
        case 0x11c744u: goto label_11c744;
        case 0x11c748u: goto label_11c748;
        case 0x11c74cu: goto label_11c74c;
        case 0x11c750u: goto label_11c750;
        case 0x11c754u: goto label_11c754;
        case 0x11c758u: goto label_11c758;
        case 0x11c75cu: goto label_11c75c;
        case 0x11c760u: goto label_11c760;
        case 0x11c764u: goto label_11c764;
        case 0x11c768u: goto label_11c768;
        case 0x11c76cu: goto label_11c76c;
        case 0x11c770u: goto label_11c770;
        case 0x11c774u: goto label_11c774;
        case 0x11c778u: goto label_11c778;
        case 0x11c77cu: goto label_11c77c;
        case 0x11c780u: goto label_11c780;
        case 0x11c784u: goto label_11c784;
        case 0x11c788u: goto label_11c788;
        case 0x11c78cu: goto label_11c78c;
        case 0x11c790u: goto label_11c790;
        case 0x11c794u: goto label_11c794;
        case 0x11c798u: goto label_11c798;
        case 0x11c79cu: goto label_11c79c;
        case 0x11c7a0u: goto label_11c7a0;
        case 0x11c7a4u: goto label_11c7a4;
        case 0x11c7a8u: goto label_11c7a8;
        case 0x11c7acu: goto label_11c7ac;
        case 0x11c7b0u: goto label_11c7b0;
        case 0x11c7b4u: goto label_11c7b4;
        case 0x11c7b8u: goto label_11c7b8;
        case 0x11c7bcu: goto label_11c7bc;
        case 0x11c7c0u: goto label_11c7c0;
        case 0x11c7c4u: goto label_11c7c4;
        default: break;
    }

    ctx->pc = 0x11c600u;

label_11c600:
    // 0x11c600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_11c604:
    // 0x11c604: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x11c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_11c608:
    // 0x11c608: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_11c60c:
    // 0x11c60c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_11c610:
    // 0x11c610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c614:
    // 0x11c614: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11c618:
    // 0x11c618: 0x3c110044  lui         $s1, 0x44
    ctx->pc = 0x11c618u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)68 << 16));
label_11c61c:
    // 0x11c61c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_11c620:
    // 0x11c620: 0x3c120044  lui         $s2, 0x44
    ctx->pc = 0x11c620u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)68 << 16));
label_11c624:
    // 0x11c624: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_11c628:
    // 0x11c628: 0x3c130044  lui         $s3, 0x44
    ctx->pc = 0x11c628u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)68 << 16));
label_11c62c:
    // 0x11c62c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x11c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_11c630:
    // 0x11c630: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x11c630u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
label_11c634:
    // 0x11c634: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_11c638:
    // 0x11c638: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x11c638u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
label_11c63c:
    // 0x11c63c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11c63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_11c640:
    // 0x11c640: 0x3c160044  lui         $s6, 0x44
    ctx->pc = 0x11c640u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)68 << 16));
label_11c644:
    // 0x11c644: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_11c648:
    // 0x11c648: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x11c648u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_11c64c:
    // 0x11c64c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x11c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11c650:
    // 0x11c650: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x11c650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_11c654:
    // 0x11c654: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x11c654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11c658:
    // 0x11c658: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x11c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_11c65c:
    // 0x11c65c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x11c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_11c660:
    // 0x11c660: 0x40f809  jalr        $v0
label_11c664:
    if (ctx->pc == 0x11C664u) {
        ctx->pc = 0x11C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C660u;
        // 0x11c664: 0x3c170044  lui         $s7, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C668u;
        goto label_11c668;
    }
    ctx->pc = 0x11C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C668u);
        ctx->pc = 0x11C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C660u;
        // 0x11c664: 0x3c170044  lui         $s7, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C660u, 0x11C668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C668u;
label_11c668:
    // 0x11c668: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c66c:
    // 0x11c66c: 0xc0d7384  jal         func_35CE10
label_11c670:
    if (ctx->pc == 0x11C670u) {
        ctx->pc = 0x11C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C66Cu;
        // 0x11c670: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C674u;
        goto label_11c674;
    }
    ctx->pc = 0x11C66Cu;
    SET_GPR_U32(ctx, 31, 0x11C674u);
    ctx->pc = 0x11C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C66Cu;
    // 0x11c670: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11C66Cu, 0x11C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C674u;
label_11c674:
    // 0x11c674: 0x10000040  b           . + 4 + (0x40 << 2)
label_11c678:
    if (ctx->pc == 0x11C678u) {
        ctx->pc = 0x11C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C674u;
        // 0x11c678: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C67Cu;
        goto label_11c67c;
    }
    ctx->pc = 0x11C674u;
    {
        const bool branch_taken_0x11c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C674u;
        // 0x11c678: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c674) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C67Cu;
label_11c67c:
    // 0x11c67c: 0x0  nop
    ctx->pc = 0x11c67cu;
    // NOP
label_11c680:
    // 0x11c680: 0xc0d73cc  jal         func_35CF30
label_11c684:
    if (ctx->pc == 0x11C684u) {
        ctx->pc = 0x11C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C680u;
        // 0x11c684: 0x26e5bd08  addiu       $a1, $s7, -0x42F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C688u;
        goto label_11c688;
    }
    ctx->pc = 0x11C680u;
    SET_GPR_U32(ctx, 31, 0x11C688u);
    ctx->pc = 0x11C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C680u;
    // 0x11c684: 0x26e5bd08  addiu       $a1, $s7, -0x42F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C680u, 0x11C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C688u;
label_11c688:
    // 0x11c688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c68c:
    // 0x11c68c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c690:
    if (ctx->pc == 0x11C690u) {
        ctx->pc = 0x11C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C68Cu;
        // 0x11c690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C694u;
        goto label_11c694;
    }
    ctx->pc = 0x11C68Cu;
    {
        const bool branch_taken_0x11c68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C68Cu;
        // 0x11c690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c68c) {
            ctx->pc = 0x11C6A4u;
            goto label_11c6a4;
        }
    }
    ctx->pc = 0x11C694u;
label_11c694:
    // 0x11c694: 0xc0473e2  jal         func_11CF88
label_11c698:
    if (ctx->pc == 0x11C698u) {
        ctx->pc = 0x11C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C694u;
        // 0x11c698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C69Cu;
        goto label_11c69c;
    }
    ctx->pc = 0x11C694u;
    SET_GPR_U32(ctx, 31, 0x11C69Cu);
    ctx->pc = 0x11C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C694u;
    // 0x11c698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF88u, 0x11C694u, 0x11C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C69Cu;
label_11c69c:
    // 0x11c69c: 0x10000036  b           . + 4 + (0x36 << 2)
label_11c6a0:
    if (ctx->pc == 0x11C6A0u) {
        ctx->pc = 0x11C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C69Cu;
        // 0x11c6a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6A4u;
        goto label_11c6a4;
    }
    ctx->pc = 0x11C69Cu;
    {
        const bool branch_taken_0x11c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C69Cu;
        // 0x11c6a0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c69c) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C6A4u;
label_11c6a4:
    // 0x11c6a4: 0xc0d73cc  jal         func_35CF30
label_11c6a8:
    if (ctx->pc == 0x11C6A8u) {
        ctx->pc = 0x11C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6A4u;
        // 0x11c6a8: 0x26c5bd10  addiu       $a1, $s6, -0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6ACu;
        goto label_11c6ac;
    }
    ctx->pc = 0x11C6A4u;
    SET_GPR_U32(ctx, 31, 0x11C6ACu);
    ctx->pc = 0x11C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6A4u;
    // 0x11c6a8: 0x26c5bd10  addiu       $a1, $s6, -0x42F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C6A4u, 0x11C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6ACu;
label_11c6ac:
    // 0x11c6ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c6b0:
    // 0x11c6b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c6b4:
    if (ctx->pc == 0x11C6B4u) {
        ctx->pc = 0x11C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6B0u;
        // 0x11c6b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6B8u;
        goto label_11c6b8;
    }
    ctx->pc = 0x11C6B0u;
    {
        const bool branch_taken_0x11c6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6B0u;
        // 0x11c6b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6b0) {
            ctx->pc = 0x11C6C8u;
            goto label_11c6c8;
        }
    }
    ctx->pc = 0x11C6B8u;
label_11c6b8:
    // 0x11c6b8: 0xc0473f2  jal         func_11CFC8
label_11c6bc:
    if (ctx->pc == 0x11C6BCu) {
        ctx->pc = 0x11C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6B8u;
        // 0x11c6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6C0u;
        goto label_11c6c0;
    }
    ctx->pc = 0x11C6B8u;
    SET_GPR_U32(ctx, 31, 0x11C6C0u);
    ctx->pc = 0x11C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6B8u;
    // 0x11c6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CFC8u, 0x11C6B8u, 0x11C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6C0u;
label_11c6c0:
    // 0x11c6c0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_11c6c4:
    if (ctx->pc == 0x11C6C4u) {
        ctx->pc = 0x11C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C0u;
        // 0x11c6c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6C8u;
        goto label_11c6c8;
    }
    ctx->pc = 0x11C6C0u;
    {
        const bool branch_taken_0x11c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C0u;
        // 0x11c6c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6c0) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C6C8u;
label_11c6c8:
    // 0x11c6c8: 0xc0d73cc  jal         func_35CF30
label_11c6cc:
    if (ctx->pc == 0x11C6CCu) {
        ctx->pc = 0x11C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C8u;
        // 0x11c6cc: 0x26a5bd18  addiu       $a1, $s5, -0x42E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6D0u;
        goto label_11c6d0;
    }
    ctx->pc = 0x11C6C8u;
    SET_GPR_U32(ctx, 31, 0x11C6D0u);
    ctx->pc = 0x11C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6C8u;
    // 0x11c6cc: 0x26a5bd18  addiu       $a1, $s5, -0x42E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C6C8u, 0x11C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6D0u;
label_11c6d0:
    // 0x11c6d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c6d4:
    // 0x11c6d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c6d8:
    if (ctx->pc == 0x11C6D8u) {
        ctx->pc = 0x11C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D4u;
        // 0x11c6d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6DCu;
        goto label_11c6dc;
    }
    ctx->pc = 0x11C6D4u;
    {
        const bool branch_taken_0x11c6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D4u;
        // 0x11c6d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d4) {
            ctx->pc = 0x11C6ECu;
            goto label_11c6ec;
        }
    }
    ctx->pc = 0x11C6DCu;
label_11c6dc:
    // 0x11c6dc: 0xc047402  jal         func_11D008
label_11c6e0:
    if (ctx->pc == 0x11C6E0u) {
        ctx->pc = 0x11C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6DCu;
        // 0x11c6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6E4u;
        goto label_11c6e4;
    }
    ctx->pc = 0x11C6DCu;
    SET_GPR_U32(ctx, 31, 0x11C6E4u);
    ctx->pc = 0x11C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6DCu;
    // 0x11c6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D008u, 0x11C6DCu, 0x11C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6E4u;
label_11c6e4:
    // 0x11c6e4: 0x10000024  b           . + 4 + (0x24 << 2)
label_11c6e8:
    if (ctx->pc == 0x11C6E8u) {
        ctx->pc = 0x11C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6E4u;
        // 0x11c6e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6ECu;
        goto label_11c6ec;
    }
    ctx->pc = 0x11C6E4u;
    {
        const bool branch_taken_0x11c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6E4u;
        // 0x11c6e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6e4) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C6ECu;
label_11c6ec:
    // 0x11c6ec: 0xc0d73cc  jal         func_35CF30
label_11c6f0:
    if (ctx->pc == 0x11C6F0u) {
        ctx->pc = 0x11C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6ECu;
        // 0x11c6f0: 0x2685bd20  addiu       $a1, $s4, -0x42E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C6F4u;
        goto label_11c6f4;
    }
    ctx->pc = 0x11C6ECu;
    SET_GPR_U32(ctx, 31, 0x11C6F4u);
    ctx->pc = 0x11C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6ECu;
    // 0x11c6f0: 0x2685bd20  addiu       $a1, $s4, -0x42E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C6ECu, 0x11C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6F4u;
label_11c6f4:
    // 0x11c6f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c6f8:
    // 0x11c6f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c6fc:
    if (ctx->pc == 0x11C6FCu) {
        ctx->pc = 0x11C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6F8u;
        // 0x11c6fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C700u;
        goto label_11c700;
    }
    ctx->pc = 0x11C6F8u;
    {
        const bool branch_taken_0x11c6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6F8u;
        // 0x11c6fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6f8) {
            ctx->pc = 0x11C710u;
            goto label_11c710;
        }
    }
    ctx->pc = 0x11C700u;
label_11c700:
    // 0x11c700: 0xc04741a  jal         func_11D068
label_11c704:
    if (ctx->pc == 0x11C704u) {
        ctx->pc = 0x11C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C700u;
        // 0x11c704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C708u;
        goto label_11c708;
    }
    ctx->pc = 0x11C700u;
    SET_GPR_U32(ctx, 31, 0x11C708u);
    ctx->pc = 0x11C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C700u;
    // 0x11c704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D068u, 0x11C700u, 0x11C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C708u;
label_11c708:
    // 0x11c708: 0x1000001b  b           . + 4 + (0x1B << 2)
label_11c70c:
    if (ctx->pc == 0x11C70Cu) {
        ctx->pc = 0x11C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C708u;
        // 0x11c70c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C710u;
        goto label_11c710;
    }
    ctx->pc = 0x11C708u;
    {
        const bool branch_taken_0x11c708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C708u;
        // 0x11c70c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c708) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C710u;
label_11c710:
    // 0x11c710: 0xc0d73cc  jal         func_35CF30
label_11c714:
    if (ctx->pc == 0x11C714u) {
        ctx->pc = 0x11C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C710u;
        // 0x11c714: 0x2665bd28  addiu       $a1, $s3, -0x42D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C718u;
        goto label_11c718;
    }
    ctx->pc = 0x11C710u;
    SET_GPR_U32(ctx, 31, 0x11C718u);
    ctx->pc = 0x11C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C710u;
    // 0x11c714: 0x2665bd28  addiu       $a1, $s3, -0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C710u, 0x11C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C718u;
label_11c718:
    // 0x11c718: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c71c:
    // 0x11c71c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c720:
    if (ctx->pc == 0x11C720u) {
        ctx->pc = 0x11C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C71Cu;
        // 0x11c720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C724u;
        goto label_11c724;
    }
    ctx->pc = 0x11C71Cu;
    {
        const bool branch_taken_0x11c71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C71Cu;
        // 0x11c720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c71c) {
            ctx->pc = 0x11C734u;
            goto label_11c734;
        }
    }
    ctx->pc = 0x11C724u;
label_11c724:
    // 0x11c724: 0xc047426  jal         func_11D098
label_11c728:
    if (ctx->pc == 0x11C728u) {
        ctx->pc = 0x11C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C724u;
        // 0x11c728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C72Cu;
        goto label_11c72c;
    }
    ctx->pc = 0x11C724u;
    SET_GPR_U32(ctx, 31, 0x11C72Cu);
    ctx->pc = 0x11C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C724u;
    // 0x11c728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D098u, 0x11C724u, 0x11C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C72Cu;
label_11c72c:
    // 0x11c72c: 0x10000012  b           . + 4 + (0x12 << 2)
label_11c730:
    if (ctx->pc == 0x11C730u) {
        ctx->pc = 0x11C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C72Cu;
        // 0x11c730: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C734u;
        goto label_11c734;
    }
    ctx->pc = 0x11C72Cu;
    {
        const bool branch_taken_0x11c72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C72Cu;
        // 0x11c730: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c72c) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C734u;
label_11c734:
    // 0x11c734: 0xc0d73cc  jal         func_35CF30
label_11c738:
    if (ctx->pc == 0x11C738u) {
        ctx->pc = 0x11C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C734u;
        // 0x11c738: 0x2645bd38  addiu       $a1, $s2, -0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C73Cu;
        goto label_11c73c;
    }
    ctx->pc = 0x11C734u;
    SET_GPR_U32(ctx, 31, 0x11C73Cu);
    ctx->pc = 0x11C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C734u;
    // 0x11c738: 0x2645bd38  addiu       $a1, $s2, -0x42C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C734u, 0x11C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C73Cu;
label_11c73c:
    // 0x11c73c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c740:
    // 0x11c740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_11c744:
    if (ctx->pc == 0x11C744u) {
        ctx->pc = 0x11C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C740u;
        // 0x11c744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C748u;
        goto label_11c748;
    }
    ctx->pc = 0x11C740u;
    {
        const bool branch_taken_0x11c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C740u;
        // 0x11c744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c740) {
            ctx->pc = 0x11C758u;
            goto label_11c758;
        }
    }
    ctx->pc = 0x11C748u;
label_11c748:
    // 0x11c748: 0xc047436  jal         func_11D0D8
label_11c74c:
    if (ctx->pc == 0x11C74Cu) {
        ctx->pc = 0x11C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C748u;
        // 0x11c74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C750u;
        goto label_11c750;
    }
    ctx->pc = 0x11C748u;
    SET_GPR_U32(ctx, 31, 0x11C750u);
    ctx->pc = 0x11C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C748u;
    // 0x11c74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D0D8u, 0x11C748u, 0x11C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C750u;
label_11c750:
    // 0x11c750: 0x10000009  b           . + 4 + (0x9 << 2)
label_11c754:
    if (ctx->pc == 0x11C754u) {
        ctx->pc = 0x11C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C750u;
        // 0x11c754: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C758u;
        goto label_11c758;
    }
    ctx->pc = 0x11C750u;
    {
        const bool branch_taken_0x11c750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C750u;
        // 0x11c754: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c750) {
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C758u;
label_11c758:
    // 0x11c758: 0xc0d73cc  jal         func_35CF30
label_11c75c:
    if (ctx->pc == 0x11C75Cu) {
        ctx->pc = 0x11C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C758u;
        // 0x11c75c: 0x2625bd40  addiu       $a1, $s1, -0x42C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C760u;
        goto label_11c760;
    }
    ctx->pc = 0x11C758u;
    SET_GPR_U32(ctx, 31, 0x11C760u);
    ctx->pc = 0x11C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C758u;
    // 0x11c75c: 0x2625bd40  addiu       $a1, $s1, -0x42C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11C758u, 0x11C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C760u;
label_11c760:
    // 0x11c760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11c760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11c764:
    // 0x11c764: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_11c768:
    if (ctx->pc == 0x11C768u) {
        ctx->pc = 0x11C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C764u;
        // 0x11c768: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C76Cu;
        goto label_11c76c;
    }
    ctx->pc = 0x11C764u;
    {
        const bool branch_taken_0x11c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c764) {
            ctx->pc = 0x11C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C764u;
            // 0x11c768: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C778u;
            goto label_11c778;
        }
    }
    ctx->pc = 0x11C76Cu;
label_11c76c:
    // 0x11c76c: 0xc047442  jal         func_11D108
label_11c770:
    if (ctx->pc == 0x11C770u) {
        ctx->pc = 0x11C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C76Cu;
        // 0x11c770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C774u;
        goto label_11c774;
    }
    ctx->pc = 0x11C76Cu;
    SET_GPR_U32(ctx, 31, 0x11C774u);
    ctx->pc = 0x11C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C76Cu;
    // 0x11c770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D108u, 0x11C76Cu, 0x11C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C774u;
label_11c774:
    // 0x11c774: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11c774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11c778:
    // 0x11c778: 0xc09de68  jal         func_2779A0
label_11c77c:
    if (ctx->pc == 0x11C77Cu) {
        ctx->pc = 0x11C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C778u;
        // 0x11c77c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C780u;
        goto label_11c780;
    }
    ctx->pc = 0x11C778u;
    SET_GPR_U32(ctx, 31, 0x11C780u);
    ctx->pc = 0x11C77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C778u;
    // 0x11c77c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11C778u, 0x11C780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C780u;
label_11c780:
    // 0x11c780: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_11c784:
    if (ctx->pc == 0x11C784u) {
        ctx->pc = 0x11C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C780u;
        // 0x11c784: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C788u;
        goto label_11c788;
    }
    ctx->pc = 0x11C780u;
    {
        const bool branch_taken_0x11c780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C780u;
        // 0x11c784: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c780) {
            ctx->pc = 0x11C680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c680;
        }
    }
    ctx->pc = 0x11C788u;
label_11c788:
    // 0x11c788: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x11c788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_11c78c:
    // 0x11c78c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11c790:
    // 0x11c790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11c794:
    // 0x11c794: 0xc0d7412  jal         func_35D048
label_11c798:
    if (ctx->pc == 0x11C798u) {
        ctx->pc = 0x11C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C794u;
        // 0x11c798: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C79Cu;
        goto label_11c79c;
    }
    ctx->pc = 0x11C794u;
    SET_GPR_U32(ctx, 31, 0x11C79Cu);
    ctx->pc = 0x11C798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C794u;
    // 0x11c798: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11C794u, 0x11C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C79Cu;
label_11c79c:
    // 0x11c79c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11c7a0:
    // 0x11c7a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11c7a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11c7a4:
    // 0x11c7a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11c7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11c7a8:
    // 0x11c7a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11c7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_11c7ac:
    // 0x11c7ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11c7acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11c7b0:
    // 0x11c7b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x11c7b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_11c7b4:
    // 0x11c7b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x11c7b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11c7b8:
    // 0x11c7b8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x11c7b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_11c7bc:
    // 0x11c7bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11c7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11c7c0:
    // 0x11c7c0: 0x3e00008  jr          $ra
label_11c7c4:
    if (ctx->pc == 0x11C7C4u) {
        ctx->pc = 0x11C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7C0u;
        // 0x11c7c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C7C8u;
        goto label_fallthrough_0x11c7c0;
    }
    ctx->pc = 0x11C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7C0u;
        // 0x11c7c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11c7c0:
    ctx->pc = 0x11C7C8u;
}
