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

// Function: sub_0015A2F8
// Address: 0x15a2f8 - 0x15a6e0
void sub_0015A2F8_0x15a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A2F8_0x15a2f8");
#endif

    switch (ctx->pc) {
        case 0x15a338u: goto label_15a338;
        case 0x15a360u: goto label_15a360;
        case 0x15a370u: goto label_15a370;
        case 0x15a3a4u: goto label_15a3a4;
        case 0x15a3b4u: goto label_15a3b4;
        case 0x15a3bcu: goto label_15a3bc;
        case 0x15a3ccu: goto label_15a3cc;
        case 0x15a3dcu: goto label_15a3dc;
        case 0x15a3ecu: goto label_15a3ec;
        case 0x15a3fcu: goto label_15a3fc;
        case 0x15a408u: goto label_15a408;
        case 0x15a418u: goto label_15a418;
        case 0x15a428u: goto label_15a428;
        case 0x15a434u: goto label_15a434;
        case 0x15a448u: goto label_15a448;
        case 0x15a478u: goto label_15a478;
        case 0x15a4e0u: goto label_15a4e0;
        case 0x15a504u: goto label_15a504;
        case 0x15a538u: goto label_15a538;
        case 0x15a548u: goto label_15a548;
        case 0x15a55cu: goto label_15a55c;
        case 0x15a590u: goto label_15a590;
        case 0x15a5a4u: goto label_15a5a4;
        case 0x15a5c4u: goto label_15a5c4;
        case 0x15a5d8u: goto label_15a5d8;
        case 0x15a5e4u: goto label_15a5e4;
        case 0x15a5f4u: goto label_15a5f4;
        case 0x15a600u: goto label_15a600;
        case 0x15a634u: goto label_15a634;
        case 0x15a654u: goto label_15a654;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a698u: goto label_15a698;
        default: break;
    }

    ctx->pc = 0x15a2f8u;

    // 0x15a2f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15a300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15a30c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15a310: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15a314: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15a318: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15a31c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x15a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x15a320: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a324: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x15A324u;
    {
        const bool branch_taken_0x15a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A324u;
        // 0x15a328: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a324) {
            ctx->pc = 0x15A6B8u;
            goto label_15a6b8;
        }
    }
    ctx->pc = 0x15A32Cu;
    // 0x15a32c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15a32cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a330: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x15a330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a334: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15a334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a338:
    // 0x15a338: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x15a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15a33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a340: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x15a340u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a344: 0x1280005b  beqz        $s4, . + 4 + (0x5B << 2)
    ctx->pc = 0x15A344u;
    {
        const bool branch_taken_0x15a344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A344u;
        // 0x15a348: 0x26530001  addiu       $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a344) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A34Cu;
    // 0x15a34c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x15a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x15a350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a354: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x15a354u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a358: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x15A358u;
    SET_GPR_U32(ctx, 31, 0x15A360u);
    ctx->pc = 0x15A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A358u;
    // 0x15a35c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x15A358u, 0x15A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A360u;
label_15a360:
    // 0x15a360: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x15A360u;
    {
        const bool branch_taken_0x15a360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A360u;
        // 0x15a364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a360) {
            ctx->pc = 0x15A428u;
            goto label_15a428;
        }
    }
    ctx->pc = 0x15A368u;
    // 0x15a368: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x15A368u;
    SET_GPR_U32(ctx, 31, 0x15A370u);
    ctx->pc = 0x15A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A368u;
    // 0x15a36c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x15A368u, 0x15A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A370u;
