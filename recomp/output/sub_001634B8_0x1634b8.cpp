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

// Function: sub_001634B8
// Address: 0x1634b8 - 0x1635b8
void sub_001634B8_0x1634b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001634B8_0x1634b8");
#endif

    switch (ctx->pc) {
        case 0x1634b8u: goto label_1634b8;
        case 0x1634bcu: goto label_1634bc;
        case 0x1634c0u: goto label_1634c0;
        case 0x1634c4u: goto label_1634c4;
        case 0x1634c8u: goto label_1634c8;
        case 0x1634ccu: goto label_1634cc;
        case 0x1634d0u: goto label_1634d0;
        case 0x1634d4u: goto label_1634d4;
        case 0x1634d8u: goto label_1634d8;
        case 0x1634dcu: goto label_1634dc;
        case 0x1634e0u: goto label_1634e0;
        case 0x1634e4u: goto label_1634e4;
        case 0x1634e8u: goto label_1634e8;
        case 0x1634ecu: goto label_1634ec;
        case 0x1634f0u: goto label_1634f0;
        case 0x1634f4u: goto label_1634f4;
        case 0x1634f8u: goto label_1634f8;
        case 0x1634fcu: goto label_1634fc;
        case 0x163500u: goto label_163500;
        case 0x163504u: goto label_163504;
        case 0x163508u: goto label_163508;
        case 0x16350cu: goto label_16350c;
        case 0x163510u: goto label_163510;
        case 0x163514u: goto label_163514;
        case 0x163518u: goto label_163518;
        case 0x16351cu: goto label_16351c;
        case 0x163520u: goto label_163520;
        case 0x163524u: goto label_163524;
        case 0x163528u: goto label_163528;
        case 0x16352cu: goto label_16352c;
        case 0x163530u: goto label_163530;
        case 0x163534u: goto label_163534;
        case 0x163538u: goto label_163538;
        case 0x16353cu: goto label_16353c;
        case 0x163540u: goto label_163540;
        case 0x163544u: goto label_163544;
        case 0x163548u: goto label_163548;
        case 0x16354cu: goto label_16354c;
        case 0x163550u: goto label_163550;
        case 0x163554u: goto label_163554;
        case 0x163558u: goto label_163558;
        case 0x16355cu: goto label_16355c;
        case 0x163560u: goto label_163560;
        case 0x163564u: goto label_163564;
        case 0x163568u: goto label_163568;
        case 0x16356cu: goto label_16356c;
        case 0x163570u: goto label_163570;
        case 0x163574u: goto label_163574;
        case 0x163578u: goto label_163578;
        case 0x16357cu: goto label_16357c;
        case 0x163580u: goto label_163580;
        case 0x163584u: goto label_163584;
        case 0x163588u: goto label_163588;
        case 0x16358cu: goto label_16358c;
        case 0x163590u: goto label_163590;
        case 0x163594u: goto label_163594;
        case 0x163598u: goto label_163598;
        case 0x16359cu: goto label_16359c;
        case 0x1635a0u: goto label_1635a0;
        case 0x1635a4u: goto label_1635a4;
        case 0x1635a8u: goto label_1635a8;
        case 0x1635acu: goto label_1635ac;
        case 0x1635b0u: goto label_1635b0;
        case 0x1635b4u: goto label_1635b4;
        default: break;
    }

    ctx->pc = 0x1634b8u;

label_1634b8:
    // 0x1634b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1634bc:
    // 0x1634bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1634bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1634c0:
    // 0x1634c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1634c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1634c4:
    // 0x1634c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1634c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1634c8:
    // 0x1634c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1634c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1634cc:
    // 0x1634cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1634ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1634d0:
    // 0x1634d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1634d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1634d4:
    // 0x1634d4: 0xc058f44  jal         func_163D10
label_1634d8:
    if (ctx->pc == 0x1634D8u) {
        ctx->pc = 0x1634D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634D4u;
        // 0x1634d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634DCu;
        goto label_1634dc;
    }
    ctx->pc = 0x1634D4u;
    SET_GPR_U32(ctx, 31, 0x1634DCu);
    ctx->pc = 0x1634D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1634D4u;
    // 0x1634d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D10u, 0x1634D4u, 0x1634DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634DCu;
