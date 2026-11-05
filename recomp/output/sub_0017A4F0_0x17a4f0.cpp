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

// Function: sub_0017A4F0
// Address: 0x17a4f0 - 0x17a678
void sub_0017A4F0_0x17a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A4F0_0x17a4f0");
#endif

    switch (ctx->pc) {
        case 0x17a4f0u: goto label_17a4f0;
        case 0x17a4f4u: goto label_17a4f4;
        case 0x17a4f8u: goto label_17a4f8;
        case 0x17a4fcu: goto label_17a4fc;
        case 0x17a500u: goto label_17a500;
        case 0x17a504u: goto label_17a504;
        case 0x17a508u: goto label_17a508;
        case 0x17a50cu: goto label_17a50c;
        case 0x17a510u: goto label_17a510;
        case 0x17a514u: goto label_17a514;
        case 0x17a518u: goto label_17a518;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a520u: goto label_17a520;
        case 0x17a524u: goto label_17a524;
        case 0x17a528u: goto label_17a528;
        case 0x17a52cu: goto label_17a52c;
        case 0x17a530u: goto label_17a530;
        case 0x17a534u: goto label_17a534;
        case 0x17a538u: goto label_17a538;
        case 0x17a53cu: goto label_17a53c;
        case 0x17a540u: goto label_17a540;
        case 0x17a544u: goto label_17a544;
        case 0x17a548u: goto label_17a548;
        case 0x17a54cu: goto label_17a54c;
        case 0x17a550u: goto label_17a550;
        case 0x17a554u: goto label_17a554;
        case 0x17a558u: goto label_17a558;
        case 0x17a55cu: goto label_17a55c;
        case 0x17a560u: goto label_17a560;
        case 0x17a564u: goto label_17a564;
        case 0x17a568u: goto label_17a568;
        case 0x17a56cu: goto label_17a56c;
        case 0x17a570u: goto label_17a570;
        case 0x17a574u: goto label_17a574;
        case 0x17a578u: goto label_17a578;
        case 0x17a57cu: goto label_17a57c;
        case 0x17a580u: goto label_17a580;
        case 0x17a584u: goto label_17a584;
        case 0x17a588u: goto label_17a588;
        case 0x17a58cu: goto label_17a58c;
        case 0x17a590u: goto label_17a590;
        case 0x17a594u: goto label_17a594;
        case 0x17a598u: goto label_17a598;
        case 0x17a59cu: goto label_17a59c;
        case 0x17a5a0u: goto label_17a5a0;
        case 0x17a5a4u: goto label_17a5a4;
        case 0x17a5a8u: goto label_17a5a8;
        case 0x17a5acu: goto label_17a5ac;
        case 0x17a5b0u: goto label_17a5b0;
        case 0x17a5b4u: goto label_17a5b4;
        case 0x17a5b8u: goto label_17a5b8;
        case 0x17a5bcu: goto label_17a5bc;
        case 0x17a5c0u: goto label_17a5c0;
        case 0x17a5c4u: goto label_17a5c4;
        case 0x17a5c8u: goto label_17a5c8;
        case 0x17a5ccu: goto label_17a5cc;
        case 0x17a5d0u: goto label_17a5d0;
        case 0x17a5d4u: goto label_17a5d4;
        case 0x17a5d8u: goto label_17a5d8;
        case 0x17a5dcu: goto label_17a5dc;
        case 0x17a5e0u: goto label_17a5e0;
        case 0x17a5e4u: goto label_17a5e4;
        case 0x17a5e8u: goto label_17a5e8;
        case 0x17a5ecu: goto label_17a5ec;
        case 0x17a5f0u: goto label_17a5f0;
        case 0x17a5f4u: goto label_17a5f4;
        case 0x17a5f8u: goto label_17a5f8;
        case 0x17a5fcu: goto label_17a5fc;
        case 0x17a600u: goto label_17a600;
        case 0x17a604u: goto label_17a604;
        case 0x17a608u: goto label_17a608;
        case 0x17a60cu: goto label_17a60c;
        case 0x17a610u: goto label_17a610;
        case 0x17a614u: goto label_17a614;
        case 0x17a618u: goto label_17a618;
        case 0x17a61cu: goto label_17a61c;
        case 0x17a620u: goto label_17a620;
        case 0x17a624u: goto label_17a624;
        case 0x17a628u: goto label_17a628;
        case 0x17a62cu: goto label_17a62c;
        case 0x17a630u: goto label_17a630;
        case 0x17a634u: goto label_17a634;
        case 0x17a638u: goto label_17a638;
        case 0x17a63cu: goto label_17a63c;
        case 0x17a640u: goto label_17a640;
        case 0x17a644u: goto label_17a644;
        case 0x17a648u: goto label_17a648;
        case 0x17a64cu: goto label_17a64c;
        case 0x17a650u: goto label_17a650;
        case 0x17a654u: goto label_17a654;
        case 0x17a658u: goto label_17a658;
        case 0x17a65cu: goto label_17a65c;
        case 0x17a660u: goto label_17a660;
        case 0x17a664u: goto label_17a664;
        case 0x17a668u: goto label_17a668;
        case 0x17a66cu: goto label_17a66c;
        case 0x17a670u: goto label_17a670;
        case 0x17a674u: goto label_17a674;
        default: break;
    }

    ctx->pc = 0x17a4f0u;

