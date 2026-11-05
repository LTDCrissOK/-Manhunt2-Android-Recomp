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

// Function: sub_00114530
// Address: 0x114530 - 0x11477c
void sub_00114530_0x114530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114530_0x114530");
#endif

    switch (ctx->pc) {
        case 0x114554u: goto label_114554;
        case 0x1145d4u: goto label_1145d4;
        case 0x1145f8u: goto label_1145f8;
        default: break;
    }

    ctx->pc = 0x114530u;

    // 0x114530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114538: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x114538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11453c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11453cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114540: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x114540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x114544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x114548: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x114548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11454c: 0xc04566a  jal         func_1159A8
    ctx->pc = 0x11454Cu;
    SET_GPR_U32(ctx, 31, 0x114554u);
    ctx->pc = 0x114550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11454Cu;
    // 0x114550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A8u, 0x11454Cu, 0x114554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114554u;
label_114554:
    // 0x114554: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x114554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114558: 0x2c62002a  sltiu       $v0, $v1, 0x2A
    ctx->pc = 0x114558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x11455c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11455Cu;
    {
        const bool branch_taken_0x11455c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11455Cu;
        // 0x114560: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11455c) {
            ctx->pc = 0x1145C4u;
            goto label_1145c4;
        }
    }
    ctx->pc = 0x114564u;
    // 0x114564: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x114564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x114568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11456c: 0x2442ac00  addiu       $v0, $v0, -0x5400
    ctx->pc = 0x11456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945792));
    // 0x114570: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114574: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114578: 0x800008  jr          $a0
    ctx->pc = 0x114578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114580u: goto label_114580;
            case 0x114588u: goto label_114588;
            case 0x114594u: goto label_114594;
            case 0x1145A0u: goto label_1145a0;
            case 0x1145ACu: goto label_1145ac;
            case 0x1145B8u: goto label_1145b8;
            case 0x114674u: goto label_114674;
            case 0x114680u: goto label_114680;
            case 0x11468Cu: goto label_11468c;
            case 0x114698u: goto label_114698;
            case 0x1146A4u: goto label_1146a4;
            case 0x1146BCu: goto label_1146bc;
            case 0x1146D4u: goto label_1146d4;
            case 0x1146FCu: goto label_1146fc;
            case 0x11470Cu: goto label_11470c;
            case 0x11472Cu: goto label_11472c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114578u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x114580u;