label_1634dc:
    // 0x1634dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1634e0:
    if (ctx->pc == 0x1634E0u) {
        ctx->pc = 0x1634E4u;
        goto label_1634e4;
    }
    ctx->pc = 0x1634DCu;
    {
        const bool branch_taken_0x1634dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1634dc) {
            ctx->pc = 0x1634FCu;
            goto label_1634fc;
        }
    }
    ctx->pc = 0x1634E4u;
label_1634e4:
    // 0x1634e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1634e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1634e8:
    // 0x1634e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1634e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1634ec:
    // 0x1634ec: 0xc058d90  jal         func_163640
label_1634f0:
    if (ctx->pc == 0x1634F0u) {
        ctx->pc = 0x1634F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634ECu;
        // 0x1634f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634F4u;
        goto label_1634f4;
    }
    ctx->pc = 0x1634ECu;
    SET_GPR_U32(ctx, 31, 0x1634F4u);
    ctx->pc = 0x1634F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1634ECu;
    // 0x1634f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163640u, 0x1634ECu, 0x1634F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1634F4u;
label_1634f4:
    // 0x1634f4: 0x10000029  b           . + 4 + (0x29 << 2)
label_1634f8:
    if (ctx->pc == 0x1634F8u) {
        ctx->pc = 0x1634F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634F4u;
        // 0x1634f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634FCu;
        goto label_1634fc;
    }
    ctx->pc = 0x1634F4u;
    {
        const bool branch_taken_0x1634f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634F4u;
        // 0x1634f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634f4) {
            ctx->pc = 0x16359Cu;
            goto label_16359c;
        }
    }
    ctx->pc = 0x1634FCu;
label_1634fc:
    // 0x1634fc: 0xc04f1f4  jal         func_13C7D0
label_163500:
    if (ctx->pc == 0x163500u) {
        ctx->pc = 0x163500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634FCu;
        // 0x163500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163504u;
        goto label_163504;
    }
    ctx->pc = 0x1634FCu;
    SET_GPR_U32(ctx, 31, 0x163504u);
    ctx->pc = 0x163500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1634FCu;
    // 0x163500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x1634FCu, 0x163504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163504u;
label_163504:
    // 0x163504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x163504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163508:
    // 0x163508: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x163508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_16350c:
    // 0x16350c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163510:
    // 0x163510: 0xc04f33e  jal         func_13CCF8
label_163514:
    if (ctx->pc == 0x163514u) {
        ctx->pc = 0x163514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163510u;
        // 0x163514: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163518u;
        goto label_163518;
    }
    ctx->pc = 0x163510u;
    SET_GPR_U32(ctx, 31, 0x163518u);
    ctx->pc = 0x163514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163510u;
    // 0x163514: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x163510u, 0x163518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163518u;
label_163518:
    // 0x163518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16351c:
    // 0x16351c: 0xc04f0b6  jal         func_13C2D8
label_163520:
    if (ctx->pc == 0x163520u) {
        ctx->pc = 0x163520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16351Cu;
        // 0x163520: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163524u;
        goto label_163524;
    }
    ctx->pc = 0x16351Cu;
    SET_GPR_U32(ctx, 31, 0x163524u);
    ctx->pc = 0x163520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16351Cu;
    // 0x163520: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x16351Cu, 0x163524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163524u;
label_163524:
    // 0x163524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x163524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163528:
    // 0x163528: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_16352c:
    // 0x16352c: 0xc045fea  jal         func_117FA8
label_163530:
    if (ctx->pc == 0x163530u) {
        ctx->pc = 0x163530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16352Cu;
        // 0x163530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163534u;
        goto label_163534;
    }
    ctx->pc = 0x16352Cu;
    SET_GPR_U32(ctx, 31, 0x163534u);
    ctx->pc = 0x163530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16352Cu;
    // 0x163530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x16352Cu, 0x163534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163534u;