label_17a4f0:
    // 0x17a4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17a4f4:
    // 0x17a4f4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x17a4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_17a4f8:
    // 0x17a4f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17a4fc:
    // 0x17a4fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17a500:
    // 0x17a500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a504:
    // 0x17a504: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17a508:
    // 0x17a508: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17a508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a50c:
    // 0x17a50c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17a510:
    // 0x17a510: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_17a514:
    // 0x17a514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17a518:
    // 0x17a518: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x17a518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_17a51c:
    // 0x17a51c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_17a520:
    if (ctx->pc == 0x17A520u) {
        ctx->pc = 0x17A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A51Cu;
        // 0x17a520: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A524u;
        goto label_17a524;
    }
    ctx->pc = 0x17A51Cu;
    {
        const bool branch_taken_0x17a51c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A51Cu;
        // 0x17a520: 0x8e530004  lw          $s3, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a51c) {
            ctx->pc = 0x17A55Cu;
            goto label_17a55c;
        }
    }
    ctx->pc = 0x17A524u;
label_17a524:
    // 0x17a524: 0xc05e99e  jal         func_17A678
label_17a528:
    if (ctx->pc == 0x17A528u) {
        ctx->pc = 0x17A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A524u;
        // 0x17a528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A52Cu;
        goto label_17a52c;
    }
    ctx->pc = 0x17A524u;
    SET_GPR_U32(ctx, 31, 0x17A52Cu);
    ctx->pc = 0x17A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A524u;
    // 0x17a528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A678u, 0x17A524u, 0x17A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A52Cu;
label_17a52c:
    // 0x17a52c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_17a530:
    if (ctx->pc == 0x17A530u) {
        ctx->pc = 0x17A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A52Cu;
        // 0x17a530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A534u;
        goto label_17a534;
    }
    ctx->pc = 0x17A52Cu;
    {
        const bool branch_taken_0x17a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A52Cu;
        // 0x17a530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a52c) {
            ctx->pc = 0x17A54Cu;
            goto label_17a54c;
        }
    }
    ctx->pc = 0x17A534u;
label_17a534:
    // 0x17a534: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x17a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_17a538:
    // 0x17a538: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x17a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_17a53c:
    // 0x17a53c: 0x40f809  jalr        $v0
label_17a540:
    if (ctx->pc == 0x17A540u) {
        ctx->pc = 0x17A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A53Cu;
        // 0x17a540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A544u;
        goto label_17a544;
    }
    ctx->pc = 0x17A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A544u);
        ctx->pc = 0x17A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A53Cu;
        // 0x17a540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A53Cu, 0x17A544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A544u;
label_17a544:
    // 0x17a544: 0x10000044  b           . + 4 + (0x44 << 2)
label_17a548:
    if (ctx->pc == 0x17A548u) {
        ctx->pc = 0x17A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A544u;
        // 0x17a548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A54Cu;
        goto label_17a54c;
    }
    ctx->pc = 0x17A544u;
    {
        const bool branch_taken_0x17a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A544u;
        // 0x17a548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a544) {
            ctx->pc = 0x17A658u;
            goto label_17a658;
        }
    }
    ctx->pc = 0x17A54Cu;
label_17a54c:
    // 0x17a54c: 0xc04f750  jal         func_13DD40
