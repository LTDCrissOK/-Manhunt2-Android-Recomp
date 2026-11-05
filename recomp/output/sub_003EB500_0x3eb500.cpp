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

// Function: sub_003EB500
// Address: 0x3eb500 - 0x3eb638
void sub_003EB500_0x3eb500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB500_0x3eb500");
#endif

    switch (ctx->pc) {
        case 0x3eb500u: goto label_3eb500;
        case 0x3eb504u: goto label_3eb504;
        case 0x3eb508u: goto label_3eb508;
        case 0x3eb50cu: goto label_3eb50c;
        case 0x3eb510u: goto label_3eb510;
        case 0x3eb514u: goto label_3eb514;
        case 0x3eb518u: goto label_3eb518;
        case 0x3eb51cu: goto label_3eb51c;
        case 0x3eb520u: goto label_3eb520;
        case 0x3eb524u: goto label_3eb524;
        case 0x3eb528u: goto label_3eb528;
        case 0x3eb52cu: goto label_3eb52c;
        case 0x3eb530u: goto label_3eb530;
        case 0x3eb534u: goto label_3eb534;
        case 0x3eb538u: goto label_3eb538;
        case 0x3eb53cu: goto label_3eb53c;
        case 0x3eb540u: goto label_3eb540;
        case 0x3eb544u: goto label_3eb544;
        case 0x3eb548u: goto label_3eb548;
        case 0x3eb54cu: goto label_3eb54c;
        case 0x3eb550u: goto label_3eb550;
        case 0x3eb554u: goto label_3eb554;
        case 0x3eb558u: goto label_3eb558;
        case 0x3eb55cu: goto label_3eb55c;
        case 0x3eb560u: goto label_3eb560;
        case 0x3eb564u: goto label_3eb564;
        case 0x3eb568u: goto label_3eb568;
        case 0x3eb56cu: goto label_3eb56c;
        case 0x3eb570u: goto label_3eb570;
        case 0x3eb574u: goto label_3eb574;
        case 0x3eb578u: goto label_3eb578;
        case 0x3eb57cu: goto label_3eb57c;
        case 0x3eb580u: goto label_3eb580;
        case 0x3eb584u: goto label_3eb584;
        case 0x3eb588u: goto label_3eb588;
        case 0x3eb58cu: goto label_3eb58c;
        case 0x3eb590u: goto label_3eb590;
        case 0x3eb594u: goto label_3eb594;
        case 0x3eb598u: goto label_3eb598;
        case 0x3eb59cu: goto label_3eb59c;
        case 0x3eb5a0u: goto label_3eb5a0;
        case 0x3eb5a4u: goto label_3eb5a4;
        case 0x3eb5a8u: goto label_3eb5a8;
        case 0x3eb5acu: goto label_3eb5ac;
        case 0x3eb5b0u: goto label_3eb5b0;
        case 0x3eb5b4u: goto label_3eb5b4;
        case 0x3eb5b8u: goto label_3eb5b8;
        case 0x3eb5bcu: goto label_3eb5bc;
        case 0x3eb5c0u: goto label_3eb5c0;
        case 0x3eb5c4u: goto label_3eb5c4;
        case 0x3eb5c8u: goto label_3eb5c8;
        case 0x3eb5ccu: goto label_3eb5cc;
        case 0x3eb5d0u: goto label_3eb5d0;
        case 0x3eb5d4u: goto label_3eb5d4;
        case 0x3eb5d8u: goto label_3eb5d8;
        case 0x3eb5dcu: goto label_3eb5dc;
        case 0x3eb5e0u: goto label_3eb5e0;
        case 0x3eb5e4u: goto label_3eb5e4;
        case 0x3eb5e8u: goto label_3eb5e8;
        case 0x3eb5ecu: goto label_3eb5ec;
        case 0x3eb5f0u: goto label_3eb5f0;
        case 0x3eb5f4u: goto label_3eb5f4;
        case 0x3eb5f8u: goto label_3eb5f8;
        case 0x3eb5fcu: goto label_3eb5fc;
        case 0x3eb600u: goto label_3eb600;
        case 0x3eb604u: goto label_3eb604;
        case 0x3eb608u: goto label_3eb608;
        case 0x3eb60cu: goto label_3eb60c;
        case 0x3eb610u: goto label_3eb610;
        case 0x3eb614u: goto label_3eb614;
        case 0x3eb618u: goto label_3eb618;
        case 0x3eb61cu: goto label_3eb61c;
        case 0x3eb620u: goto label_3eb620;
        case 0x3eb624u: goto label_3eb624;
        case 0x3eb628u: goto label_3eb628;
        case 0x3eb62cu: goto label_3eb62c;
        case 0x3eb630u: goto label_3eb630;
        case 0x3eb634u: goto label_3eb634;
        default: break;
    }

    ctx->pc = 0x3eb500u;

