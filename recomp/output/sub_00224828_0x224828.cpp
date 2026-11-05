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

// Function: sub_00224828
// Address: 0x224828 - 0x224b28
void sub_00224828_0x224828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224828_0x224828");
#endif

    switch (ctx->pc) {
        case 0x224854u: goto label_224854;
        case 0x224864u: goto label_224864;
        case 0x224878u: goto label_224878;
        case 0x224880u: goto label_224880;
        case 0x224898u: goto label_224898;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248ccu: goto label_2248cc;
        case 0x2248e8u: goto label_2248e8;
        case 0x224900u: goto label_224900;
        case 0x224914u: goto label_224914;
        case 0x22492cu: goto label_22492c;
        case 0x224944u: goto label_224944;
        case 0x224954u: goto label_224954;
        case 0x224974u: goto label_224974;
        case 0x224994u: goto label_224994;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249ecu: goto label_2249ec;
        case 0x224a00u: goto label_224a00;
        case 0x224a18u: goto label_224a18;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a44u: goto label_224a44;
        case 0x224a58u: goto label_224a58;
        case 0x224a70u: goto label_224a70;
        case 0x224a94u: goto label_224a94;
        case 0x224ab8u: goto label_224ab8;
        case 0x224ae8u: goto label_224ae8;
        case 0x224af4u: goto label_224af4;
        case 0x224b0cu: goto label_224b0c;
        default: break;
    }

    ctx->pc = 0x224828u;

    // 0x224828: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x224828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22482c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x22482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x224830: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x224830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x224834: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x224834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x224838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22483c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x22483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x224840: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x224840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224844: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224848: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x224848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x22484c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x22484Cu;
    SET_GPR_U32(ctx, 31, 0x224854u);
    ctx->pc = 0x224850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22484Cu;
    // 0x224850: 0x2452fe40  addiu       $s2, $v0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x22484Cu, 0x224854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224854u;
label_224854:
    // 0x224854: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22485c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22485Cu;
    SET_GPR_U32(ctx, 31, 0x224864u);
    ctx->pc = 0x224860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22485Cu;
    // 0x224860: 0x24a51850  addiu       $a1, $a1, 0x1850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22485Cu, 0x224864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224864u;
label_224864:
    // 0x224864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224868: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224868u;
    {
        const bool branch_taken_0x224868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224868u;
        // 0x22486c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224868) {
            ctx->pc = 0x224888u;
            goto label_224888;
        }
    }
    ctx->pc = 0x224870u;
    // 0x224870: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x224870u;
    SET_GPR_U32(ctx, 31, 0x224878u);
    ctx->pc = 0x224874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224870u;
    // 0x224874: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x224870u, 0x224878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224878u;
label_224878:
    // 0x224878: 0xc08352e  jal         func_20D4B8
    ctx->pc = 0x224878u;
    SET_GPR_U32(ctx, 31, 0x224880u);
    ctx->pc = 0x22487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224878u;
    // 0x22487c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D4B8u, 0x224878u, 0x224880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224880u;
label_224880:
    // 0x224880: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x224880u;
    {
        const bool branch_taken_0x224880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224880u;
        // 0x224884: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224880) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x224888u;
label_224888:
    // 0x224888: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22488c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224890: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224890u;
    SET_GPR_U32(ctx, 31, 0x224898u);
    ctx->pc = 0x224894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224890u;
    // 0x224894: 0x24a53c80  addiu       $a1, $a1, 0x3C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224890u, 0x224898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224898u;
label_224898:
    // 0x224898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22489c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22489Cu;
    {
        const bool branch_taken_0x22489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22489Cu;
        // 0x2248a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22489c) {
            ctx->pc = 0x2248BCu;
            goto label_2248bc;
        }
    }
    ctx->pc = 0x2248A4u;
    // 0x2248a4: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x2248a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2248a8: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2248a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2248ac: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2248ACu;
    SET_GPR_U32(ctx, 31, 0x2248B4u);
    ctx->pc = 0x2248B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248ACu;
    // 0x2248b0: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2248ACu, 0x2248B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248B4u;
