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

// Function: sub_00334450
// Address: 0x334450 - 0x3345b8
void sub_00334450_0x334450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334450_0x334450");
#endif

    switch (ctx->pc) {
        case 0x334450u: goto label_334450;
        case 0x334454u: goto label_334454;
        case 0x334458u: goto label_334458;
        case 0x33445cu: goto label_33445c;
        case 0x334460u: goto label_334460;
        case 0x334464u: goto label_334464;
        case 0x334468u: goto label_334468;
        case 0x33446cu: goto label_33446c;
        case 0x334470u: goto label_334470;
        case 0x334474u: goto label_334474;
        case 0x334478u: goto label_334478;
        case 0x33447cu: goto label_33447c;
        case 0x334480u: goto label_334480;
        case 0x334484u: goto label_334484;
        case 0x334488u: goto label_334488;
        case 0x33448cu: goto label_33448c;
        case 0x334490u: goto label_334490;
        case 0x334494u: goto label_334494;
        case 0x334498u: goto label_334498;
        case 0x33449cu: goto label_33449c;
        case 0x3344a0u: goto label_3344a0;
        case 0x3344a4u: goto label_3344a4;
        case 0x3344a8u: goto label_3344a8;
        case 0x3344acu: goto label_3344ac;
        case 0x3344b0u: goto label_3344b0;
        case 0x3344b4u: goto label_3344b4;
        case 0x3344b8u: goto label_3344b8;
        case 0x3344bcu: goto label_3344bc;
        case 0x3344c0u: goto label_3344c0;
        case 0x3344c4u: goto label_3344c4;
        case 0x3344c8u: goto label_3344c8;
        case 0x3344ccu: goto label_3344cc;
        case 0x3344d0u: goto label_3344d0;
        case 0x3344d4u: goto label_3344d4;
        case 0x3344d8u: goto label_3344d8;
        case 0x3344dcu: goto label_3344dc;
        case 0x3344e0u: goto label_3344e0;
        case 0x3344e4u: goto label_3344e4;
        case 0x3344e8u: goto label_3344e8;
        case 0x3344ecu: goto label_3344ec;
        case 0x3344f0u: goto label_3344f0;
        case 0x3344f4u: goto label_3344f4;
        case 0x3344f8u: goto label_3344f8;
        case 0x3344fcu: goto label_3344fc;
        case 0x334500u: goto label_334500;
        case 0x334504u: goto label_334504;
        case 0x334508u: goto label_334508;
        case 0x33450cu: goto label_33450c;
        case 0x334510u: goto label_334510;
        case 0x334514u: goto label_334514;
        case 0x334518u: goto label_334518;
        case 0x33451cu: goto label_33451c;
        case 0x334520u: goto label_334520;
        case 0x334524u: goto label_334524;
        case 0x334528u: goto label_334528;
        case 0x33452cu: goto label_33452c;
        case 0x334530u: goto label_334530;
        case 0x334534u: goto label_334534;
        case 0x334538u: goto label_334538;
        case 0x33453cu: goto label_33453c;
        case 0x334540u: goto label_334540;
        case 0x334544u: goto label_334544;
        case 0x334548u: goto label_334548;
        case 0x33454cu: goto label_33454c;
        case 0x334550u: goto label_334550;
        case 0x334554u: goto label_334554;
        case 0x334558u: goto label_334558;
        case 0x33455cu: goto label_33455c;
        case 0x334560u: goto label_334560;
        case 0x334564u: goto label_334564;
        case 0x334568u: goto label_334568;
        case 0x33456cu: goto label_33456c;
        case 0x334570u: goto label_334570;
        case 0x334574u: goto label_334574;
        case 0x334578u: goto label_334578;
        case 0x33457cu: goto label_33457c;
        case 0x334580u: goto label_334580;
        case 0x334584u: goto label_334584;
        case 0x334588u: goto label_334588;
        case 0x33458cu: goto label_33458c;
        case 0x334590u: goto label_334590;
        case 0x334594u: goto label_334594;
        case 0x334598u: goto label_334598;
        case 0x33459cu: goto label_33459c;
        case 0x3345a0u: goto label_3345a0;
        case 0x3345a4u: goto label_3345a4;
        case 0x3345a8u: goto label_3345a8;
        case 0x3345acu: goto label_3345ac;
        case 0x3345b0u: goto label_3345b0;
        case 0x3345b4u: goto label_3345b4;
        default: break;
    }

    ctx->pc = 0x334450u;

label_334450:
    // 0x334450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_334454:
    // 0x334454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x334454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_334458:
    // 0x334458: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33445c:
    // 0x33445c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_334460:
    // 0x334460: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x334460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_334464:
    // 0x334464: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x334464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_334468:
    // 0x334468: 0xc09dcc6  jal         func_277318