label_3eb500:
    // 0x3eb500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb504:
    // 0x3eb504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb508:
    // 0x3eb508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb50c:
    // 0x3eb50c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb510:
    // 0x3eb510: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb514:
    // 0x3eb514: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb518:
    // 0x3eb518: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb51c:
    // 0x3eb51c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb520:
    if (ctx->pc == 0x3EB520u) {
        ctx->pc = 0x3EB520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB51Cu;
        // 0x3eb520: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB524u;
        goto label_3eb524;
    }
    ctx->pc = 0x3EB51Cu;
    {
        const bool branch_taken_0x3eb51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB51Cu;
        // 0x3eb520: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb51c) {
            ctx->pc = 0x3EB59Cu;
            goto label_3eb59c;
        }
    }
    ctx->pc = 0x3EB524u;
label_3eb524:
    // 0x3eb524: 0x0  nop
    ctx->pc = 0x3eb524u;
    // NOP
label_3eb528:
    // 0x3eb528: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb52c:
    // 0x3eb52c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb530:
    // 0x3eb530: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb534:
    if (ctx->pc == 0x3EB534u) {
        ctx->pc = 0x3EB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB530u;
        // 0x3eb534: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB538u;
        goto label_3eb538;
    }
    ctx->pc = 0x3EB530u;
    {
        const bool branch_taken_0x3eb530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb530) {
            ctx->pc = 0x3EB534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB530u;
            // 0x3eb534: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB58Cu;
            goto label_3eb58c;
        }
    }
    ctx->pc = 0x3EB538u;
label_3eb538:
    // 0x3eb538: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb53c:
    // 0x3eb53c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb540:
    // 0x3eb540: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb544:
    // 0x3eb544: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb548:
    if (ctx->pc == 0x3EB548u) {
        ctx->pc = 0x3EB548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB544u;
        // 0x3eb548: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB54Cu;
        goto label_3eb54c;
    }
    ctx->pc = 0x3EB544u;
    {
        const bool branch_taken_0x3eb544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb544) {
            ctx->pc = 0x3EB548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB544u;
            // 0x3eb548: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB578u;
            goto label_3eb578;
        }
    }
    ctx->pc = 0x3EB54Cu;
label_3eb54c:
    // 0x3eb54c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb550:
    // 0x3eb550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb554:
    // 0x3eb554: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb558:
    // 0x3eb558: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb55c:
    // 0x3eb55c: 0x40f809  jalr        $v0
label_3eb560:
    if (ctx->pc == 0x3EB560u) {
        ctx->pc = 0x3EB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB55Cu;
        // 0x3eb560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB564u;
        goto label_3eb564;
    }
    ctx->pc = 0x3EB55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB564u);
        ctx->pc = 0x3EB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB55Cu;
        // 0x3eb560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB55Cu, 0x3EB564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB564u;
