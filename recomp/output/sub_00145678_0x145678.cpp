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

// Function: sub_00145678
// Address: 0x145678 - 0x1457e8
void sub_00145678_0x145678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145678_0x145678");
#endif

    switch (ctx->pc) {
        case 0x1456acu: goto label_1456ac;
        case 0x1456b8u: goto label_1456b8;
        case 0x1456c8u: goto label_1456c8;
        case 0x1456d0u: goto label_1456d0;
        case 0x1456e0u: goto label_1456e0;
        case 0x145704u: goto label_145704;
        case 0x14570cu: goto label_14570c;
        case 0x145718u: goto label_145718;
        case 0x145724u: goto label_145724;
        case 0x145740u: goto label_145740;
        case 0x145754u: goto label_145754;
        case 0x1457a4u: goto label_1457a4;
        case 0x1457b4u: goto label_1457b4;
        case 0x1457c4u: goto label_1457c4;
        default: break;
    }

    ctx->pc = 0x145678u;

    // 0x145678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14567c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14567cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14568c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14568cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x145690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x145690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x145694: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x145694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x145698: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x145698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14569c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1456a0: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1456a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1456a4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1456A4u;
    SET_GPR_U32(ctx, 31, 0x1456ACu);
    ctx->pc = 0x1456A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456A4u;
    // 0x1456a8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1456A4u, 0x1456ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456ACu;
label_1456ac:
    // 0x1456ac: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1456acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1456b0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1456B0u;
    SET_GPR_U32(ctx, 31, 0x1456B8u);
    ctx->pc = 0x1456B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456B0u;
    // 0x1456b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1456B0u, 0x1456B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456B8u;
label_1456b8:
    // 0x1456b8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1456b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1456bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1456bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456c0: 0xc05158e  jal         func_145638
    ctx->pc = 0x1456C0u;
    SET_GPR_U32(ctx, 31, 0x1456C8u);
    ctx->pc = 0x1456C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456C0u;
    // 0x1456c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145638u, 0x1456C0u, 0x1456C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456C8u;
label_1456c8:
    // 0x1456c8: 0xc051596  jal         func_145658
    ctx->pc = 0x1456C8u;
    SET_GPR_U32(ctx, 31, 0x1456D0u);
    ctx->pc = 0x1456CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456C8u;
    // 0x1456cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145658u, 0x1456C8u, 0x1456D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456D0u;
label_1456d0:
    // 0x1456d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1456d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1456d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456d8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1456D8u;
    SET_GPR_U32(ctx, 31, 0x1456E0u);
    ctx->pc = 0x1456DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456D8u;
    // 0x1456dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1456D8u, 0x1456E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456E0u;
label_1456e0:
    // 0x1456e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1456e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456e4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1456e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1456e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1456ec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1456ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1456f0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1456f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1456f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1456f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1456f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456fc: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1456FCu;
    SET_GPR_U32(ctx, 31, 0x145704u);
    ctx->pc = 0x145700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456FCu;
    // 0x145700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1456FCu, 0x145704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145704u;
label_145704:
    // 0x145704: 0xc051596  jal         func_145658
    ctx->pc = 0x145704u;
    SET_GPR_U32(ctx, 31, 0x14570Cu);
    ctx->pc = 0x145708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145704u;
    // 0x145708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145658u, 0x145704u, 0x14570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14570Cu;
label_14570c:
    // 0x14570c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145710: 0xc046030  jal         func_1180C0
    ctx->pc = 0x145710u;
    SET_GPR_U32(ctx, 31, 0x145718u);
    ctx->pc = 0x145714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145710u;
    // 0x145714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x145710u, 0x145718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145718u;
label_145718:
    // 0x145718: 0x8e050524  lw          $a1, 0x524($s0)
    ctx->pc = 0x145718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x14571c: 0xc046256  jal         func_118958
    ctx->pc = 0x14571Cu;
    SET_GPR_U32(ctx, 31, 0x145724u);
    ctx->pc = 0x145720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14571Cu;
    // 0x145720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x14571Cu, 0x145724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145724u;