label_163534:
    // 0x163534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163538:
    // 0x163538: 0xc046058  jal         func_118160
label_16353c:
    if (ctx->pc == 0x16353Cu) {
        ctx->pc = 0x16353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163538u;
        // 0x16353c: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163540u;
        goto label_163540;
    }
    ctx->pc = 0x163538u;
    SET_GPR_U32(ctx, 31, 0x163540u);
    ctx->pc = 0x16353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163538u;
    // 0x16353c: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x163538u, 0x163540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163540u;
label_163540:
    // 0x163540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163544:
    // 0x163544: 0xc046104  jal         func_118410
label_163548:
    if (ctx->pc == 0x163548u) {
        ctx->pc = 0x163548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163544u;
        // 0x163548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16354Cu;
        goto label_16354c;
    }
    ctx->pc = 0x163544u;
    SET_GPR_U32(ctx, 31, 0x16354Cu);
    ctx->pc = 0x163548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163544u;
    // 0x163548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x163544u, 0x16354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16354Cu;
label_16354c:
    // 0x16354c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x16354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_163550:
    // 0x163550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_163554:
    // 0x163554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163558:
    // 0x163558: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x163558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16355c:
    // 0x16355c: 0x40f809  jalr        $v0
label_163560:
    if (ctx->pc == 0x163560u) {
        ctx->pc = 0x163560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16355Cu;
        // 0x163560: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163564u;
        goto label_163564;
    }
    ctx->pc = 0x16355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163564u);
        ctx->pc = 0x163560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16355Cu;
        // 0x163560: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16355Cu, 0x163564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163564u;
label_163564:
    // 0x163564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163568:
    // 0x163568: 0xc04d7dc  jal         func_135F70
label_16356c:
    if (ctx->pc == 0x16356Cu) {
        ctx->pc = 0x16356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163568u;
        // 0x16356c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163570u;
        goto label_163570;
    }
    ctx->pc = 0x163568u;
    SET_GPR_U32(ctx, 31, 0x163570u);
    ctx->pc = 0x16356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163568u;
    // 0x16356c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x163568u, 0x163570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163570u;
label_163570:
    // 0x163570: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x163570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_163574:
    // 0x163574: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x163574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_163578:
    // 0x163578: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x163578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16357c:
    // 0x16357c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_163580:
    if (ctx->pc == 0x163580u) {
        ctx->pc = 0x163580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16357Cu;
        // 0x163580: 0xae200300  sw          $zero, 0x300($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163584u;
        goto label_163584;
    }
    ctx->pc = 0x16357Cu;
    {
        const bool branch_taken_0x16357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16357c) {
            ctx->pc = 0x163580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16357Cu;
            // 0x163580: 0xae200300  sw          $zero, 0x300($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163598u;
            goto label_163598;
        }
    }
    ctx->pc = 0x163584u;
label_163584:
    // 0x163584: 0x8e2303ac  lw          $v1, 0x3AC($s1)
    ctx->pc = 0x163584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
label_163588:
    // 0x163588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16358c:
    // 0x16358c: 0xae4204cc  sw          $v0, 0x4CC($s2)
    ctx->pc = 0x16358cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1228), GPR_U32(ctx, 2));
label_163590:
    // 0x163590: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x163590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
label_163594:
    // 0x163594: 0xae200300  sw          $zero, 0x300($s1)
    ctx->pc = 0x163594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 0));
label_163598:
    // 0x163598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16359c:
    // 0x16359c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16359cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1635a0:
    // 0x1635a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1635a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1635a4:
    // 0x1635a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1635a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1635a8:
    // 0x1635a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1635a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1635ac:
    // 0x1635ac: 0x3e00008  jr          $ra
label_1635b0:
    if (ctx->pc == 0x1635B0u) {
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ACu;
        // 0x1635b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1635B4u;
        goto label_1635b4;
    }
    ctx->pc = 0x1635ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1635B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635ACu;
        // 0x1635b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1635B4u;
label_1635b4:
    // 0x1635b4: 0x0  nop
    ctx->pc = 0x1635b4u;
    // NOP
    ctx->pc = 0x1635b8u;
}
