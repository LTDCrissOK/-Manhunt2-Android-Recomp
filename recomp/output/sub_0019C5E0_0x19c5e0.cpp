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

// Function: sub_0019C5E0
// Address: 0x19c5e0 - 0x19c728
void sub_0019C5E0_0x19c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C5E0_0x19c5e0");
#endif

    switch (ctx->pc) {
        case 0x19c5e0u: goto label_19c5e0;
        case 0x19c5e4u: goto label_19c5e4;
        case 0x19c5e8u: goto label_19c5e8;
        case 0x19c5ecu: goto label_19c5ec;
        case 0x19c5f0u: goto label_19c5f0;
        case 0x19c5f4u: goto label_19c5f4;
        case 0x19c5f8u: goto label_19c5f8;
        case 0x19c5fcu: goto label_19c5fc;
        case 0x19c600u: goto label_19c600;
        case 0x19c604u: goto label_19c604;
        case 0x19c608u: goto label_19c608;
        case 0x19c60cu: goto label_19c60c;
        case 0x19c610u: goto label_19c610;
        case 0x19c614u: goto label_19c614;
        case 0x19c618u: goto label_19c618;
        case 0x19c61cu: goto label_19c61c;
        case 0x19c620u: goto label_19c620;
        case 0x19c624u: goto label_19c624;
        case 0x19c628u: goto label_19c628;
        case 0x19c62cu: goto label_19c62c;
        case 0x19c630u: goto label_19c630;
        case 0x19c634u: goto label_19c634;
        case 0x19c638u: goto label_19c638;
        case 0x19c63cu: goto label_19c63c;
        case 0x19c640u: goto label_19c640;
        case 0x19c644u: goto label_19c644;
        case 0x19c648u: goto label_19c648;
        case 0x19c64cu: goto label_19c64c;
        case 0x19c650u: goto label_19c650;
        case 0x19c654u: goto label_19c654;
        case 0x19c658u: goto label_19c658;
        case 0x19c65cu: goto label_19c65c;
        case 0x19c660u: goto label_19c660;
        case 0x19c664u: goto label_19c664;
        case 0x19c668u: goto label_19c668;
        case 0x19c66cu: goto label_19c66c;
        case 0x19c670u: goto label_19c670;
        case 0x19c674u: goto label_19c674;
        case 0x19c678u: goto label_19c678;
        case 0x19c67cu: goto label_19c67c;
        case 0x19c680u: goto label_19c680;
        case 0x19c684u: goto label_19c684;
        case 0x19c688u: goto label_19c688;
        case 0x19c68cu: goto label_19c68c;
        case 0x19c690u: goto label_19c690;
        case 0x19c694u: goto label_19c694;
        case 0x19c698u: goto label_19c698;
        case 0x19c69cu: goto label_19c69c;
        case 0x19c6a0u: goto label_19c6a0;
        case 0x19c6a4u: goto label_19c6a4;
        case 0x19c6a8u: goto label_19c6a8;
        case 0x19c6acu: goto label_19c6ac;
        case 0x19c6b0u: goto label_19c6b0;
        case 0x19c6b4u: goto label_19c6b4;
        case 0x19c6b8u: goto label_19c6b8;
        case 0x19c6bcu: goto label_19c6bc;
        case 0x19c6c0u: goto label_19c6c0;
        case 0x19c6c4u: goto label_19c6c4;
        case 0x19c6c8u: goto label_19c6c8;
        case 0x19c6ccu: goto label_19c6cc;
        case 0x19c6d0u: goto label_19c6d0;
        case 0x19c6d4u: goto label_19c6d4;
        case 0x19c6d8u: goto label_19c6d8;
        case 0x19c6dcu: goto label_19c6dc;
        case 0x19c6e0u: goto label_19c6e0;
        case 0x19c6e4u: goto label_19c6e4;
        case 0x19c6e8u: goto label_19c6e8;
        case 0x19c6ecu: goto label_19c6ec;
        case 0x19c6f0u: goto label_19c6f0;
        case 0x19c6f4u: goto label_19c6f4;
        case 0x19c6f8u: goto label_19c6f8;
        case 0x19c6fcu: goto label_19c6fc;
        case 0x19c700u: goto label_19c700;
        case 0x19c704u: goto label_19c704;
        case 0x19c708u: goto label_19c708;
        case 0x19c70cu: goto label_19c70c;
        case 0x19c710u: goto label_19c710;
        case 0x19c714u: goto label_19c714;
        case 0x19c718u: goto label_19c718;
        case 0x19c71cu: goto label_19c71c;
        case 0x19c720u: goto label_19c720;
        case 0x19c724u: goto label_19c724;
        default: break;
    }

    ctx->pc = 0x19c5e0u;

