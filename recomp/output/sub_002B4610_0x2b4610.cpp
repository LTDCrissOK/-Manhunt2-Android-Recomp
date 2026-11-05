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

// Function: sub_002B4610
// Address: 0x2b4610 - 0x2b4780
void sub_002B4610_0x2b4610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4610_0x2b4610");
#endif

    switch (ctx->pc) {
        case 0x2b4610u: goto label_2b4610;
        case 0x2b4614u: goto label_2b4614;
        case 0x2b4618u: goto label_2b4618;
        case 0x2b461cu: goto label_2b461c;
        case 0x2b4620u: goto label_2b4620;
        case 0x2b4624u: goto label_2b4624;
        case 0x2b4628u: goto label_2b4628;
        case 0x2b462cu: goto label_2b462c;
        case 0x2b4630u: goto label_2b4630;
        case 0x2b4634u: goto label_2b4634;
        case 0x2b4638u: goto label_2b4638;
        case 0x2b463cu: goto label_2b463c;
        case 0x2b4640u: goto label_2b4640;
        case 0x2b4644u: goto label_2b4644;
        case 0x2b4648u: goto label_2b4648;
        case 0x2b464cu: goto label_2b464c;
        case 0x2b4650u: goto label_2b4650;
        case 0x2b4654u: goto label_2b4654;
        case 0x2b4658u: goto label_2b4658;
        case 0x2b465cu: goto label_2b465c;
        case 0x2b4660u: goto label_2b4660;
        case 0x2b4664u: goto label_2b4664;
        case 0x2b4668u: goto label_2b4668;
        case 0x2b466cu: goto label_2b466c;
        case 0x2b4670u: goto label_2b4670;
        case 0x2b4674u: goto label_2b4674;
        case 0x2b4678u: goto label_2b4678;
        case 0x2b467cu: goto label_2b467c;
        case 0x2b4680u: goto label_2b4680;
        case 0x2b4684u: goto label_2b4684;
        case 0x2b4688u: goto label_2b4688;
        case 0x2b468cu: goto label_2b468c;
        case 0x2b4690u: goto label_2b4690;
        case 0x2b4694u: goto label_2b4694;
        case 0x2b4698u: goto label_2b4698;
        case 0x2b469cu: goto label_2b469c;
        case 0x2b46a0u: goto label_2b46a0;
        case 0x2b46a4u: goto label_2b46a4;
        case 0x2b46a8u: goto label_2b46a8;
        case 0x2b46acu: goto label_2b46ac;
        case 0x2b46b0u: goto label_2b46b0;
        case 0x2b46b4u: goto label_2b46b4;
        case 0x2b46b8u: goto label_2b46b8;
        case 0x2b46bcu: goto label_2b46bc;
        case 0x2b46c0u: goto label_2b46c0;
        case 0x2b46c4u: goto label_2b46c4;
        case 0x2b46c8u: goto label_2b46c8;
        case 0x2b46ccu: goto label_2b46cc;
        case 0x2b46d0u: goto label_2b46d0;
        case 0x2b46d4u: goto label_2b46d4;
        case 0x2b46d8u: goto label_2b46d8;
        case 0x2b46dcu: goto label_2b46dc;
        case 0x2b46e0u: goto label_2b46e0;
        case 0x2b46e4u: goto label_2b46e4;
        case 0x2b46e8u: goto label_2b46e8;
        case 0x2b46ecu: goto label_2b46ec;
        case 0x2b46f0u: goto label_2b46f0;
        case 0x2b46f4u: goto label_2b46f4;
        case 0x2b46f8u: goto label_2b46f8;
        case 0x2b46fcu: goto label_2b46fc;
        case 0x2b4700u: goto label_2b4700;
        case 0x2b4704u: goto label_2b4704;
        case 0x2b4708u: goto label_2b4708;
        case 0x2b470cu: goto label_2b470c;
        case 0x2b4710u: goto label_2b4710;
        case 0x2b4714u: goto label_2b4714;
        case 0x2b4718u: goto label_2b4718;
        case 0x2b471cu: goto label_2b471c;
        case 0x2b4720u: goto label_2b4720;
        case 0x2b4724u: goto label_2b4724;
        case 0x2b4728u: goto label_2b4728;
        case 0x2b472cu: goto label_2b472c;
        case 0x2b4730u: goto label_2b4730;
        case 0x2b4734u: goto label_2b4734;
        case 0x2b4738u: goto label_2b4738;
        case 0x2b473cu: goto label_2b473c;
        case 0x2b4740u: goto label_2b4740;
        case 0x2b4744u: goto label_2b4744;
        case 0x2b4748u: goto label_2b4748;
        case 0x2b474cu: goto label_2b474c;
        case 0x2b4750u: goto label_2b4750;
        case 0x2b4754u: goto label_2b4754;
        case 0x2b4758u: goto label_2b4758;
        case 0x2b475cu: goto label_2b475c;
        case 0x2b4760u: goto label_2b4760;
        case 0x2b4764u: goto label_2b4764;
        case 0x2b4768u: goto label_2b4768;
        case 0x2b476cu: goto label_2b476c;
        case 0x2b4770u: goto label_2b4770;
        case 0x2b4774u: goto label_2b4774;
        case 0x2b4778u: goto label_2b4778;
        case 0x2b477cu: goto label_2b477c;
        default: break;
    }

    ctx->pc = 0x2b4610u;

