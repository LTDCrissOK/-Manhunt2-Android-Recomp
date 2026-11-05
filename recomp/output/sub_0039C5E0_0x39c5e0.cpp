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

// Function: sub_0039C5E0
// Address: 0x39c5e0 - 0x39c718
void sub_0039C5E0_0x39c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C5E0_0x39c5e0");
#endif

    switch (ctx->pc) {
        case 0x39c5e0u: goto label_39c5e0;
        case 0x39c5e4u: goto label_39c5e4;
        case 0x39c5e8u: goto label_39c5e8;
        case 0x39c5ecu: goto label_39c5ec;
        case 0x39c5f0u: goto label_39c5f0;
        case 0x39c5f4u: goto label_39c5f4;
        case 0x39c5f8u: goto label_39c5f8;
        case 0x39c5fcu: goto label_39c5fc;
        case 0x39c600u: goto label_39c600;
        case 0x39c604u: goto label_39c604;
        case 0x39c608u: goto label_39c608;
        case 0x39c60cu: goto label_39c60c;
        case 0x39c610u: goto label_39c610;
        case 0x39c614u: goto label_39c614;
        case 0x39c618u: goto label_39c618;
        case 0x39c61cu: goto label_39c61c;
        case 0x39c620u: goto label_39c620;
        case 0x39c624u: goto label_39c624;
        case 0x39c628u: goto label_39c628;
        case 0x39c62cu: goto label_39c62c;
        case 0x39c630u: goto label_39c630;
        case 0x39c634u: goto label_39c634;
        case 0x39c638u: goto label_39c638;
        case 0x39c63cu: goto label_39c63c;
        case 0x39c640u: goto label_39c640;
        case 0x39c644u: goto label_39c644;
        case 0x39c648u: goto label_39c648;
        case 0x39c64cu: goto label_39c64c;
        case 0x39c650u: goto label_39c650;
        case 0x39c654u: goto label_39c654;
        case 0x39c658u: goto label_39c658;
        case 0x39c65cu: goto label_39c65c;
        case 0x39c660u: goto label_39c660;
        case 0x39c664u: goto label_39c664;
        case 0x39c668u: goto label_39c668;
        case 0x39c66cu: goto label_39c66c;
        case 0x39c670u: goto label_39c670;
        case 0x39c674u: goto label_39c674;
        case 0x39c678u: goto label_39c678;
        case 0x39c67cu: goto label_39c67c;
        case 0x39c680u: goto label_39c680;
        case 0x39c684u: goto label_39c684;
        case 0x39c688u: goto label_39c688;
        case 0x39c68cu: goto label_39c68c;
        case 0x39c690u: goto label_39c690;
        case 0x39c694u: goto label_39c694;
        case 0x39c698u: goto label_39c698;
        case 0x39c69cu: goto label_39c69c;
        case 0x39c6a0u: goto label_39c6a0;
        case 0x39c6a4u: goto label_39c6a4;
        case 0x39c6a8u: goto label_39c6a8;
        case 0x39c6acu: goto label_39c6ac;
        case 0x39c6b0u: goto label_39c6b0;
        case 0x39c6b4u: goto label_39c6b4;
        case 0x39c6b8u: goto label_39c6b8;
        case 0x39c6bcu: goto label_39c6bc;
        case 0x39c6c0u: goto label_39c6c0;
        case 0x39c6c4u: goto label_39c6c4;
        case 0x39c6c8u: goto label_39c6c8;
        case 0x39c6ccu: goto label_39c6cc;
        case 0x39c6d0u: goto label_39c6d0;
        case 0x39c6d4u: goto label_39c6d4;
        case 0x39c6d8u: goto label_39c6d8;
        case 0x39c6dcu: goto label_39c6dc;
        case 0x39c6e0u: goto label_39c6e0;
        case 0x39c6e4u: goto label_39c6e4;
        case 0x39c6e8u: goto label_39c6e8;
        case 0x39c6ecu: goto label_39c6ec;
        case 0x39c6f0u: goto label_39c6f0;
        case 0x39c6f4u: goto label_39c6f4;
        case 0x39c6f8u: goto label_39c6f8;
        case 0x39c6fcu: goto label_39c6fc;
        case 0x39c700u: goto label_39c700;
        case 0x39c704u: goto label_39c704;
        case 0x39c708u: goto label_39c708;
        case 0x39c70cu: goto label_39c70c;
        case 0x39c710u: goto label_39c710;
        case 0x39c714u: goto label_39c714;
        default: break;
    }

    ctx->pc = 0x39c5e0u;

label_39c5e0:
    // 0x39c5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39c5e4:
    // 0x39c5e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39c5e8:
    // 0x39c5e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39c5ec:
    // 0x39c5ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_39c5f0:
    // 0x39c5f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39c5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39c5f4:
    // 0x39c5f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39c5f8:
    // 0x39c5f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39c5fc:
    // 0x39c5fc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_39c600:
    if (ctx->pc == 0x39C600u) {
        ctx->pc = 0x39C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5FCu;
        // 0x39c600: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C604u;
        goto label_39c604;
    }
    ctx->pc = 0x39C5FCu;
    {
        const bool branch_taken_0x39c5fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C5FCu;
        // 0x39c600: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c5fc) {
            ctx->pc = 0x39C628u;
            goto label_39c628;
        }
    }
    ctx->pc = 0x39C604u;
