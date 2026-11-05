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

// Function: sub_00242520
// Address: 0x242520 - 0x242630
void sub_00242520_0x242520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242520_0x242520");
#endif

    switch (ctx->pc) {
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        case 0x242530u: goto label_242530;
        case 0x242534u: goto label_242534;
        case 0x242538u: goto label_242538;
        case 0x24253cu: goto label_24253c;
        case 0x242540u: goto label_242540;
        case 0x242544u: goto label_242544;
        case 0x242548u: goto label_242548;
        case 0x24254cu: goto label_24254c;
        case 0x242550u: goto label_242550;
        case 0x242554u: goto label_242554;
        case 0x242558u: goto label_242558;
        case 0x24255cu: goto label_24255c;
        case 0x242560u: goto label_242560;
        case 0x242564u: goto label_242564;
        case 0x242568u: goto label_242568;
        case 0x24256cu: goto label_24256c;
        case 0x242570u: goto label_242570;
        case 0x242574u: goto label_242574;
        case 0x242578u: goto label_242578;
        case 0x24257cu: goto label_24257c;
        case 0x242580u: goto label_242580;
        case 0x242584u: goto label_242584;
        case 0x242588u: goto label_242588;
        case 0x24258cu: goto label_24258c;
        case 0x242590u: goto label_242590;
        case 0x242594u: goto label_242594;
        case 0x242598u: goto label_242598;
        case 0x24259cu: goto label_24259c;
        case 0x2425a0u: goto label_2425a0;
        case 0x2425a4u: goto label_2425a4;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425acu: goto label_2425ac;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425b4u: goto label_2425b4;
        case 0x2425b8u: goto label_2425b8;
        case 0x2425bcu: goto label_2425bc;
        case 0x2425c0u: goto label_2425c0;
        case 0x2425c4u: goto label_2425c4;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425ccu: goto label_2425cc;
        case 0x2425d0u: goto label_2425d0;
        case 0x2425d4u: goto label_2425d4;
        case 0x2425d8u: goto label_2425d8;
        case 0x2425dcu: goto label_2425dc;
        case 0x2425e0u: goto label_2425e0;
        case 0x2425e4u: goto label_2425e4;
        case 0x2425e8u: goto label_2425e8;
        case 0x2425ecu: goto label_2425ec;
        case 0x2425f0u: goto label_2425f0;
        case 0x2425f4u: goto label_2425f4;
        case 0x2425f8u: goto label_2425f8;
        case 0x2425fcu: goto label_2425fc;
        case 0x242600u: goto label_242600;
        case 0x242604u: goto label_242604;
        case 0x242608u: goto label_242608;
        case 0x24260cu: goto label_24260c;
        case 0x242610u: goto label_242610;
        case 0x242614u: goto label_242614;
        case 0x242618u: goto label_242618;
        case 0x24261cu: goto label_24261c;
        case 0x242620u: goto label_242620;
        case 0x242624u: goto label_242624;
        case 0x242628u: goto label_242628;
        case 0x24262cu: goto label_24262c;
        default: break;
    }

    ctx->pc = 0x242520u;

label_242520:
    // 0x242520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242524:
    // 0x242524: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x242524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_242528:
    // 0x242528: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x242528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_24252c:
    // 0x24252c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24252cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242530:
    // 0x242530: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242534:
    // 0x242534: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x242534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_242538:
    // 0x242538: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_24253c:
    if (ctx->pc == 0x24253Cu) {
        ctx->pc = 0x24253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242538u;
        // 0x24253c: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242540u;
        goto label_242540;
    }
    ctx->pc = 0x242538u;
    {
        const bool branch_taken_0x242538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242538u;
        // 0x24253c: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242538) {
            ctx->pc = 0x242564u;
            goto label_242564;
        }
    }
    ctx->pc = 0x242540u;
label_242540:
    // 0x242540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242544:
    // 0x242544: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x242544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_242548:
    // 0x242548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24254c:
    // 0x24254c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_242550:
    if (ctx->pc == 0x242550u) {
        ctx->pc = 0x242550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24254Cu;
        // 0x242550: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242554u;
        goto label_242554;
    }
    ctx->pc = 0x24254Cu;
    {
        const bool branch_taken_0x24254c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24254Cu;
        // 0x242550: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24254c) {
            ctx->pc = 0x242564u;
            goto label_242564;
        }
    }
    ctx->pc = 0x242554u;
