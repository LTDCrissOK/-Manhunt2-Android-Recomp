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

// Function: sub_00134550
// Address: 0x134550 - 0x134a58
void sub_00134550_0x134550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134550_0x134550");
#endif

    switch (ctx->pc) {
        case 0x134578u: goto label_134578;
        case 0x134584u: goto label_134584;
        case 0x13458cu: goto label_13458c;
        case 0x1345ecu: goto label_1345ec;
        case 0x134624u: goto label_134624;
        case 0x1348f8u: goto label_1348f8;
        case 0x134910u: goto label_134910;
        case 0x134928u: goto label_134928;
        case 0x134940u: goto label_134940;
        case 0x134958u: goto label_134958;
        case 0x134970u: goto label_134970;
        case 0x134988u: goto label_134988;
        case 0x1349a0u: goto label_1349a0;
        case 0x1349b8u: goto label_1349b8;
        case 0x1349d0u: goto label_1349d0;
        case 0x1349e8u: goto label_1349e8;
        case 0x1349f8u: goto label_1349f8;
        case 0x134a0cu: goto label_134a0c;
        default: break;
    }

    ctx->pc = 0x134550u;

    // 0x134550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x134558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13455c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13455cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134560: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x134560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134568: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x134568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13456c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13456cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x134570: 0xc046172  jal         func_1185C8
    ctx->pc = 0x134570u;
    SET_GPR_U32(ctx, 31, 0x134578u);
    ctx->pc = 0x134574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134570u;
    // 0x134574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1185C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185C8u, 0x134570u, 0x134578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134578u;
label_134578:
    // 0x134578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13457c: 0xc04d4e8  jal         func_1353A0
    ctx->pc = 0x13457Cu;
    SET_GPR_U32(ctx, 31, 0x134584u);
    ctx->pc = 0x134580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13457Cu;
    // 0x134580: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1353A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1353A0u, 0x13457Cu, 0x134584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134584u;
label_134584:
    // 0x134584: 0xc046188  jal         func_118620
    ctx->pc = 0x134584u;
    SET_GPR_U32(ctx, 31, 0x13458Cu);
    ctx->pc = 0x134588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134584u;
    // 0x134588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118620u, 0x134584u, 0x13458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13458Cu;
label_13458c:
    // 0x13458c: 0x10400126  beqz        $v0, . + 4 + (0x126 << 2)
    ctx->pc = 0x13458Cu;
    {
        const bool branch_taken_0x13458c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13458Cu;
        // 0x134590: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13458c) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134594u;
    // 0x134594: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x134594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134598: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x13459c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13459Cu;
    {
        const bool branch_taken_0x13459c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13459Cu;
        // 0x1345a0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13459c) {
            ctx->pc = 0x1345CCu;
            goto label_1345cc;
        }
    }
    ctx->pc = 0x1345A4u;
    // 0x1345a4: 0x2623ffd6  addiu       $v1, $s1, -0x2A
    ctx->pc = 0x1345a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967254));
    // 0x1345a8: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x1345a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x1345ac: 0x1040011d  beqz        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x1345ACu;
    {
        const bool branch_taken_0x1345ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345ACu;
        // 0x1345b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345ac) {
            ctx->pc = 0x134A24u;
            goto label_134a24;
        }
    }
    ctx->pc = 0x1345B4u;
    // 0x1345b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1345b8: 0x2442e160  addiu       $v0, $v0, -0x1EA0
    ctx->pc = 0x1345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
    // 0x1345bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1345bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1345c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1345c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1345c4: 0x800008  jr          $a0
    ctx->pc = 0x1345C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1345CCu: goto label_1345cc;
            case 0x134A24u: goto label_134a24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1345C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1345CCu;