label_3eb564:
    // 0x3eb564: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb568:
    // 0x3eb568: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb56c:
    // 0x3eb56c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb570:
    if (ctx->pc == 0x3EB570u) {
        ctx->pc = 0x3EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB56Cu;
        // 0x3eb570: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB574u;
        goto label_3eb574;
    }
    ctx->pc = 0x3EB56Cu;
    {
        const bool branch_taken_0x3eb56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB56Cu;
        // 0x3eb570: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb56c) {
            ctx->pc = 0x3EB550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb550;
        }
    }
    ctx->pc = 0x3EB574u;
label_3eb574:
    // 0x3eb574: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb578:
    // 0x3eb578: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb57c:
    // 0x3eb57c: 0xc0f528a  jal         func_3D4A28
label_3eb580:
    if (ctx->pc == 0x3EB580u) {
        ctx->pc = 0x3EB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB57Cu;
        // 0x3eb580: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB584u;
        goto label_3eb584;
    }
    ctx->pc = 0x3EB57Cu;
    SET_GPR_U32(ctx, 31, 0x3EB584u);
    ctx->pc = 0x3EB580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB57Cu;
    // 0x3eb580: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB57Cu, 0x3EB584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB584u;
label_3eb584:
    // 0x3eb584: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb588:
    // 0x3eb588: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb58c:
    // 0x3eb58c: 0xc0f5222  jal         func_3D4888
label_3eb590:
    if (ctx->pc == 0x3EB590u) {
        ctx->pc = 0x3EB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB58Cu;
        // 0x3eb590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB594u;
        goto label_3eb594;
    }
    ctx->pc = 0x3EB58Cu;
    SET_GPR_U32(ctx, 31, 0x3EB594u);
    ctx->pc = 0x3EB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB58Cu;
    // 0x3eb590: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB58Cu, 0x3EB594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB594u;
label_3eb594:
    // 0x3eb594: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb598:
    if (ctx->pc == 0x3EB598u) {
        ctx->pc = 0x3EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB594u;
        // 0x3eb598: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB59Cu;
        goto label_3eb59c;
    }
    ctx->pc = 0x3EB594u;
    {
        const bool branch_taken_0x3eb594 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB594u;
        // 0x3eb598: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb594) {
            ctx->pc = 0x3EB528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb528;
        }
    }
    ctx->pc = 0x3EB59Cu;
label_3eb59c:
    // 0x3eb59c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb5a0:
    // 0x3eb5a0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb5a4:
    if (ctx->pc == 0x3EB5A4u) {
        ctx->pc = 0x3EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5A0u;
        // 0x3eb5a4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5A8u;
        goto label_3eb5a8;
    }
    ctx->pc = 0x3EB5A0u;
    {
        const bool branch_taken_0x3eb5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5A0u;
        // 0x3eb5a4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5a0) {
            ctx->pc = 0x3EB61Cu;
            goto label_3eb61c;
        }
    }
    ctx->pc = 0x3EB5A8u;
label_3eb5a8:
    // 0x3eb5a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb5ac:
    // 0x3eb5ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb5b0:
    // 0x3eb5b0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb5b4:
    if (ctx->pc == 0x3EB5B4u) {
        ctx->pc = 0x3EB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5B0u;
        // 0x3eb5b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5B8u;
        goto label_3eb5b8;
    }
    ctx->pc = 0x3EB5B0u;
    {
        const bool branch_taken_0x3eb5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb5b0) {
            ctx->pc = 0x3EB5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB5B0u;
            // 0x3eb5b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB60Cu;
            goto label_3eb60c;
        }
    }
    ctx->pc = 0x3EB5B8u;
label_3eb5b8:
    // 0x3eb5b8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb5bc:
    // 0x3eb5bc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb5c0:
    // 0x3eb5c0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb5c4:
    // 0x3eb5c4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb5c8:
    if (ctx->pc == 0x3EB5C8u) {
        ctx->pc = 0x3EB5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5C4u;
        // 0x3eb5c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5CCu;
        goto label_3eb5cc;
    }
    ctx->pc = 0x3EB5C4u;
    {
        const bool branch_taken_0x3eb5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb5c4) {
            ctx->pc = 0x3EB5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB5C4u;
            // 0x3eb5c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB5F8u;
            goto label_3eb5f8;
        }
    }
    ctx->pc = 0x3EB5CCu;