label_33446c:
    if (ctx->pc == 0x33446Cu) {
        ctx->pc = 0x33446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334468u;
        // 0x33446c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334470u;
        goto label_334470;
    }
    ctx->pc = 0x334468u;
    SET_GPR_U32(ctx, 31, 0x334470u);
    ctx->pc = 0x33446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334468u;
    // 0x33446c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x334468u, 0x334470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334470u;
label_334470:
    // 0x334470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x334470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_334474:
    // 0x334474: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_334478:
    if (ctx->pc == 0x334478u) {
        ctx->pc = 0x334478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334474u;
        // 0x334478: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33447Cu;
        goto label_33447c;
    }
    ctx->pc = 0x334474u;
    {
        const bool branch_taken_0x334474 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x334474) {
            ctx->pc = 0x334478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334474u;
            // 0x334478: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334484u;
            goto label_334484;
        }
    }
    ctx->pc = 0x33447Cu;
label_33447c:
    // 0x33447c: 0x10000047  b           . + 4 + (0x47 << 2)
label_334480:
    if (ctx->pc == 0x334480u) {
        ctx->pc = 0x334480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33447Cu;
        // 0x334480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334484u;
        goto label_334484;
    }
    ctx->pc = 0x33447Cu;
    {
        const bool branch_taken_0x33447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33447Cu;
        // 0x334480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33447c) {
            ctx->pc = 0x33459Cu;
            goto label_33459c;
        }
    }
    ctx->pc = 0x334484u;
label_334484:
    // 0x334484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334488:
    // 0x334488: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x334488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_33448c:
    // 0x33448c: 0x40f809  jalr        $v0
label_334490:
    if (ctx->pc == 0x334490u) {
        ctx->pc = 0x334490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33448Cu;
        // 0x334490: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334494u;
        goto label_334494;
    }
    ctx->pc = 0x33448Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334494u);
        ctx->pc = 0x334490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33448Cu;
        // 0x334490: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33448Cu, 0x334494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334494u;
label_334494:
    // 0x334494: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x334494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_334498:
    // 0x334498: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x334498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33449c:
    // 0x33449c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3344a0:
    // 0x3344a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3344a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3344a4:
    // 0x3344a4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3344a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3344a8:
    // 0x3344a8: 0x40f809  jalr        $v0
label_3344ac:
    if (ctx->pc == 0x3344ACu) {
        ctx->pc = 0x3344ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344A8u;
        // 0x3344ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344B0u;
        goto label_3344b0;
    }
    ctx->pc = 0x3344A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3344B0u);
        ctx->pc = 0x3344ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344A8u;
        // 0x3344ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344A8u, 0x3344B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3344B0u;
label_3344b0:
    // 0x3344b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3344b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3344b4:
    // 0x3344b4: 0x54430035  bnel        $v0, $v1, . + 4 + (0x35 << 2)
label_3344b8:
    if (ctx->pc == 0x3344B8u) {
        ctx->pc = 0x3344B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344B4u;
        // 0x3344b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344BCu;
        goto label_3344bc;
    }
    ctx->pc = 0x3344B4u;
    {
        const bool branch_taken_0x3344b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3344b4) {
            ctx->pc = 0x3344B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3344B4u;
            // 0x3344b8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33458Cu;
            goto label_33458c;
        }
    }
    ctx->pc = 0x3344BCu;
label_3344bc:
    // 0x3344bc: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x3344bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_3344c0:
    // 0x3344c0: 0xc0f52a8  jal         func_3D4AA0
label_3344c4:
    if (ctx->pc == 0x3344C4u) {
        ctx->pc = 0x3344C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344C0u;
        // 0x3344c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344C8u;
        goto label_3344c8;
    }
    ctx->pc = 0x3344C0u;
    SET_GPR_U32(ctx, 31, 0x3344C8u);
    ctx->pc = 0x3344C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3344C0u;
    // 0x3344c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3344C0u, 0x3344C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3344C8u;
label_3344c8:
    // 0x3344c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3344c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3344cc:
    // 0x3344cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3344ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3344d0:
    // 0x3344d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3344d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3344d4:
    // 0x3344d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3344d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3344d8:
    // 0x3344d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3344dc:
    // 0x3344dc: 0x40f809  jalr        $v0
label_3344e0:
    if (ctx->pc == 0x3344E0u) {
        ctx->pc = 0x3344E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344DCu;
        // 0x3344e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344E4u;
        goto label_3344e4;
    }
    ctx->pc = 0x3344DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3344E4u);
        ctx->pc = 0x3344E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344DCu;
        // 0x3344e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344DCu, 0x3344E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3344E4u;
label_3344e4:
    // 0x3344e4: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
