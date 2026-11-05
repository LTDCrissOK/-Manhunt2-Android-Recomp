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

// Function: sub_00135470
// Address: 0x135470 - 0x135680
void sub_00135470_0x135470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135470_0x135470");
#endif

    switch (ctx->pc) {
        case 0x13549cu: goto label_13549c;
        case 0x1354bcu: goto label_1354bc;
        case 0x1354dcu: goto label_1354dc;
        case 0x1354f0u: goto label_1354f0;
        case 0x135504u: goto label_135504;
        case 0x135518u: goto label_135518;
        case 0x13552cu: goto label_13552c;
        case 0x135564u: goto label_135564;
        case 0x135580u: goto label_135580;
        case 0x1355acu: goto label_1355ac;
        case 0x1355c0u: goto label_1355c0;
        case 0x1355f4u: goto label_1355f4;
        case 0x135604u: goto label_135604;
        case 0x135610u: goto label_135610;
        case 0x135624u: goto label_135624;
        case 0x135648u: goto label_135648;
        case 0x135654u: goto label_135654;
        case 0x135668u: goto label_135668;
        default: break;
    }

    ctx->pc = 0x135470u;

    // 0x135470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x135474: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x135474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x135478: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x135478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13547c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13547cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135480: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x135480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x135484: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x135484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x135488: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x135488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13548c: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x13548Cu;
    {
        const bool branch_taken_0x13548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13548Cu;
        // 0x135490: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13548c) {
            ctx->pc = 0x13566Cu;
            goto label_13566c;
        }
    }
    ctx->pc = 0x135494u;
    // 0x135494: 0xc04d2d6  jal         func_134B58
    ctx->pc = 0x135494u;
    SET_GPR_U32(ctx, 31, 0x13549Cu);
    ctx->pc = 0x134B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134B58u, 0x135494u, 0x13549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13549Cu;
label_13549c:
    // 0x13549c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13549cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354a0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1354a4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1354A4u;
    {
        const bool branch_taken_0x1354a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1354a4) {
            ctx->pc = 0x1354A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1354A4u;
            // 0x1354a8: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135544u;
            goto label_135544;
        }
    }
    ctx->pc = 0x1354ACu;
    // 0x1354ac: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1354ACu;
    {
        const bool branch_taken_0x1354ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1354B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354ACu;
        // 0x1354b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354ac) {
            ctx->pc = 0x1355DCu;
            goto label_1355dc;
        }
    }
    ctx->pc = 0x1354B4u;
    // 0x1354b4: 0xc04d418  jal         func_135060
    ctx->pc = 0x1354B4u;
    SET_GPR_U32(ctx, 31, 0x1354BCu);
    ctx->pc = 0x1354B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354B4u;
    // 0x1354b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135060u, 0x1354B4u, 0x1354BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354BCu;
label_1354bc:
    // 0x1354bc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1354BCu;
    {
        const bool branch_taken_0x1354bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1354C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354BCu;
        // 0x1354c0: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354bc) {
            ctx->pc = 0x1355D8u;
            goto label_1355d8;
        }
    }
    ctx->pc = 0x1354C4u;
    // 0x1354c4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1354c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1354c8: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x1354c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1354cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1354d0: 0x24a502bc  addiu       $a1, $a1, 0x2BC
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 700));
    // 0x1354d4: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1354D4u;
    SET_GPR_U32(ctx, 31, 0x1354DCu);
    ctx->pc = 0x1354D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354D4u;
    // 0x1354d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1354D4u, 0x1354DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354DCu;
label_1354dc:
    // 0x1354dc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1354dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1354e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1354e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1354e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354e8: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1354E8u;
    SET_GPR_U32(ctx, 31, 0x1354F0u);
    ctx->pc = 0x1354ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354E8u;
    // 0x1354ec: 0x24a502c0  addiu       $a1, $a1, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1354E8u, 0x1354F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354F0u;
label_1354f0:
    // 0x1354f0: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1354f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1354f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1354f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1354f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354fc: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1354FCu;
    SET_GPR_U32(ctx, 31, 0x135504u);
    ctx->pc = 0x135500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354FCu;
    // 0x135500: 0x24a502c4  addiu       $a1, $a1, 0x2C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1354FCu, 0x135504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135504u;
label_135504:
    // 0x135504: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x135504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13550c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135510: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x135510u;
    SET_GPR_U32(ctx, 31, 0x135518u);
    ctx->pc = 0x135514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135510u;
    // 0x135514: 0x24a502c8  addiu       $a1, $a1, 0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x135510u, 0x135518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135518u;
