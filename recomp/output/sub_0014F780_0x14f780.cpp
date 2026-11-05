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

// Function: sub_0014F780
// Address: 0x14f780 - 0x14f8f8
void sub_0014F780_0x14f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F780_0x14f780");
#endif

    switch (ctx->pc) {
        case 0x14f7ccu: goto label_14f7cc;
        case 0x14f7d4u: goto label_14f7d4;
        case 0x14f7dcu: goto label_14f7dc;
        case 0x14f7e4u: goto label_14f7e4;
        case 0x14f7ecu: goto label_14f7ec;
        case 0x14f7fcu: goto label_14f7fc;
        case 0x14f808u: goto label_14f808;
        case 0x14f818u: goto label_14f818;
        case 0x14f82cu: goto label_14f82c;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f848u: goto label_14f848;
        case 0x14f850u: goto label_14f850;
        case 0x14f85cu: goto label_14f85c;
        case 0x14f864u: goto label_14f864;
        case 0x14f86cu: goto label_14f86c;
        case 0x14f87cu: goto label_14f87c;
        case 0x14f888u: goto label_14f888;
        case 0x14f898u: goto label_14f898;
        case 0x14f8b4u: goto label_14f8b4;
        case 0x14f8dcu: goto label_14f8dc;
        default: break;
    }

    ctx->pc = 0x14f780u;

    // 0x14f780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14f788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f790: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14f794: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14f798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f79c: 0x8e2308a0  lw          $v1, 0x8A0($s1)
    ctx->pc = 0x14f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2208)));
    // 0x14f7a0: 0x963008b6  lhu         $s0, 0x8B6($s1)
    ctx->pc = 0x14f7a0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2230)));
    // 0x14f7a4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x14f7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x14f7a8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x14F7A8u;
    {
        const bool branch_taken_0x14f7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7A8u;
        // 0x14f7ac: 0x963308b4  lhu         $s3, 0x8B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7a8) {
            ctx->pc = 0x14F898u;
            goto label_14f898;
        }
    }
    ctx->pc = 0x14F7B0u;
    // 0x14f7b0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x14f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x14f7b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14f7b8: 0x2442eb70  addiu       $v0, $v0, -0x1490
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962032));
    // 0x14f7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f7c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f7c4: 0x800008  jr          $a0
    ctx->pc = 0x14F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F7CCu: goto label_14f7cc;
            case 0x14F7DCu: goto label_14f7dc;
            case 0x14F7ECu: goto label_14f7ec;
            case 0x14F850u: goto label_14f850;
            case 0x14F864u: goto label_14f864;
            case 0x14F874u: goto label_14f874;
            case 0x14F890u: goto label_14f890;
            case 0x14F898u: goto label_14f898;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F7C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14F7CCu;
label_14f7cc:
    // 0x14f7cc: 0xc053e3e  jal         func_14F8F8
    ctx->pc = 0x14F7CCu;
    SET_GPR_U32(ctx, 31, 0x14F7D4u);
    ctx->pc = 0x14F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F7CCu;
    // 0x14f7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F8F8u, 0x14F7CCu, 0x14F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7D4u;
label_14f7d4:
    // 0x14f7d4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x14F7D4u;
    {
        const bool branch_taken_0x14f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7D4u;
        // 0x14f7d8: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7d4) {
            ctx->pc = 0x14F89Cu;
            goto label_14f89c;
        }
    }
    ctx->pc = 0x14F7DCu;
label_14f7dc:
    // 0x14f7dc: 0xc053e8a  jal         func_14FA28
    ctx->pc = 0x14F7DCu;
    SET_GPR_U32(ctx, 31, 0x14F7E4u);
    ctx->pc = 0x14F7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F7DCu;
    // 0x14f7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FA28u, 0x14F7DCu, 0x14F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7E4u;
