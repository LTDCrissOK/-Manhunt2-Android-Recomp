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

// Function: sub_00334360
// Address: 0x334360 - 0x334450
void sub_00334360_0x334360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334360_0x334360");
#endif

    switch (ctx->pc) {
        case 0x334360u: goto label_334360;
        case 0x334364u: goto label_334364;
        case 0x334368u: goto label_334368;
        case 0x33436cu: goto label_33436c;
        case 0x334370u: goto label_334370;
        case 0x334374u: goto label_334374;
        case 0x334378u: goto label_334378;
        case 0x33437cu: goto label_33437c;
        case 0x334380u: goto label_334380;
        case 0x334384u: goto label_334384;
        case 0x334388u: goto label_334388;
        case 0x33438cu: goto label_33438c;
        case 0x334390u: goto label_334390;
        case 0x334394u: goto label_334394;
        case 0x334398u: goto label_334398;
        case 0x33439cu: goto label_33439c;
        case 0x3343a0u: goto label_3343a0;
        case 0x3343a4u: goto label_3343a4;
        case 0x3343a8u: goto label_3343a8;
        case 0x3343acu: goto label_3343ac;
        case 0x3343b0u: goto label_3343b0;
        case 0x3343b4u: goto label_3343b4;
        case 0x3343b8u: goto label_3343b8;
        case 0x3343bcu: goto label_3343bc;
        case 0x3343c0u: goto label_3343c0;
        case 0x3343c4u: goto label_3343c4;
        case 0x3343c8u: goto label_3343c8;
        case 0x3343ccu: goto label_3343cc;
        case 0x3343d0u: goto label_3343d0;
        case 0x3343d4u: goto label_3343d4;
        case 0x3343d8u: goto label_3343d8;
        case 0x3343dcu: goto label_3343dc;
        case 0x3343e0u: goto label_3343e0;
        case 0x3343e4u: goto label_3343e4;
        case 0x3343e8u: goto label_3343e8;
        case 0x3343ecu: goto label_3343ec;
        case 0x3343f0u: goto label_3343f0;
        case 0x3343f4u: goto label_3343f4;
        case 0x3343f8u: goto label_3343f8;
        case 0x3343fcu: goto label_3343fc;
        case 0x334400u: goto label_334400;
        case 0x334404u: goto label_334404;
        case 0x334408u: goto label_334408;
        case 0x33440cu: goto label_33440c;
        case 0x334410u: goto label_334410;
        case 0x334414u: goto label_334414;
        case 0x334418u: goto label_334418;
        case 0x33441cu: goto label_33441c;
        case 0x334420u: goto label_334420;
        case 0x334424u: goto label_334424;
        case 0x334428u: goto label_334428;
        case 0x33442cu: goto label_33442c;
        case 0x334430u: goto label_334430;
        case 0x334434u: goto label_334434;
        case 0x334438u: goto label_334438;
        case 0x33443cu: goto label_33443c;
        case 0x334440u: goto label_334440;
        case 0x334444u: goto label_334444;
        case 0x334448u: goto label_334448;
        case 0x33444cu: goto label_33444c;
        default: break;
    }

    ctx->pc = 0x334360u;

label_334360:
    // 0x334360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_334364:
    // 0x334364: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x334364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_334368:
    // 0x334368: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x334368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_33436c:
    // 0x33436c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_334370:
    // 0x334370: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x334370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_334374:
    // 0x334374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334378:
    // 0x334378: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_33437c:
    // 0x33437c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_334380:
    // 0x334380: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x334380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_334384:
    // 0x334384: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x334384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_334388:
    // 0x334388: 0x40f809  jalr        $v0
label_33438c:
    if (ctx->pc == 0x33438Cu) {
        ctx->pc = 0x33438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334388u;
        // 0x33438c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334390u;
        goto label_334390;
    }
    ctx->pc = 0x334388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334390u);
        ctx->pc = 0x33438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334388u;
        // 0x33438c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334388u, 0x334390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334390u;
label_334390:
    // 0x334390: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x334390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_334394:
    // 0x334394: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