label_15a370:
    // 0x15a370: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a374: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15a378: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15A378u;
    {
        const bool branch_taken_0x15a378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A378u;
        // 0x15a37c: 0x28620007  slti        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a378) {
            ctx->pc = 0x15A428u;
            goto label_15a428;
        }
    }
    ctx->pc = 0x15A380u;
    // 0x15a380: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15A380u;
    {
        const bool branch_taken_0x15a380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A380u;
        // 0x15a384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a380) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A388u;
    // 0x15a388: 0x2862000b  slti        $v0, $v1, 0xB
    ctx->pc = 0x15a388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x15a38c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x15A38Cu;
    {
        const bool branch_taken_0x15a38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A38Cu;
        // 0x15a390: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a38c) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A394u;
    // 0x15a394: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15A394u;
    {
        const bool branch_taken_0x15a394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a394) {
            ctx->pc = 0x15A420u;
            goto label_15a420;
        }
    }
    ctx->pc = 0x15A39Cu;
    // 0x15a39c: 0xc057982  jal         func_15E608
    ctx->pc = 0x15A39Cu;
    SET_GPR_U32(ctx, 31, 0x15A3A4u);
    ctx->pc = 0x15A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A39Cu;
    // 0x15a3a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E608u, 0x15A39Cu, 0x15A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3A4u;
label_15a3a4:
    // 0x15a3a4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15A3A4u;
    {
        const bool branch_taken_0x15a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3A4u;
        // 0x15a3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3a4) {
            ctx->pc = 0x15A42Cu;
            goto label_15a42c;
        }
    }
    ctx->pc = 0x15A3ACu;
    // 0x15a3ac: 0xc056f14  jal         func_15BC50
    ctx->pc = 0x15A3ACu;
    SET_GPR_U32(ctx, 31, 0x15A3B4u);
    ctx->pc = 0x15A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3ACu;
    // 0x15a3b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC50u, 0x15A3ACu, 0x15A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3B4u;
label_15a3b4:
    // 0x15a3b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15A3B4u;
    {
        const bool branch_taken_0x15a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3B4u;
        // 0x15a3b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3b4) {
            ctx->pc = 0x15A42Cu;
            goto label_15a42c;
        }
    }
    ctx->pc = 0x15A3BCu;
label_15a3bc:
    // 0x15a3bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3c4: 0xc04d6fe  jal         func_135BF8
    ctx->pc = 0x15A3C4u;
    SET_GPR_U32(ctx, 31, 0x15A3CCu);
    ctx->pc = 0x15A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3C4u;
    // 0x15a3c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x15A3C4u, 0x15A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3CCu;
label_15a3cc:
    // 0x15a3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3d4: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x15A3D4u;
    SET_GPR_U32(ctx, 31, 0x15A3DCu);
    ctx->pc = 0x15A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3D4u;
    // 0x15a3d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x15A3D4u, 0x15A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3DCu;
label_15a3dc:
    // 0x15a3dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15a3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3e4: 0xc04f124  jal         func_13C490
    ctx->pc = 0x15A3E4u;
    SET_GPR_U32(ctx, 31, 0x15A3ECu);
    ctx->pc = 0x15A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3E4u;
    // 0x15a3e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x15A3E4u, 0x15A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3ECu;
label_15a3ec:
    // 0x15a3ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15a3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a3f4: 0xc04f118  jal         func_13C460
    ctx->pc = 0x15A3F4u;
    SET_GPR_U32(ctx, 31, 0x15A3FCu);
    ctx->pc = 0x15A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A3F4u;
    // 0x15a3f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x15A3F4u, 0x15A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3FCu;
label_15a3fc:
    // 0x15a3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a400: 0xc056b32  jal         func_15ACC8
    ctx->pc = 0x15A400u;
    SET_GPR_U32(ctx, 31, 0x15A408u);
    ctx->pc = 0x15A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A400u;
    // 0x15a404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ACC8u, 0x15A400u, 0x15A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A408u;
label_15a408:
    // 0x15a408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a40c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a410: 0xc056b76  jal         func_15ADD8
    ctx->pc = 0x15A410u;
    SET_GPR_U32(ctx, 31, 0x15A418u);
    ctx->pc = 0x15A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A410u;
    // 0x15a414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADD8u, 0x15A410u, 0x15A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A418u;
label_15a418:
    // 0x15a418: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15A418u;
    {
        const bool branch_taken_0x15a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A418u;
        // 0x15a41c: 0x327200ff  andi        $s2, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a418) {
            ctx->pc = 0x15A4B8u;
            goto label_15a4b8;
        }
    }
    ctx->pc = 0x15A420u;
label_15a420:
    // 0x15a420: 0xc056f14  jal         func_15BC50
    ctx->pc = 0x15A420u;
    SET_GPR_U32(ctx, 31, 0x15A428u);
    ctx->pc = 0x15A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A420u;
    // 0x15a424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC50u, 0x15A420u, 0x15A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A428u;