label_39c604:
    // 0x39c604: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39c608:
    // 0x39c608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c60c:
    // 0x39c60c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39c610:
    // 0x39c610: 0x2484b830  addiu       $a0, $a0, -0x47D0
    ctx->pc = 0x39c610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
label_39c614:
    // 0x39c614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c618:
    // 0x39c618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39c618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39c61c:
    // 0x39c61c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c620:
    // 0x39c620: 0x80ec0fe  j           func_3B03F8
label_39c624:
    if (ctx->pc == 0x39C624u) {
        ctx->pc = 0x39C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C620u;
        // 0x39c624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C628u;
        goto label_39c628;
    }
    ctx->pc = 0x39C620u;
    ctx->pc = 0x39C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C620u;
    // 0x39c624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39C628u;
label_39c628:
    // 0x39c628: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x39c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_39c62c:
    // 0x39c62c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_39c630:
    if (ctx->pc == 0x39C630u) {
        ctx->pc = 0x39C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C62Cu;
        // 0x39c630: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C634u;
        goto label_39c634;
    }
    ctx->pc = 0x39C62Cu;
    {
        const bool branch_taken_0x39c62c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C62Cu;
        // 0x39c630: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c62c) {
            ctx->pc = 0x39C648u;
            goto label_39c648;
        }
    }
    ctx->pc = 0x39C634u;
label_39c634:
    // 0x39c634: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39c638:
    // 0x39c638: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39c63c:
    // 0x39c63c: 0x40f809  jalr        $v0
label_39c640:
    if (ctx->pc == 0x39C640u) {
        ctx->pc = 0x39C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C63Cu;
        // 0x39c640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C644u;
        goto label_39c644;
    }
    ctx->pc = 0x39C63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C644u);
        ctx->pc = 0x39C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C63Cu;
        // 0x39c640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C63Cu, 0x39C644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C644u;
label_39c644:
    // 0x39c644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39c644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c648:
    // 0x39c648: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x39c648u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_39c64c:
    // 0x39c64c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39c650:
    // 0x39c650: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_39c654:
    if (ctx->pc == 0x39C654u) {
        ctx->pc = 0x39C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C650u;
        // 0x39c654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C658u;
        goto label_39c658;
    }
    ctx->pc = 0x39C650u;
    {
        const bool branch_taken_0x39c650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C650u;
        // 0x39c654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c650) {
            ctx->pc = 0x39C6ECu;
            goto label_39c6ec;
        }
    }
    ctx->pc = 0x39C658u;
label_39c658:
    // 0x39c658: 0x8223006c  lb          $v1, 0x6C($s1)
    ctx->pc = 0x39c658u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 108)));
label_39c65c:
    // 0x39c65c: 0x54620024  bnel        $v1, $v0, . + 4 + (0x24 << 2)
label_39c660:
    if (ctx->pc == 0x39C660u) {
        ctx->pc = 0x39C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C65Cu;
        // 0x39c660: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C664u;
        goto label_39c664;
    }
    ctx->pc = 0x39C65Cu;
    {
        const bool branch_taken_0x39c65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39c65c) {
            ctx->pc = 0x39C660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C65Cu;
            // 0x39c660: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C6F0u;
            goto label_39c6f0;
        }
    }
    ctx->pc = 0x39C664u;
label_39c664:
    // 0x39c664: 0x56600022  bnel        $s3, $zero, . + 4 + (0x22 << 2)
label_39c668:
    if (ctx->pc == 0x39C668u) {
        ctx->pc = 0x39C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C664u;
        // 0x39c668: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C66Cu;
        goto label_39c66c;
    }
    ctx->pc = 0x39C664u;
    {
        const bool branch_taken_0x39c664 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c664) {
            ctx->pc = 0x39C668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C664u;
            // 0x39c668: 0xa233006c  sb          $s3, 0x6C($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C6F0u;
            goto label_39c6f0;
        }
    }
    ctx->pc = 0x39C66Cu;
label_39c66c:
    // 0x39c66c: 0xc0e6434  jal         func_3990D0
label_39c670:
    if (ctx->pc == 0x39C670u) {
        ctx->pc = 0x39C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C66Cu;
        // 0x39c670: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C674u;
        goto label_39c674;
    }
    ctx->pc = 0x39C66Cu;
    SET_GPR_U32(ctx, 31, 0x39C674u);
    ctx->pc = 0x39C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C66Cu;
    // 0x39c670: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990D0u, 0x39C66Cu, 0x39C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C674u;
label_39c674:
    // 0x39c674: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39c674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39c678:
    // 0x39c678: 0xc0e647c  jal         func_3991F0