label_114580:
    // 0x114580: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x114580u;
    {
        const bool branch_taken_0x114580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114580u;
        // 0x114584: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114580) {
            ctx->pc = 0x1145C4u;
            goto label_1145c4;
        }
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x11458c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x11458Cu;
    {
        const bool branch_taken_0x11458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11458Cu;
        // 0x114590: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11458c) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x114594u;
label_114594:
    // 0x114594: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114598: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x114598u;
    {
        const bool branch_taken_0x114598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114598u;
        // 0x11459c: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114598) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1145A0u;
label_1145a0:
    // 0x1145a0: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1145a4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1145A4u;
    {
        const bool branch_taken_0x1145a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145A4u;
        // 0x1145a8: 0x30420080  andi        $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145a4) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1145ACu;
label_1145ac:
    // 0x1145ac: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1145acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1145b0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1145B0u;
    {
        const bool branch_taken_0x1145b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145B0u;
        // 0x1145b4: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145b0) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1145B8u;
label_1145b8:
    // 0x1145b8: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1145b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1145bc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1145BCu;
    {
        const bool branch_taken_0x1145bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145BCu;
        // 0x1145c0: 0x30420200  andi        $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145bc) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1145C4u;
label_1145c4:
    // 0x1145c4: 0x1220006e  beqz        $s1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1145C4u;
    {
        const bool branch_taken_0x1145c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145C4u;
        // 0x1145c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145c4) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1145CCu;
    // 0x1145cc: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x1145CCu;
    SET_GPR_U32(ctx, 31, 0x1145D4u);
    ctx->pc = 0x1145D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145CCu;
    // 0x1145d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x1145CCu, 0x1145D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145D4u;
label_1145d4:
    // 0x1145d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1145d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145d8: 0x12400068  beqz        $s2, . + 4 + (0x68 << 2)
    ctx->pc = 0x1145D8u;
    {
        const bool branch_taken_0x1145d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145D8u;
        // 0x1145dc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145d8) {
            ctx->pc = 0x11477Cu;
            return;
        }
    }
    ctx->pc = 0x1145E0u;
    // 0x1145e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1145e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1145e4: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1145E4u;
    {
        const bool branch_taken_0x1145e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E4u;
        // 0x1145e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e4) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1145ECu;
    // 0x1145ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1145ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145f0: 0xc046172  jal         func_1185C8
    ctx->pc = 0x1145F0u;
    SET_GPR_U32(ctx, 31, 0x1145F8u);
    ctx->pc = 0x1145F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1145F0u;
    // 0x1145f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1185C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185C8u, 0x1145F0u, 0x1145F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145F8u;
label_1145f8:
    // 0x1145f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1145f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145fc: 0x2c620046  sltiu       $v0, $v1, 0x46
    ctx->pc = 0x1145fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x114600: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x114600u;
    {
        const bool branch_taken_0x114600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114600u;
        // 0x114604: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114600) {
            ctx->pc = 0x11476Cu;
            goto label_11476c;
        }
    }
    ctx->pc = 0x114608u;
    // 0x114608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x114608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11460c: 0x2442acb0  addiu       $v0, $v0, -0x5350
    ctx->pc = 0x11460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945968));
    // 0x114610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114614: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x114614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114618: 0x800008  jr          $a0
    ctx->pc = 0x114618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114620u: goto label_114620;
            case 0x11462Cu: goto label_11462c;
            case 0x114638u: goto label_114638;
            case 0x114644u: goto label_114644;
            case 0x114650u: goto label_114650;
            case 0x114668u: goto label_114668;
            case 0x114674u: goto label_114674;
            case 0x114680u: goto label_114680;
            case 0x11468Cu: goto label_11468c;
            case 0x114698u: goto label_114698;
            case 0x1146A4u: goto label_1146a4;
            case 0x1146B0u: goto label_1146b0;
            case 0x1146BCu: goto label_1146bc;
            case 0x1146C8u: goto label_1146c8;
            case 0x1146D4u: goto label_1146d4;
            case 0x1146E0u: goto label_1146e0;
            case 0x1146F0u: goto label_1146f0;
            case 0x1146FCu: goto label_1146fc;
            case 0x11470Cu: goto label_11470c;
            case 0x11471Cu: goto label_11471c;
            case 0x11472Cu: goto label_11472c;
            case 0x11473Cu: goto label_11473c;
            case 0x11474Cu: goto label_11474c;
            case 0x11475Cu: goto label_11475c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114618u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x114620u;
label_114620:
    // 0x114620: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114624: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x114624u;
    {
        const bool branch_taken_0x114624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114624u;
        // 0x114628: 0x30420004  andi        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114624) {
            ctx->pc = 0x114658u;
            goto label_114658;
        }
    }
    ctx->pc = 0x11462Cu;
label_11462c:
    // 0x11462c: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x11462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114630: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x114630u;
    {
        const bool branch_taken_0x114630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114630u;
        // 0x114634: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114630) {
            ctx->pc = 0x114658u;
            goto label_114658;
        }
    }
    ctx->pc = 0x114638u;
label_114638:
    // 0x114638: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x11463c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11463Cu;
    {
        const bool branch_taken_0x11463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11463Cu;
        // 0x114640: 0x30420080  andi        $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11463c) {
            ctx->pc = 0x114658u;
            goto label_114658;
        }
    }
    ctx->pc = 0x114644u;
label_114644:
    // 0x114644: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x114648u;
    {
        const bool branch_taken_0x114648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114648u;
        // 0x11464c: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114648) {
            ctx->pc = 0x114658u;
            goto label_114658;
        }
    }
    ctx->pc = 0x114650u;
label_114650:
    // 0x114650: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114654: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x114654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_114658:
    // 0x114658: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x114658u;
    {
        const bool branch_taken_0x114658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114658u;
        // 0x11465c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114658) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x114660u;
    // 0x114660: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x114660u;
    {
        const bool branch_taken_0x114660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114660u;
        // 0x114664: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114660) {
            ctx->pc = 0x11476Cu;
            goto label_11476c;
        }
    }
    ctx->pc = 0x114668u;