label_15a428:
    // 0x15a428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a42c:
    // 0x15a42c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x15A42Cu;
    SET_GPR_U32(ctx, 31, 0x15A434u);
    ctx->pc = 0x15A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A42Cu;
    // 0x15a430: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x15A42Cu, 0x15A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A434u;
label_15a434:
    // 0x15a434: 0x1456001f  bne         $v0, $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x15A434u;
    {
        const bool branch_taken_0x15a434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x15A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A434u;
        // 0x15a438: 0x26530001  addiu       $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a434) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A43Cu;
    // 0x15a43c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a440: 0xc056b1e  jal         func_15AC78
    ctx->pc = 0x15A440u;
    SET_GPR_U32(ctx, 31, 0x15A448u);
    ctx->pc = 0x15A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A440u;
    // 0x15a444: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC78u, 0x15A440u, 0x15A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A448u;
label_15a448:
    // 0x15a448: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x15A448u;
    {
        const bool branch_taken_0x15a448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a448) {
            ctx->pc = 0x15A44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A448u;
            // 0x15a44c: 0x327200ff  andi        $s2, $s3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B8u;
            goto label_15a4b8;
        }
    }
    ctx->pc = 0x15A450u;
    // 0x15a450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a454: 0x922202a8  lbu         $v0, 0x2A8($s1)
    ctx->pc = 0x15a454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x15a458: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15A458u;
    {
        const bool branch_taken_0x15a458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A458u;
        // 0x15a45c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a458) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A460u;
    // 0x15a460: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x15a460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a464: 0x26280228  addiu       $t0, $s1, 0x228
    ctx->pc = 0x15a464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x15a468: 0x2627022c  addiu       $a3, $s1, 0x22C
    ctx->pc = 0x15a468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
    // 0x15a46c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x15a46cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a470: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x15a470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x15a474: 0x0  nop
    ctx->pc = 0x15a474u;
    // NOP
label_15a478:
    // 0x15a478: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x15a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x15a47c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15a47cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a480: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A480u;
    {
        const bool branch_taken_0x15a480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A480u;
        // 0x15a484: 0xe31021  addu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a480) {
            ctx->pc = 0x15A498u;
            goto label_15a498;
        }
    }
    ctx->pc = 0x15A488u;
    // 0x15a488: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x15a488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15a48c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a490: 0x108affca  beq         $a0, $t2, . + 4 + (-0x36 << 2)
    ctx->pc = 0x15A490u;
    {
        const bool branch_taken_0x15a490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x15A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A490u;
        // 0x15a494: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a490) {
            ctx->pc = 0x15A3BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a3bc;
        }
    }
    ctx->pc = 0x15A498u;
label_15a498:
    // 0x15a498: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15a49c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x15a49cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a4a0: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x15a4a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15a4a4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A4A4u;
    {
        const bool branch_taken_0x15a4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a4a4) {
            ctx->pc = 0x15A4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A4A4u;
            // 0x15a4a8: 0x327200ff  andi        $s2, $s3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A4B8u;
            goto label_15a4b8;
        }
    }
    ctx->pc = 0x15A4ACu;
    // 0x15a4ac: 0x14c9fff2  bne         $a2, $t1, . + 4 + (-0xE << 2)
    ctx->pc = 0x15A4ACu;
    {
        const bool branch_taken_0x15a4ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x15A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4ACu;
        // 0x15a4b0: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4ac) {
            ctx->pc = 0x15A478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a478;
        }
    }
    ctx->pc = 0x15A4B4u;
label_15a4b4:
    // 0x15a4b4: 0x327200ff  andi        $s2, $s3, 0xFF
    ctx->pc = 0x15a4b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_15a4b8:
    // 0x15a4b8: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x15a4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15a4bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A4BCu;
    {
        const bool branch_taken_0x15a4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4BCu;
        // 0x15a4c0: 0x92230009  lbu         $v1, 0x9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4bc) {
            ctx->pc = 0x15A4CCu;
            goto label_15a4cc;
        }
    }
    ctx->pc = 0x15A4C4u;
    // 0x15a4c4: 0x56a3ff9c  bnel        $s5, $v1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x15A4C4u;
    {
        const bool branch_taken_0x15a4c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a4c4) {
            ctx->pc = 0x15A4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A4C4u;
            // 0x15a4c8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a338;
        }
    }
    ctx->pc = 0x15A4CCu;