label_135518:
    // 0x135518: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x135518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13551c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x135520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135524: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x135524u;
    SET_GPR_U32(ctx, 31, 0x13552Cu);
    ctx->pc = 0x135528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135524u;
    // 0x135528: 0x24a502d8  addiu       $a1, $a1, 0x2D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x135524u, 0x13552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13552Cu;
label_13552c:
    // 0x13552c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135530: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135534: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x135534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x135538: 0xa46202b8  sh          $v0, 0x2B8($v1)
    ctx->pc = 0x135538u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 696), (uint16_t)GPR_U32(ctx, 2));
    // 0x13553c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x13553Cu;
    {
        const bool branch_taken_0x13553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13553Cu;
        // 0x135540: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13553c) {
            ctx->pc = 0x135668u;
            goto label_135668;
        }
    }
    ctx->pc = 0x135544u;
label_135544:
    // 0x135544: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x135544u;
    {
        const bool branch_taken_0x135544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135544) {
            ctx->pc = 0x135548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135544u;
            // 0x135548: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135590u;
            goto label_135590;
        }
    }
    ctx->pc = 0x13554Cu;
    // 0x13554c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135550: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x135550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x135554: 0x24520480  addiu       $s2, $v0, 0x480
    ctx->pc = 0x135554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x135558: 0x8c6502c8  lw          $a1, 0x2C8($v1)
    ctx->pc = 0x135558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 712)));
    // 0x13555c: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x13555Cu;
    SET_GPR_U32(ctx, 31, 0x135564u);
    ctx->pc = 0x135560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13555Cu;
    // 0x135560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x13555Cu, 0x135564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135564u;
label_135564:
    // 0x135564: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x135564u;
    {
        const bool branch_taken_0x135564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135564u;
        // 0x135568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135564) {
            ctx->pc = 0x1355DCu;
            goto label_1355dc;
        }
    }
    ctx->pc = 0x13556Cu;
    // 0x13556c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13556Cu;
    {
        const bool branch_taken_0x13556c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x135570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13556Cu;
        // 0x135570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13556c) {
            ctx->pc = 0x1355DCu;
            goto label_1355dc;
        }
    }
    ctx->pc = 0x135574u;
    // 0x135574: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x135574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135578: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x135578u;
    SET_GPR_U32(ctx, 31, 0x135580u);
    ctx->pc = 0x13557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135578u;
    // 0x13557c: 0x8c4502c0  lw          $a1, 0x2C0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x135578u, 0x135580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135580u;
label_135580:
    // 0x135580: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x135580u;
    {
        const bool branch_taken_0x135580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135580u;
        // 0x135584: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135580) {
            ctx->pc = 0x135668u;
            goto label_135668;
        }
    }
    ctx->pc = 0x135588u;
    // 0x135588: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x135588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x13558c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x13558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_135590:
    // 0x135590: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x135590u;
    {
        const bool branch_taken_0x135590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135590) {
            ctx->pc = 0x135594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135590u;
            // 0x135594: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1355C8u;
            goto label_1355c8;
        }
    }
    ctx->pc = 0x135598u;
    // 0x135598: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x135598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13559c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13559cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1355a0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1355a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1355a4: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1355A4u;
    SET_GPR_U32(ctx, 31, 0x1355ACu);
    ctx->pc = 0x1355A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355A4u;
    // 0x1355a8: 0x8c4502c8  lw          $a1, 0x2C8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1355A4u, 0x1355ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355ACu;
label_1355ac:
    // 0x1355ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1355ACu;
    {
        const bool branch_taken_0x1355ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1355B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355ACu;
        // 0x1355b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355ac) {
            ctx->pc = 0x1355DCu;
            goto label_1355dc;
        }
    }
    ctx->pc = 0x1355B4u;
    // 0x1355b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1355b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355b8: 0xc04d5a0  jal         func_135680
    ctx->pc = 0x1355B8u;
    SET_GPR_U32(ctx, 31, 0x1355C0u);
    ctx->pc = 0x1355BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355B8u;
    // 0x1355bc: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135680u, 0x1355B8u, 0x1355C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355C0u;
label_1355c0:
    // 0x1355c0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1355C0u;
    {
        const bool branch_taken_0x1355c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355C0u;
        // 0x1355c4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355c0) {
            ctx->pc = 0x13566Cu;
            goto label_13566c;
        }
    }
    ctx->pc = 0x1355C8u;