label_19c5e0:
    // 0x19c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19c5e4:
    // 0x19c5e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_19c5e8:
    // 0x19c5e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19c5ec:
    // 0x19c5ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19c5f0:
    // 0x19c5f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c5f4:
    // 0x19c5f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19c5f8:
    // 0x19c5f8: 0x24510898  addiu       $s1, $v0, 0x898
    ctx->pc = 0x19c5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2200));
label_19c5fc:
    // 0x19c5fc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19c600:
    // 0x19c600: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19c604:
    // 0x19c604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c608:
    // 0x19c608: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x19c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_19c60c:
    // 0x19c60c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c610:
    // 0x19c610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c614:
    // 0x19c614: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c618:
    // 0x19c618: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x19c618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_19c61c:
    // 0x19c61c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_19c620:
    // 0x19c620: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c624:
    // 0x19c624: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x19c624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_19c628:
    // 0x19c628: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19c62c:
    // 0x19c62c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19c630:
    if (ctx->pc == 0x19C630u) {
        ctx->pc = 0x19C634u;
        goto label_19c634;
    }
    ctx->pc = 0x19C62Cu;
    {
        const bool branch_taken_0x19c62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c62c) {
            ctx->pc = 0x19C644u;
            goto label_19c644;
        }
    }
    ctx->pc = 0x19C634u;
label_19c634:
    // 0x19c634: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19c638:
    // 0x19c638: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c63c:
    // 0x19c63c: 0x40f809  jalr        $v0
label_19c640:
    if (ctx->pc == 0x19C640u) {
        ctx->pc = 0x19C644u;
        goto label_19c644;
    }
    ctx->pc = 0x19C63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C644u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C63Cu, 0x19C644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C644u;
label_19c644:
    // 0x19c644: 0xc061a16  jal         func_186858
label_19c648:
    if (ctx->pc == 0x19C648u) {
        ctx->pc = 0x19C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C644u;
        // 0x19c648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C64Cu;
        goto label_19c64c;
    }
    ctx->pc = 0x19C644u;
    SET_GPR_U32(ctx, 31, 0x19C64Cu);
    ctx->pc = 0x19C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C644u;
    // 0x19c648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C644u, 0x19C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C64Cu;
label_19c64c:
    // 0x19c64c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c650:
    // 0x19c650: 0xc06ee30  jal         func_1BB8C0
label_19c654:
    if (ctx->pc == 0x19C654u) {
        ctx->pc = 0x19C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C650u;
        // 0x19c654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C658u;
        goto label_19c658;
    }
    ctx->pc = 0x19C650u;
    SET_GPR_U32(ctx, 31, 0x19C658u);
    ctx->pc = 0x19C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C650u;
    // 0x19c654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x19C650u, 0x19C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C658u;
label_19c658:
    // 0x19c658: 0xc061a26  jal         func_186898
label_19c65c:
    if (ctx->pc == 0x19C65Cu) {
        ctx->pc = 0x19C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C658u;
        // 0x19c65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C660u;
        goto label_19c660;
    }
    ctx->pc = 0x19C658u;
    SET_GPR_U32(ctx, 31, 0x19C660u);
    ctx->pc = 0x19C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C658u;
    // 0x19c65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19C658u, 0x19C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C660u;
