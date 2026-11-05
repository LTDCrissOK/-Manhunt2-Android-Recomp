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

// Function: sub_002774F0
// Address: 0x2774f0 - 0x2775e8
void sub_002774F0_0x2774f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002774F0_0x2774f0");
#endif

    switch (ctx->pc) {
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        case 0x277548u: goto label_277548;
        case 0x27754cu: goto label_27754c;
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        default: break;
    }

    ctx->pc = 0x2774f0u;

label_2774f0:
    // 0x2774f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2774f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2774f4:
    // 0x2774f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2774f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2774f8:
    // 0x2774f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2774f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2774fc:
    // 0x2774fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2774fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_277500:
    // 0x277500: 0xc09dcc6  jal         func_277318
label_277504:
    if (ctx->pc == 0x277504u) {
        ctx->pc = 0x277504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277500u;
        // 0x277504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277508u;
        goto label_277508;
    }
    ctx->pc = 0x277500u;
    SET_GPR_U32(ctx, 31, 0x277508u);
    ctx->pc = 0x277504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277500u;
    // 0x277504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x277500u, 0x277508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277508u;
label_277508:
    // 0x277508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27750c:
    // 0x27750c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_277510:
    // 0x277510: 0x2451cbc0  addiu       $s1, $v0, -0x3440
    ctx->pc = 0x277510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953920));
label_277514:
    // 0x277514: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_277518:
    if (ctx->pc == 0x277518u) {
        ctx->pc = 0x277518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277514u;
        // 0x277518: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27751Cu;
        goto label_27751c;
    }
    ctx->pc = 0x277514u;
    {
        const bool branch_taken_0x277514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x277518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277514u;
        // 0x277518: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277514) {
            ctx->pc = 0x277524u;
            goto label_277524;
        }
    }
    ctx->pc = 0x27751Cu;
label_27751c:
    // 0x27751c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_277520:
    if (ctx->pc == 0x277520u) {
        ctx->pc = 0x277520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27751Cu;
        // 0x277520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277524u;
        goto label_277524;
    }
    ctx->pc = 0x27751Cu;
    {
        const bool branch_taken_0x27751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27751Cu;
        // 0x277520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27751c) {
            ctx->pc = 0x2775D0u;
            goto label_2775d0;
        }
    }
    ctx->pc = 0x277524u;
label_277524:
    // 0x277524: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277528:
    // 0x277528: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x277528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27752c:
    // 0x27752c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x27752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_277530:
    // 0x277530: 0x40f809  jalr        $v0
label_277534:
    if (ctx->pc == 0x277534u) {
        ctx->pc = 0x277534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277530u;
        // 0x277534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277538u;
        goto label_277538;
    }
    ctx->pc = 0x277530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277538u);
        ctx->pc = 0x277534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277530u;
        // 0x277534: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277530u, 0x277538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277538u;
label_277538:
    // 0x277538: 0x3c034d48  lui         $v1, 0x4D48
    ctx->pc = 0x277538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19784 << 16));
label_27753c:
    // 0x27753c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_277540:
    // 0x277540: 0x3463325a  ori         $v1, $v1, 0x325A
    ctx->pc = 0x277540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12890);
label_277544:
    // 0x277544: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_277548:
    if (ctx->pc == 0x277548u) {
        ctx->pc = 0x277548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277544u;
        // 0x277548: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27754Cu;
        goto label_27754c;
    }
    ctx->pc = 0x277544u;
    {
        const bool branch_taken_0x277544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x277544) {
            ctx->pc = 0x277548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277544u;
            // 0x277548: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2775B4u;
            goto label_2775b4;
        }
    }
    ctx->pc = 0x27754Cu;
label_27754c:
    // 0x27754c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x27754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_277550:
    // 0x277550: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x277550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_277554:
    // 0x277554: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x277554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277558:
    // 0x277558: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x277558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_27755c:
    // 0x27755c: 0x40f809  jalr        $v0
label_277560:
    if (ctx->pc == 0x277560u) {
        ctx->pc = 0x277560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27755Cu;
        // 0x277560: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277564u;
        goto label_277564;
    }
    ctx->pc = 0x27755Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277564u);
        ctx->pc = 0x277560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27755Cu;
        // 0x277560: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27755Cu, 0x277564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277564u;