label_242554:
    // 0x242554: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x242554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_242558:
    // 0x242558: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24255c:
    if (ctx->pc == 0x24255Cu) {
        ctx->pc = 0x24255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242558u;
        // 0x24255c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242560u;
        goto label_242560;
    }
    ctx->pc = 0x242558u;
    {
        const bool branch_taken_0x242558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242558u;
        // 0x24255c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242558) {
            ctx->pc = 0x242548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242548;
        }
    }
    ctx->pc = 0x242560u;
label_242560:
    // 0x242560: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_242564:
    // 0x242564: 0x24a566c0  addiu       $a1, $a1, 0x66C0
    ctx->pc = 0x242564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26304));
label_242568:
    // 0x242568: 0xc073fde  jal         func_1CFF78
label_24256c:
    if (ctx->pc == 0x24256Cu) {
        ctx->pc = 0x24256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242568u;
        // 0x24256c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242570u;
        goto label_242570;
    }
    ctx->pc = 0x242568u;
    SET_GPR_U32(ctx, 31, 0x242570u);
    ctx->pc = 0x24256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242568u;
    // 0x24256c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x242568u, 0x242570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242570u;
label_242570:
    // 0x242570: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x242570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_242574:
    // 0x242574: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x242574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_242578:
    // 0x242578: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x242578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_24257c:
    // 0x24257c: 0x40f809  jalr        $v0
label_242580:
    if (ctx->pc == 0x242580u) {
        ctx->pc = 0x242584u;
        goto label_242584;
    }
    ctx->pc = 0x24257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242584u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24257Cu, 0x242584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242584u;
label_242584:
    // 0x242584: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242588:
    // 0x242588: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x242588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_24258c:
    // 0x24258c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x24258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_242590:
    // 0x242590: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_242594:
    if (ctx->pc == 0x242594u) {
        ctx->pc = 0x242594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242590u;
        // 0x242594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242598u;
        goto label_242598;
    }
    ctx->pc = 0x242590u;
    {
        const bool branch_taken_0x242590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x242594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242590u;
        // 0x242594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242590) {
            ctx->pc = 0x2425B4u;
            goto label_2425b4;
        }
    }
    ctx->pc = 0x242598u;
label_242598:
    // 0x242598: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x242598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_24259c:
    // 0x24259c: 0x24020796  addiu       $v0, $zero, 0x796
    ctx->pc = 0x24259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1942));
label_2425a0:
    // 0x2425a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2425a4:
    if (ctx->pc == 0x2425A4u) {
        ctx->pc = 0x2425A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425A0u;
        // 0x2425a4: 0x24020799  addiu       $v0, $zero, 0x799 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1945));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2425A8u;
        goto label_2425a8;
    }
    ctx->pc = 0x2425A0u;
    {
        const bool branch_taken_0x2425a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2425A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425A0u;
        // 0x2425a4: 0x24020799  addiu       $v0, $zero, 0x799 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1945));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425a0) {
            ctx->pc = 0x2425B0u;
            goto label_2425b0;
        }
    }
    ctx->pc = 0x2425A8u;
label_2425a8:
    // 0x2425a8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2425ac:
    if (ctx->pc == 0x2425ACu) {
        ctx->pc = 0x2425B0u;
        goto label_2425b0;
    }
    ctx->pc = 0x2425A8u;
    {
        const bool branch_taken_0x2425a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2425a8) {
            ctx->pc = 0x2425B4u;
            goto label_2425b4;
        }
    }
    ctx->pc = 0x2425B0u;
label_2425b0:
    // 0x2425b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2425b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2425b4:
    // 0x2425b4: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
label_2425b8:
    if (ctx->pc == 0x2425B8u) {
        ctx->pc = 0x2425B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425B4u;
        // 0x2425b8: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2425BCu;
        goto label_2425bc;
    }
    ctx->pc = 0x2425B4u;
    {
        const bool branch_taken_0x2425b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2425b4) {
            ctx->pc = 0x2425B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2425B4u;
            // 0x2425b8: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2425E4u;
            goto label_2425e4;
        }
    }
    ctx->pc = 0x2425BCu;
