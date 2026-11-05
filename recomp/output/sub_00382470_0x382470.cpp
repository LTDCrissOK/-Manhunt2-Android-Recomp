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

// Function: sub_00382470
// Address: 0x382470 - 0x382550
void sub_00382470_0x382470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382470_0x382470");
#endif

    switch (ctx->pc) {
        case 0x382470u: goto label_382470;
        case 0x382474u: goto label_382474;
        case 0x382478u: goto label_382478;
        case 0x38247cu: goto label_38247c;
        case 0x382480u: goto label_382480;
        case 0x382484u: goto label_382484;
        case 0x382488u: goto label_382488;
        case 0x38248cu: goto label_38248c;
        case 0x382490u: goto label_382490;
        case 0x382494u: goto label_382494;
        case 0x382498u: goto label_382498;
        case 0x38249cu: goto label_38249c;
        case 0x3824a0u: goto label_3824a0;
        case 0x3824a4u: goto label_3824a4;
        case 0x3824a8u: goto label_3824a8;
        case 0x3824acu: goto label_3824ac;
        case 0x3824b0u: goto label_3824b0;
        case 0x3824b4u: goto label_3824b4;
        case 0x3824b8u: goto label_3824b8;
        case 0x3824bcu: goto label_3824bc;
        case 0x3824c0u: goto label_3824c0;
        case 0x3824c4u: goto label_3824c4;
        case 0x3824c8u: goto label_3824c8;
        case 0x3824ccu: goto label_3824cc;
        case 0x3824d0u: goto label_3824d0;
        case 0x3824d4u: goto label_3824d4;
        case 0x3824d8u: goto label_3824d8;
        case 0x3824dcu: goto label_3824dc;
        case 0x3824e0u: goto label_3824e0;
        case 0x3824e4u: goto label_3824e4;
        case 0x3824e8u: goto label_3824e8;
        case 0x3824ecu: goto label_3824ec;
        case 0x3824f0u: goto label_3824f0;
        case 0x3824f4u: goto label_3824f4;
        case 0x3824f8u: goto label_3824f8;
        case 0x3824fcu: goto label_3824fc;
        case 0x382500u: goto label_382500;
        case 0x382504u: goto label_382504;
        case 0x382508u: goto label_382508;
        case 0x38250cu: goto label_38250c;
        case 0x382510u: goto label_382510;
        case 0x382514u: goto label_382514;
        case 0x382518u: goto label_382518;
        case 0x38251cu: goto label_38251c;
        case 0x382520u: goto label_382520;
        case 0x382524u: goto label_382524;
        case 0x382528u: goto label_382528;
        case 0x38252cu: goto label_38252c;
        case 0x382530u: goto label_382530;
        case 0x382534u: goto label_382534;
        case 0x382538u: goto label_382538;
        case 0x38253cu: goto label_38253c;
        case 0x382540u: goto label_382540;
        case 0x382544u: goto label_382544;
        case 0x382548u: goto label_382548;
        case 0x38254cu: goto label_38254c;
        default: break;
    }

    ctx->pc = 0x382470u;

label_382470:
    // 0x382470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x382470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_382474:
    // 0x382474: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x382474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_382478:
    // 0x382478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38247c:
    // 0x38247c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38247cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_382480:
    // 0x382480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_382484:
    // 0x382484: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x382484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_382488:
    // 0x382488: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x382488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_38248c:
    // 0x38248c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x38248cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_382490:
    // 0x382490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_382494:
    if (ctx->pc == 0x382494u) {
        ctx->pc = 0x382494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382490u;
        // 0x382494: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382498u;
        goto label_382498;
    }
    ctx->pc = 0x382490u;
    {
        const bool branch_taken_0x382490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382490u;
        // 0x382494: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382490) {
            ctx->pc = 0x3824A8u;
            goto label_3824a8;
        }
    }
    ctx->pc = 0x382498u;
label_382498:
    // 0x382498: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x382498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_38249c:
    // 0x38249c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x38249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3824a0:
    // 0x3824a0: 0x40f809  jalr        $v0
label_3824a4:
    if (ctx->pc == 0x3824A4u) {
        ctx->pc = 0x3824A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824A0u;
        // 0x3824a4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824A8u;
        goto label_3824a8;
    }
    ctx->pc = 0x3824A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3824A8u);
        ctx->pc = 0x3824A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824A0u;
        // 0x3824a4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3824A0u, 0x3824A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3824A8u;
label_3824a8:
    // 0x3824a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3824a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3824ac:
    // 0x3824ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3824acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3824b0:
    // 0x3824b0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3824b4:
    if (ctx->pc == 0x3824B4u) {
        ctx->pc = 0x3824B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824B0u;
        // 0x3824b4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824B8u;
        goto label_3824b8;
    }
    ctx->pc = 0x3824B0u;
    {
        const bool branch_taken_0x3824b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3824b0) {
            ctx->pc = 0x3824B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3824B0u;
            // 0x3824b4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3824C8u;
            goto label_3824c8;
        }
    }
    ctx->pc = 0x3824B8u;