label_15a4cc:
    // 0x15a4cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15a4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4d0: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x15A4D0u;
    {
        const bool branch_taken_0x15a4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4D0u;
        // 0x15a4d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4d0) {
            ctx->pc = 0x15A6B8u;
            goto label_15a6b8;
        }
    }
    ctx->pc = 0x15A4D8u;
    // 0x15a4d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15a4dc: 0x0  nop
    ctx->pc = 0x15a4dcu;
    // NOP
label_15a4e0:
    // 0x15a4e0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15a4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a4e8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a4ec: 0x1260006a  beqz        $s3, . + 4 + (0x6A << 2)
    ctx->pc = 0x15A4ECu;
    {
        const bool branch_taken_0x15a4ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4ECu;
        // 0x15a4f0: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4ec) {
            ctx->pc = 0x15A698u;
            goto label_15a698;
        }
    }
    ctx->pc = 0x15A4F4u;
    // 0x15a4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a4f8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x15a4f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a4fc: 0xc04f112  jal         func_13C448
    ctx->pc = 0x15A4FCu;
    SET_GPR_U32(ctx, 31, 0x15A504u);
    ctx->pc = 0x15A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A4FCu;
    // 0x15a500: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x15A4FCu, 0x15A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A504u;
label_15a504:
    // 0x15a504: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x15A504u;
    {
        const bool branch_taken_0x15a504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A504u;
        // 0x15a508: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a504) {
            ctx->pc = 0x15A69Cu;
            goto label_15a69c;
        }
    }
    ctx->pc = 0x15A50Cu;
    // 0x15a50c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15a510: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15a510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15a514: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15a514u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a518: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15a51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a520: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15a524: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x15A524u;
    {
        const bool branch_taken_0x15a524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A524u;
        // 0x15a528: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a524) {
            ctx->pc = 0x15A698u;
            goto label_15a698;
        }
    }
    ctx->pc = 0x15A52Cu;
    // 0x15a52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a530: 0xc056b1e  jal         func_15AC78
    ctx->pc = 0x15A530u;
    SET_GPR_U32(ctx, 31, 0x15A538u);
    ctx->pc = 0x15A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A530u;
    // 0x15a534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AC78u, 0x15A530u, 0x15A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A538u;
label_15a538:
    // 0x15a538: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A538u;
    {
        const bool branch_taken_0x15a538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A538u;
        // 0x15a53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a538) {
            ctx->pc = 0x15A550u;
            goto label_15a550;
        }
    }
    ctx->pc = 0x15A540u;
    // 0x15a540: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x15A540u;
    SET_GPR_U32(ctx, 31, 0x15A548u);
    ctx->pc = 0x15A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A540u;
    // 0x15a544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x15A540u, 0x15A548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A548u;
label_15a548:
    // 0x15a548: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x15A548u;
    {
        const bool branch_taken_0x15a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A548u;
        // 0x15a54c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a548) {
            ctx->pc = 0x15A69Cu;
            goto label_15a69c;
        }
    }
    ctx->pc = 0x15A550u;
label_15a550:
    // 0x15a550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a554: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x15A554u;
    SET_GPR_U32(ctx, 31, 0x15A55Cu);
    ctx->pc = 0x15A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A554u;
    // 0x15a558: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x15A554u, 0x15A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A55Cu;
label_15a55c:
    // 0x15a55c: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x15a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x15a560: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x15a560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x15a564: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15A564u;
    {
        const bool branch_taken_0x15a564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A564u;
        // 0x15a568: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a564) {
            ctx->pc = 0x15A5D8u;
            goto label_15a5d8;
        }
    }
    ctx->pc = 0x15A56Cu;
    // 0x15a56c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15a570: 0x2442ee50  addiu       $v0, $v0, -0x11B0
    ctx->pc = 0x15a570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
    // 0x15a574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a578: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15a578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a57c: 0x800008  jr          $a0
    ctx->pc = 0x15A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A584u: goto label_15a584;
            case 0x15A598u: goto label_15a598;
            case 0x15A5ACu: goto label_15a5ac;
            case 0x15A5CCu: goto label_15a5cc;
            case 0x15A5D8u: goto label_15a5d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A57Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15A584u;
label_15a584:
    // 0x15a584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a588: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x15A588u;
    SET_GPR_U32(ctx, 31, 0x15A590u);
    ctx->pc = 0x15A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A588u;
    // 0x15a58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x15A588u, 0x15A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A590u;