label_145724:
    // 0x145724: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x145724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x145728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14572c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x145730: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x145730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x145734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145738: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x145738u;
    SET_GPR_U32(ctx, 31, 0x145740u);
    ctx->pc = 0x14573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145738u;
    // 0x14573c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x145738u, 0x145740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145740u;
label_145740:
    // 0x145740: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x145740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14574c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14574Cu;
    SET_GPR_U32(ctx, 31, 0x145754u);
    ctx->pc = 0x145750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14574Cu;
    // 0x145750: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14574Cu, 0x145754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145754u;
label_145754:
    // 0x145754: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x145754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x145758: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x145758u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14575c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x145760: 0x8e030524  lw          $v1, 0x524($s0)
    ctx->pc = 0x145760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1316)));
    // 0x145764: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x145764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x145768: 0x10730010  beq         $v1, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x145768u;
    {
        const bool branch_taken_0x145768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x14576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145768u;
        // 0x14576c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145768) {
            ctx->pc = 0x1457ACu;
            goto label_1457ac;
        }
    }
    ctx->pc = 0x145770u;
    // 0x145770: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x145770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145774: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145774u;
    {
        const bool branch_taken_0x145774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145774) {
            ctx->pc = 0x14578Cu;
            goto label_14578c;
        }
    }
    ctx->pc = 0x14577Cu;
    // 0x14577c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14577Cu;
    {
        const bool branch_taken_0x14577c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14577Cu;
        // 0x145780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14577c) {
            ctx->pc = 0x14579Cu;
            goto label_14579c;
        }
    }
    ctx->pc = 0x145784u;
    // 0x145784: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x145784u;
    {
        const bool branch_taken_0x145784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145784u;
        // 0x145788: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145784) {
            ctx->pc = 0x1457CCu;
            goto label_1457cc;
        }
    }
    ctx->pc = 0x14578Cu;
label_14578c:
    // 0x14578c: 0x1074000b  beq         $v1, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x14578Cu;
    {
        const bool branch_taken_0x14578c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x145790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14578Cu;
        // 0x145790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14578c) {
            ctx->pc = 0x1457BCu;
            goto label_1457bc;
        }
    }
    ctx->pc = 0x145794u;
    // 0x145794: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x145794u;
    {
        const bool branch_taken_0x145794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145794u;
        // 0x145798: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145794) {
            ctx->pc = 0x1457CCu;
            goto label_1457cc;
        }
    }
    ctx->pc = 0x14579Cu;
label_14579c:
    // 0x14579c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14579Cu;
    SET_GPR_U32(ctx, 31, 0x1457A4u);
    ctx->pc = 0x1457A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14579Cu;
    // 0x1457a0: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14579Cu, 0x1457A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457A4u;
label_1457a4:
    // 0x1457a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1457A4u;
    {
        const bool branch_taken_0x1457a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457A4u;
        // 0x1457a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457a4) {
            ctx->pc = 0x1457C8u;
            goto label_1457c8;
        }
    }
    ctx->pc = 0x1457ACu;
label_1457ac:
    // 0x1457ac: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1457ACu;
    SET_GPR_U32(ctx, 31, 0x1457B4u);
    ctx->pc = 0x1457B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457ACu;
    // 0x1457b0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1457ACu, 0x1457B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457B4u;
label_1457b4:
    // 0x1457b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1457B4u;
    {
        const bool branch_taken_0x1457b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457B4u;
        // 0x1457b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457b4) {
            ctx->pc = 0x1457C8u;
            goto label_1457c8;
        }
    }
    ctx->pc = 0x1457BCu;
label_1457bc:
    // 0x1457bc: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1457BCu;
    SET_GPR_U32(ctx, 31, 0x1457C4u);
    ctx->pc = 0x1457C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1457BCu;
    // 0x1457c0: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1457BCu, 0x1457C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1457C4u;
label_1457c4:
    // 0x1457c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1457c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1457c8:
    // 0x1457c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1457c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1457cc:
    // 0x1457cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1457ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1457d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1457d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1457d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1457d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1457d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1457d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1457dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1457DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1457E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1457DCu;
        // 0x1457e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1457DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1457E4u;
    // 0x1457e4: 0x0  nop
    ctx->pc = 0x1457e4u;
    // NOP
    ctx->pc = 0x1457e8u;
}