label_3eb5cc:
    // 0x3eb5cc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb5d0:
    // 0x3eb5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb5d4:
    // 0x3eb5d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb5d8:
    // 0x3eb5d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb5dc:
    // 0x3eb5dc: 0x40f809  jalr        $v0
label_3eb5e0:
    if (ctx->pc == 0x3EB5E0u) {
        ctx->pc = 0x3EB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5DCu;
        // 0x3eb5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5E4u;
        goto label_3eb5e4;
    }
    ctx->pc = 0x3EB5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB5E4u);
        ctx->pc = 0x3EB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5DCu;
        // 0x3eb5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB5DCu, 0x3EB5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB5E4u;
label_3eb5e4:
    // 0x3eb5e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb5e8:
    // 0x3eb5e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb5ec:
    // 0x3eb5ec: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb5f0:
    if (ctx->pc == 0x3EB5F0u) {
        ctx->pc = 0x3EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5ECu;
        // 0x3eb5f0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB5F4u;
        goto label_3eb5f4;
    }
    ctx->pc = 0x3EB5ECu;
    {
        const bool branch_taken_0x3eb5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5ECu;
        // 0x3eb5f0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb5ec) {
            ctx->pc = 0x3EB5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb5d0;
        }
    }
    ctx->pc = 0x3EB5F4u;
label_3eb5f4:
    // 0x3eb5f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb5f8:
    // 0x3eb5f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb5fc:
    // 0x3eb5fc: 0xc0f528a  jal         func_3D4A28
label_3eb600:
    if (ctx->pc == 0x3EB600u) {
        ctx->pc = 0x3EB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB5FCu;
        // 0x3eb600: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB604u;
        goto label_3eb604;
    }
    ctx->pc = 0x3EB5FCu;
    SET_GPR_U32(ctx, 31, 0x3EB604u);
    ctx->pc = 0x3EB600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB5FCu;
    // 0x3eb600: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB5FCu, 0x3EB604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB604u;
label_3eb604:
    // 0x3eb604: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb608:
    // 0x3eb608: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb60c:
    // 0x3eb60c: 0xc0f5222  jal         func_3D4888
label_3eb610:
    if (ctx->pc == 0x3EB610u) {
        ctx->pc = 0x3EB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB60Cu;
        // 0x3eb610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB614u;
        goto label_3eb614;
    }
    ctx->pc = 0x3EB60Cu;
    SET_GPR_U32(ctx, 31, 0x3EB614u);
    ctx->pc = 0x3EB610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB60Cu;
    // 0x3eb610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB60Cu, 0x3EB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB614u;
label_3eb614:
    // 0x3eb614: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb618:
    if (ctx->pc == 0x3EB618u) {
        ctx->pc = 0x3EB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB614u;
        // 0x3eb618: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB61Cu;
        goto label_3eb61c;
    }
    ctx->pc = 0x3EB614u;
    {
        const bool branch_taken_0x3eb614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB614u;
        // 0x3eb618: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb614) {
            ctx->pc = 0x3EB5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb5a8;
        }
    }
    ctx->pc = 0x3EB61Cu;
label_3eb61c:
    // 0x3eb61c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb620:
    // 0x3eb620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb624:
    // 0x3eb624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb628:
    // 0x3eb628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb62c:
    // 0x3eb62c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb630:
    // 0x3eb630: 0x3e00008  jr          $ra
label_3eb634:
    if (ctx->pc == 0x3EB634u) {
        ctx->pc = 0x3EB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB630u;
        // 0x3eb634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB638u;
        goto label_fallthrough_0x3eb630;
    }
    ctx->pc = 0x3EB630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB630u;
        // 0x3eb634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb630:
    ctx->pc = 0x3EB638u;
}