label_3344e8:
    if (ctx->pc == 0x3344E8u) {
        ctx->pc = 0x3344E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344E4u;
        // 0x3344e8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344ECu;
        goto label_3344ec;
    }
    ctx->pc = 0x3344E4u;
    {
        const bool branch_taken_0x3344e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3344E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344E4u;
        // 0x3344e8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344e4) {
            ctx->pc = 0x334514u;
            goto label_334514;
        }
    }
    ctx->pc = 0x3344ECu;
label_3344ec:
    // 0x3344ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3344ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3344f0:
    // 0x3344f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3344f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3344f4:
    // 0x3344f4: 0x40f809  jalr        $v0
label_3344f8:
    if (ctx->pc == 0x3344F8u) {
        ctx->pc = 0x3344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344F4u;
        // 0x3344f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3344FCu;
        goto label_3344fc;
    }
    ctx->pc = 0x3344F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3344FCu);
        ctx->pc = 0x3344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344F4u;
        // 0x3344f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344F4u, 0x3344FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3344FCu;
label_3344fc:
    // 0x3344fc: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_334500:
    if (ctx->pc == 0x334500u) {
        ctx->pc = 0x334500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344FCu;
        // 0x334500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334504u;
        goto label_334504;
    }
    ctx->pc = 0x3344FCu;
    {
        const bool branch_taken_0x3344fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344FCu;
        // 0x334500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344fc) {
            ctx->pc = 0x33459Cu;
            goto label_33459c;
        }
    }
    ctx->pc = 0x334504u;
label_334504:
    // 0x334504: 0xc0f528a  jal         func_3D4A28
label_334508:
    if (ctx->pc == 0x334508u) {
        ctx->pc = 0x334508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334504u;
        // 0x334508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33450Cu;
        goto label_33450c;
    }
    ctx->pc = 0x334504u;
    SET_GPR_U32(ctx, 31, 0x33450Cu);
    ctx->pc = 0x334508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334504u;
    // 0x334508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x334504u, 0x33450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33450Cu;
label_33450c:
    // 0x33450c: 0x10000023  b           . + 4 + (0x23 << 2)
label_334510:
    if (ctx->pc == 0x334510u) {
        ctx->pc = 0x334510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33450Cu;
        // 0x334510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334514u;
        goto label_334514;
    }
    ctx->pc = 0x33450Cu;
    {
        const bool branch_taken_0x33450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33450Cu;
        // 0x334510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33450c) {
            ctx->pc = 0x33459Cu;
            goto label_33459c;
        }
    }
    ctx->pc = 0x334514u;
label_334514:
    // 0x334514: 0xc0cd3b4  jal         func_334ED0
label_334518:
    if (ctx->pc == 0x334518u) {
        ctx->pc = 0x334518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334514u;
        // 0x334518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33451Cu;
        goto label_33451c;
    }
    ctx->pc = 0x334514u;
    SET_GPR_U32(ctx, 31, 0x33451Cu);
    ctx->pc = 0x334518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334514u;
    // 0x334518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334ED0u, 0x334514u, 0x33451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33451Cu;
label_33451c:
    // 0x33451c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_334520:
    // 0x334520: 0xc0c9c32  jal         func_3270C8
label_334524:
    if (ctx->pc == 0x334524u) {
        ctx->pc = 0x334524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334520u;
        // 0x334524: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334528u;
        goto label_334528;
    }
    ctx->pc = 0x334520u;
    SET_GPR_U32(ctx, 31, 0x334528u);
    ctx->pc = 0x334524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334520u;
    // 0x334524: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270C8u, 0x334520u, 0x334528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334528u;
label_334528:
    // 0x334528: 0xc0c9c10  jal         func_327040
label_33452c:
    if (ctx->pc == 0x33452Cu) {
        ctx->pc = 0x33452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334528u;
        // 0x33452c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334530u;
        goto label_334530;
    }
    ctx->pc = 0x334528u;
    SET_GPR_U32(ctx, 31, 0x334530u);
    ctx->pc = 0x33452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334528u;
    // 0x33452c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327040u, 0x334528u, 0x334530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334530u;
label_334530:
    // 0x334530: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x334530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_334534:
    // 0x334534: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_334538:
    if (ctx->pc == 0x334538u) {
        ctx->pc = 0x334538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334534u;
        // 0x334538: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33453Cu;
        goto label_33453c;
    }
    ctx->pc = 0x334534u;
    {
        const bool branch_taken_0x334534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x334538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334534u;
        // 0x334538: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334534) {
            ctx->pc = 0x334578u;
            goto label_334578;
        }
    }
    ctx->pc = 0x33453Cu;
label_33453c:
    // 0x33453c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_334540:
    // 0x334540: 0xc0c9c98  jal         func_327260
