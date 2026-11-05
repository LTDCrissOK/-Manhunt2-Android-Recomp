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

// Function: sub_00150778
// Address: 0x150778 - 0x1508b0
void sub_00150778_0x150778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150778_0x150778");
#endif

    switch (ctx->pc) {
        case 0x15079cu: goto label_15079c;
        case 0x1507a8u: goto label_1507a8;
        case 0x1507bcu: goto label_1507bc;
        case 0x1507c8u: goto label_1507c8;
        case 0x1507d8u: goto label_1507d8;
        case 0x1507e4u: goto label_1507e4;
        case 0x150808u: goto label_150808;
        case 0x150814u: goto label_150814;
        case 0x150820u: goto label_150820;
        case 0x150838u: goto label_150838;
        case 0x150854u: goto label_150854;
        case 0x150868u: goto label_150868;
        case 0x150878u: goto label_150878;
        case 0x150894u: goto label_150894;
        default: break;
    }

    ctx->pc = 0x150778u;

    // 0x150778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15077c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150788: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x150788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15078c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x150790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x150790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150794: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x150794u;
    SET_GPR_U32(ctx, 31, 0x15079Cu);
    ctx->pc = 0x150798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150794u;
    // 0x150798: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x150794u, 0x15079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15079Cu;
label_15079c:
    // 0x15079c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507a0: 0xc05488c  jal         func_152230
    ctx->pc = 0x1507A0u;
    SET_GPR_U32(ctx, 31, 0x1507A8u);
    ctx->pc = 0x1507A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507A0u;
    // 0x1507a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152230u, 0x1507A0u, 0x1507A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507A8u;
label_1507a8:
    // 0x1507a8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1507a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1507ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1507acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1507b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1507b4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1507B4u;
    SET_GPR_U32(ctx, 31, 0x1507BCu);
    ctx->pc = 0x1507B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507B4u;
    // 0x1507b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1507B4u, 0x1507BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507BCu;
label_1507bc:
    // 0x1507bc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1507bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1507c0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1507C0u;
    SET_GPR_U32(ctx, 31, 0x1507C8u);
    ctx->pc = 0x1507C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507C0u;
    // 0x1507c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1507C0u, 0x1507C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507C8u;
label_1507c8:
    // 0x1507c8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1507c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1507cc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1507ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1507d0: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x1507D0u;
    SET_GPR_U32(ctx, 31, 0x1507D8u);
    ctx->pc = 0x1507D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507D0u;
    // 0x1507d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x1507D0u, 0x1507D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507D8u;
label_1507d8:
    // 0x1507d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1507d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507dc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1507DCu;
    SET_GPR_U32(ctx, 31, 0x1507E4u);
    ctx->pc = 0x1507E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507DCu;
    // 0x1507e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1507DCu, 0x1507E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507E4u;
label_1507e4:
    // 0x1507e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1507e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1507e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1507ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1507ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1507f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1507f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1507f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1507f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1507fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1507fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150800: 0xc04daca  jal         func_136B28
    ctx->pc = 0x150800u;
    SET_GPR_U32(ctx, 31, 0x150808u);
    ctx->pc = 0x150804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150800u;
    // 0x150804: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150800u, 0x150808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150808u;
label_150808:
    // 0x150808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x150808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15080c: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x15080Cu;
    SET_GPR_U32(ctx, 31, 0x150814u);
    ctx->pc = 0x150810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15080Cu;
    // 0x150810: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15080Cu, 0x150814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150814u;
label_150814:
    // 0x150814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150818: 0xc046104  jal         func_118410
    ctx->pc = 0x150818u;
    SET_GPR_U32(ctx, 31, 0x150820u);
    ctx->pc = 0x15081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150818u;
    // 0x15081c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x150818u, 0x150820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150820u;
label_150820:
    // 0x150820: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x150824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x150824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15082c: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x15082cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x150830: 0xc046290  jal         func_118A40
    ctx->pc = 0x150830u;
    SET_GPR_U32(ctx, 31, 0x150838u);
    ctx->pc = 0x150834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150830u;
    // 0x150834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x150830u, 0x150838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150838u;
label_150838:
    // 0x150838: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x15083c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150840: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150844: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x150844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15084c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x15084Cu;
    SET_GPR_U32(ctx, 31, 0x150854u);
    ctx->pc = 0x150850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15084Cu;
    // 0x150850: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x15084Cu, 0x150854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150854u;
label_150854:
    // 0x150854: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x150854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150858: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x150858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15085c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150860: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x150860u;
    SET_GPR_U32(ctx, 31, 0x150868u);
    ctx->pc = 0x150864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150860u;
    // 0x150864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x150860u, 0x150868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150868u;
label_150868:
    // 0x150868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15086c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15086cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150870: 0xc053c48  jal         func_14F120
    ctx->pc = 0x150870u;
    SET_GPR_U32(ctx, 31, 0x150878u);
    ctx->pc = 0x150874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150870u;
    // 0x150874: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F120u, 0x150870u, 0x150878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150878u;
label_150878:
    // 0x150878: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15087c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x150880: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150884: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x150884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x150888: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x150888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15088c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x15088Cu;
    SET_GPR_U32(ctx, 31, 0x150894u);
    ctx->pc = 0x150890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15088Cu;
    // 0x150890: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x15088Cu, 0x150894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150894u;
label_150894:
    // 0x150894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x150898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15089c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15089cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1508a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1508a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1508a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1508a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1508a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1508A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1508ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508A8u;
        // 0x1508ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1508A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1508B0u;
}