label_2b4610:
    // 0x2b4610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b4614:
    // 0x2b4614: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b4614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b4618:
    // 0x2b4618: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b461c:
    // 0x2b461c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b461cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b4620:
    // 0x2b4620: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b4620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b4624:
    // 0x2b4624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4628:
    // 0x2b4628: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b4628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2b462c:
    // 0x2b462c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2b462cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b4630:
    // 0x2b4630: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2b4634:
    // 0x2b4634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b4638:
    // 0x2b4638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b4638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b463c:
    // 0x2b463c: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x2b463cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b4640:
    // 0x2b4640: 0xc0ef054  jal         func_3BC150
label_2b4644:
    if (ctx->pc == 0x2B4644u) {
        ctx->pc = 0x2B4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4640u;
        // 0x2b4644: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4648u;
        goto label_2b4648;
    }
    ctx->pc = 0x2B4640u;
    SET_GPR_U32(ctx, 31, 0x2B4648u);
    ctx->pc = 0x2B4644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4640u;
    // 0x2b4644: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC150u, 0x2B4640u, 0x2B4648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4648u;
label_2b4648:
    // 0x2b4648: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b4648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b464c:
    // 0x2b464c: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x2b464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_2b4650:
    // 0x2b4650: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2b4650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b4654:
    // 0x2b4654: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b4654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b4658:
    // 0x2b4658: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2b465c:
    // 0x2b465c: 0x40f809  jalr        $v0
label_2b4660:
    if (ctx->pc == 0x2B4660u) {
        ctx->pc = 0x2B4664u;
        goto label_2b4664;
    }
    ctx->pc = 0x2B465Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B465Cu, 0x2B4664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4664u;
label_2b4664:
    // 0x2b4664: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b4664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b4668:
    // 0x2b4668: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2b4668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2b466c:
    // 0x2b466c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b466cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b4670:
    // 0x2b4670: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4674:
    // 0x2b4674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b4674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b4678:
    // 0x2b4678: 0xc0ef0b2  jal         func_3BC2C8
label_2b467c:
    if (ctx->pc == 0x2B467Cu) {
        ctx->pc = 0x2B467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4678u;
        // 0x2b467c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4680u;
        goto label_2b4680;
    }
    ctx->pc = 0x2B4678u;
    SET_GPR_U32(ctx, 31, 0x2B4680u);
    ctx->pc = 0x2B467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4678u;
    // 0x2b467c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B4678u, 0x2B4680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4680u;
label_2b4680:
    // 0x2b4680: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b4684:
    // 0x2b4684: 0x10710026  beq         $v1, $s1, . + 4 + (0x26 << 2)
label_2b4688:
    if (ctx->pc == 0x2B4688u) {
        ctx->pc = 0x2B4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4684u;
        // 0x2b4688: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B468Cu;
        goto label_2b468c;
    }
    ctx->pc = 0x2B4684u;
    {
        const bool branch_taken_0x2b4684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4684u;
        // 0x2b4688: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4684) {
            ctx->pc = 0x2B4720u;
            goto label_2b4720;
        }
    }
    ctx->pc = 0x2B468Cu;
label_2b468c:
    // 0x2b468c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2b4690:
    if (ctx->pc == 0x2B4690u) {
        ctx->pc = 0x2B4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B468Cu;
        // 0x2b4690: 0x2413fffc  addiu       $s3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4694u;
        goto label_2b4694;
    }
    ctx->pc = 0x2B468Cu;
    {
        const bool branch_taken_0x2b468c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B468Cu;
        // 0x2b4690: 0x2413fffc  addiu       $s3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b468c) {
            ctx->pc = 0x2B46A4u;
            goto label_2b46a4;
        }
    }
    ctx->pc = 0x2B4694u;
label_2b4694:
    // 0x2b4694: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b4694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b4698:
    // 0x2b4698: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b469c:
    // 0x2b469c: 0x10000030  b           . + 4 + (0x30 << 2)
