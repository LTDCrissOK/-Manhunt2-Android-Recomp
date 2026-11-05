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

// Function: sub_001508B0
// Address: 0x1508b0 - 0x150a18
void sub_001508B0_0x1508b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001508B0_0x1508b0");
#endif

    switch (ctx->pc) {
        case 0x1508dcu: goto label_1508dc;
        case 0x1508e8u: goto label_1508e8;
        case 0x1508f8u: goto label_1508f8;
        case 0x150920u: goto label_150920;
        case 0x150930u: goto label_150930;
        case 0x150954u: goto label_150954;
        case 0x150970u: goto label_150970;
        case 0x15097cu: goto label_15097c;
        case 0x150988u: goto label_150988;
        case 0x150994u: goto label_150994;
        case 0x1509a0u: goto label_1509a0;
        case 0x1509acu: goto label_1509ac;
        case 0x1509b8u: goto label_1509b8;
        case 0x1509c4u: goto label_1509c4;
        case 0x1509d8u: goto label_1509d8;
        case 0x1509f4u: goto label_1509f4;
        default: break;
    }

    ctx->pc = 0x1508b0u;

    // 0x1508b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1508b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1508b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1508b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1508b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1508bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1508bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1508c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1508c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1508c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1508c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1508c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1508c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1508cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1508ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1508d0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1508d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1508d4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1508D4u;
    SET_GPR_U32(ctx, 31, 0x1508DCu);
    ctx->pc = 0x1508D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508D4u;
    // 0x1508d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1508D4u, 0x1508DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508DCu;
label_1508dc:
    // 0x1508dc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1508dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1508e0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1508E0u;
    SET_GPR_U32(ctx, 31, 0x1508E8u);
    ctx->pc = 0x1508E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508E0u;
    // 0x1508e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1508E0u, 0x1508E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508E8u;
label_1508e8:
    // 0x1508e8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1508e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1508ec: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1508f0: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x1508F0u;
    SET_GPR_U32(ctx, 31, 0x1508F8u);
    ctx->pc = 0x1508F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508F0u;
    // 0x1508f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x1508F0u, 0x1508F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508F8u;
label_1508f8:
    // 0x1508f8: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1508f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1508fc: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
    // 0x150900: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150904: 0x2631a080  addiu       $s1, $s1, -0x5F80
    ctx->pc = 0x150904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942848));
    // 0x150908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15090c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150914: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150918: 0xc049844  jal         func_126110
    ctx->pc = 0x150918u;
    SET_GPR_U32(ctx, 31, 0x150920u);
    ctx->pc = 0x15091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150918u;
    // 0x15091c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126110u, 0x150918u, 0x150920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150920u;
label_150920:
    // 0x150920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x150920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150928: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x150928u;
    SET_GPR_U32(ctx, 31, 0x150930u);
    ctx->pc = 0x15092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150928u;
    // 0x15092c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x150928u, 0x150930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150930u;
label_150930:
    // 0x150930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x150930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150934: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x150934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150938: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15093c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15093cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150944: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x150944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150948: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15094c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x15094Cu;
    SET_GPR_U32(ctx, 31, 0x150954u);
    ctx->pc = 0x150950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15094Cu;
    // 0x150950: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x15094Cu, 0x150954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150954u;
label_150954:
    // 0x150954: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x150954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150958: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x150958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x15095c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x15095cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x150960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150964: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x150964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x150968: 0xc049808  jal         func_126020
    ctx->pc = 0x150968u;
    SET_GPR_U32(ctx, 31, 0x150970u);
    ctx->pc = 0x15096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150968u;
    // 0x15096c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126020u, 0x150968u, 0x150970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150970u;
label_150970:
    // 0x150970: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x150970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150974: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x150974u;
    SET_GPR_U32(ctx, 31, 0x15097Cu);
    ctx->pc = 0x150978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150974u;
    // 0x150978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x150974u, 0x15097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15097Cu;
label_15097c:
    // 0x15097c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x150980: 0xc046058  jal         func_118160
    ctx->pc = 0x150980u;
    SET_GPR_U32(ctx, 31, 0x150988u);
    ctx->pc = 0x150984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150980u;
    // 0x150984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x150980u, 0x150988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150988u;
label_150988:
    // 0x150988: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x150988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15098c: 0xc054920  jal         func_152480
    ctx->pc = 0x15098Cu;
    SET_GPR_U32(ctx, 31, 0x150994u);
    ctx->pc = 0x150990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15098Cu;
    // 0x150990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152480u, 0x15098Cu, 0x150994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150994u;
label_150994:
    // 0x150994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150998: 0xc046104  jal         func_118410
    ctx->pc = 0x150998u;
    SET_GPR_U32(ctx, 31, 0x1509A0u);
    ctx->pc = 0x15099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150998u;
    // 0x15099c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x150998u, 0x1509A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509A0u;
label_1509a0:
    // 0x1509a0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1509a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1509a4: 0xc054930  jal         func_1524C0
    ctx->pc = 0x1509A4u;
    SET_GPR_U32(ctx, 31, 0x1509ACu);
    ctx->pc = 0x1509A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509A4u;
    // 0x1509a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1524C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1524C0u, 0x1509A4u, 0x1509ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509ACu;
label_1509ac:
    // 0x1509ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1509acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1509b0: 0xc046290  jal         func_118A40
    ctx->pc = 0x1509B0u;
    SET_GPR_U32(ctx, 31, 0x1509B8u);
    ctx->pc = 0x1509B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509B0u;
    // 0x1509b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x1509B0u, 0x1509B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509B8u;
label_1509b8:
    // 0x1509b8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1509b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1509bc: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1509BCu;
    SET_GPR_U32(ctx, 31, 0x1509C4u);
    ctx->pc = 0x1509C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509BCu;
    // 0x1509c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1509BCu, 0x1509C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509C4u;
label_1509c4:
    // 0x1509c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1509c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1509c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1509ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509d0: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1509D0u;
    SET_GPR_U32(ctx, 31, 0x1509D8u);
    ctx->pc = 0x1509D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509D0u;
    // 0x1509d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1509D0u, 0x1509D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509D8u;
label_1509d8:
    // 0x1509d8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1509dc: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1509e0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1509e4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1509e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1509e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1509e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1509ec: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1509ECu;
    SET_GPR_U32(ctx, 31, 0x1509F4u);
    ctx->pc = 0x1509F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509ECu;
    // 0x1509f0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1509ECu, 0x1509F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509F4u;
label_1509f4:
    // 0x1509f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1509f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1509f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1509f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1509fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1509fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150a00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x150a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x150a04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x150a04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150a08: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x150a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x150a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x150A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A0Cu;
        // 0x150a10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150A14u;
    // 0x150a14: 0x0  nop
    ctx->pc = 0x150a14u;
    // NOP
    ctx->pc = 0x150a18u;
}
