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

// Function: sub_0012E578
// Address: 0x12e578 - 0x12e7b0
void sub_0012E578_0x12e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E578_0x12e578");
#endif

    switch (ctx->pc) {
        case 0x12e5b4u: goto label_12e5b4;
        case 0x12e5c4u: goto label_12e5c4;
        case 0x12e5d4u: goto label_12e5d4;
        case 0x12e5dcu: goto label_12e5dc;
        case 0x12e5e8u: goto label_12e5e8;
        case 0x12e5f0u: goto label_12e5f0;
        case 0x12e604u: goto label_12e604;
        case 0x12e618u: goto label_12e618;
        case 0x12e620u: goto label_12e620;
        case 0x12e62cu: goto label_12e62c;
        case 0x12e638u: goto label_12e638;
        case 0x12e644u: goto label_12e644;
        case 0x12e660u: goto label_12e660;
        case 0x12e674u: goto label_12e674;
        case 0x12e680u: goto label_12e680;
        case 0x12e688u: goto label_12e688;
        case 0x12e694u: goto label_12e694;
        case 0x12e6a4u: goto label_12e6a4;
        case 0x12e6b4u: goto label_12e6b4;
        case 0x12e6c0u: goto label_12e6c0;
        case 0x12e6ccu: goto label_12e6cc;
        case 0x12e6e0u: goto label_12e6e0;
        case 0x12e6f4u: goto label_12e6f4;
        case 0x12e714u: goto label_12e714;
        case 0x12e72cu: goto label_12e72c;
        case 0x12e74cu: goto label_12e74c;
        case 0x12e760u: goto label_12e760;
        case 0x12e780u: goto label_12e780;
        default: break;
    }

    ctx->pc = 0x12e578u;

    // 0x12e578: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12e578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12e57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e588: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12e58c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e590: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12e590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12e594: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12e598: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12e598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e59c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e5a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e5a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12e5a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12e5ac: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x12E5ACu;
    SET_GPR_U32(ctx, 31, 0x12E5B4u);
    ctx->pc = 0x12E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5ACu;
    // 0x12e5b0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x12E5ACu, 0x12E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5B4u;
label_12e5b4:
    // 0x12e5b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5bc: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E5BCu;
    SET_GPR_U32(ctx, 31, 0x12E5C4u);
    ctx->pc = 0x12E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5BCu;
    // 0x12e5c0: 0x24050481  addiu       $a1, $zero, 0x481 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E5BCu, 0x12E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5C4u;
label_12e5c4:
    // 0x12e5c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12e5c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5c8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e5cc: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E5CCu;
    SET_GPR_U32(ctx, 31, 0x12E5D4u);
    ctx->pc = 0x12E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5CCu;
    // 0x12e5d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E5CCu, 0x12E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5D4u;
label_12e5d4:
    // 0x12e5d4: 0xc046144  jal         func_118510
    ctx->pc = 0x12E5D4u;
    SET_GPR_U32(ctx, 31, 0x12E5DCu);
    ctx->pc = 0x12E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5D4u;
    // 0x12e5d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12E5D4u, 0x12E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5DCu;
label_12e5dc:
    // 0x12e5dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5e0: 0xc046138  jal         func_1184E0
    ctx->pc = 0x12E5E0u;
    SET_GPR_U32(ctx, 31, 0x12E5E8u);
    ctx->pc = 0x12E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5E0u;
    // 0x12e5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x12E5E0u, 0x12E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5E8u;
label_12e5e8:
    // 0x12e5e8: 0xc046172  jal         func_1185C8
    ctx->pc = 0x12E5E8u;
    SET_GPR_U32(ctx, 31, 0x12E5F0u);
    ctx->pc = 0x12E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5E8u;
    // 0x12e5ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1185C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185C8u, 0x12E5E8u, 0x12E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E5F0u;
label_12e5f0:
    // 0x12e5f0: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x12e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12e5f4: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12E5F4u;
    {
        const bool branch_taken_0x12e5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5F4u;
        // 0x12e5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5f4) {
            ctx->pc = 0x12E638u;
            goto label_12e638;
        }
    }
    ctx->pc = 0x12E5FCu;
    // 0x12e5fc: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E5FCu;
    SET_GPR_U32(ctx, 31, 0x12E604u);
    ctx->pc = 0x12E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E5FCu;
    // 0x12e600: 0x2405048b  addiu       $a1, $zero, 0x48B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1163));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E5FCu, 0x12E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E604u;
label_12e604:
    // 0x12e604: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x12e604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e608: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e608u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e60c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x12e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12e610: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E610u;
    SET_GPR_U32(ctx, 31, 0x12E618u);
    ctx->pc = 0x12E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E610u;
    // 0x12e614: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E610u, 0x12E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E618u;
