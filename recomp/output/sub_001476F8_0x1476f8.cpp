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

// Function: sub_001476F8
// Address: 0x1476f8 - 0x147848
void sub_001476F8_0x1476f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001476F8_0x1476f8");
#endif

    switch (ctx->pc) {
        case 0x147718u: goto label_147718;
        case 0x147730u: goto label_147730;
        case 0x14773cu: goto label_14773c;
        case 0x14774cu: goto label_14774c;
        case 0x147758u: goto label_147758;
        case 0x147764u: goto label_147764;
        case 0x147788u: goto label_147788;
        case 0x147794u: goto label_147794;
        case 0x1477a0u: goto label_1477a0;
        case 0x1477acu: goto label_1477ac;
        case 0x1477c8u: goto label_1477c8;
        case 0x1477dcu: goto label_1477dc;
        case 0x1477f8u: goto label_1477f8;
        case 0x14780cu: goto label_14780c;
        case 0x147818u: goto label_147818;
        case 0x147824u: goto label_147824;
        default: break;
    }

    ctx->pc = 0x1476f8u;

    // 0x1476f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1476f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1476fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1476fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x147700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x147704: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x147704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x147708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14770c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x147710: 0xc051b40  jal         func_146D00
    ctx->pc = 0x147710u;
    SET_GPR_U32(ctx, 31, 0x147718u);
    ctx->pc = 0x147714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147710u;
    // 0x147714: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x147710u, 0x147718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147718u;
label_147718:
    // 0x147718: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x147718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14771c: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x14771Cu;
    {
        const bool branch_taken_0x14771c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x147720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14771Cu;
        // 0x147720: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14771c) {
            ctx->pc = 0x147830u;
            goto label_147830;
        }
    }
    ctx->pc = 0x147724u;
    // 0x147724: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147728: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x147728u;
    SET_GPR_U32(ctx, 31, 0x147730u);
    ctx->pc = 0x14772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147728u;
    // 0x14772c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x147728u, 0x147730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147730u;
label_147730:
    // 0x147730: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147730u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147734: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x147734u;
    SET_GPR_U32(ctx, 31, 0x14773Cu);
    ctx->pc = 0x147738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147734u;
    // 0x147738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x147734u, 0x14773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14773Cu;
label_14773c:
    // 0x14773c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14773cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147740: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x147740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x147744: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x147744u;
    SET_GPR_U32(ctx, 31, 0x14774Cu);
    ctx->pc = 0x147748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147744u;
    // 0x147748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x147744u, 0x14774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14774Cu;
label_14774c:
    // 0x14774c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14774cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147750: 0xc051b64  jal         func_146D90
    ctx->pc = 0x147750u;
    SET_GPR_U32(ctx, 31, 0x147758u);
    ctx->pc = 0x147754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147750u;
    // 0x147754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D90u, 0x147750u, 0x147758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147758u;
label_147758:
    // 0x147758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14775c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14775Cu;
    SET_GPR_U32(ctx, 31, 0x147764u);
    ctx->pc = 0x147760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14775Cu;
    // 0x147760: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14775Cu, 0x147764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147764u;
label_147764:
    // 0x147764: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147768: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x147768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14776c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14776cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x147770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147774: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x147774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x147778: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x147778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14777c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147780: 0xc04daca  jal         func_136B28
    ctx->pc = 0x147780u;
    SET_GPR_U32(ctx, 31, 0x147788u);
    ctx->pc = 0x147784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147780u;
    // 0x147784: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x147780u, 0x147788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147788u;
label_147788:
    // 0x147788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14778c: 0xc046104  jal         func_118410
    ctx->pc = 0x14778Cu;
    SET_GPR_U32(ctx, 31, 0x147794u);
    ctx->pc = 0x147790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14778Cu;
    // 0x147790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14778Cu, 0x147794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147794u;
label_147794:
    // 0x147794: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147798: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x147798u;
    SET_GPR_U32(ctx, 31, 0x1477A0u);
    ctx->pc = 0x14779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147798u;
    // 0x14779c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DE8u, 0x147798u, 0x1477A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477A0u;
label_1477a0:
    // 0x1477a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1477a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477a4: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x1477A4u;
    SET_GPR_U32(ctx, 31, 0x1477ACu);
    ctx->pc = 0x1477A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477A4u;
    // 0x1477a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1477A4u, 0x1477ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477ACu;
label_1477ac:
    // 0x1477ac: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1477acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1477b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1477b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1477b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1477bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1477c0: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1477C0u;
    SET_GPR_U32(ctx, 31, 0x1477C8u);
    ctx->pc = 0x1477C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477C0u;
    // 0x1477c4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1477C0u, 0x1477C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477C8u;
label_1477c8:
    // 0x1477c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1477c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1477ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1477d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477d4: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1477D4u;
    SET_GPR_U32(ctx, 31, 0x1477DCu);
    ctx->pc = 0x1477D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477D4u;
    // 0x1477d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1477D4u, 0x1477DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477DCu;
label_1477dc:
    // 0x1477dc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1477dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1477e0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1477e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1477e4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1477e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1477e8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1477e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1477ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1477f0: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1477F0u;
    SET_GPR_U32(ctx, 31, 0x1477F8u);
    ctx->pc = 0x1477F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1477F0u;
    // 0x1477f4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1477F0u, 0x1477F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477F8u;
label_1477f8:
    // 0x1477f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1477f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1477fc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1477fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147800: 0xae4204c8  sw          $v0, 0x4C8($s2)
    ctx->pc = 0x147800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1224), GPR_U32(ctx, 2));
    // 0x147804: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x147804u;
    SET_GPR_U32(ctx, 31, 0x14780Cu);
    ctx->pc = 0x147808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147804u;
    // 0x147808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x147804u, 0x14780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14780Cu;
label_14780c:
    // 0x14780c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147810: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x147810u;
    SET_GPR_U32(ctx, 31, 0x147818u);
    ctx->pc = 0x147814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147810u;
    // 0x147814: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x147810u, 0x147818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147818u;
label_147818:
    // 0x147818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14781c: 0xc04e046  jal         func_138118
    ctx->pc = 0x14781Cu;
    SET_GPR_U32(ctx, 31, 0x147824u);
    ctx->pc = 0x147820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14781Cu;
    // 0x147820: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x14781Cu, 0x147824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147824u;
label_147824:
    // 0x147824: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x147824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x147828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14782c: 0xac620794  sw          $v0, 0x794($v1)
    ctx->pc = 0x14782cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F0794u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0794u, _value); } while (0);
label_147830:
    // 0x147830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147838: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x147838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14783c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14783cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x147840: 0x3e00008  jr          $ra
    ctx->pc = 0x147840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147840u;
        // 0x147844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147848u;
}
