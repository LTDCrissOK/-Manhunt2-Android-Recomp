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

// Function: sub_00221520
// Address: 0x221520 - 0x221770
void sub_00221520_0x221520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221520_0x221520");
#endif

    switch (ctx->pc) {
        case 0x221580u: goto label_221580;
        case 0x2215a0u: goto label_2215a0;
        case 0x2215acu: goto label_2215ac;
        case 0x2215bcu: goto label_2215bc;
        case 0x2215ccu: goto label_2215cc;
        case 0x2215dcu: goto label_2215dc;
        case 0x2215ecu: goto label_2215ec;
        case 0x221604u: goto label_221604;
        case 0x22161cu: goto label_22161c;
        case 0x22162cu: goto label_22162c;
        case 0x221638u: goto label_221638;
        case 0x221650u: goto label_221650;
        case 0x22165cu: goto label_22165c;
        case 0x221680u: goto label_221680;
        case 0x22168cu: goto label_22168c;
        case 0x2216b0u: goto label_2216b0;
        case 0x2216bcu: goto label_2216bc;
        case 0x2216e0u: goto label_2216e0;
        case 0x2216ecu: goto label_2216ec;
        case 0x221704u: goto label_221704;
        case 0x221710u: goto label_221710;
        case 0x22171cu: goto label_22171c;
        case 0x221728u: goto label_221728;
        case 0x221734u: goto label_221734;
        case 0x221740u: goto label_221740;
        default: break;
    }

    ctx->pc = 0x221520u;

    // 0x221520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x221520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x221524: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x221524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x221528: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x221528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22152c: 0x24421868  addiu       $v0, $v0, 0x1868
    ctx->pc = 0x22152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6248));
    // 0x221530: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x221530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x221534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221538: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x221538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22153c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22153cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x221540: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x221540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x221544: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x221544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x221548: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x221548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x22154c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x22154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x221550: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x221550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x221554: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x221554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x221558: 0x8e23058c  lw          $v1, 0x58C($s1)
    ctx->pc = 0x221558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1420)));
    // 0x22155c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x22155cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x221560: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x221560u;
    {
        const bool branch_taken_0x221560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221560u;
        // 0x221564: 0xae220190  sw          $v0, 0x190($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221560) {
            ctx->pc = 0x2215A0u;
            goto label_2215a0;
        }
    }
    ctx->pc = 0x221568u;
    // 0x221568: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x221568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x22156c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x22156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x221570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x221574: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x221574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221578: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x221578u;
    {
        const bool branch_taken_0x221578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221578u;
        // 0x22157c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221578) {
            ctx->pc = 0x221598u;
            goto label_221598;
        }
    }
    ctx->pc = 0x221580u;
label_221580:
    // 0x221580: 0x0  nop
    ctx->pc = 0x221580u;
    // NOP
    // 0x221584: 0x0  nop
    ctx->pc = 0x221584u;
    // NOP
    // 0x221588: 0x0  nop
    ctx->pc = 0x221588u;
    // NOP
    // 0x22158c: 0x0  nop
    ctx->pc = 0x22158cu;
    // NOP
    // 0x221590: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221590u;
    {
        const bool branch_taken_0x221590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x221594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221590u;
        // 0x221594: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221590) {
            ctx->pc = 0x221580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221580;
        }
    }
    ctx->pc = 0x221598u;
label_221598:
    // 0x221598: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x221598u;
    SET_GPR_U32(ctx, 31, 0x2215A0u);
    ctx->pc = 0x22159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221598u;
    // 0x22159c: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x221598u, 0x2215A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215A0u;
label_2215a0:
    // 0x2215a0: 0x2624069c  addiu       $a0, $s1, 0x69C
    ctx->pc = 0x2215a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1692));
    // 0x2215a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2215A4u;
    SET_GPR_U32(ctx, 31, 0x2215ACu);
    ctx->pc = 0x2215A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215A4u;
    // 0x2215a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2215A4u, 0x2215ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215ACu;
