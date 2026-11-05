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

// Function: sub_001412D8
// Address: 0x1412d8 - 0x141478
void sub_001412D8_0x1412d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001412D8_0x1412d8");
#endif

    switch (ctx->pc) {
        case 0x1412f8u: goto label_1412f8;
        case 0x141310u: goto label_141310;
        case 0x141328u: goto label_141328;
        case 0x141334u: goto label_141334;
        case 0x141344u: goto label_141344;
        case 0x141350u: goto label_141350;
        case 0x141374u: goto label_141374;
        case 0x141380u: goto label_141380;
        case 0x14138cu: goto label_14138c;
        case 0x141398u: goto label_141398;
        case 0x1413a4u: goto label_1413a4;
        case 0x1413c0u: goto label_1413c0;
        case 0x1413d4u: goto label_1413d4;
        case 0x1413f0u: goto label_1413f0;
        default: break;
    }

    ctx->pc = 0x1412d8u;

    // 0x1412d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1412d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1412dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1412dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1412e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1412e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1412e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1412e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1412e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1412e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1412ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1412ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1412f0: 0xc0503d0  jal         func_140F40
    ctx->pc = 0x1412F0u;
    SET_GPR_U32(ctx, 31, 0x1412F8u);
    ctx->pc = 0x1412F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1412F0u;
    // 0x1412f4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x1412F0u, 0x1412F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1412F8u;
label_1412f8:
    // 0x1412f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1412f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1412fc: 0x5043003e  beql        $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1412FCu;
    {
        const bool branch_taken_0x1412fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1412fc) {
            ctx->pc = 0x141300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1412FCu;
            // 0x141300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1413F8u;
            goto label_1413f8;
        }
    }
    ctx->pc = 0x141304u;
    // 0x141304: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x141304u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x141308: 0xc0503d0  jal         func_140F40
    ctx->pc = 0x141308u;
    SET_GPR_U32(ctx, 31, 0x141310u);
    ctx->pc = 0x14130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141308u;
    // 0x14130c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F40u, 0x141308u, 0x141310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141310u;
label_141310:
    // 0x141310: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x141310u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x141314: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x141314u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x141318: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x141318u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14131c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14131cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141320: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x141320u;
    SET_GPR_U32(ctx, 31, 0x141328u);
    ctx->pc = 0x141324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141320u;
    // 0x141324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x141320u, 0x141328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141328u;
label_141328:
    // 0x141328: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x141328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14132c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14132Cu;
    SET_GPR_U32(ctx, 31, 0x141334u);
    ctx->pc = 0x141330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14132Cu;
    // 0x141330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14132Cu, 0x141334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141334u;
label_141334:
    // 0x141334: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x141334u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x141338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x141338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14133c: 0xc0503ca  jal         func_140F28
    ctx->pc = 0x14133Cu;
    SET_GPR_U32(ctx, 31, 0x141344u);
    ctx->pc = 0x141340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14133Cu;
    // 0x141340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F28u, 0x14133Cu, 0x141344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141344u;
label_141344:
    // 0x141344: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141348: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x141348u;
    SET_GPR_U32(ctx, 31, 0x141350u);
    ctx->pc = 0x14134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141348u;
    // 0x14134c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x141348u, 0x141350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141350u;
label_141350:
    // 0x141350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x141350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141354: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x141354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x141358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14135c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14135cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141360: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x141360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x141364: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x141364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14136c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14136Cu;
    SET_GPR_U32(ctx, 31, 0x141374u);
    ctx->pc = 0x141370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14136Cu;
    // 0x141370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14136Cu, 0x141374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141374u;
label_141374:
    // 0x141374: 0x8e450524  lw          $a1, 0x524($s2)
    ctx->pc = 0x141374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
    // 0x141378: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x141378u;
    SET_GPR_U32(ctx, 31, 0x141380u);
    ctx->pc = 0x14137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141378u;
    // 0x14137c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x141378u, 0x141380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141380u;
label_141380:
    // 0x141380: 0x8e450528  lw          $a1, 0x528($s2)
    ctx->pc = 0x141380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1320)));
    // 0x141384: 0xc046256  jal         func_118958
    ctx->pc = 0x141384u;
    SET_GPR_U32(ctx, 31, 0x14138Cu);
    ctx->pc = 0x141388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141384u;
    // 0x141388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x141384u, 0x14138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14138Cu;
