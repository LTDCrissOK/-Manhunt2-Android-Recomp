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

// Function: sub_00248518
// Address: 0x248518 - 0x2485e0
void sub_00248518_0x248518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248518_0x248518");
#endif

    switch (ctx->pc) {
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        default: break;
    }

    ctx->pc = 0x248518u;

label_248518:
    // 0x248518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24851c:
    // 0x24851c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_248520:
    // 0x248520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_248524:
    // 0x248524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248528:
    // 0x248528: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x248528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24852c:
    // 0x24852c: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x24852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_248530:
    // 0x248530: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_248534:
    if (ctx->pc == 0x248534u) {
        ctx->pc = 0x248534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248530u;
        // 0x248534: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248538u;
        goto label_248538;
    }
    ctx->pc = 0x248530u;
    {
        const bool branch_taken_0x248530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248530u;
        // 0x248534: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248530) {
            ctx->pc = 0x248548u;
            goto label_248548;
        }
    }
    ctx->pc = 0x248538u;
label_248538:
    // 0x248538: 0x1000000e  b           . + 4 + (0xE << 2)
label_24853c:
    if (ctx->pc == 0x24853Cu) {
        ctx->pc = 0x24853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248538u;
        // 0x24853c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248540u;
        goto label_248540;
    }
    ctx->pc = 0x248538u;
    {
        const bool branch_taken_0x248538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248538u;
        // 0x24853c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248538) {
            ctx->pc = 0x248574u;
            goto label_248574;
        }
    }
    ctx->pc = 0x248540u;
label_248540:
    // 0x248540: 0x1000000c  b           . + 4 + (0xC << 2)
label_248544:
    if (ctx->pc == 0x248544u) {
        ctx->pc = 0x248544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248540u;
        // 0x248544: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248548u;
        goto label_248548;
    }
    ctx->pc = 0x248540u;
    {
        const bool branch_taken_0x248540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248540u;
        // 0x248544: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248540) {
            ctx->pc = 0x248574u;
            goto label_248574;
        }
    }
    ctx->pc = 0x248548u;
label_248548:
    // 0x248548: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x248548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24854c:
    // 0x24854c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248550:
    // 0x248550: 0x250301ec  addiu       $v1, $t0, 0x1EC
    ctx->pc = 0x248550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 492));
label_248554:
    // 0x248554: 0x0  nop
    ctx->pc = 0x248554u;
    // NOP
label_248558:
    // 0x248558: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24855c:
    // 0x24855c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_248560:
    if (ctx->pc == 0x248560u) {
        ctx->pc = 0x248560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24855Cu;
        // 0x248560: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248564u;
        goto label_248564;
    }
    ctx->pc = 0x24855Cu;
    {
        const bool branch_taken_0x24855c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24855Cu;
        // 0x248560: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24855c) {
            ctx->pc = 0x248540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248540;
        }
    }
    ctx->pc = 0x248564u;
label_248564:
    // 0x248564: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x248564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_248568:
    // 0x248568: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24856c:
    if (ctx->pc == 0x24856Cu) {
        ctx->pc = 0x24856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248568u;
        // 0x24856c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248570u;
        goto label_248570;
    }
    ctx->pc = 0x248568u;
    {
        const bool branch_taken_0x248568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248568u;
        // 0x24856c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248568) {
            ctx->pc = 0x248558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248558;
        }
    }
    ctx->pc = 0x248570u;
label_248570:
    // 0x248570: 0x8cc701e8  lw          $a3, 0x1E8($a2)
    ctx->pc = 0x248570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_248574:
    // 0x248574: 0x8d020150  lw          $v0, 0x150($t0)
    ctx->pc = 0x248574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 336)));
label_248578:
    // 0x248578: 0x24040488  addiu       $a0, $zero, 0x488
    ctx->pc = 0x248578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
label_24857c:
    // 0x24857c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_248580:
    // 0x248580: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_248584:
    // 0x248584: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x248584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248588:
    // 0x248588: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_24858c:
    if (ctx->pc == 0x24858Cu) {
        ctx->pc = 0x24858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248588u;
        // 0x24858c: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248590u;
        goto label_248590;
    }
    ctx->pc = 0x248588u;
    {
        const bool branch_taken_0x248588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248588u;
        // 0x24858c: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248588) {
            ctx->pc = 0x2485ACu;
            goto label_2485ac;
        }
    }
    ctx->pc = 0x248590u;
label_248590:
    // 0x248590: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_248594:
    // 0x248594: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x248594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_248598:
    // 0x248598: 0x24a57d70  addiu       $a1, $a1, 0x7D70
    ctx->pc = 0x248598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32112));
label_24859c:
    // 0x24859c: 0xc073fde  jal         func_1CFF78
label_2485a0:
    if (ctx->pc == 0x2485A0u) {
        ctx->pc = 0x2485A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24859Cu;
        // 0x2485a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485A4u;
        goto label_2485a4;
    }
    ctx->pc = 0x24859Cu;
    SET_GPR_U32(ctx, 31, 0x2485A4u);
    ctx->pc = 0x2485A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24859Cu;
    // 0x2485a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x24859Cu, 0x2485A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485A4u;
label_2485a4:
    // 0x2485a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2485a8:
    if (ctx->pc == 0x2485A8u) {
        ctx->pc = 0x2485A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485A4u;
        // 0x2485a8: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485ACu;
        goto label_2485ac;
    }
    ctx->pc = 0x2485A4u;
    {
        const bool branch_taken_0x2485a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485A4u;
        // 0x2485a8: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485a4) {
            ctx->pc = 0x2485C0u;
            goto label_2485c0;
        }
    }
    ctx->pc = 0x2485ACu;
label_2485ac:
    // 0x2485ac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2485acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2485b0:
    // 0x2485b0: 0x24a57e78  addiu       $a1, $a1, 0x7E78
    ctx->pc = 0x2485b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32376));
label_2485b4:
    // 0x2485b4: 0xc073fde  jal         func_1CFF78
label_2485b8:
    if (ctx->pc == 0x2485B8u) {
        ctx->pc = 0x2485B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485B4u;
        // 0x2485b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485BCu;
        goto label_2485bc;
    }
    ctx->pc = 0x2485B4u;
    SET_GPR_U32(ctx, 31, 0x2485BCu);
    ctx->pc = 0x2485B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485B4u;
    // 0x2485b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2485B4u, 0x2485BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485BCu;
label_2485bc:
    // 0x2485bc: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2485bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2485c0:
    // 0x2485c0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2485c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2485c4:
    // 0x2485c4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2485c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2485c8:
    // 0x2485c8: 0x40f809  jalr        $v0
label_2485cc:
    if (ctx->pc == 0x2485CCu) {
        ctx->pc = 0x2485D0u;
        goto label_2485d0;
    }
    ctx->pc = 0x2485C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2485D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485C8u, 0x2485D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2485D0u;
label_2485d0:
    // 0x2485d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2485d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2485d4:
    // 0x2485d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2485d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2485d8:
    // 0x2485d8: 0x3e00008  jr          $ra
label_2485dc:
    if (ctx->pc == 0x2485DCu) {
        ctx->pc = 0x2485DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D8u;
        // 0x2485dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485E0u;
        goto label_fallthrough_0x2485d8;
    }
    ctx->pc = 0x2485D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2485DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D8u;
        // 0x2485dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2485d8:
    ctx->pc = 0x2485E0u;
}