label_19c660:
    // 0x19c660: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_19c664:
    // 0x19c664: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_19c668:
    // 0x19c668: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19c668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_19c66c:
    // 0x19c66c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_19c670:
    if (ctx->pc == 0x19C670u) {
        ctx->pc = 0x19C674u;
        goto label_19c674;
    }
    ctx->pc = 0x19C66Cu;
    {
        const bool branch_taken_0x19c66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19c66c) {
            ctx->pc = 0x19C6CCu;
            goto label_19c6cc;
        }
    }
    ctx->pc = 0x19C674u;
label_19c674:
    // 0x19c674: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_19c678:
    // 0x19c678: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x19c678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_19c67c:
    // 0x19c67c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19c680:
    if (ctx->pc == 0x19C680u) {
        ctx->pc = 0x19C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C67Cu;
        // 0x19c680: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C684u;
        goto label_19c684;
    }
    ctx->pc = 0x19C67Cu;
    {
        const bool branch_taken_0x19c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C67Cu;
        // 0x19c680: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c67c) {
            ctx->pc = 0x19C69Cu;
            goto label_19c69c;
        }
    }
    ctx->pc = 0x19C684u;
label_19c684:
    // 0x19c684: 0xc061a16  jal         func_186858
label_19c688:
    if (ctx->pc == 0x19C688u) {
        ctx->pc = 0x19C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C684u;
        // 0x19c688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C68Cu;
        goto label_19c68c;
    }
    ctx->pc = 0x19C684u;
    SET_GPR_U32(ctx, 31, 0x19C68Cu);
    ctx->pc = 0x19C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C684u;
    // 0x19c688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C684u, 0x19C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C68Cu;
label_19c68c:
    // 0x19c68c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c690:
    // 0x19c690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c694:
    // 0x19c694: 0x10000011  b           . + 4 + (0x11 << 2)
label_19c698:
    if (ctx->pc == 0x19C698u) {
        ctx->pc = 0x19C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C694u;
        // 0x19c698: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C69Cu;
        goto label_19c69c;
    }
    ctx->pc = 0x19C694u;
    {
        const bool branch_taken_0x19c694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C694u;
        // 0x19c698: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c694) {
            ctx->pc = 0x19C6DCu;
            goto label_19c6dc;
        }
    }
    ctx->pc = 0x19C69Cu;
label_19c69c:
    // 0x19c69c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19c6a0:
    if (ctx->pc == 0x19C6A0u) {
        ctx->pc = 0x19C6A4u;
        goto label_19c6a4;
    }
    ctx->pc = 0x19C69Cu;
    {
        const bool branch_taken_0x19c69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c69c) {
            ctx->pc = 0x19C6CCu;
            goto label_19c6cc;
        }
    }
    ctx->pc = 0x19C6A4u;
label_19c6a4:
    // 0x19c6a4: 0xc061a16  jal         func_186858
label_19c6a8:
    if (ctx->pc == 0x19C6A8u) {
        ctx->pc = 0x19C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6A4u;
        // 0x19c6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6ACu;
        goto label_19c6ac;
    }
    ctx->pc = 0x19C6A4u;
    SET_GPR_U32(ctx, 31, 0x19C6ACu);
    ctx->pc = 0x19C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6A4u;
    // 0x19c6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C6A4u, 0x19C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6ACu;
label_19c6ac:
    // 0x19c6ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c6b0:
    // 0x19c6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c6b4:
    // 0x19c6b4: 0xc061a16  jal         func_186858