label_2248b4:
    // 0x2248b4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2248B4u;
    {
        const bool branch_taken_0x2248b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248B4u;
        // 0x2248b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248b4) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x2248BCu;
label_2248bc:
    // 0x2248bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2248c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2248c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2248C4u;
    SET_GPR_U32(ctx, 31, 0x2248CCu);
    ctx->pc = 0x2248C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248C4u;
    // 0x2248c8: 0x24a53c90  addiu       $a1, $a1, 0x3C90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2248C4u, 0x2248CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248CCu;
label_2248cc:
    // 0x2248cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2248ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2248d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2248D0u;
    {
        const bool branch_taken_0x2248d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248D0u;
        // 0x2248d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248d0) {
            ctx->pc = 0x2248F0u;
            goto label_2248f0;
        }
    }
    ctx->pc = 0x2248D8u;
    // 0x2248d8: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2248dc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2248dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2248e0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x2248E0u;
    SET_GPR_U32(ctx, 31, 0x2248E8u);
    ctx->pc = 0x2248E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248E0u;
    // 0x2248e4: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x2248E0u, 0x2248E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248E8u;
label_2248e8:
    // 0x2248e8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2248E8u;
    {
        const bool branch_taken_0x2248e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2248E8u;
        // 0x2248ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2248e8) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x2248F0u;
label_2248f0:
    // 0x2248f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2248f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2248f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2248f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2248F8u;
    SET_GPR_U32(ctx, 31, 0x224900u);
    ctx->pc = 0x2248FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2248F8u;
    // 0x2248fc: 0x24a53ca0  addiu       $a1, $a1, 0x3CA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2248F8u, 0x224900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224900u;
label_224900:
    // 0x224900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224904u;
    {
        const bool branch_taken_0x224904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224904u;
        // 0x224908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224904) {
            ctx->pc = 0x22491Cu;
            goto label_22491c;
        }
    }
    ctx->pc = 0x22490Cu;
    // 0x22490c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x22490Cu;
    SET_GPR_U32(ctx, 31, 0x224914u);
    ctx->pc = 0x224910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22490Cu;
    // 0x224910: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x22490Cu, 0x224914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224914u;
label_224914:
    // 0x224914: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x224914u;
    {
        const bool branch_taken_0x224914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224914u;
        // 0x224918: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224914) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x22491Cu;
label_22491c:
    // 0x22491c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22491cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224924: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224924u;
    SET_GPR_U32(ctx, 31, 0x22492Cu);
    ctx->pc = 0x224928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224924u;
    // 0x224928: 0x24a53ca8  addiu       $a1, $a1, 0x3CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224924u, 0x22492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22492Cu;
label_22492c:
    // 0x22492c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224930: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x224930u;
    {
        const bool branch_taken_0x224930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224930) {
            ctx->pc = 0x224934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224930u;
            // 0x224934: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224988u;
            goto label_224988;
        }
    }
    ctx->pc = 0x224938u;
    // 0x224938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x224938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22493c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22493Cu;
    SET_GPR_U32(ctx, 31, 0x224944u);
    ctx->pc = 0x224940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22493Cu;
    // 0x224940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22493Cu, 0x224944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224944u;
label_224944:
    // 0x224944: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224948: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22494c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22494Cu;
    SET_GPR_U32(ctx, 31, 0x224954u);
    ctx->pc = 0x224950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22494Cu;
    // 0x224950: 0x24a53cb8  addiu       $a1, $a1, 0x3CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22494Cu, 0x224954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224954u;
label_224954:
    // 0x224954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224958u;
    {
        const bool branch_taken_0x224958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224958u;
        // 0x22495c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224958) {
            ctx->pc = 0x224968u;
            goto label_224968;
        }
    }
    ctx->pc = 0x224960u;
    // 0x224960: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x224960u;
    {
        const bool branch_taken_0x224960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224960u;
        // 0x224964: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224960) {
            ctx->pc = 0x224B00u;
            goto label_224b00;
        }
    }
    ctx->pc = 0x224968u;
label_224968:
    // 0x224968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22496c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22496Cu;
    SET_GPR_U32(ctx, 31, 0x224974u);
    ctx->pc = 0x224970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22496Cu;
    // 0x224970: 0x24a53cc8  addiu       $a1, $a1, 0x3CC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22496Cu, 0x224974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224974u;
label_224974:
    // 0x224974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224978: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x224978u;
    {
        const bool branch_taken_0x224978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224978u;
        // 0x22497c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224978) {
            ctx->pc = 0x224B00u;
            goto label_224b00;
        }
    }
    ctx->pc = 0x224980u;
    // 0x224980: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x224980u;
    {
        const bool branch_taken_0x224980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224980u;
        // 0x224984: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224980) {
            ctx->pc = 0x224B00u;
            goto label_224b00;
        }
    }
    ctx->pc = 0x224988u;
label_224988:
    // 0x224988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22498c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22498Cu;
    SET_GPR_U32(ctx, 31, 0x224994u);
    ctx->pc = 0x224990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22498Cu;
    // 0x224990: 0x24a53cd8  addiu       $a1, $a1, 0x3CD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22498Cu, 0x224994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224994u;