label_15a590:
    // 0x15a590: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15A590u;
    {
        const bool branch_taken_0x15a590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A590u;
        // 0x15a594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a590) {
            ctx->pc = 0x15A5DCu;
            goto label_15a5dc;
        }
    }
    ctx->pc = 0x15A598u;
label_15a598:
    // 0x15a598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a59c: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x15A59Cu;
    SET_GPR_U32(ctx, 31, 0x15A5A4u);
    ctx->pc = 0x15A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A59Cu;
    // 0x15a5a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x15A59Cu, 0x15A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5A4u;
label_15a5a4:
    // 0x15a5a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15A5A4u;
    {
        const bool branch_taken_0x15a5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5A4u;
        // 0x15a5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5a4) {
            ctx->pc = 0x15A5DCu;
            goto label_15a5dc;
        }
    }
    ctx->pc = 0x15A5ACu;
label_15a5ac:
    // 0x15a5ac: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x15a5b0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15A5B0u;
    {
        const bool branch_taken_0x15a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5B0u;
        // 0x15a5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5b0) {
            ctx->pc = 0x15A5DCu;
            goto label_15a5dc;
        }
    }
    ctx->pc = 0x15A5B8u;
    // 0x15a5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5bc: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x15A5BCu;
    SET_GPR_U32(ctx, 31, 0x15A5C4u);
    ctx->pc = 0x15A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5BCu;
    // 0x15a5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x15A5BCu, 0x15A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5C4u;
label_15a5c4:
    // 0x15a5c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15A5C4u;
    {
        const bool branch_taken_0x15a5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5C4u;
        // 0x15a5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5c4) {
            ctx->pc = 0x15A5DCu;
            goto label_15a5dc;
        }
    }
    ctx->pc = 0x15A5CCu;
label_15a5cc:
    // 0x15a5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5d0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x15A5D0u;
    SET_GPR_U32(ctx, 31, 0x15A5D8u);
    ctx->pc = 0x15A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5D0u;
    // 0x15a5d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x15A5D0u, 0x15A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5D8u;
label_15a5d8:
    // 0x15a5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a5dc:
    // 0x15a5dc: 0xc056b52  jal         func_15AD48
    ctx->pc = 0x15A5DCu;
    SET_GPR_U32(ctx, 31, 0x15A5E4u);
    ctx->pc = 0x15A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5DCu;
    // 0x15a5e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AD48u, 0x15A5DCu, 0x15A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5E4u;
label_15a5e4:
    // 0x15a5e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A5E4u;
    {
        const bool branch_taken_0x15a5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A5E4u;
        // 0x15a5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a5e4) {
            ctx->pc = 0x15A5F4u;
            goto label_15a5f4;
        }
    }
    ctx->pc = 0x15A5ECu;
    // 0x15a5ec: 0xc057fd4  jal         func_15FF50
    ctx->pc = 0x15A5ECu;
    SET_GPR_U32(ctx, 31, 0x15A5F4u);
    ctx->pc = 0x15A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5ECu;
    // 0x15a5f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FF50u, 0x15A5ECu, 0x15A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5F4u;
label_15a5f4:
    // 0x15a5f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5f8: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x15A5F8u;
    SET_GPR_U32(ctx, 31, 0x15A600u);
    ctx->pc = 0x15A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5F8u;
    // 0x15a5fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x15A5F8u, 0x15A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A600u;
label_15a600:
    // 0x15a600: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a604: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x15a604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15a608: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15A608u;
    {
        const bool branch_taken_0x15a608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a608) {
            ctx->pc = 0x15A60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A608u;
            // 0x15a60c: 0x8e220b70  lw          $v0, 0xB70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A638u;
            goto label_15a638;
        }
    }
    ctx->pc = 0x15A610u;
    // 0x15a610: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x15a610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15a614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A614u;
    {
        const bool branch_taken_0x15a614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A614u;
        // 0x15a618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a614) {
            ctx->pc = 0x15A62Cu;
            goto label_15a62c;
        }
    }
    ctx->pc = 0x15A61Cu;
    // 0x15a61c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x15a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x15a620: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A620u;
    {
        const bool branch_taken_0x15a620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a620) {
            ctx->pc = 0x15A624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A620u;
            // 0x15a624: 0x8e220b70  lw          $v0, 0xB70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A638u;
            goto label_15a638;
        }
    }
    ctx->pc = 0x15A628u;
    // 0x15a628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a62c:
    // 0x15a62c: 0xc056a7c  jal         func_15A9F0
    ctx->pc = 0x15A62Cu;
    SET_GPR_U32(ctx, 31, 0x15A634u);
    ctx->pc = 0x15A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A62Cu;
    // 0x15a630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A9F0u, 0x15A62Cu, 0x15A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A634u;