label_19c6b8:
    if (ctx->pc == 0x19C6B8u) {
        ctx->pc = 0x19C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6B4u;
        // 0x19c6b8: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6BCu;
        goto label_19c6bc;
    }
    ctx->pc = 0x19C6B4u;
    SET_GPR_U32(ctx, 31, 0x19C6BCu);
    ctx->pc = 0x19C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6B4u;
    // 0x19c6b8: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C6B4u, 0x19C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6BCu;
label_19c6bc:
    // 0x19c6bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19c6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19c6c0:
    // 0x19c6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c6c4:
    // 0x19c6c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_19c6c8:
    if (ctx->pc == 0x19C6C8u) {
        ctx->pc = 0x19C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6C4u;
        // 0x19c6c8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6CCu;
        goto label_19c6cc;
    }
    ctx->pc = 0x19C6C4u;
    {
        const bool branch_taken_0x19c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6C4u;
        // 0x19c6c8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6c4) {
            ctx->pc = 0x19C6F4u;
            goto label_19c6f4;
        }
    }
    ctx->pc = 0x19C6CCu;
label_19c6cc:
    // 0x19c6cc: 0xc061a16  jal         func_186858
label_19c6d0:
    if (ctx->pc == 0x19C6D0u) {
        ctx->pc = 0x19C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6CCu;
        // 0x19c6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6D4u;
        goto label_19c6d4;
    }
    ctx->pc = 0x19C6CCu;
    SET_GPR_U32(ctx, 31, 0x19C6D4u);
    ctx->pc = 0x19C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6CCu;
    // 0x19c6d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C6CCu, 0x19C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6D4u;
label_19c6d4:
    // 0x19c6d4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19c6d8:
    // 0x19c6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c6dc:
    // 0x19c6dc: 0xc061a16  jal         func_186858
label_19c6e0:
    if (ctx->pc == 0x19C6E0u) {
        ctx->pc = 0x19C6E4u;
        goto label_19c6e4;
    }
    ctx->pc = 0x19C6DCu;
    SET_GPR_U32(ctx, 31, 0x19C6E4u);
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C6DCu, 0x19C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6E4u;
label_19c6e4:
    // 0x19c6e4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19c6e8:
    // 0x19c6e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c6ec:
    // 0x19c6ec: 0x0  nop
    ctx->pc = 0x19c6ecu;
    // NOP
label_19c6f0:
    // 0x19c6f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19c6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19c6f4:
    // 0x19c6f4: 0xc061a12  jal         func_186848
label_19c6f8:
    if (ctx->pc == 0x19C6F8u) {
        ctx->pc = 0x19C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6F4u;
        // 0x19c6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C6FCu;
        goto label_19c6fc;
    }
    ctx->pc = 0x19C6F4u;
    SET_GPR_U32(ctx, 31, 0x19C6FCu);
    ctx->pc = 0x19C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6F4u;
    // 0x19c6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C6F4u, 0x19C6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6FCu;
label_19c6fc:
    // 0x19c6fc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19c700:
    // 0x19c700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c704:
    // 0x19c704: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c708:
    // 0x19c708: 0x40f809  jalr        $v0
label_19c70c:
    if (ctx->pc == 0x19C70Cu) {
        ctx->pc = 0x19C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C708u;
        // 0x19c70c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C710u;
        goto label_19c710;
    }
    ctx->pc = 0x19C708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C710u);
        ctx->pc = 0x19C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C708u;
        // 0x19c70c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C708u, 0x19C710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C710u;
label_19c710:
    // 0x19c710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c714:
    // 0x19c714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c718:
    // 0x19c718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c71c:
    // 0x19c71c: 0x3e00008  jr          $ra
label_19c720:
    if (ctx->pc == 0x19C720u) {
        ctx->pc = 0x19C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C71Cu;
        // 0x19c720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C724u;
        goto label_19c724;
    }
    ctx->pc = 0x19C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C71Cu;
        // 0x19c720: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C724u;
label_19c724:
    // 0x19c724: 0x0  nop
    ctx->pc = 0x19c724u;
    // NOP
    ctx->pc = 0x19c728u;
}