label_2215ac:
    // 0x2215ac: 0x26320480  addiu       $s2, $s1, 0x480
    ctx->pc = 0x2215acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    // 0x2215b0: 0x26240694  addiu       $a0, $s1, 0x694
    ctx->pc = 0x2215b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1684));
    // 0x2215b4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2215B4u;
    SET_GPR_U32(ctx, 31, 0x2215BCu);
    ctx->pc = 0x2215B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215B4u;
    // 0x2215b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2215B4u, 0x2215BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215BCu;
label_2215bc:
    // 0x2215bc: 0x263303ec  addiu       $s3, $s1, 0x3EC
    ctx->pc = 0x2215bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1004));
    // 0x2215c0: 0x2624066c  addiu       $a0, $s1, 0x66C
    ctx->pc = 0x2215c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1644));
    // 0x2215c4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2215C4u;
    SET_GPR_U32(ctx, 31, 0x2215CCu);
    ctx->pc = 0x2215C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215C4u;
    // 0x2215c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2215C4u, 0x2215CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215CCu;
label_2215cc:
    // 0x2215cc: 0x263403bc  addiu       $s4, $s1, 0x3BC
    ctx->pc = 0x2215ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 956));
    // 0x2215d0: 0x26240660  addiu       $a0, $s1, 0x660
    ctx->pc = 0x2215d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    // 0x2215d4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2215D4u;
    SET_GPR_U32(ctx, 31, 0x2215DCu);
    ctx->pc = 0x2215D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215D4u;
    // 0x2215d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2215D4u, 0x2215DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215DCu;
label_2215dc:
    // 0x2215dc: 0x2635038c  addiu       $s5, $s1, 0x38C
    ctx->pc = 0x2215dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
    // 0x2215e0: 0x26240654  addiu       $a0, $s1, 0x654
    ctx->pc = 0x2215e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1620));
    // 0x2215e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2215E4u;
    SET_GPR_U32(ctx, 31, 0x2215ECu);
    ctx->pc = 0x2215E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215E4u;
    // 0x2215e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2215E4u, 0x2215ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2215ECu;
label_2215ec:
    // 0x2215ec: 0x263e0350  addiu       $fp, $s1, 0x350
    ctx->pc = 0x2215ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    // 0x2215f0: 0x26220364  addiu       $v0, $s1, 0x364
    ctx->pc = 0x2215f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
    // 0x2215f4: 0x26240638  addiu       $a0, $s1, 0x638
    ctx->pc = 0x2215f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1592));
    // 0x2215f8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2215f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2215fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2215FCu;
    SET_GPR_U32(ctx, 31, 0x221604u);
    ctx->pc = 0x221600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2215FCu;
    // 0x221600: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2215FCu, 0x221604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221604u;
label_221604:
    // 0x221604: 0x26370348  addiu       $s7, $s1, 0x348
    ctx->pc = 0x221604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    // 0x221608: 0x26220358  addiu       $v0, $s1, 0x358
    ctx->pc = 0x221608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
    // 0x22160c: 0x26240630  addiu       $a0, $s1, 0x630
    ctx->pc = 0x22160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x221610: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x221610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x221614: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221614u;
    SET_GPR_U32(ctx, 31, 0x22161Cu);
    ctx->pc = 0x221618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221614u;
    // 0x221618: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221614u, 0x22161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22161Cu;
label_22161c:
    // 0x22161c: 0x26360340  addiu       $s6, $s1, 0x340
    ctx->pc = 0x22161cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x221620: 0x262405e0  addiu       $a0, $s1, 0x5E0
    ctx->pc = 0x221620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1504));
    // 0x221624: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221624u;
    SET_GPR_U32(ctx, 31, 0x22162Cu);
    ctx->pc = 0x221628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221624u;
    // 0x221628: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221624u, 0x22162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22162Cu;