label_39c67c:
    if (ctx->pc == 0x39C67Cu) {
        ctx->pc = 0x39C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C678u;
        // 0x39c67c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C680u;
        goto label_39c680;
    }
    ctx->pc = 0x39C678u;
    SET_GPR_U32(ctx, 31, 0x39C680u);
    ctx->pc = 0x39C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C678u;
    // 0x39c67c: 0x509021  addu        $s2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991F0u, 0x39C678u, 0x39C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C680u;
label_39c680:
    // 0x39c680: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39c680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39c684:
    // 0x39c684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39c684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39c688:
    // 0x39c688: 0x260207ff  addiu       $v0, $s0, 0x7FF
    ctx->pc = 0x39c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_39c68c:
    // 0x39c68c: 0x26050ffe  addiu       $a1, $s0, 0xFFE
    ctx->pc = 0x39c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4094));
label_39c690:
    // 0x39c690: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39c690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_39c694:
    // 0x39c694: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x39c694u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_39c698:
    // 0x39c698: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x39c698u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_39c69c:
    // 0x39c69c: 0xc0e648e  jal         func_399238
label_39c6a0:
    if (ctx->pc == 0x39C6A0u) {
        ctx->pc = 0x39C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C69Cu;
        // 0x39c6a0: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6A4u;
        goto label_39c6a4;
    }
    ctx->pc = 0x39C69Cu;
    SET_GPR_U32(ctx, 31, 0x39C6A4u);
    ctx->pc = 0x39C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C69Cu;
    // 0x39c6a0: 0x282c0  sll         $s0, $v0, 11 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399238u, 0x39C69Cu, 0x39C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C6A4u;
label_39c6a4:
    // 0x39c6a4: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x39c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_39c6a8:
    // 0x39c6a8: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x39c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
label_39c6ac:
    // 0x39c6ac: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x39c6acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_39c6b0:
    // 0x39c6b0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x39c6b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_39c6b4:
    // 0x39c6b4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x39c6b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_39c6b8:
    // 0x39c6b8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x39c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_39c6bc:
    // 0x39c6bc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x39c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_39c6c0:
    // 0x39c6c0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_39c6c4:
    if (ctx->pc == 0x39C6C4u) {
        ctx->pc = 0x39C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6C0u;
        // 0x39c6c4: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6C8u;
        goto label_39c6c8;
    }
    ctx->pc = 0x39C6C0u;
    {
        const bool branch_taken_0x39c6c0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x39C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6C0u;
        // 0x39c6c4: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c6c0) {
            ctx->pc = 0x39C6D0u;
            goto label_39c6d0;
        }
    }
    ctx->pc = 0x39C6C8u;
label_39c6c8:
    // 0x39c6c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_39c6cc:
    if (ctx->pc == 0x39C6CCu) {
        ctx->pc = 0x39C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6C8u;
        // 0x39c6cc: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6D0u;
        goto label_39c6d0;
    }
    ctx->pc = 0x39C6C8u;
    {
        const bool branch_taken_0x39c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6C8u;
        // 0x39c6cc: 0xae2000c4  sw          $zero, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c6c8) {
            ctx->pc = 0x39C6ECu;
            goto label_39c6ec;
        }
    }
    ctx->pc = 0x39C6D0u;
label_39c6d0:
    // 0x39c6d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_39c6d4:
    if (ctx->pc == 0x39C6D4u) {
        ctx->pc = 0x39C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C6D0u;
        // 0x39c6d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C6D8u;
        goto label_39c6d8;
    }
    ctx->pc = 0x39C6D0u;
    {
        const bool branch_taken_0x39c6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c6d0) {
            ctx->pc = 0x39C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C6D0u;
            // 0x39c6d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C6D8u;
            goto label_39c6d8;
        }
    }
    ctx->pc = 0x39C6D8u;
label_39c6d8:
    // 0x39c6d8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x39c6d8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39c6dc:
    // 0x39c6dc: 0x1012  mflo        $v0
    ctx->pc = 0x39c6dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_39c6e0:
    // 0x39c6e0: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x39c6e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_39c6e4:
    // 0x39c6e4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x39c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_39c6e8:
    // 0x39c6e8: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x39c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_39c6ec:
    // 0x39c6ec: 0xa233006c  sb          $s3, 0x6C($s1)
    ctx->pc = 0x39c6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 19));
label_39c6f0:
    // 0x39c6f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c6f4:
    // 0x39c6f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39c6f8:
    // 0x39c6f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39c6fc:
    // 0x39c6fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39c6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39c700:
    // 0x39c700: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39c704:
    // 0x39c704: 0x3e00008  jr          $ra
label_39c708:
    if (ctx->pc == 0x39C708u) {
        ctx->pc = 0x39C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C704u;
        // 0x39c708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C70Cu;
        goto label_39c70c;
    }
    ctx->pc = 0x39C704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C704u;
        // 0x39c708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C70Cu;
label_39c70c:
    // 0x39c70c: 0x0  nop
    ctx->pc = 0x39c70cu;
    // NOP
label_39c710:
    // 0x39c710: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39c714:
    // 0x39c714: 0x0  nop
    ctx->pc = 0x39c714u;
    // NOP
    ctx->pc = 0x39c718u;
}