label_2b46a0:
    if (ctx->pc == 0x2B46A0u) {
        ctx->pc = 0x2B46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B469Cu;
        // 0x2b46a0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46A4u;
        goto label_2b46a4;
    }
    ctx->pc = 0x2B469Cu;
    {
        const bool branch_taken_0x2b469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B469Cu;
        // 0x2b46a0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b469c) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B46A4u;
label_2b46a4:
    // 0x2b46a4: 0x14730005  bne         $v1, $s3, . + 4 + (0x5 << 2)
label_2b46a8:
    if (ctx->pc == 0x2B46A8u) {
        ctx->pc = 0x2B46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46A4u;
        // 0x2b46a8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46ACu;
        goto label_2b46ac;
    }
    ctx->pc = 0x2B46A4u;
    {
        const bool branch_taken_0x2b46a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46A4u;
        // 0x2b46a8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46a4) {
            ctx->pc = 0x2B46BCu;
            goto label_2b46bc;
        }
    }
    ctx->pc = 0x2B46ACu;
label_2b46ac:
    // 0x2b46ac: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2b46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b46b0:
    // 0x2b46b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2b46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b46b4:
    // 0x2b46b4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2b46b8:
    if (ctx->pc == 0x2B46B8u) {
        ctx->pc = 0x2B46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46B4u;
        // 0x2b46b8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46BCu;
        goto label_2b46bc;
    }
    ctx->pc = 0x2B46B4u;
    {
        const bool branch_taken_0x2b46b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46B4u;
        // 0x2b46b8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46b4) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B46BCu;
label_2b46bc:
    // 0x2b46bc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2b46c0:
    if (ctx->pc == 0x2B46C0u) {
        ctx->pc = 0x2B46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46BCu;
        // 0x2b46c0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46C4u;
        goto label_2b46c4;
    }
    ctx->pc = 0x2B46BCu;
    {
        const bool branch_taken_0x2b46bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46BCu;
        // 0x2b46c0: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46bc) {
            ctx->pc = 0x2B46D4u;
            goto label_2b46d4;
        }
    }
    ctx->pc = 0x2B46C4u;
label_2b46c4:
    // 0x2b46c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b46c8:
    // 0x2b46c8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b46cc:
    // 0x2b46cc: 0x10000024  b           . + 4 + (0x24 << 2)
label_2b46d0:
    if (ctx->pc == 0x2B46D0u) {
        ctx->pc = 0x2B46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46CCu;
        // 0x2b46d0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46D4u;
        goto label_2b46d4;
    }
    ctx->pc = 0x2B46CCu;
    {
        const bool branch_taken_0x2b46cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46CCu;
        // 0x2b46d0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46cc) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B46D4u;
label_2b46d4:
    // 0x2b46d4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2b46d8:
    if (ctx->pc == 0x2B46D8u) {
        ctx->pc = 0x2B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46D4u;
        // 0x2b46d8: 0x2862fff7  slti        $v0, $v1, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46DCu;
        goto label_2b46dc;
    }
    ctx->pc = 0x2B46D4u;
    {
        const bool branch_taken_0x2b46d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46D4u;
        // 0x2b46d8: 0x2862fff7  slti        $v0, $v1, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46d4) {
            ctx->pc = 0x2B46ECu;
            goto label_2b46ec;
        }
    }
    ctx->pc = 0x2B46DCu;
label_2b46dc:
    // 0x2b46dc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b46e0:
    // 0x2b46e0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b46e4:
    // 0x2b46e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2b46e8:
    if (ctx->pc == 0x2B46E8u) {
        ctx->pc = 0x2B46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46E4u;
        // 0x2b46e8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46ECu;
        goto label_2b46ec;
    }
    ctx->pc = 0x2B46E4u;
    {
        const bool branch_taken_0x2b46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46E4u;
        // 0x2b46e8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46e4) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B46ECu;
label_2b46ec:
    // 0x2b46ec: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2b46f0:
    if (ctx->pc == 0x2B46F0u) {
        ctx->pc = 0x2B46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46ECu;
        // 0x2b46f0: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46F4u;
        goto label_2b46f4;
    }
    ctx->pc = 0x2B46ECu;
    {
        const bool branch_taken_0x2b46ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b46ec) {
            ctx->pc = 0x2B46F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B46ECu;
            // 0x2b46f0: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4754u;
            goto label_2b4754;
        }
    }
    ctx->pc = 0x2B46F4u;
label_2b46f4:
    // 0x2b46f4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b46f8:
    // 0x2b46f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b46f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b46fc:
    // 0x2b46fc: 0xc0ef29e  jal         func_3BCA78
label_2b4700:
    if (ctx->pc == 0x2B4700u) {
        ctx->pc = 0x2B4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46FCu;
        // 0x2b4700: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4704u;
        goto label_2b4704;
    }
    ctx->pc = 0x2B46FCu;
    SET_GPR_U32(ctx, 31, 0x2B4704u);
    ctx->pc = 0x2B4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B46FCu;
    // 0x2b4700: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCA78u, 0x2B46FCu, 0x2B4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4704u;