label_14f7e4:
    // 0x14f7e4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14F7E4u;
    {
        const bool branch_taken_0x14f7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F7E4u;
        // 0x14f7e8: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7e4) {
            ctx->pc = 0x14F89Cu;
            goto label_14f89c;
        }
    }
    ctx->pc = 0x14F7ECu;
label_14f7ec:
    // 0x14f7ec: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f7ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f7f4: 0xc04da44  jal         func_136910
    ctx->pc = 0x14F7F4u;
    SET_GPR_U32(ctx, 31, 0x14F7FCu);
    ctx->pc = 0x14F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F7F4u;
    // 0x14f7f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136910u, 0x14F7F4u, 0x14F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F7FCu;
label_14f7fc:
    // 0x14f7fc: 0x8e2508c0  lw          $a1, 0x8C0($s1)
    ctx->pc = 0x14f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2240)));
    // 0x14f800: 0xc05457e  jal         func_1515F8
    ctx->pc = 0x14F800u;
    SET_GPR_U32(ctx, 31, 0x14F808u);
    ctx->pc = 0x14F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F800u;
    // 0x14f804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515F8u, 0x14F800u, 0x14F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F808u;
label_14f808:
    // 0x14f808: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F808u;
    {
        const bool branch_taken_0x14f808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F808u;
        // 0x14f80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f808) {
            ctx->pc = 0x14F820u;
            goto label_14f820;
        }
    }
    ctx->pc = 0x14F810u;
    // 0x14f810: 0xc053ec0  jal         func_14FB00
    ctx->pc = 0x14F810u;
    SET_GPR_U32(ctx, 31, 0x14F818u);
    ctx->pc = 0x14F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F810u;
    // 0x14f814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB00u, 0x14F810u, 0x14F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F818u;
label_14f818:
    // 0x14f818: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14F818u;
    {
        const bool branch_taken_0x14f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F818u;
        // 0x14f81c: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f818) {
            ctx->pc = 0x14F89Cu;
            goto label_14f89c;
        }
    }
    ctx->pc = 0x14F820u;
label_14f820:
    // 0x14f820: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f820u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f824: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14F824u;
    SET_GPR_U32(ctx, 31, 0x14F82Cu);
    ctx->pc = 0x14F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F824u;
    // 0x14f828: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14F824u, 0x14F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F82Cu;
label_14f82c:
    // 0x14f82c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f82cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f834: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14F834u;
    SET_GPR_U32(ctx, 31, 0x14F83Cu);
    ctx->pc = 0x14F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F834u;
    // 0x14f838: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14F834u, 0x14F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F83Cu;
label_14f83c:
    // 0x14f83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f840: 0xc054498  jal         func_151260
    ctx->pc = 0x14F840u;
    SET_GPR_U32(ctx, 31, 0x14F848u);
    ctx->pc = 0x14F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F840u;
    // 0x14f844: 0x8c8508c0  lw          $a1, 0x8C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151260u, 0x14F840u, 0x14F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F848u;
label_14f848:
    // 0x14f848: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14F848u;
    {
        const bool branch_taken_0x14f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F848u;
        // 0x14f84c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f848) {
            ctx->pc = 0x14F8E0u;
            goto label_14f8e0;
        }
    }
    ctx->pc = 0x14F850u;
label_14f850:
    // 0x14f850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f854: 0xc054036  jal         func_1500D8
    ctx->pc = 0x14F854u;
    SET_GPR_U32(ctx, 31, 0x14F85Cu);
    ctx->pc = 0x14F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F854u;
    // 0x14f858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500D8u, 0x14F854u, 0x14F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F85Cu;
label_14f85c:
    // 0x14f85c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14F85Cu;
    {
        const bool branch_taken_0x14f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F85Cu;
        // 0x14f860: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f85c) {
            ctx->pc = 0x14F89Cu;
            goto label_14f89c;
        }
    }
    ctx->pc = 0x14F864u;