label_12e618:
    // 0x12e618: 0xc046172  jal         func_1185C8
    ctx->pc = 0x12E618u;
    SET_GPR_U32(ctx, 31, 0x12E620u);
    ctx->pc = 0x12E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E618u;
    // 0x12e61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1185C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1185C8u, 0x12E618u, 0x12E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E620u;
label_12e620:
    // 0x12e620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e624: 0xc046164  jal         func_118590
    ctx->pc = 0x12E624u;
    SET_GPR_U32(ctx, 31, 0x12E62Cu);
    ctx->pc = 0x12E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E624u;
    // 0x12e628: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x12E624u, 0x12E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E62Cu;
label_12e62c:
    // 0x12e62c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e630: 0xc046180  jal         func_118600
    ctx->pc = 0x12E630u;
    SET_GPR_U32(ctx, 31, 0x12E638u);
    ctx->pc = 0x12E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E630u;
    // 0x12e634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118600u, 0x12E630u, 0x12E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E638u;
label_12e638:
    // 0x12e638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e63c: 0xc04614c  jal         func_118530
    ctx->pc = 0x12E63Cu;
    SET_GPR_U32(ctx, 31, 0x12E644u);
    ctx->pc = 0x12E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E63Cu;
    // 0x12e640: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118530u, 0x12E63Cu, 0x12E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E644u;
label_12e644:
    // 0x12e644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e648: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x12e648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12e64c: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E64Cu;
    {
        const bool branch_taken_0x12e64c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E64Cu;
        // 0x12e650: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e64c) {
            ctx->pc = 0x12E680u;
            goto label_12e680;
        }
    }
    ctx->pc = 0x12E654u;
    // 0x12e654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e658: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E658u;
    SET_GPR_U32(ctx, 31, 0x12E660u);
    ctx->pc = 0x12E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E658u;
    // 0x12e65c: 0x24050499  addiu       $a1, $zero, 0x499 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E658u, 0x12E660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E660u;
label_12e660:
    // 0x12e660: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x12e660u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e664: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12e664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e668: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12e668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e66c: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E66Cu;
    SET_GPR_U32(ctx, 31, 0x12E674u);
    ctx->pc = 0x12E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E66Cu;
    // 0x12e670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E66Cu, 0x12E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E674u;
label_12e674:
    // 0x12e674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e678: 0xc046138  jal         func_1184E0
    ctx->pc = 0x12E678u;
    SET_GPR_U32(ctx, 31, 0x12E680u);
    ctx->pc = 0x12E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E678u;
    // 0x12e67c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x12E678u, 0x12E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E680u;
label_12e680:
    // 0x12e680: 0xc04615c  jal         func_118570
    ctx->pc = 0x12E680u;
    SET_GPR_U32(ctx, 31, 0x12E688u);
    ctx->pc = 0x12E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E680u;
    // 0x12e684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118570u, 0x12E680u, 0x12E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E688u;
label_12e688:
    // 0x12e688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e68c: 0xc046272  jal         func_1189C8
    ctx->pc = 0x12E68Cu;
    SET_GPR_U32(ctx, 31, 0x12E694u);
    ctx->pc = 0x12E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E68Cu;
    // 0x12e690: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x12E68Cu, 0x12E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E694u;
label_12e694:
    // 0x12e694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e698: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e69c: 0xc046154  jal         func_118550
    ctx->pc = 0x12E69Cu;
    SET_GPR_U32(ctx, 31, 0x12E6A4u);
    ctx->pc = 0x12E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E69Cu;
    // 0x12e6a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x12E69Cu, 0x12E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6A4u;
label_12e6a4:
    // 0x12e6a4: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x12E6A4u;
    {
        const bool branch_taken_0x12e6a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6A4u;
        // 0x12e6a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6a4) {
            ctx->pc = 0x12E6D4u;
            goto label_12e6d4;
        }
    }
    ctx->pc = 0x12E6ACu;
    // 0x12e6ac: 0xc046154  jal         func_118550
    ctx->pc = 0x12E6ACu;
    SET_GPR_U32(ctx, 31, 0x12E6B4u);
    ctx->pc = 0x12E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6ACu;
    // 0x12e6b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x12E6ACu, 0x12E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6B4u;
label_12e6b4:
    // 0x12e6b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6b8: 0xc046256  jal         func_118958
    ctx->pc = 0x12E6B8u;
    SET_GPR_U32(ctx, 31, 0x12E6C0u);
    ctx->pc = 0x12E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6B8u;
    // 0x12e6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12E6B8u, 0x12E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6C0u;
label_12e6c0:
    // 0x12e6c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6c4: 0xc046256  jal         func_118958
    ctx->pc = 0x12E6C4u;
    SET_GPR_U32(ctx, 31, 0x12E6CCu);
    ctx->pc = 0x12E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6C4u;
    // 0x12e6c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12E6C4u, 0x12E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6CCu;