label_224994:
    // 0x224994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224998u;
    {
        const bool branch_taken_0x224998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224998u;
        // 0x22499c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224998) {
            ctx->pc = 0x2249B0u;
            goto label_2249b0;
        }
    }
    ctx->pc = 0x2249A0u;
    // 0x2249a0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2249A0u;
    SET_GPR_U32(ctx, 31, 0x2249A8u);
    ctx->pc = 0x2249A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249A0u;
    // 0x2249a4: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2249A0u, 0x2249A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249A8u;
label_2249a8:
    // 0x2249a8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2249A8u;
    {
        const bool branch_taken_0x2249a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249A8u;
        // 0x2249ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249a8) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x2249B0u;
label_2249b0:
    // 0x2249b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2249b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2249b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2249b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2249B8u;
    SET_GPR_U32(ctx, 31, 0x2249C0u);
    ctx->pc = 0x2249BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249B8u;
    // 0x2249bc: 0x24a53ce8  addiu       $a1, $a1, 0x3CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2249B8u, 0x2249C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249C0u;
label_2249c0:
    // 0x2249c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2249c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2249c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2249C4u;
    {
        const bool branch_taken_0x2249c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249C4u;
        // 0x2249c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249c4) {
            ctx->pc = 0x2249DCu;
            goto label_2249dc;
        }
    }
    ctx->pc = 0x2249CCu;
    // 0x2249cc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2249CCu;
    SET_GPR_U32(ctx, 31, 0x2249D4u);
    ctx->pc = 0x2249D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249CCu;
    // 0x2249d0: 0x2605003c  addiu       $a1, $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2249CCu, 0x2249D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249D4u;
label_2249d4:
    // 0x2249d4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2249D4u;
    {
        const bool branch_taken_0x2249d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249D4u;
        // 0x2249d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249d4) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x2249DCu;
label_2249dc:
    // 0x2249dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2249dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2249e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2249e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2249e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2249E4u;
    SET_GPR_U32(ctx, 31, 0x2249ECu);
    ctx->pc = 0x2249E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249E4u;
    // 0x2249e8: 0x24a53cf8  addiu       $a1, $a1, 0x3CF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2249E4u, 0x2249ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249ECu;
label_2249ec:
    // 0x2249ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2249ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2249f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2249F0u;
    {
        const bool branch_taken_0x2249f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2249F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249F0u;
        // 0x2249f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2249f0) {
            ctx->pc = 0x224A08u;
            goto label_224a08;
        }
    }
    ctx->pc = 0x2249F8u;
    // 0x2249f8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2249F8u;
    SET_GPR_U32(ctx, 31, 0x224A00u);
    ctx->pc = 0x2249FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2249F8u;
    // 0x2249fc: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2249F8u, 0x224A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A00u;
label_224a00:
    // 0x224a00: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x224A00u;
    {
        const bool branch_taken_0x224a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A00u;
        // 0x224a04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a00) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x224A08u;
label_224a08:
    // 0x224a08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224A10u;
    SET_GPR_U32(ctx, 31, 0x224A18u);
    ctx->pc = 0x224A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A10u;
    // 0x224a14: 0x24a53d08  addiu       $a1, $a1, 0x3D08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224A10u, 0x224A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A18u;
label_224a18:
    // 0x224a18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224a1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224A1Cu;
    {
        const bool branch_taken_0x224a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A1Cu;
        // 0x224a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a1c) {
            ctx->pc = 0x224A34u;
            goto label_224a34;
        }
    }
    ctx->pc = 0x224A24u;
    // 0x224a24: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224A24u;
    SET_GPR_U32(ctx, 31, 0x224A2Cu);
    ctx->pc = 0x224A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A24u;
    // 0x224a28: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224A24u, 0x224A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A2Cu;
label_224a2c:
    // 0x224a2c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x224A2Cu;
    {
        const bool branch_taken_0x224a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A2Cu;
        // 0x224a30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a2c) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x224A34u;
label_224a34:
    // 0x224a34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224A3Cu;
    SET_GPR_U32(ctx, 31, 0x224A44u);
    ctx->pc = 0x224A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A3Cu;
    // 0x224a40: 0x24a53d10  addiu       $a1, $a1, 0x3D10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224A3Cu, 0x224A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A44u;
label_224a44:
    // 0x224a44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224A48u;
    {
        const bool branch_taken_0x224a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A48u;
        // 0x224a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a48) {
            ctx->pc = 0x224A60u;
            goto label_224a60;
        }
    }
    ctx->pc = 0x224A50u;
    // 0x224a50: 0xc09e056  jal         func_278158
    ctx->pc = 0x224A50u;
    SET_GPR_U32(ctx, 31, 0x224A58u);
    ctx->pc = 0x224A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A50u;
    // 0x224a54: 0x26050048  addiu       $a1, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x224A50u, 0x224A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A58u;
