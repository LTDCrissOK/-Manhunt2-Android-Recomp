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

// Function: sub_003EA540
// Address: 0x3ea540 - 0x3ea678
void sub_003EA540_0x3ea540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA540_0x3ea540");
#endif

    switch (ctx->pc) {
        case 0x3ea540u: goto label_3ea540;
        case 0x3ea544u: goto label_3ea544;
        case 0x3ea548u: goto label_3ea548;
        case 0x3ea54cu: goto label_3ea54c;
        case 0x3ea550u: goto label_3ea550;
        case 0x3ea554u: goto label_3ea554;
        case 0x3ea558u: goto label_3ea558;
        case 0x3ea55cu: goto label_3ea55c;
        case 0x3ea560u: goto label_3ea560;
        case 0x3ea564u: goto label_3ea564;
        case 0x3ea568u: goto label_3ea568;
        case 0x3ea56cu: goto label_3ea56c;
        case 0x3ea570u: goto label_3ea570;
        case 0x3ea574u: goto label_3ea574;
        case 0x3ea578u: goto label_3ea578;
        case 0x3ea57cu: goto label_3ea57c;
        case 0x3ea580u: goto label_3ea580;
        case 0x3ea584u: goto label_3ea584;
        case 0x3ea588u: goto label_3ea588;
        case 0x3ea58cu: goto label_3ea58c;
        case 0x3ea590u: goto label_3ea590;
        case 0x3ea594u: goto label_3ea594;
        case 0x3ea598u: goto label_3ea598;
        case 0x3ea59cu: goto label_3ea59c;
        case 0x3ea5a0u: goto label_3ea5a0;
        case 0x3ea5a4u: goto label_3ea5a4;
        case 0x3ea5a8u: goto label_3ea5a8;
        case 0x3ea5acu: goto label_3ea5ac;
        case 0x3ea5b0u: goto label_3ea5b0;
        case 0x3ea5b4u: goto label_3ea5b4;
        case 0x3ea5b8u: goto label_3ea5b8;
        case 0x3ea5bcu: goto label_3ea5bc;
        case 0x3ea5c0u: goto label_3ea5c0;
        case 0x3ea5c4u: goto label_3ea5c4;
        case 0x3ea5c8u: goto label_3ea5c8;
        case 0x3ea5ccu: goto label_3ea5cc;
        case 0x3ea5d0u: goto label_3ea5d0;
        case 0x3ea5d4u: goto label_3ea5d4;
        case 0x3ea5d8u: goto label_3ea5d8;
        case 0x3ea5dcu: goto label_3ea5dc;
        case 0x3ea5e0u: goto label_3ea5e0;
        case 0x3ea5e4u: goto label_3ea5e4;
        case 0x3ea5e8u: goto label_3ea5e8;
        case 0x3ea5ecu: goto label_3ea5ec;
        case 0x3ea5f0u: goto label_3ea5f0;
        case 0x3ea5f4u: goto label_3ea5f4;
        case 0x3ea5f8u: goto label_3ea5f8;
        case 0x3ea5fcu: goto label_3ea5fc;
        case 0x3ea600u: goto label_3ea600;
        case 0x3ea604u: goto label_3ea604;
        case 0x3ea608u: goto label_3ea608;
        case 0x3ea60cu: goto label_3ea60c;
        case 0x3ea610u: goto label_3ea610;
        case 0x3ea614u: goto label_3ea614;
        case 0x3ea618u: goto label_3ea618;
        case 0x3ea61cu: goto label_3ea61c;
        case 0x3ea620u: goto label_3ea620;
        case 0x3ea624u: goto label_3ea624;
        case 0x3ea628u: goto label_3ea628;
        case 0x3ea62cu: goto label_3ea62c;
        case 0x3ea630u: goto label_3ea630;
        case 0x3ea634u: goto label_3ea634;
        case 0x3ea638u: goto label_3ea638;
        case 0x3ea63cu: goto label_3ea63c;
        case 0x3ea640u: goto label_3ea640;
        case 0x3ea644u: goto label_3ea644;
        case 0x3ea648u: goto label_3ea648;
        case 0x3ea64cu: goto label_3ea64c;
        case 0x3ea650u: goto label_3ea650;
        case 0x3ea654u: goto label_3ea654;
        case 0x3ea658u: goto label_3ea658;
        case 0x3ea65cu: goto label_3ea65c;
        case 0x3ea660u: goto label_3ea660;
        case 0x3ea664u: goto label_3ea664;
        case 0x3ea668u: goto label_3ea668;
        case 0x3ea66cu: goto label_3ea66c;
        case 0x3ea670u: goto label_3ea670;
        case 0x3ea674u: goto label_3ea674;
        default: break;
    }

    ctx->pc = 0x3ea540u;