label_12e6cc:
    // 0x12e6cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12E6CCu;
    {
        const bool branch_taken_0x12e6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6CCu;
        // 0x12e6d0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6cc) {
            ctx->pc = 0x12E6E4u;
            goto label_12e6e4;
        }
    }
    ctx->pc = 0x12E6D4u;
label_12e6d4:
    // 0x12e6d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6d8: 0xc046256  jal         func_118958
    ctx->pc = 0x12E6D8u;
    SET_GPR_U32(ctx, 31, 0x12E6E0u);
    ctx->pc = 0x12E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6D8u;
    // 0x12e6dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x12E6D8u, 0x12E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6E0u;
label_12e6e0:
    // 0x12e6e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12e6e4:
    // 0x12e6e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12e6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e6e8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e6ec: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E6ECu;
    SET_GPR_U32(ctx, 31, 0x12E6F4u);
    ctx->pc = 0x12E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6ECu;
    // 0x12e6f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E6ECu, 0x12E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6F4u;
label_12e6f4:
    // 0x12e6f4: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x12E6F4u;
    {
        const bool branch_taken_0x12e6f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e6f4) {
            ctx->pc = 0x12E768u;
            goto label_12e768;
        }
    }
    ctx->pc = 0x12E6FCu;
    // 0x12e6fc: 0x1640000d  bnez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x12E6FCu;
    {
        const bool branch_taken_0x12e6fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E6FCu;
        // 0x12e700: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e6fc) {
            ctx->pc = 0x12E734u;
            goto label_12e734;
        }
    }
    ctx->pc = 0x12E704u;
    // 0x12e704: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e708: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e70c: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E70Cu;
    SET_GPR_U32(ctx, 31, 0x12E714u);
    ctx->pc = 0x12E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E70Cu;
    // 0x12e710: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E70Cu, 0x12E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E714u;
label_12e714:
    // 0x12e714: 0x12e0001a  beqz        $s7, . + 4 + (0x1A << 2)
    ctx->pc = 0x12E714u;
    {
        const bool branch_taken_0x12e714 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E714u;
        // 0x12e718: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e714) {
            ctx->pc = 0x12E780u;
            goto label_12e780;
        }
    }
    ctx->pc = 0x12E71Cu;
    // 0x12e71c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e720: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e724: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E724u;
    SET_GPR_U32(ctx, 31, 0x12E72Cu);
    ctx->pc = 0x12E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E724u;
    // 0x12e728: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E724u, 0x12E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E72Cu;
label_12e72c:
    // 0x12e72c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12E72Cu;
    {
        const bool branch_taken_0x12e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E72Cu;
        // 0x12e730: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e72c) {
            ctx->pc = 0x12E784u;
            goto label_12e784;
        }
    }
    ctx->pc = 0x12E734u;
label_12e734:
    // 0x12e734: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E734u;
    {
        const bool branch_taken_0x12e734 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E734u;
        // 0x12e738: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e734) {
            ctx->pc = 0x12E74Cu;
            goto label_12e74c;
        }
    }
    ctx->pc = 0x12E73Cu;
    // 0x12e73c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e740: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e744: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E744u;
    SET_GPR_U32(ctx, 31, 0x12E74Cu);
    ctx->pc = 0x12E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E744u;
    // 0x12e748: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E744u, 0x12E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E74Cu;
label_12e74c:
    // 0x12e74c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e750: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12e750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e754: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e758: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E758u;
    SET_GPR_U32(ctx, 31, 0x12E760u);
    ctx->pc = 0x12E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E758u;
    // 0x12e75c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E758u, 0x12E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E760u;
label_12e760:
    // 0x12e760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E760u;
    {
        const bool branch_taken_0x12e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E760u;
        // 0x12e764: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e760) {
            ctx->pc = 0x12E784u;
            goto label_12e784;
        }
    }
    ctx->pc = 0x12E768u;
label_12e768:
    // 0x12e768: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E768u;
    {
        const bool branch_taken_0x12e768 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E768u;
        // 0x12e76c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e768) {
            ctx->pc = 0x12E780u;
            goto label_12e780;
        }
    }
    ctx->pc = 0x12E770u;
    // 0x12e770: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e774: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e778: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E778u;
    SET_GPR_U32(ctx, 31, 0x12E780u);
    ctx->pc = 0x12E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E778u;
    // 0x12e77c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E778u, 0x12E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E780u;
label_12e780:
    // 0x12e780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e784:
    // 0x12e784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e788: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e78c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e78cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e790: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12e790u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e794: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12e794u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e798: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12e798u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e79c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12e79cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12e7a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12e7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7A4u;
        // 0x12e7a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E7ACu;
    // 0x12e7ac: 0x0  nop
    ctx->pc = 0x12e7acu;
    // NOP
    ctx->pc = 0x12e7b0u;
}