label_277564:
    // 0x277564: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x277564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_277568:
    // 0x277568: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_27756c:
    // 0x27756c: 0x3c060027  lui         $a2, 0x27
    ctx->pc = 0x27756cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39 << 16));
label_277570:
    // 0x277570: 0x26232018  addiu       $v1, $s1, 0x2018
    ctx->pc = 0x277570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8216));
label_277574:
    // 0x277574: 0xae242008  sw          $a0, 0x2008($s1)
    ctx->pc = 0x277574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8200), GPR_U32(ctx, 4));
label_277578:
    // 0x277578: 0x24c674d0  addiu       $a2, $a2, 0x74D0
    ctx->pc = 0x277578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29904));
label_27757c:
    // 0x27757c: 0x244274b0  addiu       $v0, $v0, 0x74B0
    ctx->pc = 0x27757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29872));
label_277580:
    // 0x277580: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x277580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
label_277584:
    // 0x277584: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x277584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_277588:
    // 0x277588: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27758c:
    // 0x27758c: 0xae20200c  sw          $zero, 0x200C($s1)
    ctx->pc = 0x27758cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8204), GPR_U32(ctx, 0));
label_277590:
    // 0x277590: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x277590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_277594:
    // 0x277594: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x277594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_277598:
    // 0x277598: 0x24a582a0  addiu       $a1, $a1, -0x7D60
    ctx->pc = 0x277598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935200));
label_27759c:
    // 0x27759c: 0xae202018  sw          $zero, 0x2018($s1)
    ctx->pc = 0x27759cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8216), GPR_U32(ctx, 0));
label_2775a0:
    // 0x2775a0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x2775a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2775a4:
    // 0x2775a4: 0xc0e052c  jal         func_3814B0
label_2775a8:
    if (ctx->pc == 0x2775A8u) {
        ctx->pc = 0x2775A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775A4u;
        // 0x2775a8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775ACu;
        goto label_2775ac;
    }
    ctx->pc = 0x2775A4u;
    SET_GPR_U32(ctx, 31, 0x2775ACu);
    ctx->pc = 0x2775A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2775A4u;
    // 0x2775a8: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3814B0u, 0x2775A4u, 0x2775ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775ACu;
label_2775ac:
    // 0x2775ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_2775b0:
    if (ctx->pc == 0x2775B0u) {
        ctx->pc = 0x2775B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775ACu;
        // 0x2775b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775B4u;
        goto label_2775b4;
    }
    ctx->pc = 0x2775ACu;
    {
        const bool branch_taken_0x2775ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2775B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775ACu;
        // 0x2775b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775ac) {
            ctx->pc = 0x2775D0u;
            goto label_2775d0;
        }
    }
    ctx->pc = 0x2775B4u;
label_2775b4:
    // 0x2775b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2775b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2775b8:
    // 0x2775b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2775b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2775bc:
    // 0x2775bc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2775bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2775c0:
    // 0x2775c0: 0x40f809  jalr        $v0
label_2775c4:
    if (ctx->pc == 0x2775C4u) {
        ctx->pc = 0x2775C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775C0u;
        // 0x2775c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775C8u;
        goto label_2775c8;
    }
    ctx->pc = 0x2775C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2775C8u);
        ctx->pc = 0x2775C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775C0u;
        // 0x2775c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775C0u, 0x2775C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2775C8u;
label_2775c8:
    // 0x2775c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2775c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2775cc:
    // 0x2775cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2775ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2775d0:
    // 0x2775d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2775d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2775d4:
    // 0x2775d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2775d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2775d8:
    // 0x2775d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2775d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2775dc:
    // 0x2775dc: 0x3e00008  jr          $ra
label_2775e0:
    if (ctx->pc == 0x2775E0u) {
        ctx->pc = 0x2775E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775DCu;
        // 0x2775e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775E4u;
        goto label_2775e4;
    }
    ctx->pc = 0x2775DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2775E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775DCu;
        // 0x2775e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2775E4u;
label_2775e4:
    // 0x2775e4: 0x0  nop
    ctx->pc = 0x2775e4u;
    // NOP
    ctx->pc = 0x2775e8u;
}