label_2425bc:
    // 0x2425bc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2425c0:
    // 0x2425c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2425c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2425c4:
    // 0x2425c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2425c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2425c8:
    // 0x2425c8: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x2425c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_2425cc:
    // 0x2425cc: 0x40f809  jalr        $v0
label_2425d0:
    if (ctx->pc == 0x2425D0u) {
        ctx->pc = 0x2425D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425CCu;
        // 0x2425d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2425D4u;
        goto label_2425d4;
    }
    ctx->pc = 0x2425CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2425D4u);
        ctx->pc = 0x2425D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425CCu;
        // 0x2425d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2425CCu, 0x2425D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2425D4u;
label_2425d4:
    // 0x2425d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2425d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2425d8:
    // 0x2425d8: 0xc08cc66  jal         func_233198
label_2425dc:
    if (ctx->pc == 0x2425DCu) {
        ctx->pc = 0x2425DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425D8u;
        // 0x2425dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2425E0u;
        goto label_2425e0;
    }
    ctx->pc = 0x2425D8u;
    SET_GPR_U32(ctx, 31, 0x2425E0u);
    ctx->pc = 0x2425DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425D8u;
    // 0x2425dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233198u, 0x2425D8u, 0x2425E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2425E0u;
label_2425e0:
    // 0x2425e0: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2425e4:
    // 0x2425e4: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_2425e8:
    // 0x2425e8: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_2425ec:
    // 0x2425ec: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2425ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2425f0:
    // 0x2425f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2425f4:
    if (ctx->pc == 0x2425F4u) {
        ctx->pc = 0x2425F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425F0u;
        // 0x2425f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2425F8u;
        goto label_2425f8;
    }
    ctx->pc = 0x2425F0u;
    {
        const bool branch_taken_0x2425f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425F0u;
        // 0x2425f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425f0) {
            ctx->pc = 0x242614u;
            goto label_242614;
        }
    }
    ctx->pc = 0x2425F8u;
label_2425f8:
    // 0x2425f8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2425f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2425fc:
    // 0x2425fc: 0xc08fed2  jal         func_23FB48
label_242600:
    if (ctx->pc == 0x242600u) {
        ctx->pc = 0x242600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2425FCu;
        // 0x242600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242604u;
        goto label_242604;
    }
    ctx->pc = 0x2425FCu;
    SET_GPR_U32(ctx, 31, 0x242604u);
    ctx->pc = 0x242600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2425FCu;
    // 0x242600: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2425FCu, 0x242604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242604u;
label_242604:
    // 0x242604: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x242604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_242608:
    // 0x242608: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x242608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
label_24260c:
    // 0x24260c: 0x10000004  b           . + 4 + (0x4 << 2)
label_242610:
    if (ctx->pc == 0x242610u) {
        ctx->pc = 0x242610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24260Cu;
        // 0x242610: 0xae020420  sw          $v0, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242614u;
        goto label_242614;
    }
    ctx->pc = 0x24260Cu;
    {
        const bool branch_taken_0x24260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24260Cu;
        // 0x242610: 0xae020420  sw          $v0, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24260c) {
            ctx->pc = 0x242620u;
            goto label_242620;
        }
    }
    ctx->pc = 0x242614u;
label_242614:
    // 0x242614: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x242614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_242618:
    // 0x242618: 0xc08fed2  jal         func_23FB48
label_24261c:
    if (ctx->pc == 0x24261Cu) {
        ctx->pc = 0x24261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242618u;
        // 0x24261c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242620u;
        goto label_242620;
    }
    ctx->pc = 0x242618u;
    SET_GPR_U32(ctx, 31, 0x242620u);
    ctx->pc = 0x24261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242618u;
    // 0x24261c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242618u, 0x242620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242620u;
label_242620:
    // 0x242620: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x242620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242624:
    // 0x242624: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x242624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_242628:
    // 0x242628: 0x3e00008  jr          $ra
label_24262c:
    if (ctx->pc == 0x24262Cu) {
        ctx->pc = 0x24262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242628u;
        // 0x24262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242630u;
        goto label_fallthrough_0x242628;
    }
    ctx->pc = 0x242628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242628u;
        // 0x24262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242628:
    ctx->pc = 0x242630u;
}