label_1345cc:
    // 0x1345cc: 0x8ca2023c  lw          $v0, 0x23C($a1)
    ctx->pc = 0x1345ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 572)));
    // 0x1345d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1345D0u;
    {
        const bool branch_taken_0x1345d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345D0u;
        // 0x1345d4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345d0) {
            ctx->pc = 0x1345E0u;
            goto label_1345e0;
        }
    }
    ctx->pc = 0x1345D8u;
    // 0x1345d8: 0x16220113  bne         $s1, $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x1345D8u;
    {
        const bool branch_taken_0x1345d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1345DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345D8u;
        // 0x1345dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345d8) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x1345E0u;
label_1345e0:
    // 0x1345e0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1345e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1345e4: 0xc07f6e4  jal         func_1FDB90
    ctx->pc = 0x1345E4u;
    SET_GPR_U32(ctx, 31, 0x1345ECu);
    ctx->pc = 0x1345E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345E4u;
    // 0x1345e8: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDB90u, 0x1345E4u, 0x1345ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345ECu;
label_1345ec:
    // 0x1345ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1345ECu;
    {
        const bool branch_taken_0x1345ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345ECu;
        // 0x1345f0: 0x2623ffd6  addiu       $v1, $s1, -0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345ec) {
            ctx->pc = 0x134618u;
            goto label_134618;
        }
    }
    ctx->pc = 0x1345F4u;
    // 0x1345f4: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x1345f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x1345f8: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x1345F8u;
    {
        const bool branch_taken_0x1345f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345F8u;
        // 0x1345fc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345f8) {
            ctx->pc = 0x134A24u;
            goto label_134a24;
        }
    }
    ctx->pc = 0x134600u;
    // 0x134600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x134600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x134604: 0x2442e1d0  addiu       $v0, $v0, -0x1E30
    ctx->pc = 0x134604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959568));
    // 0x134608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x134608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13460c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13460cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134610: 0x800008  jr          $a0
    ctx->pc = 0x134610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134618u: goto label_134618;
            case 0x134A24u: goto label_134a24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x134618u;
label_134618:
    // 0x134618: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13461c: 0xc04d5d8  jal         func_135760
    ctx->pc = 0x13461Cu;
    SET_GPR_U32(ctx, 31, 0x134624u);
    ctx->pc = 0x134620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13461Cu;
    // 0x134620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135760u, 0x13461Cu, 0x134624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134624u;
label_134624:
    // 0x134624: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134628: 0x2e220045  sltiu       $v0, $s1, 0x45
    ctx->pc = 0x134628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
    // 0x13462c: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x13462Cu;
    {
        const bool branch_taken_0x13462c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13462Cu;
        // 0x134630: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13462c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134634u;
    // 0x134634: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x134634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x134638: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x134638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13463c: 0x2442e240  addiu       $v0, $v0, -0x1DC0
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959680));
    // 0x134640: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x134640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134644: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x134644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x134648: 0x800008  jr          $a0
    ctx->pc = 0x134648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134650u: goto label_134650;
            case 0x13465Cu: goto label_13465c;
            case 0x134668u: goto label_134668;
            case 0x134674u: goto label_134674;
            case 0x134680u: goto label_134680;
            case 0x13468Cu: goto label_13468c;
            case 0x134698u: goto label_134698;
            case 0x1346A4u: goto label_1346a4;
            case 0x1346B0u: goto label_1346b0;
            case 0x1346BCu: goto label_1346bc;
            case 0x1346C8u: goto label_1346c8;
            case 0x1346D4u: goto label_1346d4;
            case 0x1346E0u: goto label_1346e0;
            case 0x1346ECu: goto label_1346ec;
            case 0x1346F8u: goto label_1346f8;
            case 0x134704u: goto label_134704;
            case 0x134710u: goto label_134710;
            case 0x13471Cu: goto label_13471c;
            case 0x134728u: goto label_134728;
            case 0x134734u: goto label_134734;
            case 0x134740u: goto label_134740;
            case 0x13474Cu: goto label_13474c;
            case 0x134758u: goto label_134758;
            case 0x134764u: goto label_134764;
            case 0x134770u: goto label_134770;
            case 0x13477Cu: goto label_13477c;
            case 0x134788u: goto label_134788;
            case 0x134794u: goto label_134794;
            case 0x1347A0u: goto label_1347a0;
            case 0x1347ACu: goto label_1347ac;
            case 0x1347B8u: goto label_1347b8;
            case 0x1347C4u: goto label_1347c4;
            case 0x1347D0u: goto label_1347d0;
            case 0x1347DCu: goto label_1347dc;
            case 0x1347E4u: goto label_1347e4;
            case 0x1347ECu: goto label_1347ec;
            case 0x1347F4u: goto label_1347f4;
            case 0x1347FCu: goto label_1347fc;
            case 0x134804u: goto label_134804;
            case 0x13480Cu: goto label_13480c;
            case 0x134818u: goto label_134818;
            case 0x134824u: goto label_134824;
            case 0x134830u: goto label_134830;
            case 0x13483Cu: goto label_13483c;
            case 0x134848u: goto label_134848;
            case 0x134854u: goto label_134854;
            case 0x134860u: goto label_134860;
            case 0x13486Cu: goto label_13486c;
            case 0x134878u: goto label_134878;
            case 0x134884u: goto label_134884;
            case 0x134890u: goto label_134890;
            case 0x13489Cu: goto label_13489c;
            case 0x1348A8u: goto label_1348a8;
            case 0x1348B4u: goto label_1348b4;
            case 0x1348C0u: goto label_1348c0;
            case 0x1348CCu: goto label_1348cc;
            case 0x1348D8u: goto label_1348d8;
            case 0x1348E8u: goto label_1348e8;
            case 0x134900u: goto label_134900;
            case 0x134918u: goto label_134918;
            case 0x134930u: goto label_134930;
            case 0x134948u: goto label_134948;
            case 0x134960u: goto label_134960;
            case 0x134978u: goto label_134978;
            case 0x134990u: goto label_134990;
            case 0x1349A8u: goto label_1349a8;
            case 0x1349C0u: goto label_1349c0;
            case 0x1349D8u: goto label_1349d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134648u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x134650u;