label_3ea540:
    // 0x3ea540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea544:
    // 0x3ea544: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea548:
    // 0x3ea548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea54c:
    // 0x3ea54c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea550:
    // 0x3ea550: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea554:
    // 0x3ea554: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea558:
    // 0x3ea558: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea55c:
    // 0x3ea55c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea560:
    if (ctx->pc == 0x3EA560u) {
        ctx->pc = 0x3EA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA55Cu;
        // 0x3ea560: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA564u;
        goto label_3ea564;
    }
    ctx->pc = 0x3EA55Cu;
    {
        const bool branch_taken_0x3ea55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA55Cu;
        // 0x3ea560: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea55c) {
            ctx->pc = 0x3EA5DCu;
            goto label_3ea5dc;
        }
    }
    ctx->pc = 0x3EA564u;
label_3ea564:
    // 0x3ea564: 0x0  nop
    ctx->pc = 0x3ea564u;
    // NOP
label_3ea568:
    // 0x3ea568: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea56c:
    // 0x3ea56c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea570:
    // 0x3ea570: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea574:
    if (ctx->pc == 0x3EA574u) {
        ctx->pc = 0x3EA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA570u;
        // 0x3ea574: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA578u;
        goto label_3ea578;
    }
    ctx->pc = 0x3EA570u;
    {
        const bool branch_taken_0x3ea570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea570) {
            ctx->pc = 0x3EA574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA570u;
            // 0x3ea574: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA5CCu;
            goto label_3ea5cc;
        }
    }
    ctx->pc = 0x3EA578u;
label_3ea578:
    // 0x3ea578: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea57c:
    // 0x3ea57c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea580:
    // 0x3ea580: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea584:
    // 0x3ea584: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea588:
    if (ctx->pc == 0x3EA588u) {
        ctx->pc = 0x3EA588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA584u;
        // 0x3ea588: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA58Cu;
        goto label_3ea58c;
    }
    ctx->pc = 0x3EA584u;
    {
        const bool branch_taken_0x3ea584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea584) {
            ctx->pc = 0x3EA588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA584u;
            // 0x3ea588: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA5B8u;
            goto label_3ea5b8;
        }
    }
    ctx->pc = 0x3EA58Cu;
label_3ea58c:
    // 0x3ea58c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea590:
    // 0x3ea590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea594:
    // 0x3ea594: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea598:
    // 0x3ea598: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea59c:
    // 0x3ea59c: 0x40f809  jalr        $v0
label_3ea5a0:
    if (ctx->pc == 0x3EA5A0u) {
        ctx->pc = 0x3EA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA59Cu;
        // 0x3ea5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5A4u;
        goto label_3ea5a4;
    }
    ctx->pc = 0x3EA59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA5A4u);
        ctx->pc = 0x3EA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA59Cu;
        // 0x3ea5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA59Cu, 0x3EA5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA5A4u;