label_15a634:
    // 0x15a634: 0x8e220b70  lw          $v0, 0xB70($s1)
    ctx->pc = 0x15a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2928)));
label_15a638:
    // 0x15a638: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15A638u;
    {
        const bool branch_taken_0x15a638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A638u;
        // 0x15a63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a638) {
            ctx->pc = 0x15A698u;
            goto label_15a698;
        }
    }
    ctx->pc = 0x15A640u;
    // 0x15a640: 0xae200b70  sw          $zero, 0xB70($s1)
    ctx->pc = 0x15a640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2928), GPR_U32(ctx, 0));
    // 0x15a644: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a648: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x15a648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x15a64c: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x15A64Cu;
    SET_GPR_U32(ctx, 31, 0x15A654u);
    ctx->pc = 0x15A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A64Cu;
    // 0x15a650: 0x2407001a  addiu       $a3, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x15A64Cu, 0x15A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A654u;
label_15a654:
    // 0x15a654: 0x26c49a08  addiu       $a0, $s6, -0x65F8
    ctx->pc = 0x15a654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941192));
    // 0x15a658: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x15a658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x15a65c: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x15a65cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15a660: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x15A660u;
    {
        const bool branch_taken_0x15a660 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A660u;
        // 0x15a664: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a660) {
            ctx->pc = 0x15A69Cu;
            goto label_15a69c;
        }
    }
    ctx->pc = 0x15A668u;
    // 0x15a668: 0x8e051004  lw          $a1, 0x1004($s0)
    ctx->pc = 0x15a668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x15a66c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15A66Cu;
    {
        const bool branch_taken_0x15a66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a66c) {
            ctx->pc = 0x15A670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A66Cu;
            // 0x15a670: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A6A0u;
            goto label_15a6a0;
        }
    }
    ctx->pc = 0x15A674u;
    // 0x15a674: 0xc047860  jal         func_11E180
    ctx->pc = 0x15A674u;
    SET_GPR_U32(ctx, 31, 0x15A67Cu);
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x15A674u, 0x15A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A67Cu;
label_15a67c:
    // 0x15a67c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A67Cu;
    {
        const bool branch_taken_0x15a67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A67Cu;
        // 0x15a680: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a67c) {
            ctx->pc = 0x15A698u;
            goto label_15a698;
        }
    }
    ctx->pc = 0x15A684u;
    // 0x15a684: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15a684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a688: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x15a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x15a68c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15a68cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a690: 0xc04668a  jal         func_119A28
    ctx->pc = 0x15A690u;
    SET_GPR_U32(ctx, 31, 0x15A698u);
    ctx->pc = 0x15A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A690u;
    // 0x15a694: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x15A690u, 0x15A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A698u;
label_15a698:
    // 0x15a698: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15a698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15a69c:
    // 0x15a69c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15a69cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a6a0:
    // 0x15a6a0: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x15a6a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15a6a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A6A4u;
    {
        const bool branch_taken_0x15a6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A4u;
        // 0x15a6a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6a4) {
            ctx->pc = 0x15A6BCu;
            goto label_15a6bc;
        }
    }
    ctx->pc = 0x15A6ACu;
    // 0x15a6ac: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a6b0: 0x56a2ff8b  bnel        $s5, $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x15A6B0u;
    {
        const bool branch_taken_0x15a6b0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a6b0) {
            ctx->pc = 0x15A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A6B0u;
            // 0x15a6b4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a4e0;
        }
    }
    ctx->pc = 0x15A6B8u;
label_15a6b8:
    // 0x15a6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15a6bc:
    // 0x15a6bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a6c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15a6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a6c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15a6c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a6c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15a6c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a6cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15a6ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a6d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15a6d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a6d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x15a6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6D8u;
        // 0x15a6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A6E0u;
}