label_224a58:
    // 0x224a58: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x224A58u;
    {
        const bool branch_taken_0x224a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A58u;
        // 0x224a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a58) {
            ctx->pc = 0x224B04u;
            goto label_224b04;
        }
    }
    ctx->pc = 0x224A60u;
label_224a60:
    // 0x224a60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224A68u;
    SET_GPR_U32(ctx, 31, 0x224A70u);
    ctx->pc = 0x224A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A68u;
    // 0x224a6c: 0x24a53d20  addiu       $a1, $a1, 0x3D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224A68u, 0x224A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A70u;
label_224a70:
    // 0x224a70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224A74u;
    {
        const bool branch_taken_0x224a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A74u;
        // 0x224a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a74) {
            ctx->pc = 0x224A84u;
            goto label_224a84;
        }
    }
    ctx->pc = 0x224A7Cu;
    // 0x224a7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x224A7Cu;
    {
        const bool branch_taken_0x224a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A7Cu;
        // 0x224a80: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a7c) {
            ctx->pc = 0x224B00u;
            goto label_224b00;
        }
    }
    ctx->pc = 0x224A84u;
label_224a84:
    // 0x224a84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224a8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224A8Cu;
    SET_GPR_U32(ctx, 31, 0x224A94u);
    ctx->pc = 0x224A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224A8Cu;
    // 0x224a90: 0x24a53d30  addiu       $a1, $a1, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224A8Cu, 0x224A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A94u;
label_224a94:
    // 0x224a94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224a98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x224A98u;
    {
        const bool branch_taken_0x224a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224A98u;
        // 0x224a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a98) {
            ctx->pc = 0x224AA8u;
            goto label_224aa8;
        }
    }
    ctx->pc = 0x224AA0u;
    // 0x224aa0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x224AA0u;
    {
        const bool branch_taken_0x224aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AA0u;
        // 0x224aa4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224aa0) {
            ctx->pc = 0x224B00u;
            goto label_224b00;
        }
    }
    ctx->pc = 0x224AA8u;
label_224aa8:
    // 0x224aa8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ab0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224AB0u;
    SET_GPR_U32(ctx, 31, 0x224AB8u);
    ctx->pc = 0x224AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224AB0u;
    // 0x224ab4: 0x24a53d40  addiu       $a1, $a1, 0x3D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224AB0u, 0x224AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AB8u;
label_224ab8:
    // 0x224ab8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224abc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x224ABCu;
    {
        const bool branch_taken_0x224abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224ABCu;
        // 0x224ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224abc) {
            ctx->pc = 0x224AFCu;
            goto label_224afc;
        }
    }
    ctx->pc = 0x224AC4u;
    // 0x224ac4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224ac8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x224ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x224acc: 0x24a51db0  addiu       $a1, $a1, 0x1DB0
    ctx->pc = 0x224accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
    // 0x224ad0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x224ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x224ad4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x224ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x224ad8: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x224ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224adc: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x224adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x224ae0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x224AE0u;
    SET_GPR_U32(ctx, 31, 0x224AE8u);
    ctx->pc = 0x224AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224AE0u;
    // 0x224ae4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x224AE0u, 0x224AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AE8u;
label_224ae8:
    // 0x224ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224aec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x224AECu;
    SET_GPR_U32(ctx, 31, 0x224AF4u);
    ctx->pc = 0x224AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224AECu;
    // 0x224af0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x224AECu, 0x224AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AF4u;
label_224af4:
    // 0x224af4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x224AF4u;
    {
        const bool branch_taken_0x224af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AF4u;
        // 0x224af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224af4) {
            ctx->pc = 0x224B10u;
            goto label_224b10;
        }
    }
    ctx->pc = 0x224AFCu;
label_224afc:
    // 0x224afc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x224afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_224b00:
    // 0x224b00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x224b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_224b04:
    // 0x224b04: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x224B04u;
    SET_GPR_U32(ctx, 31, 0x224B0Cu);
    ctx->pc = 0x224B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224B04u;
    // 0x224b08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x224B04u, 0x224B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B0Cu;
label_224b0c:
    // 0x224b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224b10:
    // 0x224b10: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x224b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x224b14: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x224b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x224b18: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x224b18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x224b1c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x224b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x224b20: 0x3e00008  jr          $ra
    ctx->pc = 0x224B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B20u;
        // 0x224b24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B28u;
}