label_14138c:
    // 0x14138c: 0x8e45052c  lw          $a1, 0x52C($s2)
    ctx->pc = 0x14138cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1324)));
    // 0x141390: 0xc046104  jal         func_118410
    ctx->pc = 0x141390u;
    SET_GPR_U32(ctx, 31, 0x141398u);
    ctx->pc = 0x141394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141390u;
    // 0x141394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x141390u, 0x141398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141398u;
label_141398:
    // 0x141398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14139c: 0xc0460c4  jal         func_118310
    ctx->pc = 0x14139Cu;
    SET_GPR_U32(ctx, 31, 0x1413A4u);
    ctx->pc = 0x1413A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14139Cu;
    // 0x1413a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x14139Cu, 0x1413A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413A4u;
label_1413a4:
    // 0x1413a4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1413a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1413a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1413a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1413acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1413b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1413b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1413b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1413b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1413b8: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1413B8u;
    SET_GPR_U32(ctx, 31, 0x1413C0u);
    ctx->pc = 0x1413BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413B8u;
    // 0x1413bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1413B8u, 0x1413C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413C0u;
label_1413c0:
    // 0x1413c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1413c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1413c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1413c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1413cc: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1413CCu;
    SET_GPR_U32(ctx, 31, 0x1413D4u);
    ctx->pc = 0x1413D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413CCu;
    // 0x1413d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1413CCu, 0x1413D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413D4u;
label_1413d4:
    // 0x1413d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1413d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1413d8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1413d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1413dc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1413dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1413e0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1413e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1413e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1413e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1413e8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1413E8u;
    SET_GPR_U32(ctx, 31, 0x1413F0u);
    ctx->pc = 0x1413ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1413E8u;
    // 0x1413ec: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1413E8u, 0x1413F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1413F0u;
label_1413f0:
    // 0x1413f0: 0xae400520  sw          $zero, 0x520($s2)
    ctx->pc = 0x1413f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1312), GPR_U32(ctx, 0));
    // 0x1413f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1413f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1413f8:
    // 0x1413f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1413f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1413fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1413fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141400: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x141400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141404: 0x3e00008  jr          $ra
    ctx->pc = 0x141404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141404u;
        // 0x141408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14140Cu;
    // 0x14140c: 0x0  nop
    ctx->pc = 0x14140cu;
    // NOP
    // 0x141410: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141414: 0x0  nop
    ctx->pc = 0x141414u;
    // NOP
    // 0x141418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14141c: 0x0  nop
    ctx->pc = 0x14141cu;
    // NOP
    // 0x141420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141424: 0x0  nop
    ctx->pc = 0x141424u;
    // NOP
    // 0x141428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14142c: 0x0  nop
    ctx->pc = 0x14142cu;
    // NOP
    // 0x141430: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141434: 0x0  nop
    ctx->pc = 0x141434u;
    // NOP
    // 0x141438: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14143c: 0x0  nop
    ctx->pc = 0x14143cu;
    // NOP
    // 0x141440: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141444: 0x0  nop
    ctx->pc = 0x141444u;
    // NOP
    // 0x141448: 0xac8604e0  sw          $a2, 0x4E0($a0)
    ctx->pc = 0x141448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1248), GPR_U32(ctx, 6));
    // 0x14144c: 0x0  nop
    ctx->pc = 0x14144cu;
    // NOP
    // 0x141450: 0x8c8204e0  lw          $v0, 0x4E0($a0)
    ctx->pc = 0x141450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1248)));
    // 0x141454: 0x0  nop
    ctx->pc = 0x141454u;
    // NOP
    // 0x141458: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14145c: 0x0  nop
    ctx->pc = 0x14145cu;
    // NOP
    // 0x141460: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x141460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x141464: 0x0  nop
    ctx->pc = 0x141464u;
    // NOP
    // 0x141468: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x141468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x14146c: 0x0  nop
    ctx->pc = 0x14146cu;
    // NOP
    // 0x141470: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141474: 0x0  nop
    ctx->pc = 0x141474u;
    // NOP
    ctx->pc = 0x141478u;
}