label_334544:
    if (ctx->pc == 0x334544u) {
        ctx->pc = 0x334544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334540u;
        // 0x334544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334548u;
        goto label_334548;
    }
    ctx->pc = 0x334540u;
    SET_GPR_U32(ctx, 31, 0x334548u);
    ctx->pc = 0x334544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334540u;
    // 0x334544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327260u, 0x334540u, 0x334548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334548u;
label_334548:
    // 0x334548: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_33454c:
    if (ctx->pc == 0x33454Cu) {
        ctx->pc = 0x334550u;
        goto label_334550;
    }
    ctx->pc = 0x334548u;
    {
        const bool branch_taken_0x334548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334548) {
            ctx->pc = 0x334578u;
            goto label_334578;
        }
    }
    ctx->pc = 0x334550u;
label_334550:
    // 0x334550: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x334550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_334554:
    // 0x334554: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_334558:
    // 0x334558: 0x40f809  jalr        $v0
label_33455c:
    if (ctx->pc == 0x33455Cu) {
        ctx->pc = 0x33455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334558u;
        // 0x33455c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334560u;
        goto label_334560;
    }
    ctx->pc = 0x334558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334560u);
        ctx->pc = 0x33455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334558u;
        // 0x33455c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334558u, 0x334560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334560u;
label_334560:
    // 0x334560: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_334564:
    if (ctx->pc == 0x334564u) {
        ctx->pc = 0x334564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334560u;
        // 0x334564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334568u;
        goto label_334568;
    }
    ctx->pc = 0x334560u;
    {
        const bool branch_taken_0x334560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334560u;
        // 0x334564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334560) {
            ctx->pc = 0x33459Cu;
            goto label_33459c;
        }
    }
    ctx->pc = 0x334568u;
label_334568:
    // 0x334568: 0xc0f528a  jal         func_3D4A28
label_33456c:
    if (ctx->pc == 0x33456Cu) {
        ctx->pc = 0x33456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334568u;
        // 0x33456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334570u;
        goto label_334570;
    }
    ctx->pc = 0x334568u;
    SET_GPR_U32(ctx, 31, 0x334570u);
    ctx->pc = 0x33456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334568u;
    // 0x33456c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x334568u, 0x334570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334570u;
label_334570:
    // 0x334570: 0x1000000a  b           . + 4 + (0xA << 2)
label_334574:
    if (ctx->pc == 0x334574u) {
        ctx->pc = 0x334574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334570u;
        // 0x334574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334578u;
        goto label_334578;
    }
    ctx->pc = 0x334570u;
    {
        const bool branch_taken_0x334570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334570u;
        // 0x334574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334570) {
            ctx->pc = 0x33459Cu;
            goto label_33459c;
        }
    }
    ctx->pc = 0x334578u;
label_334578:
    // 0x334578: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_33457c:
    if (ctx->pc == 0x33457Cu) {
        ctx->pc = 0x33457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334578u;
        // 0x33457c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334580u;
        goto label_334580;
    }
    ctx->pc = 0x334578u;
    {
        const bool branch_taken_0x334578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x334578) {
            ctx->pc = 0x33457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334578u;
            // 0x33457c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33458Cu;
            goto label_33458c;
        }
    }
    ctx->pc = 0x334580u;
label_334580:
    // 0x334580: 0xc0f528a  jal         func_3D4A28
label_334584:
    if (ctx->pc == 0x334584u) {
        ctx->pc = 0x334584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334580u;
        // 0x334584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334588u;
        goto label_334588;
    }
    ctx->pc = 0x334580u;
    SET_GPR_U32(ctx, 31, 0x334588u);
    ctx->pc = 0x334584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334580u;
    // 0x334584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x334580u, 0x334588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334588u;
label_334588:
    // 0x334588: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x334588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33458c:
    // 0x33458c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x33458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_334590:
    // 0x334590: 0x40f809  jalr        $v0
label_334594:
    if (ctx->pc == 0x334594u) {
        ctx->pc = 0x334594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334590u;
        // 0x334594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334598u;
        goto label_334598;
    }
    ctx->pc = 0x334590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334598u);
        ctx->pc = 0x334594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334590u;
        // 0x334594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334590u, 0x334598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334598u;
label_334598:
    // 0x334598: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x334598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33459c:
    // 0x33459c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33459cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3345a0:
    // 0x3345a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3345a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3345a4:
    // 0x3345a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3345a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3345a8:
    // 0x3345a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3345ac:
    // 0x3345ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3345acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3345b0:
    // 0x3345b0: 0x3e00008  jr          $ra
label_3345b4:
    if (ctx->pc == 0x3345B4u) {
        ctx->pc = 0x3345B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345B0u;
        // 0x3345b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345B8u;
        goto label_fallthrough_0x3345b0;
    }
    ctx->pc = 0x3345B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3345B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345B0u;
        // 0x3345b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3345B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3345b0:
    ctx->pc = 0x3345B8u;
}
