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

// Function: sub_002205C8
// Address: 0x2205c8 - 0x220770
void sub_002205C8_0x2205c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002205C8_0x2205c8");
#endif

    switch (ctx->pc) {
        case 0x2205fcu: goto label_2205fc;
        case 0x220610u: goto label_220610;
        case 0x220628u: goto label_220628;
        case 0x22063cu: goto label_22063c;
        case 0x220654u: goto label_220654;
        case 0x220668u: goto label_220668;
        case 0x220680u: goto label_220680;
        case 0x220694u: goto label_220694;
        case 0x2206acu: goto label_2206ac;
        case 0x2206c0u: goto label_2206c0;
        case 0x2206d8u: goto label_2206d8;
        case 0x2206ecu: goto label_2206ec;
        case 0x220704u: goto label_220704;
        case 0x220718u: goto label_220718;
        case 0x220730u: goto label_220730;
        case 0x220748u: goto label_220748;
        default: break;
    }

    ctx->pc = 0x2205c8u;

    // 0x2205c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2205c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2205cc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2205ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2205d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2205d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2205d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2205d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2205d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2205dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2205dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2205e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2205e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2205e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2205e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2205e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2205e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2205ec: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x2205ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x2205f0: 0x24a52848  addiu       $a1, $a1, 0x2848
    ctx->pc = 0x2205f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10312));
    // 0x2205f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2205F4u;
    SET_GPR_U32(ctx, 31, 0x2205FCu);
    ctx->pc = 0x2205F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2205F4u;
    // 0x2205f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2205F4u, 0x2205FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2205FCu;
label_2205fc:
    // 0x2205fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2205fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220600u;
    {
        const bool branch_taken_0x220600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220600u;
        // 0x220604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220600) {
            ctx->pc = 0x220618u;
            goto label_220618;
        }
    }
    ctx->pc = 0x220608u;
    // 0x220608: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220608u;
    SET_GPR_U32(ctx, 31, 0x220610u);
    ctx->pc = 0x22060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220608u;
    // 0x22060c: 0x26251410  addiu       $a1, $s1, 0x1410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220608u, 0x220610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220610u;
label_220610:
    // 0x220610: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x220610u;
    {
        const bool branch_taken_0x220610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220610u;
        // 0x220614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220610) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x220618u;
label_220618:
    // 0x220618: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22061c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220620: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220620u;
    SET_GPR_U32(ctx, 31, 0x220628u);
    ctx->pc = 0x220624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220620u;
    // 0x220624: 0x24a52850  addiu       $a1, $a1, 0x2850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220620u, 0x220628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220628u;
label_220628:
    // 0x220628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22062c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22062Cu;
    {
        const bool branch_taken_0x22062c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22062Cu;
        // 0x220630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22062c) {
            ctx->pc = 0x220644u;
            goto label_220644;
        }
    }
    ctx->pc = 0x220634u;
    // 0x220634: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220634u;
    SET_GPR_U32(ctx, 31, 0x22063Cu);
    ctx->pc = 0x220638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220634u;
    // 0x220638: 0x26251418  addiu       $a1, $s1, 0x1418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220634u, 0x22063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x22063Cu;
    {
        const bool branch_taken_0x22063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22063Cu;
        // 0x220640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22063c) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x220644u;
label_220644:
    // 0x220644: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22064c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22064Cu;
    SET_GPR_U32(ctx, 31, 0x220654u);
    ctx->pc = 0x220650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22064Cu;
    // 0x220650: 0x24a52860  addiu       $a1, $a1, 0x2860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22064Cu, 0x220654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220654u;
label_220654:
    // 0x220654: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220658u;
    {
        const bool branch_taken_0x220658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220658u;
        // 0x22065c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220658) {
            ctx->pc = 0x220670u;
            goto label_220670;
        }
    }
    ctx->pc = 0x220660u;
    // 0x220660: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220660u;
    SET_GPR_U32(ctx, 31, 0x220668u);
    ctx->pc = 0x220664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220660u;
    // 0x220664: 0x2625141c  addiu       $a1, $s1, 0x141C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220660u, 0x220668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220668u;
label_220668:
    // 0x220668: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x220668u;
    {
        const bool branch_taken_0x220668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220668u;
        // 0x22066c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220668) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x220670u;
label_220670:
    // 0x220670: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220678: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220678u;
    SET_GPR_U32(ctx, 31, 0x220680u);
    ctx->pc = 0x22067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220678u;
    // 0x22067c: 0x24a52870  addiu       $a1, $a1, 0x2870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220678u, 0x220680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220680u;
label_220680:
    // 0x220680: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220684u;
    {
        const bool branch_taken_0x220684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220684u;
        // 0x220688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220684) {
            ctx->pc = 0x22069Cu;
            goto label_22069c;
        }
    }
    ctx->pc = 0x22068Cu;
    // 0x22068c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22068Cu;
    SET_GPR_U32(ctx, 31, 0x220694u);
    ctx->pc = 0x220690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22068Cu;
    // 0x220690: 0x26251420  addiu       $a1, $s1, 0x1420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22068Cu, 0x220694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220694u;