label_114668:
    // 0x114668: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x11466c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x11466Cu;
    {
        const bool branch_taken_0x11466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11466Cu;
        // 0x114670: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11466c) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x114674u;
label_114674:
    // 0x114674: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114678: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x114678u;
    {
        const bool branch_taken_0x114678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114678u;
        // 0x11467c: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114678) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x114680u;
label_114680:
    // 0x114680: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114684: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x114684u;
    {
        const bool branch_taken_0x114684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114684u;
        // 0x114688: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114684) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11468Cu;
label_11468c:
    // 0x11468c: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x11468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114690: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x114690u;
    {
        const bool branch_taken_0x114690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114690u;
        // 0x114694: 0x30420040  andi        $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114690) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x114698u;
label_114698:
    // 0x114698: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x114698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x11469c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11469Cu;
    {
        const bool branch_taken_0x11469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11469Cu;
        // 0x1146a0: 0x30420400  andi        $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11469c) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146A4u;
label_1146a4:
    // 0x1146a4: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1146a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146a8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1146A8u;
    {
        const bool branch_taken_0x1146a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A8u;
        // 0x1146ac: 0x30421000  andi        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146a8) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146B0u;
label_1146b0:
    // 0x1146b0: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146b4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1146B4u;
    {
        const bool branch_taken_0x1146b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B4u;
        // 0x1146b8: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146b4) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146BCu;
label_1146bc:
    // 0x1146bc: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1146bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1146C0u;
    {
        const bool branch_taken_0x1146c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146C0u;
        // 0x1146c4: 0x30420800  andi        $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146c0) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146C8u;
label_1146c8:
    // 0x1146c8: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1146c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1146CCu;
    {
        const bool branch_taken_0x1146cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146CCu;
        // 0x1146d0: 0x30428000  andi        $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146cc) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146D4u;
label_1146d4:
    // 0x1146d4: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1146d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146d8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1146D8u;
    {
        const bool branch_taken_0x1146d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146D8u;
        // 0x1146dc: 0x30420020  andi        $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146d8) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146E0u;
label_1146e0:
    // 0x1146e0: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x1146e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146e4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1146e8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1146E8u;
    {
        const bool branch_taken_0x1146e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146E8u;
        // 0x1146ec: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146e8) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146F0u;
label_1146f0:
    // 0x1146f0: 0x8e0201f4  lw          $v0, 0x1F4($s0)
    ctx->pc = 0x1146f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x1146f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1146F4u;
    {
        const bool branch_taken_0x1146f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146F4u;
        // 0x1146f8: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146f4) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x1146FCu;
label_1146fc:
    // 0x1146fc: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114700: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x114700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x114704: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x114704u;
    {
        const bool branch_taken_0x114704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114704u;
        // 0x114708: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114704) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11470Cu;
label_11470c:
    // 0x11470c: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x11470cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114710: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x114710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x114714: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x114714u;
    {
        const bool branch_taken_0x114714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114714u;
        // 0x114718: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114714) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11471Cu;
label_11471c:
    // 0x11471c: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x11471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114720: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x114720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x114724: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114724u;
    {
        const bool branch_taken_0x114724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114724u;
        // 0x114728: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114724) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11472Cu;
label_11472c:
    // 0x11472c: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x11472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114730: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x114730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x114734: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x114734u;
    {
        const bool branch_taken_0x114734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114734u;
        // 0x114738: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114734) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11473Cu;
label_11473c:
    // 0x11473c: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x11473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114740: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x114740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x114744: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x114744u;
    {
        const bool branch_taken_0x114744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114744u;
        // 0x114748: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114744) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11474Cu;
label_11474c:
    // 0x11474c: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x11474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114750: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x114750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x114754: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x114754u;
    {
        const bool branch_taken_0x114754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114754u;
        // 0x114758: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114754) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11475Cu;
label_11475c:
    // 0x11475c: 0x8e0301f4  lw          $v1, 0x1F4($s0)
    ctx->pc = 0x11475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x114760: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x114760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x114764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114764u;
    {
        const bool branch_taken_0x114764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114764u;
        // 0x114768: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114764) {
            ctx->pc = 0x114780u;
            return;
        }
    }
    ctx->pc = 0x11476Cu;
label_11476c:
    // 0x11476c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11476Cu;
    {
        const bool branch_taken_0x11476c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x114770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11476Cu;
        // 0x114770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11476c) {
            ctx->pc = 0x11477Cu;
            return;
        }
    }
    ctx->pc = 0x114774u;
    // 0x114774: 0xc046164  jal         func_118590
    ctx->pc = 0x114774u;
    SET_GPR_U32(ctx, 31, 0x11477Cu);
    ctx->pc = 0x114778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114774u;
    // 0x114778: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x114774u, 0x11477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11477Cu;
}