label_3ea5a4:
    // 0x3ea5a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea5a8:
    // 0x3ea5a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea5ac:
    // 0x3ea5ac: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea5b0:
    if (ctx->pc == 0x3EA5B0u) {
        ctx->pc = 0x3EA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5ACu;
        // 0x3ea5b0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5B4u;
        goto label_3ea5b4;
    }
    ctx->pc = 0x3EA5ACu;
    {
        const bool branch_taken_0x3ea5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5ACu;
        // 0x3ea5b0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5ac) {
            ctx->pc = 0x3EA590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea590;
        }
    }
    ctx->pc = 0x3EA5B4u;
label_3ea5b4:
    // 0x3ea5b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea5b8:
    // 0x3ea5b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea5bc:
    // 0x3ea5bc: 0xc0f528a  jal         func_3D4A28
label_3ea5c0:
    if (ctx->pc == 0x3EA5C0u) {
        ctx->pc = 0x3EA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5BCu;
        // 0x3ea5c0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5C4u;
        goto label_3ea5c4;
    }
    ctx->pc = 0x3EA5BCu;
    SET_GPR_U32(ctx, 31, 0x3EA5C4u);
    ctx->pc = 0x3EA5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA5BCu;
    // 0x3ea5c0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA5BCu, 0x3EA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA5C4u;
label_3ea5c4:
    // 0x3ea5c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea5c8:
    // 0x3ea5c8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea5cc:
    // 0x3ea5cc: 0xc0f5222  jal         func_3D4888
label_3ea5d0:
    if (ctx->pc == 0x3EA5D0u) {
        ctx->pc = 0x3EA5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5CCu;
        // 0x3ea5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5D4u;
        goto label_3ea5d4;
    }
    ctx->pc = 0x3EA5CCu;
    SET_GPR_U32(ctx, 31, 0x3EA5D4u);
    ctx->pc = 0x3EA5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA5CCu;
    // 0x3ea5d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA5CCu, 0x3EA5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA5D4u;
label_3ea5d4:
    // 0x3ea5d4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea5d8:
    if (ctx->pc == 0x3EA5D8u) {
        ctx->pc = 0x3EA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5D4u;
        // 0x3ea5d8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5DCu;
        goto label_3ea5dc;
    }
    ctx->pc = 0x3EA5D4u;
    {
        const bool branch_taken_0x3ea5d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5D4u;
        // 0x3ea5d8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5d4) {
            ctx->pc = 0x3EA568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea568;
        }
    }
    ctx->pc = 0x3EA5DCu;
label_3ea5dc:
    // 0x3ea5dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea5e0:
    // 0x3ea5e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea5e4:
    if (ctx->pc == 0x3EA5E4u) {
        ctx->pc = 0x3EA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5E0u;
        // 0x3ea5e4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5E8u;
        goto label_3ea5e8;
    }
    ctx->pc = 0x3EA5E0u;
    {
        const bool branch_taken_0x3ea5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5E0u;
        // 0x3ea5e4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5e0) {
            ctx->pc = 0x3EA65Cu;
            goto label_3ea65c;
        }
    }
    ctx->pc = 0x3EA5E8u;
label_3ea5e8:
    // 0x3ea5e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea5ec:
    // 0x3ea5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea5f0:
    // 0x3ea5f0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea5f4:
    if (ctx->pc == 0x3EA5F4u) {
        ctx->pc = 0x3EA5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA5F0u;
        // 0x3ea5f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA5F8u;
        goto label_3ea5f8;
    }
    ctx->pc = 0x3EA5F0u;
    {
        const bool branch_taken_0x3ea5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea5f0) {
            ctx->pc = 0x3EA5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA5F0u;
            // 0x3ea5f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA64Cu;
            goto label_3ea64c;
        }
    }
    ctx->pc = 0x3EA5F8u;
label_3ea5f8:
    // 0x3ea5f8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea5fc:
    // 0x3ea5fc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea5fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea600:
    // 0x3ea600: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea604:
    // 0x3ea604: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea608:
    if (ctx->pc == 0x3EA608u) {
        ctx->pc = 0x3EA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA604u;
        // 0x3ea608: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA60Cu;
        goto label_3ea60c;
    }
    ctx->pc = 0x3EA604u;
    {
        const bool branch_taken_0x3ea604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea604) {
            ctx->pc = 0x3EA608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA604u;
            // 0x3ea608: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA638u;
            goto label_3ea638;
        }
    }
    ctx->pc = 0x3EA60Cu;
