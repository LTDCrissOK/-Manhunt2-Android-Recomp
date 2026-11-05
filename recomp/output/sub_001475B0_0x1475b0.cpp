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

// Function: sub_001475B0
// Address: 0x1475b0 - 0x1476f8
void sub_001475B0_0x1475b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001475B0_0x1475b0");
#endif

    switch (ctx->pc) {
        case 0x1475d0u: goto label_1475d0;
        case 0x1475e8u: goto label_1475e8;
        case 0x1475f4u: goto label_1475f4;
        case 0x147604u: goto label_147604;
        case 0x147610u: goto label_147610;
        case 0x14761cu: goto label_14761c;
        case 0x147640u: goto label_147640;
        case 0x14764cu: goto label_14764c;
        case 0x147658u: goto label_147658;
        case 0x147664u: goto label_147664;
        case 0x147680u: goto label_147680;
        case 0x147694u: goto label_147694;
        case 0x1476b0u: goto label_1476b0;
        case 0x1476c4u: goto label_1476c4;
        case 0x1476d0u: goto label_1476d0;
        case 0x1476dcu: goto label_1476dc;
        default: break;
    }

    ctx->pc = 0x1475b0u;

    // 0x1475b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1475b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1475b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1475b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1475b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1475bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1475bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1475c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1475c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1475c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1475c8: 0xc051b40  jal         func_146D00
    ctx->pc = 0x1475C8u;
    SET_GPR_U32(ctx, 31, 0x1475D0u);
    ctx->pc = 0x1475CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475C8u;
    // 0x1475cc: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x1475C8u, 0x1475D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475D0u;
label_1475d0:
    // 0x1475d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1475d4: 0x10430041  beq         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1475D4u;
    {
        const bool branch_taken_0x1475d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1475D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475D4u;
        // 0x1475d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475d4) {
            ctx->pc = 0x1476DCu;
            goto label_1476dc;
        }
    }
    ctx->pc = 0x1475DCu;
    // 0x1475dc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1475dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1475e0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1475E0u;
    SET_GPR_U32(ctx, 31, 0x1475E8u);
    ctx->pc = 0x1475E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475E0u;
    // 0x1475e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1475E0u, 0x1475E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475E8u;
label_1475e8:
    // 0x1475e8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1475e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1475ec: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1475ECu;
    SET_GPR_U32(ctx, 31, 0x1475F4u);
    ctx->pc = 0x1475F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475ECu;
    // 0x1475f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1475ECu, 0x1475F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1475F4u;
label_1475f4:
    // 0x1475f4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1475f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1475f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1475f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1475fc: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x1475FCu;
    SET_GPR_U32(ctx, 31, 0x147604u);
    ctx->pc = 0x147600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1475FCu;
    // 0x147600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x1475FCu, 0x147604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147604u;
label_147604:
    // 0x147604: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147608: 0xc051b46  jal         func_146D18
    ctx->pc = 0x147608u;
    SET_GPR_U32(ctx, 31, 0x147610u);
    ctx->pc = 0x14760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147608u;
    // 0x14760c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D18u, 0x147608u, 0x147610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147610u;
label_147610:
    // 0x147610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147614: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x147614u;
    SET_GPR_U32(ctx, 31, 0x14761Cu);
    ctx->pc = 0x147618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147614u;
    // 0x147618: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x147614u, 0x14761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14761Cu;
label_14761c:
    // 0x14761c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14761cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147620: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x147620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x147624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147628: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x147628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14762c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14762cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x147630: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x147630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147638: 0xc04daca  jal         func_136B28
    ctx->pc = 0x147638u;
    SET_GPR_U32(ctx, 31, 0x147640u);
    ctx->pc = 0x14763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147638u;
    // 0x14763c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x147638u, 0x147640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147640u;
label_147640:
    // 0x147640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147644: 0xc046104  jal         func_118410
    ctx->pc = 0x147644u;
    SET_GPR_U32(ctx, 31, 0x14764Cu);
    ctx->pc = 0x147648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147644u;
    // 0x147648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x147644u, 0x14764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14764Cu;
label_14764c:
    // 0x14764c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14764cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147650: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x147650u;
    SET_GPR_U32(ctx, 31, 0x147658u);
    ctx->pc = 0x147654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147650u;
    // 0x147654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DE8u, 0x147650u, 0x147658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147658u;
label_147658:
    // 0x147658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14765c: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14765Cu;
    SET_GPR_U32(ctx, 31, 0x147664u);
    ctx->pc = 0x147660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14765Cu;
    // 0x147660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14765Cu, 0x147664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147664u;
label_147664:
    // 0x147664: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147664u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14766c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x147670: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147678: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x147678u;
    SET_GPR_U32(ctx, 31, 0x147680u);
    ctx->pc = 0x14767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147678u;
    // 0x14767c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x147678u, 0x147680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147680u;
label_147680:
    // 0x147680: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x147680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147684: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x147684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14768c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14768Cu;
    SET_GPR_U32(ctx, 31, 0x147694u);
    ctx->pc = 0x147690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14768Cu;
    // 0x147690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14768Cu, 0x147694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147694u;
label_147694:
    // 0x147694: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x147694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x147698: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x147698u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14769c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1476a0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1476a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1476a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1476a8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1476A8u;
    SET_GPR_U32(ctx, 31, 0x1476B0u);
    ctx->pc = 0x1476ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476A8u;
    // 0x1476ac: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1476A8u, 0x1476B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476B0u;
label_1476b0:
    // 0x1476b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1476b4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1476b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1476b8: 0xae4204c8  sw          $v0, 0x4C8($s2)
    ctx->pc = 0x1476b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1224), GPR_U32(ctx, 2));
    // 0x1476bc: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x1476BCu;
    SET_GPR_U32(ctx, 31, 0x1476C4u);
    ctx->pc = 0x1476C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476BCu;
    // 0x1476c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x1476BCu, 0x1476C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476C4u;
label_1476c4:
    // 0x1476c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1476c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476c8: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x1476C8u;
    SET_GPR_U32(ctx, 31, 0x1476D0u);
    ctx->pc = 0x1476CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476C8u;
    // 0x1476cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x1476C8u, 0x1476D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476D0u;
label_1476d0:
    // 0x1476d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1476d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1476d4: 0xc04e046  jal         func_138118
    ctx->pc = 0x1476D4u;
    SET_GPR_U32(ctx, 31, 0x1476DCu);
    ctx->pc = 0x1476D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476D4u;
    // 0x1476d8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x1476D4u, 0x1476DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1476DCu;
label_1476dc:
    // 0x1476dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1476dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1476e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1476e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1476e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1476e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1476e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1476e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1476ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1476ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1476F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476ECu;
        // 0x1476f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1476F4u;
    // 0x1476f4: 0x0  nop
    ctx->pc = 0x1476f4u;
    // NOP
    ctx->pc = 0x1476f8u;
}
