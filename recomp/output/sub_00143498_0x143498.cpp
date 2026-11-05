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

// Function: sub_00143498
// Address: 0x143498 - 0x1435a0
void sub_00143498_0x143498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143498_0x143498");
#endif

    switch (ctx->pc) {
        case 0x1434b8u: goto label_1434b8;
        case 0x1434e0u: goto label_1434e0;
        case 0x1434ecu: goto label_1434ec;
        case 0x1434fcu: goto label_1434fc;
        case 0x143504u: goto label_143504;
        case 0x143514u: goto label_143514;
        case 0x143538u: goto label_143538;
        case 0x143554u: goto label_143554;
        case 0x143568u: goto label_143568;
        case 0x143584u: goto label_143584;
        default: break;
    }

    ctx->pc = 0x143498u;

    // 0x143498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14349c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1434a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1434a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1434a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1434a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1434a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1434ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1434acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1434b0: 0xc04e866  jal         func_13A198
    ctx->pc = 0x1434B0u;
    SET_GPR_U32(ctx, 31, 0x1434B8u);
    ctx->pc = 0x1434B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434B0u;
    // 0x1434b4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x1434B0u, 0x1434B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434B8u;
label_1434b8:
    // 0x1434b8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1434b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1434bc: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1434BCu;
    {
        const bool branch_taken_0x1434bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1434C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1434BCu;
        // 0x1434c0: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1434bc) {
            ctx->pc = 0x143584u;
            goto label_143584;
        }
    }
    ctx->pc = 0x1434C4u;
    // 0x1434c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1434c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1434c8: 0x8c62077c  lw          $v0, 0x77C($v1)
    ctx->pc = 0x1434c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    // 0x1434cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1434ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1434d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1434d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1434d4: 0xac62077c  sw          $v0, 0x77C($v1)
    ctx->pc = 0x1434d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1916), GPR_U32(ctx, 2));
    // 0x1434d8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1434D8u;
    SET_GPR_U32(ctx, 31, 0x1434E0u);
    ctx->pc = 0x1434DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434D8u;
    // 0x1434dc: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1434D8u, 0x1434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434E0u;
label_1434e0:
    // 0x1434e0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1434e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1434e4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1434E4u;
    SET_GPR_U32(ctx, 31, 0x1434ECu);
    ctx->pc = 0x1434E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434E4u;
    // 0x1434e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1434E4u, 0x1434ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434ECu;
label_1434ec:
    // 0x1434ec: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1434ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1434f0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1434f4: 0xc04e860  jal         func_13A180
    ctx->pc = 0x1434F4u;
    SET_GPR_U32(ctx, 31, 0x1434FCu);
    ctx->pc = 0x1434F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434F4u;
    // 0x1434f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x1434F4u, 0x1434FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1434FCu;
label_1434fc:
    // 0x1434fc: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1434FCu;
    SET_GPR_U32(ctx, 31, 0x143504u);
    ctx->pc = 0x143500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1434FCu;
    // 0x143500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1434FCu, 0x143504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143504u;
label_143504:
    // 0x143504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14350c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14350Cu;
    SET_GPR_U32(ctx, 31, 0x143514u);
    ctx->pc = 0x143510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14350Cu;
    // 0x143510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14350Cu, 0x143514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143514u;
label_143514:
    // 0x143514: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x143514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143518: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x143518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14351c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143520: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x143520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143528: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14352c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143530: 0xc04daca  jal         func_136B28
    ctx->pc = 0x143530u;
    SET_GPR_U32(ctx, 31, 0x143538u);
    ctx->pc = 0x143534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143530u;
    // 0x143534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x143530u, 0x143538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143538u;
label_143538:
    // 0x143538: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x143538u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143540: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x143540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x143544: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x143544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x143548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14354c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14354Cu;
    SET_GPR_U32(ctx, 31, 0x143554u);
    ctx->pc = 0x143550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14354Cu;
    // 0x143550: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14354Cu, 0x143554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143554u;
label_143554:
    // 0x143554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14355c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14355cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143560: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x143560u;
    SET_GPR_U32(ctx, 31, 0x143568u);
    ctx->pc = 0x143564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143560u;
    // 0x143564: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x143560u, 0x143568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143568u;
label_143568:
    // 0x143568: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x143568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14356c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14356cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x143570: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x143570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x143574: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x143574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x143578: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14357c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14357Cu;
    SET_GPR_U32(ctx, 31, 0x143584u);
    ctx->pc = 0x143580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14357Cu;
    // 0x143580: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14357Cu, 0x143584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143584u;
label_143584:
    // 0x143584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14358c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14358cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143590: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143594: 0x3e00008  jr          $ra
    ctx->pc = 0x143594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143594u;
        // 0x143598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14359Cu;
    // 0x14359c: 0x0  nop
    ctx->pc = 0x14359cu;
    // NOP
    ctx->pc = 0x1435a0u;
}