label_3ea60c:
    // 0x3ea60c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea610:
    // 0x3ea610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea614:
    // 0x3ea614: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea618:
    // 0x3ea618: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea61c:
    // 0x3ea61c: 0x40f809  jalr        $v0
label_3ea620:
    if (ctx->pc == 0x3EA620u) {
        ctx->pc = 0x3EA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA61Cu;
        // 0x3ea620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA624u;
        goto label_3ea624;
    }
    ctx->pc = 0x3EA61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA624u);
        ctx->pc = 0x3EA620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA61Cu;
        // 0x3ea620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA61Cu, 0x3EA624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA624u;
label_3ea624:
    // 0x3ea624: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea628:
    // 0x3ea628: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea62c:
    // 0x3ea62c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea630:
    if (ctx->pc == 0x3EA630u) {
        ctx->pc = 0x3EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA62Cu;
        // 0x3ea630: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA634u;
        goto label_3ea634;
    }
    ctx->pc = 0x3EA62Cu;
    {
        const bool branch_taken_0x3ea62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA62Cu;
        // 0x3ea630: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea62c) {
            ctx->pc = 0x3EA610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea610;
        }
    }
    ctx->pc = 0x3EA634u;
label_3ea634:
    // 0x3ea634: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea638:
    // 0x3ea638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea63c:
    // 0x3ea63c: 0xc0f528a  jal         func_3D4A28
label_3ea640:
    if (ctx->pc == 0x3EA640u) {
        ctx->pc = 0x3EA640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA63Cu;
        // 0x3ea640: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA644u;
        goto label_3ea644;
    }
    ctx->pc = 0x3EA63Cu;
    SET_GPR_U32(ctx, 31, 0x3EA644u);
    ctx->pc = 0x3EA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA63Cu;
    // 0x3ea640: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA63Cu, 0x3EA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA644u;
label_3ea644:
    // 0x3ea644: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea648:
    // 0x3ea648: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea64c:
    // 0x3ea64c: 0xc0f5222  jal         func_3D4888
label_3ea650:
    if (ctx->pc == 0x3EA650u) {
        ctx->pc = 0x3EA650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA64Cu;
        // 0x3ea650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA654u;
        goto label_3ea654;
    }
    ctx->pc = 0x3EA64Cu;
    SET_GPR_U32(ctx, 31, 0x3EA654u);
    ctx->pc = 0x3EA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA64Cu;
    // 0x3ea650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA64Cu, 0x3EA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA654u;
label_3ea654:
    // 0x3ea654: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea658:
    if (ctx->pc == 0x3EA658u) {
        ctx->pc = 0x3EA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA654u;
        // 0x3ea658: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA65Cu;
        goto label_3ea65c;
    }
    ctx->pc = 0x3EA654u;
    {
        const bool branch_taken_0x3ea654 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA654u;
        // 0x3ea658: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea654) {
            ctx->pc = 0x3EA5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea5e8;
        }
    }
    ctx->pc = 0x3EA65Cu;
label_3ea65c:
    // 0x3ea65c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea660:
    // 0x3ea660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea664:
    // 0x3ea664: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea668:
    // 0x3ea668: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea66c:
    // 0x3ea66c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea670:
    // 0x3ea670: 0x3e00008  jr          $ra
label_3ea674:
    if (ctx->pc == 0x3EA674u) {
        ctx->pc = 0x3EA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA670u;
        // 0x3ea674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA678u;
        goto label_fallthrough_0x3ea670;
    }
    ctx->pc = 0x3EA670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA670u;
        // 0x3ea674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea670:
    ctx->pc = 0x3EA678u;
}