label_22162c:
    // 0x22162c: 0x262405d0  addiu       $a0, $s1, 0x5D0
    ctx->pc = 0x22162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x221630: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221630u;
    SET_GPR_U32(ctx, 31, 0x221638u);
    ctx->pc = 0x221634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221630u;
    // 0x221634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221630u, 0x221638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221638u;
label_221638:
    // 0x221638: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x221638u;
    {
        const bool branch_taken_0x221638 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x221638) {
            ctx->pc = 0x221668u;
            goto label_221668;
        }
    }
    ctx->pc = 0x221640u;
    // 0x221640: 0x263004a0  addiu       $s0, $s1, 0x4A0
    ctx->pc = 0x221640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1184));
    // 0x221644: 0x12500008  beq         $s2, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221644u;
    {
        const bool branch_taken_0x221644 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x221644) {
            ctx->pc = 0x221668u;
            goto label_221668;
        }
    }
    ctx->pc = 0x22164Cu;
    // 0x22164c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x22164cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_221650:
    // 0x221650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221654: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221654u;
    SET_GPR_U32(ctx, 31, 0x22165Cu);
    ctx->pc = 0x221658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221654u;
    // 0x221658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221654u, 0x22165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22165Cu;
label_22165c:
    // 0x22165c: 0x0  nop
    ctx->pc = 0x22165cu;
    // NOP
    // 0x221660: 0x5650fffb  bnel        $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221660u;
    {
        const bool branch_taken_0x221660 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x221660) {
            ctx->pc = 0x221664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221660u;
            // 0x221664: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221650;
        }
    }
    ctx->pc = 0x221668u;
label_221668:
    // 0x221668: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x221668u;
    {
        const bool branch_taken_0x221668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x221668) {
            ctx->pc = 0x221698u;
            goto label_221698;
        }
    }
    ctx->pc = 0x221670u;
    // 0x221670: 0x2630040c  addiu       $s0, $s1, 0x40C
    ctx->pc = 0x221670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
    // 0x221674: 0x12700008  beq         $s3, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x221674u;
    {
        const bool branch_taken_0x221674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x221674) {
            ctx->pc = 0x221698u;
            goto label_221698;
        }
    }
    ctx->pc = 0x22167Cu;
    // 0x22167c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x22167cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_221680:
    // 0x221680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x221680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221684: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221684u;
    SET_GPR_U32(ctx, 31, 0x22168Cu);
    ctx->pc = 0x221688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221684u;
    // 0x221688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221684u, 0x22168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22168Cu;
label_22168c:
    // 0x22168c: 0x0  nop
    ctx->pc = 0x22168cu;
    // NOP
    // 0x221690: 0x5670fffb  bnel        $s3, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x221690u;
    {
        const bool branch_taken_0x221690 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x221690) {
            ctx->pc = 0x221694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221690u;
            // 0x221694: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221680;
        }
    }
    ctx->pc = 0x221698u;
label_221698:
    // 0x221698: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x221698u;
    {
        const bool branch_taken_0x221698 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221698u;
        // 0x22169c: 0x263003dc  addiu       $s0, $s1, 0x3DC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 988));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221698) {
            ctx->pc = 0x2216C8u;
            goto label_2216c8;
        }
    }
    ctx->pc = 0x2216A0u;
    // 0x2216a0: 0x12900009  beq         $s4, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2216A0u;
    {
        const bool branch_taken_0x2216a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        if (branch_taken_0x2216a0) {
            ctx->pc = 0x2216C8u;
            goto label_2216c8;
        }
    }
    ctx->pc = 0x2216A8u;
    // 0x2216a8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x2216a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x2216ac: 0x0  nop
    ctx->pc = 0x2216acu;
    // NOP
label_2216b0:
    // 0x2216b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2216b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216b4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2216B4u;
    SET_GPR_U32(ctx, 31, 0x2216BCu);
    ctx->pc = 0x2216B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216B4u;
    // 0x2216b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2216B4u, 0x2216BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216BCu;