label_17a550:
    if (ctx->pc == 0x17A550u) {
        ctx->pc = 0x17A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A54Cu;
        // 0x17a550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A554u;
        goto label_17a554;
    }
    ctx->pc = 0x17A54Cu;
    SET_GPR_U32(ctx, 31, 0x17A554u);
    ctx->pc = 0x17A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A54Cu;
    // 0x17a550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x17A54Cu, 0x17A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A554u;
label_17a554:
    // 0x17a554: 0x1000001d  b           . + 4 + (0x1D << 2)
label_17a558:
    if (ctx->pc == 0x17A558u) {
        ctx->pc = 0x17A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A554u;
        // 0x17a558: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A55Cu;
        goto label_17a55c;
    }
    ctx->pc = 0x17A554u;
    {
        const bool branch_taken_0x17a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A554u;
        // 0x17a558: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a554) {
            ctx->pc = 0x17A5CCu;
            goto label_17a5cc;
        }
    }
    ctx->pc = 0x17A55Cu;
label_17a55c:
    // 0x17a55c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a560:
    // 0x17a560: 0xc04f84a  jal         func_13E128
label_17a564:
    if (ctx->pc == 0x17A564u) {
        ctx->pc = 0x17A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A560u;
        // 0x17a564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A568u;
        goto label_17a568;
    }
    ctx->pc = 0x17A560u;
    SET_GPR_U32(ctx, 31, 0x17A568u);
    ctx->pc = 0x17A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A560u;
    // 0x17a564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E128u, 0x17A560u, 0x17A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A568u;
label_17a568:
    // 0x17a568: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17a568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a56c:
    // 0x17a56c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x17a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_17a570:
    // 0x17a570: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_17a574:
    if (ctx->pc == 0x17A574u) {
        ctx->pc = 0x17A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A570u;
        // 0x17a574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A578u;
        goto label_17a578;
    }
    ctx->pc = 0x17A570u;
    {
        const bool branch_taken_0x17a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A570u;
        // 0x17a574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a570) {
            ctx->pc = 0x17A594u;
            goto label_17a594;
        }
    }
    ctx->pc = 0x17A578u;
label_17a578:
    // 0x17a578: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x17a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17a57c:
    // 0x17a57c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x17a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17a580:
    // 0x17a580: 0x8c6202b0  lw          $v0, 0x2B0($v1)
    ctx->pc = 0x17a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
label_17a584:
    // 0x17a584: 0xc05a5fe  jal         func_1697F8
label_17a588:
    if (ctx->pc == 0x17A588u) {
        ctx->pc = 0x17A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A584u;
        // 0x17a588: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A58Cu;
        goto label_17a58c;
    }
    ctx->pc = 0x17A584u;
    SET_GPR_U32(ctx, 31, 0x17A58Cu);
    ctx->pc = 0x17A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A584u;
    // 0x17a588: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x17A584u, 0x17A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A58Cu;
label_17a58c:
    // 0x17a58c: 0x10000005  b           . + 4 + (0x5 << 2)
label_17a590:
    if (ctx->pc == 0x17A590u) {
        ctx->pc = 0x17A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A58Cu;
        // 0x17a590: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A594u;
        goto label_17a594;
    }
    ctx->pc = 0x17A58Cu;
    {
        const bool branch_taken_0x17a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A58Cu;
        // 0x17a590: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a58c) {
            ctx->pc = 0x17A5A4u;
            goto label_17a5a4;
        }
    }
    ctx->pc = 0x17A594u;
label_17a594:
    // 0x17a594: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_17a598:
    if (ctx->pc == 0x17A598u) {
        ctx->pc = 0x17A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A594u;
        // 0x17a598: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A59Cu;
        goto label_17a59c;
    }
    ctx->pc = 0x17A594u;
    {
        const bool branch_taken_0x17a594 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x17A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A594u;
        // 0x17a598: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a594) {
            ctx->pc = 0x17A5A4u;
            goto label_17a5a4;
        }
    }
    ctx->pc = 0x17A59Cu;
label_17a59c:
    // 0x17a59c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a5a0:
    // 0x17a5a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17a5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a5a4:
    // 0x17a5a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17a5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a5a8:
    // 0x17a5a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17a5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a5ac:
    // 0x17a5ac: 0xc05e9e4  jal         func_17A790
label_17a5b0:
    if (ctx->pc == 0x17A5B0u) {
        ctx->pc = 0x17A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5ACu;
        // 0x17a5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5B4u;
        goto label_17a5b4;
    }
    ctx->pc = 0x17A5ACu;
    SET_GPR_U32(ctx, 31, 0x17A5B4u);
    ctx->pc = 0x17A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5ACu;
    // 0x17a5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A790u, 0x17A5ACu, 0x17A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5B4u;