label_334398:
    if (ctx->pc == 0x334398u) {
        ctx->pc = 0x334398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334394u;
        // 0x334398: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33439Cu;
        goto label_33439c;
    }
    ctx->pc = 0x334394u;
    {
        const bool branch_taken_0x334394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x334398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334394u;
        // 0x334398: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334394) {
            ctx->pc = 0x334434u;
            goto label_334434;
        }
    }
    ctx->pc = 0x33439Cu;
label_33439c:
    // 0x33439c: 0xc0f52a8  jal         func_3D4AA0
label_3343a0:
    if (ctx->pc == 0x3343A0u) {
        ctx->pc = 0x3343A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33439Cu;
        // 0x3343a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343A4u;
        goto label_3343a4;
    }
    ctx->pc = 0x33439Cu;
    SET_GPR_U32(ctx, 31, 0x3343A4u);
    ctx->pc = 0x3343A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33439Cu;
    // 0x3343a0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x33439Cu, 0x3343A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343A4u;
label_3343a4:
    // 0x3343a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3343a8:
    // 0x3343a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3343a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3343ac:
    // 0x3343ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3343acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3343b0:
    // 0x3343b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3343b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3343b4:
    // 0x3343b4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3343b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3343b8:
    // 0x3343b8: 0x40f809  jalr        $v0
label_3343bc:
    if (ctx->pc == 0x3343BCu) {
        ctx->pc = 0x3343BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343B8u;
        // 0x3343bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343C0u;
        goto label_3343c0;
    }
    ctx->pc = 0x3343B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3343C0u);
        ctx->pc = 0x3343BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343B8u;
        // 0x3343bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3343B8u, 0x3343C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3343C0u;
label_3343c0:
    // 0x3343c0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3343c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3343c4:
    // 0x3343c4: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
label_3343c8:
    if (ctx->pc == 0x3343C8u) {
        ctx->pc = 0x3343CCu;
        goto label_3343cc;
    }
    ctx->pc = 0x3343C4u;
    {
        const bool branch_taken_0x3343c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3343c4) {
            ctx->pc = 0x334408u;
            goto label_334408;
        }
    }
    ctx->pc = 0x3343CCu;
label_3343cc:
    // 0x3343cc: 0xc0cd3b4  jal         func_334ED0
label_3343d0:
    if (ctx->pc == 0x3343D0u) {
        ctx->pc = 0x3343D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343CCu;
        // 0x3343d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343D4u;
        goto label_3343d4;
    }
    ctx->pc = 0x3343CCu;
    SET_GPR_U32(ctx, 31, 0x3343D4u);
    ctx->pc = 0x3343D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343CCu;
    // 0x3343d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334ED0u, 0x3343CCu, 0x3343D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343D4u;
label_3343d4:
    // 0x3343d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3343d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3343d8:
    // 0x3343d8: 0xc0c9c32  jal         func_3270C8
label_3343dc:
    if (ctx->pc == 0x3343DCu) {
        ctx->pc = 0x3343DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343D8u;
        // 0x3343dc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343E0u;
        goto label_3343e0;
    }
    ctx->pc = 0x3343D8u;
    SET_GPR_U32(ctx, 31, 0x3343E0u);
    ctx->pc = 0x3343DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343D8u;
    // 0x3343dc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270C8u, 0x3343D8u, 0x3343E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343E0u;
label_3343e0:
    // 0x3343e0: 0xc0c9c10  jal         func_327040
label_3343e4:
    if (ctx->pc == 0x3343E4u) {
        ctx->pc = 0x3343E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343E0u;
        // 0x3343e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343E8u;
        goto label_3343e8;
    }
    ctx->pc = 0x3343E0u;
    SET_GPR_U32(ctx, 31, 0x3343E8u);
    ctx->pc = 0x3343E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343E0u;
    // 0x3343e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327040u, 0x3343E0u, 0x3343E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3343E8u;
label_3343e8:
    // 0x3343e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3343e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3343ec:
    // 0x3343ec: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3343f0:
    if (ctx->pc == 0x3343F0u) {
        ctx->pc = 0x3343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343ECu;
        // 0x3343f0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3343F4u;
        goto label_3343f4;
    }
    ctx->pc = 0x3343ECu;
    {
        const bool branch_taken_0x3343ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3343F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343ECu;
        // 0x3343f0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3343ec) {
            ctx->pc = 0x334420u;
            goto label_334420;
        }
    }
    ctx->pc = 0x3343F4u;