label_2216bc:
    // 0x2216bc: 0x0  nop
    ctx->pc = 0x2216bcu;
    // NOP
    // 0x2216c0: 0x1690fffb  bne         $s4, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2216C0u;
    {
        const bool branch_taken_0x2216c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x2216C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C0u;
        // 0x2216c4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216c0) {
            ctx->pc = 0x2216B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2216b0;
        }
    }
    ctx->pc = 0x2216C8u;
label_2216c8:
    // 0x2216c8: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2216C8u;
    {
        const bool branch_taken_0x2216c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2216CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216C8u;
        // 0x2216cc: 0x263003ac  addiu       $s0, $s1, 0x3AC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 940));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216c8) {
            ctx->pc = 0x2216F8u;
            goto label_2216f8;
        }
    }
    ctx->pc = 0x2216D0u;
    // 0x2216d0: 0x12b0000a  beq         $s5, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2216D0u;
    {
        const bool branch_taken_0x2216d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        ctx->pc = 0x2216D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216D0u;
        // 0x2216d4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216d0) {
            ctx->pc = 0x2216FCu;
            goto label_2216fc;
        }
    }
    ctx->pc = 0x2216D8u;
    // 0x2216d8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x2216d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x2216dc: 0x0  nop
    ctx->pc = 0x2216dcu;
    // NOP
label_2216e0:
    // 0x2216e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2216e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2216e4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2216E4u;
    SET_GPR_U32(ctx, 31, 0x2216ECu);
    ctx->pc = 0x2216E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216E4u;
    // 0x2216e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2216E4u, 0x2216ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2216ECu;
label_2216ec:
    // 0x2216ec: 0x0  nop
    ctx->pc = 0x2216ecu;
    // NOP
    // 0x2216f0: 0x16b0fffb  bne         $s5, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2216F0u;
    {
        const bool branch_taken_0x2216f0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x2216F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2216F0u;
        // 0x2216f4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2216f0) {
            ctx->pc = 0x2216E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2216e0;
        }
    }
    ctx->pc = 0x2216F8u;
label_2216f8:
    // 0x2216f8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2216f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2216fc:
    // 0x2216fc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2216FCu;
    SET_GPR_U32(ctx, 31, 0x221704u);
    ctx->pc = 0x221700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2216FCu;
    // 0x221700: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2216FCu, 0x221704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221704u;
label_221704:
    // 0x221704: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x221704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x221708: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221708u;
    SET_GPR_U32(ctx, 31, 0x221710u);
    ctx->pc = 0x22170Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221708u;
    // 0x22170c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221708u, 0x221710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221710u;
label_221710:
    // 0x221710: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x221710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221714: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221714u;
    SET_GPR_U32(ctx, 31, 0x22171Cu);
    ctx->pc = 0x221718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221714u;
    // 0x221718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221714u, 0x22171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22171Cu;
label_22171c:
    // 0x22171c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x22171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221720: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x221720u;
    SET_GPR_U32(ctx, 31, 0x221728u);
    ctx->pc = 0x221724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221720u;
    // 0x221724: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x221720u, 0x221728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221728u;
label_221728:
    // 0x221728: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x221728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22172c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x22172Cu;
    SET_GPR_U32(ctx, 31, 0x221734u);
    ctx->pc = 0x221730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22172Cu;
    // 0x221730: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22172Cu, 0x221734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221734u;
label_221734:
    // 0x221734: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x221734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221738: 0xc0f7b18  jal         func_3DEC60
    ctx->pc = 0x221738u;
    SET_GPR_U32(ctx, 31, 0x221740u);
    ctx->pc = 0x22173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221738u;
    // 0x22173c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DEC60u, 0x221738u, 0x221740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221740u;
label_221740:
    // 0x221740: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x221740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221744: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x221744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x221748: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x221748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22174c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x221750: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x221750u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221754: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x221754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x221758: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x221758u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22175c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x22175cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x221760: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x221760u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221764: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x221764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x221768: 0x3e00008  jr          $ra
    ctx->pc = 0x221768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221768u;
        // 0x22176c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221770u;
}