label_17a5b4:
    // 0x17a5b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a5b8:
    // 0x17a5b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17a5bc:
    // 0x17a5bc: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_17a5c0:
    if (ctx->pc == 0x17A5C0u) {
        ctx->pc = 0x17A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5BCu;
        // 0x17a5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5C4u;
        goto label_17a5c4;
    }
    ctx->pc = 0x17A5BCu;
    {
        const bool branch_taken_0x17a5bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a5bc) {
            ctx->pc = 0x17A5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A5BCu;
            // 0x17a5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A5D0u;
            goto label_17a5d0;
        }
    }
    ctx->pc = 0x17A5C4u;
label_17a5c4:
    // 0x17a5c4: 0x10000024  b           . + 4 + (0x24 << 2)
label_17a5c8:
    if (ctx->pc == 0x17A5C8u) {
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5CCu;
        goto label_17a5cc;
    }
    ctx->pc = 0x17A5C4u;
    {
        const bool branch_taken_0x17a5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5c4) {
            ctx->pc = 0x17A658u;
            goto label_17a658;
        }
    }
    ctx->pc = 0x17A5CCu;
label_17a5cc:
    // 0x17a5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a5d0:
    // 0x17a5d0: 0xc05eaee  jal         func_17ABB8
label_17a5d4:
    if (ctx->pc == 0x17A5D4u) {
        ctx->pc = 0x17A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5D0u;
        // 0x17a5d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5D8u;
        goto label_17a5d8;
    }
    ctx->pc = 0x17A5D0u;
    SET_GPR_U32(ctx, 31, 0x17A5D8u);
    ctx->pc = 0x17A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5D0u;
    // 0x17a5d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x17A5D0u, 0x17A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A5D8u;
label_17a5d8:
    // 0x17a5d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17a5d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a5dc:
    // 0x17a5dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_17a5e0:
    if (ctx->pc == 0x17A5E0u) {
        ctx->pc = 0x17A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5DCu;
        // 0x17a5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5E4u;
        goto label_17a5e4;
    }
    ctx->pc = 0x17A5DCu;
    {
        const bool branch_taken_0x17a5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5DCu;
        // 0x17a5e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5dc) {
            ctx->pc = 0x17A5F4u;
            goto label_17a5f4;
        }
    }
    ctx->pc = 0x17A5E4u;
label_17a5e4:
    // 0x17a5e4: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_17a5e8:
    if (ctx->pc == 0x17A5E8u) {
        ctx->pc = 0x17A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5E4u;
        // 0x17a5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5ECu;
        goto label_17a5ec;
    }
    ctx->pc = 0x17A5E4u;
    {
        const bool branch_taken_0x17a5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5E4u;
        // 0x17a5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5e4) {
            ctx->pc = 0x17A63Cu;
            goto label_17a63c;
        }
    }
    ctx->pc = 0x17A5ECu;
label_17a5ec:
    // 0x17a5ec: 0x10000010  b           . + 4 + (0x10 << 2)
label_17a5f0:
    if (ctx->pc == 0x17A5F0u) {
        ctx->pc = 0x17A5F4u;
        goto label_17a5f4;
    }
    ctx->pc = 0x17A5ECu;
    {
        const bool branch_taken_0x17a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5ec) {
            ctx->pc = 0x17A630u;
            goto label_17a630;
        }
    }
    ctx->pc = 0x17A5F4u;
label_17a5f4:
    // 0x17a5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a5f8:
    // 0x17a5f8: 0xc05eb12  jal         func_17AC48
label_17a5fc:
    if (ctx->pc == 0x17A5FCu) {
        ctx->pc = 0x17A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5F8u;
        // 0x17a5fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A600u;
        goto label_17a600;
    }
    ctx->pc = 0x17A5F8u;
    SET_GPR_U32(ctx, 31, 0x17A600u);
    ctx->pc = 0x17A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A5F8u;
    // 0x17a5fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC48u, 0x17A5F8u, 0x17A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A600u;