label_220694:
    // 0x220694: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x220694u;
    {
        const bool branch_taken_0x220694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220694u;
        // 0x220698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220694) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x22069Cu;
label_22069c:
    // 0x22069c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22069cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2206a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2206a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2206A4u;
    SET_GPR_U32(ctx, 31, 0x2206ACu);
    ctx->pc = 0x2206A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206A4u;
    // 0x2206a8: 0x24a52880  addiu       $a1, $a1, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2206A4u, 0x2206ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206ACu;
label_2206ac:
    // 0x2206ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2206acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2206b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2206B0u;
    {
        const bool branch_taken_0x2206b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206B0u;
        // 0x2206b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206b0) {
            ctx->pc = 0x2206C8u;
            goto label_2206c8;
        }
    }
    ctx->pc = 0x2206B8u;
    // 0x2206b8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2206B8u;
    SET_GPR_U32(ctx, 31, 0x2206C0u);
    ctx->pc = 0x2206BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206B8u;
    // 0x2206bc: 0x26251424  addiu       $a1, $s1, 0x1424 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2206B8u, 0x2206C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206C0u;
label_2206c0:
    // 0x2206c0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2206C0u;
    {
        const bool branch_taken_0x2206c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206C0u;
        // 0x2206c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206c0) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x2206C8u;
label_2206c8:
    // 0x2206c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2206c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2206cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2206ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2206D0u;
    SET_GPR_U32(ctx, 31, 0x2206D8u);
    ctx->pc = 0x2206D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206D0u;
    // 0x2206d4: 0x24a52890  addiu       $a1, $a1, 0x2890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2206D0u, 0x2206D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206D8u;
label_2206d8:
    // 0x2206d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2206d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2206dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2206DCu;
    {
        const bool branch_taken_0x2206dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206DCu;
        // 0x2206e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206dc) {
            ctx->pc = 0x2206F4u;
            goto label_2206f4;
        }
    }
    ctx->pc = 0x2206E4u;
    // 0x2206e4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2206E4u;
    SET_GPR_U32(ctx, 31, 0x2206ECu);
    ctx->pc = 0x2206E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206E4u;
    // 0x2206e8: 0x26251428  addiu       $a1, $s1, 0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2206E4u, 0x2206ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2206ECu;
label_2206ec:
    // 0x2206ec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2206ECu;
    {
        const bool branch_taken_0x2206ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206ECu;
        // 0x2206f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2206ec) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x2206F4u;
label_2206f4:
    // 0x2206f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2206f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2206f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2206f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2206fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2206FCu;
    SET_GPR_U32(ctx, 31, 0x220704u);
    ctx->pc = 0x220700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206FCu;
    // 0x220700: 0x24a528a0  addiu       $a1, $a1, 0x28A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2206FCu, 0x220704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220704u;
label_220704:
    // 0x220704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220708u;
    {
        const bool branch_taken_0x220708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220708) {
            ctx->pc = 0x220720u;
            goto label_220720;
        }
    }
    ctx->pc = 0x220710u;
    // 0x220710: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220710u;
    SET_GPR_U32(ctx, 31, 0x220718u);
    ctx->pc = 0x220714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220710u;
    // 0x220714: 0x2625142c  addiu       $a1, $s1, 0x142C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220710u, 0x220718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220718u;
label_220718:
    // 0x220718: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x220718u;
    {
        const bool branch_taken_0x220718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220718u;
        // 0x22071c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220718) {
            ctx->pc = 0x220758u;
            goto label_220758;
        }
    }
    ctx->pc = 0x220720u;
label_220720:
    // 0x220720: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220728: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220728u;
    SET_GPR_U32(ctx, 31, 0x220730u);
    ctx->pc = 0x22072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220728u;
    // 0x22072c: 0x24a528b8  addiu       $a1, $a1, 0x28B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220728u, 0x220730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220730u;
label_220730:
    // 0x220730: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220734: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220734u;
    {
        const bool branch_taken_0x220734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220734u;
        // 0x220738: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220734) {
            ctx->pc = 0x220750u;
            goto label_220750;
        }
    }
    ctx->pc = 0x22073Cu;
    // 0x22073c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22073cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220740: 0xc087ef6  jal         func_21FBD8
    ctx->pc = 0x220740u;
    SET_GPR_U32(ctx, 31, 0x220748u);
    ctx->pc = 0x220744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220740u;
    // 0x220744: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FBD8u, 0x220740u, 0x220748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220748u;
label_220748:
    // 0x220748: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x220748u;
    {
        const bool branch_taken_0x220748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220748u;
        // 0x22074c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220748) {
            ctx->pc = 0x22075Cu;
            goto label_22075c;
        }
    }
    ctx->pc = 0x220750u;
label_220750:
    // 0x220750: 0xa2221430  sb          $v0, 0x1430($s1)
    ctx->pc = 0x220750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5168), (uint8_t)GPR_U32(ctx, 2));
    // 0x220754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220758:
    // 0x220758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22075c:
    // 0x22075c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22075cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220760: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220764: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220768: 0x3e00008  jr          $ra
    ctx->pc = 0x220768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220768u;
        // 0x22076c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220770u;
}