label_134650:
    // 0x134650: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x134650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x134654: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x134654u;
    {
        const bool branch_taken_0x134654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134654u;
        // 0x134658: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134654) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13465Cu;
label_13465c:
    // 0x13465c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x13465cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x134660: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x134660u;
    {
        const bool branch_taken_0x134660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134660u;
        // 0x134664: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134660) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134668u;
label_134668:
    // 0x134668: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x134668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x13466c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x13466Cu;
    {
        const bool branch_taken_0x13466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13466Cu;
        // 0x134670: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13466c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134674u;
label_134674:
    // 0x134674: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x134674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x134678: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x134678u;
    {
        const bool branch_taken_0x134678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134678u;
        // 0x13467c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134678) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134680u;
label_134680:
    // 0x134680: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x134680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x134684: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x134684u;
    {
        const bool branch_taken_0x134684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134684u;
        // 0x134688: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134684) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13468Cu;
label_13468c:
    // 0x13468c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x13468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x134690: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x134690u;
    {
        const bool branch_taken_0x134690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134690u;
        // 0x134694: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134690) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134698u;
label_134698:
    // 0x134698: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x134698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x13469c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x13469Cu;
    {
        const bool branch_taken_0x13469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13469Cu;
        // 0x1346a0: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13469c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346A4u;
label_1346a4:
    // 0x1346a4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1346a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1346a8: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x1346A8u;
    {
        const bool branch_taken_0x1346a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346A8u;
        // 0x1346ac: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346a8) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346B0u;
label_1346b0:
    // 0x1346b0: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1346b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1346b4: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x1346B4u;
    {
        const bool branch_taken_0x1346b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346B4u;
        // 0x1346b8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346b4) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346BCu;
label_1346bc:
    // 0x1346bc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1346bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1346c0: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1346C0u;
    {
        const bool branch_taken_0x1346c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346C0u;
        // 0x1346c4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346c0) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346C8u;
label_1346c8:
    // 0x1346c8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1346c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1346cc: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1346CCu;
    {
        const bool branch_taken_0x1346cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346CCu;
        // 0x1346d0: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346cc) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346D4u;
label_1346d4:
    // 0x1346d4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1346d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1346d8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1346D8u;
    {
        const bool branch_taken_0x1346d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346D8u;
        // 0x1346dc: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346d8) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346E0u;
label_1346e0:
    // 0x1346e0: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1346e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1346e4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1346E4u;
    {
        const bool branch_taken_0x1346e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346E4u;
        // 0x1346e8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346e4) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346ECu;
label_1346ec:
    // 0x1346ec: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1346ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1346f0: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1346F0u;
    {
        const bool branch_taken_0x1346f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346F0u;
        // 0x1346f4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346f0) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1346F8u;
label_1346f8:
    // 0x1346f8: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1346fc: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1346FCu;
    {
        const bool branch_taken_0x1346fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346FCu;
        // 0x134700: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346fc) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134704u;
label_134704:
    // 0x134704: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x134704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x134708: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x134708u;
    {
        const bool branch_taken_0x134708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134708u;
        // 0x13470c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134708) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134710u;
label_134710:
    // 0x134710: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x134710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x134714: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x134714u;
    {
        const bool branch_taken_0x134714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134714u;
        // 0x134718: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134714) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13471Cu;
label_13471c:
    // 0x13471c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x13471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x134720: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x134720u;
    {
        const bool branch_taken_0x134720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134720u;
        // 0x134724: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134720) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134728u;
label_134728:
    // 0x134728: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x134728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x13472c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x13472Cu;
    {
        const bool branch_taken_0x13472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13472Cu;
        // 0x134730: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13472c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134734u;
label_134734:
    // 0x134734: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x134734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x134738: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x134738u;
    {
        const bool branch_taken_0x134738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134738u;
        // 0x13473c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134738) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134740u;
label_134740:
    // 0x134740: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x134740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x134744: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x134744u;
    {
        const bool branch_taken_0x134744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134744u;
        // 0x134748: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134744) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13474Cu;
label_13474c:
    // 0x13474c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x13474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x134750: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x134750u;
    {
        const bool branch_taken_0x134750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134750u;
        // 0x134754: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134750) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134758u;
label_134758:
    // 0x134758: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x134758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13475c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x13475Cu;
    {
        const bool branch_taken_0x13475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13475Cu;
        // 0x134760: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13475c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134764u;
label_134764:
    // 0x134764: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x134764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x134768: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x134768u;
    {
        const bool branch_taken_0x134768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134768u;
        // 0x13476c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134768) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134770u;
label_134770:
    // 0x134770: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x134774: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x134774u;
    {
        const bool branch_taken_0x134774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134774u;
        // 0x134778: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134774) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13477Cu;
label_13477c:
    // 0x13477c: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x13477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x134780: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x134780u;
    {
        const bool branch_taken_0x134780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134780u;
        // 0x134784: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134780) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134788u;
label_134788:
    // 0x134788: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x134788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x13478c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x13478Cu;
    {
        const bool branch_taken_0x13478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13478Cu;
        // 0x134790: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13478c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134794u;
label_134794:
    // 0x134794: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x134794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x134798: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x134798u;
    {
        const bool branch_taken_0x134798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134798u;
        // 0x13479c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134798) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1347A0u;
label_1347a0:
    // 0x1347a0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1347a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1347a4: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1347A4u;
    {
        const bool branch_taken_0x1347a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347A4u;
        // 0x1347a8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347a4) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1347ACu;
label_1347ac:
    // 0x1347ac: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1347acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1347b0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1347B0u;
    {
        const bool branch_taken_0x1347b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347B0u;
        // 0x1347b4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347b0) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1347B8u;
label_1347b8:
    // 0x1347b8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x1347b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1347bc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1347BCu;
    {
        const bool branch_taken_0x1347bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347BCu;
        // 0x1347c0: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347bc) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1347C4u;
label_1347c4:
    // 0x1347c4: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1347c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1347c8: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1347C8u;
    {
        const bool branch_taken_0x1347c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347C8u;
        // 0x1347cc: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347c8) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1347D0u;
label_1347d0:
    // 0x1347d0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1347d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1347d4: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1347D4u;
    {
        const bool branch_taken_0x1347d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347D4u;
        // 0x1347d8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347d4) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1347DCu;
label_1347dc:
    // 0x1347dc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1347DCu;
    {
        const bool branch_taken_0x1347dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347DCu;
        // 0x1347e0: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347dc) {
            ctx->pc = 0x1348DCu;
            goto label_1348dc;
        }
    }
    ctx->pc = 0x1347E4u;
label_1347e4:
    // 0x1347e4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1347E4u;
    {
        const bool branch_taken_0x1347e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347E4u;
        // 0x1347e8: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347e4) {
            ctx->pc = 0x1348DCu;
            goto label_1348dc;
        }
    }
    ctx->pc = 0x1347ECu;
label_1347ec:
    // 0x1347ec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1347ECu;
    {
        const bool branch_taken_0x1347ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347ECu;
        // 0x1347f0: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347ec) {
            ctx->pc = 0x1348DCu;
            goto label_1348dc;
        }
    }
    ctx->pc = 0x1347F4u;
label_1347f4:
    // 0x1347f4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1347F4u;
    {
        const bool branch_taken_0x1347f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1347F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347F4u;
        // 0x1347f8: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347f4) {
            ctx->pc = 0x1348DCu;
            goto label_1348dc;
        }
    }
    ctx->pc = 0x1347FCu;
label_1347fc:
    // 0x1347fc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1347FCu;
    {
        const bool branch_taken_0x1347fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1347FCu;
        // 0x134800: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1347fc) {
            ctx->pc = 0x1348DCu;
            goto label_1348dc;
        }
    }
    ctx->pc = 0x134804u;
label_134804:
    // 0x134804: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x134804u;
    {
        const bool branch_taken_0x134804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134804u;
        // 0x134808: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134804) {
            ctx->pc = 0x1348DCu;
            goto label_1348dc;
        }
    }
    ctx->pc = 0x13480Cu;
label_13480c:
    // 0x13480c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x13480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x134810: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x134810u;
    {
        const bool branch_taken_0x134810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134810u;
        // 0x134814: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134810) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134818u;
label_134818:
    // 0x134818: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x134818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x13481c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x13481Cu;
    {
        const bool branch_taken_0x13481c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13481Cu;
        // 0x134820: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13481c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134824u;
label_134824:
    // 0x134824: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x134824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x134828: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x134828u;
    {
        const bool branch_taken_0x134828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134828u;
        // 0x13482c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134828) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134830u;
label_134830:
    // 0x134830: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x134830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x134834: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x134834u;
    {
        const bool branch_taken_0x134834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134834u;
        // 0x134838: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134834) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13483Cu;
label_13483c:
    // 0x13483c: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x13483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x134840: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x134840u;
    {
        const bool branch_taken_0x134840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134840u;
        // 0x134844: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134840) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134848u;
label_134848:
    // 0x134848: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x134848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x13484c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x13484Cu;
    {
        const bool branch_taken_0x13484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13484Cu;
        // 0x134850: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13484c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134854u;
label_134854:
    // 0x134854: 0x24020056  addiu       $v0, $zero, 0x56
    ctx->pc = 0x134854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x134858: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x134858u;
    {
        const bool branch_taken_0x134858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134858u;
        // 0x13485c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134858) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134860u;
label_134860:
    // 0x134860: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x134860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x134864: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x134864u;
    {
        const bool branch_taken_0x134864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134864u;
        // 0x134868: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134864) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13486Cu;
label_13486c:
    // 0x13486c: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x13486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x134870: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x134870u;
    {
        const bool branch_taken_0x134870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134870u;
        // 0x134874: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134870) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134878u;
label_134878:
    // 0x134878: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x134878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x13487c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x13487Cu;
    {
        const bool branch_taken_0x13487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13487Cu;
        // 0x134880: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13487c) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134884u;
label_134884:
    // 0x134884: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x134884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x134888: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x134888u;
    {
        const bool branch_taken_0x134888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134888u;
        // 0x13488c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134888) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x134890u;
label_134890:
    // 0x134890: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x134890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x134894: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x134894u;
    {
        const bool branch_taken_0x134894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134894u;
        // 0x134898: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134894) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x13489Cu;
label_13489c:
    // 0x13489c: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x13489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1348a0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1348A0u;
    {
        const bool branch_taken_0x1348a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348A0u;
        // 0x1348a4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348a0) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1348A8u;
label_1348a8:
    // 0x1348a8: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x1348a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1348ac: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1348ACu;
    {
        const bool branch_taken_0x1348ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348ACu;
        // 0x1348b0: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348ac) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1348B4u;
label_1348b4:
    // 0x1348b4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x1348b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1348b8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1348B8u;
    {
        const bool branch_taken_0x1348b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348B8u;
        // 0x1348bc: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348b8) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1348C0u;
label_1348c0:
    // 0x1348c0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1348c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1348c4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1348C4u;
    {
        const bool branch_taken_0x1348c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348C4u;
        // 0x1348c8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348c4) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1348CCu;
label_1348cc:
    // 0x1348cc: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1348ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1348d0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1348D0u;
    {
        const bool branch_taken_0x1348d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348D0u;
        // 0x1348d4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348d0) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1348D8u;
label_1348d8:
    // 0x1348d8: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x1348d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1348dc:
    // 0x1348dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1348dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1348e0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1348E0u;
    {
        const bool branch_taken_0x1348e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348E0u;
        // 0x1348e4: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348e0) {
            ctx->pc = 0x134A0Cu;
            goto label_134a0c;
        }
    }
    ctx->pc = 0x1348E8u;
label_1348e8:
    // 0x1348e8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1348e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1348ec: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1348ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1348f0: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x1348F0u;
    SET_GPR_U32(ctx, 31, 0x1348F8u);
    ctx->pc = 0x1348F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1348F0u;
    // 0x1348f4: 0x24a5df50  addiu       $a1, $a1, -0x20B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x1348F0u, 0x1348F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1348F8u;
label_1348f8:
    // 0x1348f8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1348F8u;
    {
        const bool branch_taken_0x1348f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1348FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1348F8u;
        // 0x1348fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1348f8) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134900u;
label_134900:
    // 0x134900: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x134904: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x134904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134908: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134908u;
    SET_GPR_U32(ctx, 31, 0x134910u);
    ctx->pc = 0x13490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134908u;
    // 0x13490c: 0x24a5df80  addiu       $a1, $a1, -0x2080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134908u, 0x134910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134910u;
label_134910:
    // 0x134910: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x134910u;
    {
        const bool branch_taken_0x134910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134910u;
        // 0x134914: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134910) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134918u;
label_134918:
    // 0x134918: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x13491c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x13491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134920: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134920u;
    SET_GPR_U32(ctx, 31, 0x134928u);
    ctx->pc = 0x134924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134920u;
    // 0x134924: 0x24a5dfa8  addiu       $a1, $a1, -0x2058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134920u, 0x134928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134928u;
label_134928:
    // 0x134928: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x134928u;
    {
        const bool branch_taken_0x134928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134928u;
        // 0x13492c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134928) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134930u;
label_134930:
    // 0x134930: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x134934: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x134934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134938: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134938u;
    SET_GPR_U32(ctx, 31, 0x134940u);
    ctx->pc = 0x13493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134938u;
    // 0x13493c: 0x24a5dfd8  addiu       $a1, $a1, -0x2028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134938u, 0x134940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134940u;
label_134940:
    // 0x134940: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x134940u;
    {
        const bool branch_taken_0x134940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134940u;
        // 0x134944: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134940) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134948u;
label_134948:
    // 0x134948: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x13494c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x13494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134950: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134950u;
    SET_GPR_U32(ctx, 31, 0x134958u);
    ctx->pc = 0x134954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134950u;
    // 0x134954: 0x24a5e000  addiu       $a1, $a1, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134950u, 0x134958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134958u;
label_134958:
    // 0x134958: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x134958u;
    {
        const bool branch_taken_0x134958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134958u;
        // 0x13495c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134958) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134960u;
label_134960:
    // 0x134960: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x134964: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134968: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134968u;
    SET_GPR_U32(ctx, 31, 0x134970u);
    ctx->pc = 0x13496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134968u;
    // 0x13496c: 0x24a5e030  addiu       $a1, $a1, -0x1FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134968u, 0x134970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134970u;
label_134970:
    // 0x134970: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x134970u;
    {
        const bool branch_taken_0x134970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134970u;
        // 0x134974: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134970) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134978u;
label_134978:
    // 0x134978: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x13497c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134980: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134980u;
    SET_GPR_U32(ctx, 31, 0x134988u);
    ctx->pc = 0x134984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134980u;
    // 0x134984: 0x24a5e058  addiu       $a1, $a1, -0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134980u, 0x134988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134988u;
label_134988:
    // 0x134988: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x134988u;
    {
        const bool branch_taken_0x134988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134988u;
        // 0x13498c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134988) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x134990u;
label_134990:
    // 0x134990: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x134990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x134994: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x134994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x134998: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x134998u;
    SET_GPR_U32(ctx, 31, 0x1349A0u);
    ctx->pc = 0x13499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134998u;
    // 0x13499c: 0x24a5e080  addiu       $a1, $a1, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x134998u, 0x1349A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349A0u;
label_1349a0:
    // 0x1349a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1349A0u;
    {
        const bool branch_taken_0x1349a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A0u;
        // 0x1349a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a0) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x1349A8u;
label_1349a8:
    // 0x1349a8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1349a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1349ac: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1349acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1349b0: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x1349B0u;
    SET_GPR_U32(ctx, 31, 0x1349B8u);
    ctx->pc = 0x1349B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349B0u;
    // 0x1349b4: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x1349B0u, 0x1349B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349B8u;
label_1349b8:
    // 0x1349b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1349B8u;
    {
        const bool branch_taken_0x1349b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349B8u;
        // 0x1349bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349b8) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x1349C0u;
label_1349c0:
    // 0x1349c0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1349c4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1349c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1349c8: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x1349C8u;
    SET_GPR_U32(ctx, 31, 0x1349D0u);
    ctx->pc = 0x1349CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349C8u;
    // 0x1349cc: 0x24a5e0d8  addiu       $a1, $a1, -0x1F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x1349C8u, 0x1349D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349D0u;
label_1349d0:
    // 0x1349d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1349D0u;
    {
        const bool branch_taken_0x1349d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349D0u;
        // 0x1349d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349d0) {
            ctx->pc = 0x134A28u;
            goto label_134a28;
        }
    }
    ctx->pc = 0x1349D8u;
label_1349d8:
    // 0x1349d8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1349dc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1349dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1349e0: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x1349E0u;
    SET_GPR_U32(ctx, 31, 0x1349E8u);
    ctx->pc = 0x1349E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349E0u;
    // 0x1349e4: 0x24a5e108  addiu       $a1, $a1, -0x1EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x1349E0u, 0x1349E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349E8u;
label_1349e8:
    // 0x1349e8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x1349e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x1349ec: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1349ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1349f0: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x1349F0u;
    SET_GPR_U32(ctx, 31, 0x1349F8u);
    ctx->pc = 0x1349F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1349F0u;
    // 0x1349f4: 0x24a5e138  addiu       $a1, $a1, -0x1EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x1349F0u, 0x1349F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1349F8u;
label_1349f8:
    // 0x1349f8: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x1349f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1349fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1349fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a00: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x134a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x134a04: 0xc046164  jal         func_118590
    ctx->pc = 0x134A04u;
    SET_GPR_U32(ctx, 31, 0x134A0Cu);
    ctx->pc = 0x134A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A04u;
    // 0x134a08: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x134A04u, 0x134A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A0Cu;
label_134a0c:
    // 0x134a0c: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x134A0Cu;
    {
        const bool branch_taken_0x134a0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x134A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A0Cu;
        // 0x134a10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a0c) {
            ctx->pc = 0x134A34u;
            goto label_134a34;
        }
    }
    ctx->pc = 0x134A14u;
    // 0x134a14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x134a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134a18: 0x8c4301ec  lw          $v1, 0x1EC($v0)
    ctx->pc = 0x134a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x134a1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134A1Cu;
    {
        const bool branch_taken_0x134a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A1Cu;
        // 0x134a20: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a1c) {
            ctx->pc = 0x134A34u;
            goto label_134a34;
        }
    }
    ctx->pc = 0x134A24u;
label_134a24:
    // 0x134a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_134a28:
    // 0x134a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134a2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134A2Cu;
    {
        const bool branch_taken_0x134a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A2Cu;
        // 0x134a30: 0xae03002c  sw          $v1, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a2c) {
            ctx->pc = 0x134A3Cu;
            goto label_134a3c;
        }
    }
    ctx->pc = 0x134A34u;
label_134a34:
    // 0x134a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134a38: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x134a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_134a3c:
    // 0x134a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134a44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x134a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134a48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x134a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134a50: 0x3e00008  jr          $ra
    ctx->pc = 0x134A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A50u;
        // 0x134a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134A58u;
}