label_1355c8:
    // 0x1355c8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1355C8u;
    {
        const bool branch_taken_0x1355c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1355c8) {
            ctx->pc = 0x1355CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1355C8u;
            // 0x1355cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13566Cu;
            goto label_13566c;
        }
    }
    ctx->pc = 0x1355D0u;
    // 0x1355d0: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1355D0u;
    {
        const bool branch_taken_0x1355d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1355d0) {
            ctx->pc = 0x1355D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1355D0u;
            // 0x1355d4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1355E4u;
            goto label_1355e4;
        }
    }
    ctx->pc = 0x1355D8u;
label_1355d8:
    // 0x1355d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1355d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1355dc:
    // 0x1355dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1355DCu;
    {
        const bool branch_taken_0x1355dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1355E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355DCu;
        // 0x1355e0: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355dc) {
            ctx->pc = 0x135668u;
            goto label_135668;
        }
    }
    ctx->pc = 0x1355E4u;
label_1355e4:
    // 0x1355e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1355e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1355e8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1355e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1355ec: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1355ECu;
    SET_GPR_U32(ctx, 31, 0x1355F4u);
    ctx->pc = 0x1355F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355ECu;
    // 0x1355f0: 0x8c4502c8  lw          $a1, 0x2C8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1355ECu, 0x1355F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355F4u;
label_1355f4:
    // 0x1355f4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1355F4u;
    {
        const bool branch_taken_0x1355f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1355F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355F4u;
        // 0x1355f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355f4) {
            ctx->pc = 0x13565Cu;
            goto label_13565c;
        }
    }
    ctx->pc = 0x1355FCu;
    // 0x1355fc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1355FCu;
    SET_GPR_U32(ctx, 31, 0x135604u);
    ctx->pc = 0x135600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355FCu;
    // 0x135600: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1355FCu, 0x135604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135604u;
label_135604:
    // 0x135604: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x135604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x135608: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x135608u;
    SET_GPR_U32(ctx, 31, 0x135610u);
    ctx->pc = 0x13560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135608u;
    // 0x13560c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x135608u, 0x135610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135610u;
label_135610:
    // 0x135610: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135610u;
    {
        const bool branch_taken_0x135610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135610u;
        // 0x135614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135610) {
            ctx->pc = 0x13562Cu;
            goto label_13562c;
        }
    }
    ctx->pc = 0x135618u;
    // 0x135618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13561c: 0xc04d69a  jal         func_135A68
    ctx->pc = 0x13561Cu;
    SET_GPR_U32(ctx, 31, 0x135624u);
    ctx->pc = 0x135620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13561Cu;
    // 0x135620: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A68u, 0x13561Cu, 0x135624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135624u;
label_135624:
    // 0x135624: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x135624u;
    {
        const bool branch_taken_0x135624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135624u;
        // 0x135628: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135624) {
            ctx->pc = 0x13564Cu;
            goto label_13564c;
        }
    }
    ctx->pc = 0x13562Cu;
label_13562c:
    // 0x13562c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x13562cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x135630: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x135630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x135634: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x135634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x135638: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x135638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13563c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13563cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135640: 0xc046642  jal         func_119908
    ctx->pc = 0x135640u;
    SET_GPR_U32(ctx, 31, 0x135648u);
    ctx->pc = 0x135644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135640u;
    // 0x135644: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x135640u, 0x135648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135648u;
label_135648:
    // 0x135648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13564c:
    // 0x13564c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13564Cu;
    SET_GPR_U32(ctx, 31, 0x135654u);
    ctx->pc = 0x135650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13564Cu;
    // 0x135650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13564Cu, 0x135654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135654u;
label_135654:
    // 0x135654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135654u;
    {
        const bool branch_taken_0x135654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135654u;
        // 0x135658: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135654) {
            ctx->pc = 0x13566Cu;
            goto label_13566c;
        }
    }
    ctx->pc = 0x13565Cu;
label_13565c:
    // 0x13565c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135660: 0xc04d69a  jal         func_135A68
    ctx->pc = 0x135660u;
    SET_GPR_U32(ctx, 31, 0x135668u);
    ctx->pc = 0x135664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135660u;
    // 0x135664: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A68u, 0x135660u, 0x135668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135668u;
label_135668:
    // 0x135668: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x135668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13566c:
    // 0x13566c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13566cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x135670: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x135670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135674: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x135674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135678: 0x3e00008  jr          $ra
    ctx->pc = 0x135678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135678u;
        // 0x13567c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135680u;
}