label_3824b8:
    // 0x3824b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3824b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3824bc:
    // 0x3824bc: 0xc0e0b78  jal         func_382DE0
label_3824c0:
    if (ctx->pc == 0x3824C0u) {
        ctx->pc = 0x3824C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824BCu;
        // 0x3824c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824C4u;
        goto label_3824c4;
    }
    ctx->pc = 0x3824BCu;
    SET_GPR_U32(ctx, 31, 0x3824C4u);
    ctx->pc = 0x3824C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3824BCu;
    // 0x3824c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382DE0u, 0x3824BCu, 0x3824C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3824C4u;
label_3824c4:
    // 0x3824c4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3824c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3824c8:
    // 0x3824c8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3824c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3824cc:
    // 0x3824cc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x3824ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_3824d0:
    // 0x3824d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3824d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3824d4:
    // 0x3824d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3824d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3824d8:
    // 0x3824d8: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x3824d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_3824dc:
    // 0x3824dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3824e0:
    if (ctx->pc == 0x3824E0u) {
        ctx->pc = 0x3824E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824DCu;
        // 0x3824e0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824E4u;
        goto label_3824e4;
    }
    ctx->pc = 0x3824DCu;
    {
        const bool branch_taken_0x3824dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3824E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824DCu;
        // 0x3824e0: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3824dc) {
            ctx->pc = 0x3824FCu;
            goto label_3824fc;
        }
    }
    ctx->pc = 0x3824E4u;
label_3824e4:
    // 0x3824e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3824e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3824e8:
    // 0x3824e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3824e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3824ec:
    // 0x3824ec: 0x60f809  jalr        $v1
label_3824f0:
    if (ctx->pc == 0x3824F0u) {
        ctx->pc = 0x3824F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824ECu;
        // 0x3824f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3824F4u;
        goto label_3824f4;
    }
    ctx->pc = 0x3824ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3824F4u);
        ctx->pc = 0x3824F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3824ECu;
        // 0x3824f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3824ECu, 0x3824F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3824F4u;
label_3824f4:
    // 0x3824f4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x3824f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_3824f8:
    // 0x3824f8: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x3824f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_3824fc:
    // 0x3824fc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3824fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_382500:
    // 0x382500: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x382500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_382504:
    // 0x382504: 0x40f809  jalr        $v0
label_382508:
    if (ctx->pc == 0x382508u) {
        ctx->pc = 0x382508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382504u;
        // 0x382508: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38250Cu;
        goto label_38250c;
    }
    ctx->pc = 0x382504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38250Cu);
        ctx->pc = 0x382508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382504u;
        // 0x382508: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382504u, 0x38250Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38250Cu;
label_38250c:
    // 0x38250c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x38250cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_382510:
    // 0x382510: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x382510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_382514:
    // 0x382514: 0x40f809  jalr        $v0
label_382518:
    if (ctx->pc == 0x382518u) {
        ctx->pc = 0x382518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382514u;
        // 0x382518: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38251Cu;
        goto label_38251c;
    }
    ctx->pc = 0x382514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38251Cu);
        ctx->pc = 0x382518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382514u;
        // 0x382518: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382514u, 0x38251Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38251Cu;
label_38251c:
    // 0x38251c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x38251cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_382520:
    // 0x382520: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x382520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_382524:
    // 0x382524: 0x40f809  jalr        $v0
label_382528:
    if (ctx->pc == 0x382528u) {
        ctx->pc = 0x382528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382524u;
        // 0x382528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38252Cu;
        goto label_38252c;
    }
    ctx->pc = 0x382524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38252Cu);
        ctx->pc = 0x382528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382524u;
        // 0x382528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382524u, 0x38252Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38252Cu;
label_38252c:
    // 0x38252c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38252cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382530:
    // 0x382530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x382530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382534:
    // 0x382534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382538:
    // 0x382538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38253c:
    // 0x38253c: 0x3e00008  jr          $ra
label_382540:
    if (ctx->pc == 0x382540u) {
        ctx->pc = 0x382540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38253Cu;
        // 0x382540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382544u;
        goto label_382544;
    }
    ctx->pc = 0x38253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38253Cu;
        // 0x382540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38253Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382544u;
label_382544:
    // 0x382544: 0x0  nop
    ctx->pc = 0x382544u;
    // NOP
label_382548:
    // 0x382548: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x382548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_38254c:
    // 0x38254c: 0x0  nop
    ctx->pc = 0x38254cu;
    // NOP
    ctx->pc = 0x382550u;
}