label_2b4704:
    // 0x2b4704: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4708:
    // 0x2b4708: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b4708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b470c:
    // 0x2b470c: 0xc0ef0b2  jal         func_3BC2C8
label_2b4710:
    if (ctx->pc == 0x2B4710u) {
        ctx->pc = 0x2B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B470Cu;
        // 0x2b4710: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4714u;
        goto label_2b4714;
    }
    ctx->pc = 0x2B470Cu;
    SET_GPR_U32(ctx, 31, 0x2B4714u);
    ctx->pc = 0x2B4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B470Cu;
    // 0x2b4710: 0x37a60008  ori         $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B470Cu, 0x2B4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4714u;
label_2b4714:
    // 0x2b4714: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2b4714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2b4718:
    // 0x2b4718: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
label_2b471c:
    if (ctx->pc == 0x2B471Cu) {
        ctx->pc = 0x2B4720u;
        goto label_2b4720;
    }
    ctx->pc = 0x2B4718u;
    {
        const bool branch_taken_0x2b4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b4718) {
            ctx->pc = 0x2B4730u;
            goto label_2b4730;
        }
    }
    ctx->pc = 0x2B4720u;
label_2b4720:
    // 0x2b4720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4724:
    // 0x2b4724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4728:
    // 0x2b4728: 0x1000000d  b           . + 4 + (0xD << 2)
label_2b472c:
    if (ctx->pc == 0x2B472Cu) {
        ctx->pc = 0x2B472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4728u;
        // 0x2b472c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4730u;
        goto label_2b4730;
    }
    ctx->pc = 0x2B4728u;
    {
        const bool branch_taken_0x2b4728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4728u;
        // 0x2b472c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4728) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B4730u;
label_2b4730:
    // 0x2b4730: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
label_2b4734:
    if (ctx->pc == 0x2B4734u) {
        ctx->pc = 0x2B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4730u;
        // 0x2b4734: 0x2842fff7  slti        $v0, $v0, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4738u;
        goto label_2b4738;
    }
    ctx->pc = 0x2B4730u;
    {
        const bool branch_taken_0x2b4730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4730u;
        // 0x2b4734: 0x2842fff7  slti        $v0, $v0, -0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4730) {
            ctx->pc = 0x2B4748u;
            goto label_2b4748;
        }
    }
    ctx->pc = 0x2B4738u;
label_2b4738:
    // 0x2b4738: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2b4738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b473c:
    // 0x2b473c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2b473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b4740:
    // 0x2b4740: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b4744:
    if (ctx->pc == 0x2B4744u) {
        ctx->pc = 0x2B4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4740u;
        // 0x2b4744: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4748u;
        goto label_2b4748;
    }
    ctx->pc = 0x2B4740u;
    {
        const bool branch_taken_0x2b4740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4740u;
        // 0x2b4744: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4740) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B4748u;
label_2b4748:
    // 0x2b4748: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b474c:
    if (ctx->pc == 0x2B474Cu) {
        ctx->pc = 0x2B474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4748u;
        // 0x2b474c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4750u;
        goto label_2b4750;
    }
    ctx->pc = 0x2B4748u;
    {
        const bool branch_taken_0x2b4748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4748) {
            ctx->pc = 0x2B474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4748u;
            // 0x2b474c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B475Cu;
            goto label_2b475c;
        }
    }
    ctx->pc = 0x2B4750u;
label_2b4750:
    // 0x2b4750: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2b4750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_2b4754:
    // 0x2b4754: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b4758:
    if (ctx->pc == 0x2B4758u) {
        ctx->pc = 0x2B4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4754u;
        // 0x2b4758: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B475Cu;
        goto label_2b475c;
    }
    ctx->pc = 0x2B4754u;
    {
        const bool branch_taken_0x2b4754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4754u;
        // 0x2b4758: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4754) {
            ctx->pc = 0x2B4760u;
            goto label_2b4760;
        }
    }
    ctx->pc = 0x2B475Cu;
label_2b475c:
    // 0x2b475c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b475cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4760:
    // 0x2b4760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4764:
    // 0x2b4764: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b4764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b4768:
    // 0x2b4768: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b4768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b476c:
    // 0x2b476c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b476cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2b4770:
    // 0x2b4770: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b4770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b4774:
    // 0x2b4774: 0x3e00008  jr          $ra
label_2b4778:
    if (ctx->pc == 0x2B4778u) {
        ctx->pc = 0x2B4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4774u;
        // 0x2b4778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B477Cu;
        goto label_2b477c;
    }
    ctx->pc = 0x2B4774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4774u;
        // 0x2b4778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B477Cu;
label_2b477c:
    // 0x2b477c: 0x0  nop
    ctx->pc = 0x2b477cu;
    // NOP
    ctx->pc = 0x2b4780u;
}