label_3343f4:
    // 0x3343f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3343f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3343f8:
    // 0x3343f8: 0xc0c9c98  jal         func_327260
label_3343fc:
    if (ctx->pc == 0x3343FCu) {
        ctx->pc = 0x3343FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3343F8u;
        // 0x3343fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334400u;
        goto label_334400;
    }
    ctx->pc = 0x3343F8u;
    SET_GPR_U32(ctx, 31, 0x334400u);
    ctx->pc = 0x3343FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3343F8u;
    // 0x3343fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327260u, 0x3343F8u, 0x334400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334400u;
label_334400:
    // 0x334400: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_334404:
    if (ctx->pc == 0x334404u) {
        ctx->pc = 0x334408u;
        goto label_334408;
    }
    ctx->pc = 0x334400u;
    {
        const bool branch_taken_0x334400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334400) {
            ctx->pc = 0x334420u;
            goto label_334420;
        }
    }
    ctx->pc = 0x334408u;
label_334408:
    // 0x334408: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_33440c:
    if (ctx->pc == 0x33440Cu) {
        ctx->pc = 0x33440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334408u;
        // 0x33440c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334410u;
        goto label_334410;
    }
    ctx->pc = 0x334408u;
    {
        const bool branch_taken_0x334408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334408u;
        // 0x33440c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334408) {
            ctx->pc = 0x334434u;
            goto label_334434;
        }
    }
    ctx->pc = 0x334410u;
label_334410:
    // 0x334410: 0xc0f528a  jal         func_3D4A28
label_334414:
    if (ctx->pc == 0x334414u) {
        ctx->pc = 0x334414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334410u;
        // 0x334414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334418u;
        goto label_334418;
    }
    ctx->pc = 0x334410u;
    SET_GPR_U32(ctx, 31, 0x334418u);
    ctx->pc = 0x334414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334410u;
    // 0x334414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x334410u, 0x334418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334418u;
label_334418:
    // 0x334418: 0x10000006  b           . + 4 + (0x6 << 2)
label_33441c:
    if (ctx->pc == 0x33441Cu) {
        ctx->pc = 0x33441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334418u;
        // 0x33441c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334420u;
        goto label_334420;
    }
    ctx->pc = 0x334418u;
    {
        const bool branch_taken_0x334418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334418u;
        // 0x33441c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334418) {
            ctx->pc = 0x334434u;
            goto label_334434;
        }
    }
    ctx->pc = 0x334420u;
label_334420:
    // 0x334420: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_334424:
    if (ctx->pc == 0x334424u) {
        ctx->pc = 0x334424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334420u;
        // 0x334424: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334428u;
        goto label_334428;
    }
    ctx->pc = 0x334420u;
    {
        const bool branch_taken_0x334420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334420u;
        // 0x334424: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334420) {
            ctx->pc = 0x334434u;
            goto label_334434;
        }
    }
    ctx->pc = 0x334428u;
label_334428:
    // 0x334428: 0xc0f528a  jal         func_3D4A28
label_33442c:
    if (ctx->pc == 0x33442Cu) {
        ctx->pc = 0x33442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334428u;
        // 0x33442c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334430u;
        goto label_334430;
    }
    ctx->pc = 0x334428u;
    SET_GPR_U32(ctx, 31, 0x334430u);
    ctx->pc = 0x33442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334428u;
    // 0x33442c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x334428u, 0x334430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334430u;
label_334430:
    // 0x334430: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x334430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_334434:
    // 0x334434: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x334434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_334438:
    // 0x334438: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x334438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33443c:
    // 0x33443c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33443cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_334440:
    // 0x334440: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x334440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_334444:
    // 0x334444: 0x3e00008  jr          $ra
label_334448:
    if (ctx->pc == 0x334448u) {
        ctx->pc = 0x334448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334444u;
        // 0x334448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33444Cu;
        goto label_33444c;
    }
    ctx->pc = 0x334444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334444u;
        // 0x334448: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33444Cu;
label_33444c:
    // 0x33444c: 0x0  nop
    ctx->pc = 0x33444cu;
    // NOP
    ctx->pc = 0x334450u;
}