label_14f864:
    // 0x14f864: 0xc054072  jal         func_1501C8
    ctx->pc = 0x14F864u;
    SET_GPR_U32(ctx, 31, 0x14F86Cu);
    ctx->pc = 0x14F868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F864u;
    // 0x14f868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501C8u, 0x14F864u, 0x14F86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F86Cu;
label_14f86c:
    // 0x14f86c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14F86Cu;
    {
        const bool branch_taken_0x14f86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F86Cu;
        // 0x14f870: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f86c) {
            ctx->pc = 0x14F89Cu;
            goto label_14f89c;
        }
    }
    ctx->pc = 0x14F874u;
label_14f874:
    // 0x14f874: 0xc05410a  jal         func_150428
    ctx->pc = 0x14F874u;
    SET_GPR_U32(ctx, 31, 0x14F87Cu);
    ctx->pc = 0x14F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F874u;
    // 0x14f878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150428u, 0x14F874u, 0x14F87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F87Cu;
label_14f87c:
    // 0x14f87c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14f87cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14f880: 0xc053c4e  jal         func_14F138
    ctx->pc = 0x14F880u;
    SET_GPR_U32(ctx, 31, 0x14F888u);
    ctx->pc = 0x14F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F880u;
    // 0x14f884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F138u, 0x14F880u, 0x14F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F888u;
label_14f888:
    // 0x14f888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F888u;
    {
        const bool branch_taken_0x14f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F888u;
        // 0x14f88c: 0x2131023  subu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f888) {
            ctx->pc = 0x14F89Cu;
            goto label_14f89c;
        }
    }
    ctx->pc = 0x14F890u;
label_14f890:
    // 0x14f890: 0xc05422c  jal         func_1508B0
    ctx->pc = 0x14F890u;
    SET_GPR_U32(ctx, 31, 0x14F898u);
    ctx->pc = 0x14F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F890u;
    // 0x14f894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508B0u, 0x14F890u, 0x14F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F898u;
label_14f898:
    // 0x14f898: 0x2131023  subu        $v0, $s0, $s3
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_14f89c:
    // 0x14f89c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14f89cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8a0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14f8a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14f8a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14F8A4u;
    {
        const bool branch_taken_0x14f8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8A4u;
        // 0x14f8a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8a4) {
            ctx->pc = 0x14F8C8u;
            goto label_14f8c8;
        }
    }
    ctx->pc = 0x14F8ACu;
    // 0x14f8ac: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14F8ACu;
    SET_GPR_U32(ctx, 31, 0x14F8B4u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14F8ACu, 0x14F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8B4u;
label_14f8b4:
    // 0x14f8b4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x14f8b4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14f8b8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F8B8u;
    {
        const bool branch_taken_0x14f8b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8b8) {
            ctx->pc = 0x14F8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F8B8u;
            // 0x14f8bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F8C0u;
            goto label_14f8c0;
        }
    }
    ctx->pc = 0x14F8C0u;
label_14f8c0:
    // 0x14f8c0: 0x1810  mfhi        $v1
    ctx->pc = 0x14f8c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14f8c4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x14f8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_14f8c8:
    // 0x14f8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8cc: 0x733021  addu        $a2, $v1, $s3
    ctx->pc = 0x14f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14f8d0: 0x9085046c  lbu         $a1, 0x46C($a0)
    ctx->pc = 0x14f8d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x14f8d4: 0xc053b0c  jal         func_14EC30
    ctx->pc = 0x14F8D4u;
    SET_GPR_U32(ctx, 31, 0x14F8DCu);
    ctx->pc = 0x14F8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F8D4u;
    // 0x14f8d8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC30u, 0x14F8D4u, 0x14F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F8DCu;
label_14f8dc:
    // 0x14f8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14f8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14f8e0:
    // 0x14f8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14f8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f8e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14f8e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f8e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14f8e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f8ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8F0u;
        // 0x14f8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F8F8u;
}