label_17a600:
    // 0x17a600: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_17a604:
    if (ctx->pc == 0x17A604u) {
        ctx->pc = 0x17A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A600u;
        // 0x17a604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A608u;
        goto label_17a608;
    }
    ctx->pc = 0x17A600u;
    {
        const bool branch_taken_0x17a600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A600u;
        // 0x17a604: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a600) {
            ctx->pc = 0x17A62Cu;
            goto label_17a62c;
        }
    }
    ctx->pc = 0x17A608u;
label_17a608:
    // 0x17a608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a60c:
    // 0x17a60c: 0xc05eb0c  jal         func_17AC30
label_17a610:
    if (ctx->pc == 0x17A610u) {
        ctx->pc = 0x17A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A60Cu;
        // 0x17a610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A614u;
        goto label_17a614;
    }
    ctx->pc = 0x17A60Cu;
    SET_GPR_U32(ctx, 31, 0x17A614u);
    ctx->pc = 0x17A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A60Cu;
    // 0x17a610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x17A60Cu, 0x17A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A614u;
label_17a614:
    // 0x17a614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a618:
    // 0x17a618: 0xc05eb06  jal         func_17AC18
label_17a61c:
    if (ctx->pc == 0x17A61Cu) {
        ctx->pc = 0x17A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A618u;
        // 0x17a61c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A620u;
        goto label_17a620;
    }
    ctx->pc = 0x17A618u;
    SET_GPR_U32(ctx, 31, 0x17A620u);
    ctx->pc = 0x17A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A618u;
    // 0x17a61c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17A618u, 0x17A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A620u;
label_17a620:
    // 0x17a620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17a620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a624:
    // 0x17a624: 0xc05eef4  jal         func_17BBD0
label_17a628:
    if (ctx->pc == 0x17A628u) {
        ctx->pc = 0x17A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A624u;
        // 0x17a628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A62Cu;
        goto label_17a62c;
    }
    ctx->pc = 0x17A624u;
    SET_GPR_U32(ctx, 31, 0x17A62Cu);
    ctx->pc = 0x17A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A624u;
    // 0x17a628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD0u, 0x17A624u, 0x17A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A62Cu;
label_17a62c:
    // 0x17a62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a630:
    // 0x17a630: 0xc05eb56  jal         func_17AD58
label_17a634:
    if (ctx->pc == 0x17A634u) {
        ctx->pc = 0x17A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A630u;
        // 0x17a634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A638u;
        goto label_17a638;
    }
    ctx->pc = 0x17A630u;
    SET_GPR_U32(ctx, 31, 0x17A638u);
    ctx->pc = 0x17A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A630u;
    // 0x17a634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x17A630u, 0x17A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A638u;
label_17a638:
    // 0x17a638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a63c:
    // 0x17a63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a640:
    // 0x17a640: 0xc05eb30  jal         func_17ACC0
label_17a644:
    if (ctx->pc == 0x17A644u) {
        ctx->pc = 0x17A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A640u;
        // 0x17a644: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A648u;
        goto label_17a648;
    }
    ctx->pc = 0x17A640u;
    SET_GPR_U32(ctx, 31, 0x17A648u);
    ctx->pc = 0x17A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A640u;
    // 0x17a644: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACC0u, 0x17A640u, 0x17A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A648u;
label_17a648:
    // 0x17a648: 0xc04f844  jal         func_13E110
label_17a64c:
    if (ctx->pc == 0x17A64Cu) {
        ctx->pc = 0x17A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A648u;
        // 0x17a64c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A650u;
        goto label_17a650;
    }
    ctx->pc = 0x17A648u;
    SET_GPR_U32(ctx, 31, 0x17A650u);
    ctx->pc = 0x17A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A648u;
    // 0x17a64c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E110u, 0x17A648u, 0x17A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A650u;
label_17a650:
    // 0x17a650: 0xa242001c  sb          $v0, 0x1C($s2)
    ctx->pc = 0x17a650u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 2));
label_17a654:
    // 0x17a654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a658:
    // 0x17a658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a65c:
    // 0x17a65c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17a660:
    // 0x17a660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a664:
    // 0x17a664: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17a668:
    // 0x17a668: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17a668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a66c:
    // 0x17a66c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17a66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17a670:
    // 0x17a670: 0x3e00008  jr          $ra
label_17a674:
    if (ctx->pc == 0x17A674u) {
        ctx->pc = 0x17A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A670u;
        // 0x17a674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A678u;
        goto label_fallthrough_0x17a670;
    }
    ctx->pc = 0x17A670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A670u;
        // 0x17a674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a670:
    ctx->pc = 0x17A678u;
}
