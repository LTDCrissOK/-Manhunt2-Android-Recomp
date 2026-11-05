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

// Function: sub_002B4328
// Address: 0x2b4328 - 0x2b4450
void sub_002B4328_0x2b4328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4328_0x2b4328");
#endif

    switch (ctx->pc) {
        case 0x2b4328u: goto label_2b4328;
        case 0x2b432cu: goto label_2b432c;
        case 0x2b4330u: goto label_2b4330;
        case 0x2b4334u: goto label_2b4334;
        case 0x2b4338u: goto label_2b4338;
        case 0x2b433cu: goto label_2b433c;
        case 0x2b4340u: goto label_2b4340;
        case 0x2b4344u: goto label_2b4344;
        case 0x2b4348u: goto label_2b4348;
        case 0x2b434cu: goto label_2b434c;
        case 0x2b4350u: goto label_2b4350;
        case 0x2b4354u: goto label_2b4354;
        case 0x2b4358u: goto label_2b4358;
        case 0x2b435cu: goto label_2b435c;
        case 0x2b4360u: goto label_2b4360;
        case 0x2b4364u: goto label_2b4364;
        case 0x2b4368u: goto label_2b4368;
        case 0x2b436cu: goto label_2b436c;
        case 0x2b4370u: goto label_2b4370;
        case 0x2b4374u: goto label_2b4374;
        case 0x2b4378u: goto label_2b4378;
        case 0x2b437cu: goto label_2b437c;
        case 0x2b4380u: goto label_2b4380;
        case 0x2b4384u: goto label_2b4384;
        case 0x2b4388u: goto label_2b4388;
        case 0x2b438cu: goto label_2b438c;
        case 0x2b4390u: goto label_2b4390;
        case 0x2b4394u: goto label_2b4394;
        case 0x2b4398u: goto label_2b4398;
        case 0x2b439cu: goto label_2b439c;
        case 0x2b43a0u: goto label_2b43a0;
        case 0x2b43a4u: goto label_2b43a4;
        case 0x2b43a8u: goto label_2b43a8;
        case 0x2b43acu: goto label_2b43ac;
        case 0x2b43b0u: goto label_2b43b0;
        case 0x2b43b4u: goto label_2b43b4;
        case 0x2b43b8u: goto label_2b43b8;
        case 0x2b43bcu: goto label_2b43bc;
        case 0x2b43c0u: goto label_2b43c0;
        case 0x2b43c4u: goto label_2b43c4;
        case 0x2b43c8u: goto label_2b43c8;
        case 0x2b43ccu: goto label_2b43cc;
        case 0x2b43d0u: goto label_2b43d0;
        case 0x2b43d4u: goto label_2b43d4;
        case 0x2b43d8u: goto label_2b43d8;
        case 0x2b43dcu: goto label_2b43dc;
        case 0x2b43e0u: goto label_2b43e0;
        case 0x2b43e4u: goto label_2b43e4;
        case 0x2b43e8u: goto label_2b43e8;
        case 0x2b43ecu: goto label_2b43ec;
        case 0x2b43f0u: goto label_2b43f0;
        case 0x2b43f4u: goto label_2b43f4;
        case 0x2b43f8u: goto label_2b43f8;
        case 0x2b43fcu: goto label_2b43fc;
        case 0x2b4400u: goto label_2b4400;
        case 0x2b4404u: goto label_2b4404;
        case 0x2b4408u: goto label_2b4408;
        case 0x2b440cu: goto label_2b440c;
        case 0x2b4410u: goto label_2b4410;
        case 0x2b4414u: goto label_2b4414;
        case 0x2b4418u: goto label_2b4418;
        case 0x2b441cu: goto label_2b441c;
        case 0x2b4420u: goto label_2b4420;
        case 0x2b4424u: goto label_2b4424;
        case 0x2b4428u: goto label_2b4428;
        case 0x2b442cu: goto label_2b442c;
        case 0x2b4430u: goto label_2b4430;
        case 0x2b4434u: goto label_2b4434;
        case 0x2b4438u: goto label_2b4438;
        case 0x2b443cu: goto label_2b443c;
        case 0x2b4440u: goto label_2b4440;
        case 0x2b4444u: goto label_2b4444;
        case 0x2b4448u: goto label_2b4448;
        case 0x2b444cu: goto label_2b444c;
        default: break;
    }

    ctx->pc = 0x2b4328u;

label_2b4328:
    // 0x2b4328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b432c:
    // 0x2b432c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2b4330:
    // 0x2b4330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4334:
    // 0x2b4334: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2b4338:
    // 0x2b4338: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b4338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b433c:
    // 0x2b433c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2b4340:
    // 0x2b4340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b4344:
    // 0x2b4344: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b4344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b4348:
    // 0x2b4348: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b4348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2b434c:
    // 0x2b434c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b434cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2b4350:
    // 0x2b4350: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2b4350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2b4354:
    // 0x2b4354: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2b4354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2b4358:
    // 0x2b4358: 0xc09dcc6  jal         func_277318
label_2b435c:
    if (ctx->pc == 0x2B435Cu) {
        ctx->pc = 0x2B435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4358u;
        // 0x2b435c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4360u;
        goto label_2b4360;
    }
    ctx->pc = 0x2B4358u;
    SET_GPR_U32(ctx, 31, 0x2B4360u);
    ctx->pc = 0x2B435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4358u;
    // 0x2b435c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2B4358u, 0x2B4360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4360u;
label_2b4360:
    // 0x2b4360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4364:
    // 0x2b4364: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_2b4368:
    if (ctx->pc == 0x2B4368u) {
        ctx->pc = 0x2B4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4364u;
        // 0x2b4368: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B436Cu;
        goto label_2b436c;
    }
    ctx->pc = 0x2B4364u;
    {
        const bool branch_taken_0x2b4364 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4364) {
            ctx->pc = 0x2B4368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4364u;
            // 0x2b4368: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4374u;
            goto label_2b4374;
        }
    }
    ctx->pc = 0x2B436Cu;
label_2b436c:
    // 0x2b436c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2b4370:
    if (ctx->pc == 0x2B4370u) {
        ctx->pc = 0x2B4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B436Cu;
        // 0x2b4370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4374u;
        goto label_2b4374;
    }
    ctx->pc = 0x2B436Cu;
    {
        const bool branch_taken_0x2b436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B436Cu;
        // 0x2b4370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b436c) {
            ctx->pc = 0x2B4424u;
            goto label_2b4424;
        }
    }
    ctx->pc = 0x2B4374u;
label_2b4374:
    // 0x2b4374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b4378:
    // 0x2b4378: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b437c:
    // 0x2b437c: 0x40f809  jalr        $v0
label_2b4380:
    if (ctx->pc == 0x2B4380u) {
        ctx->pc = 0x2B4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B437Cu;
        // 0x2b4380: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4384u;
        goto label_2b4384;
    }
    ctx->pc = 0x2B437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4384u);
        ctx->pc = 0x2B4380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B437Cu;
        // 0x2b4380: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B437Cu, 0x2B4384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4384u;
label_2b4384:
    // 0x2b4384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4388:
    // 0x2b4388: 0xc0f52a8  jal         func_3D4AA0
label_2b438c:
    if (ctx->pc == 0x2B438Cu) {
        ctx->pc = 0x2B438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4388u;
        // 0x2b438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4390u;
        goto label_2b4390;
    }
    ctx->pc = 0x2B4388u;
    SET_GPR_U32(ctx, 31, 0x2B4390u);
    ctx->pc = 0x2B438Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4388u;
    // 0x2b438c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2B4388u, 0x2B4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4390u;
label_2b4390:
    // 0x2b4390: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4394:
    // 0x2b4394: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b4394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4398:
    // 0x2b4398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b439c:
    // 0x2b439c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b439cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b43a0:
    // 0x2b43a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b43a4:
    // 0x2b43a4: 0x40f809  jalr        $v0
label_2b43a8:
    if (ctx->pc == 0x2B43A8u) {
        ctx->pc = 0x2B43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A4u;
        // 0x2b43a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43ACu;
        goto label_2b43ac;
    }
    ctx->pc = 0x2B43A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B43ACu);
        ctx->pc = 0x2B43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A4u;
        // 0x2b43a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B43A4u, 0x2B43ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B43ACu;
label_2b43ac:
    // 0x2b43ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b43acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b43b0:
    // 0x2b43b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b43b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b43b4:
    // 0x2b43b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2b43b8:
    // 0x2b43b8: 0x40f809  jalr        $v0
label_2b43bc:
    if (ctx->pc == 0x2B43BCu) {
        ctx->pc = 0x2B43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43B8u;
        // 0x2b43bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43C0u;
        goto label_2b43c0;
    }
    ctx->pc = 0x2B43B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B43C0u);
        ctx->pc = 0x2B43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43B8u;
        // 0x2b43bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B43B8u, 0x2B43C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B43C0u;
label_2b43c0:
    // 0x2b43c0: 0x16900013  bne         $s4, $s0, . + 4 + (0x13 << 2)
label_2b43c4:
    if (ctx->pc == 0x2B43C4u) {
        ctx->pc = 0x2B43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43C0u;
        // 0x2b43c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43C8u;
        goto label_2b43c8;
    }
    ctx->pc = 0x2B43C0u;
    {
        const bool branch_taken_0x2b43c0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43C0u;
        // 0x2b43c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43c0) {
            ctx->pc = 0x2B4410u;
            goto label_2b4410;
        }
    }
    ctx->pc = 0x2B43C8u;
label_2b43c8:
    // 0x2b43c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b43c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b43cc:
    // 0x2b43cc: 0xc0ad114  jal         func_2B4450
label_2b43d0:
    if (ctx->pc == 0x2B43D0u) {
        ctx->pc = 0x2B43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43CCu;
        // 0x2b43d0: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43D4u;
        goto label_2b43d4;
    }
    ctx->pc = 0x2B43CCu;
    SET_GPR_U32(ctx, 31, 0x2B43D4u);
    ctx->pc = 0x2B43D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43CCu;
    // 0x2b43d0: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4450u, 0x2B43CCu, 0x2B43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43D4u;
label_2b43d4:
    // 0x2b43d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b43d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b43d8:
    // 0x2b43d8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2b43dc:
    // 0x2b43dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2b43e0:
    if (ctx->pc == 0x2B43E0u) {
        ctx->pc = 0x2B43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43DCu;
        // 0x2b43e0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43E4u;
        goto label_2b43e4;
    }
    ctx->pc = 0x2B43DCu;
    {
        const bool branch_taken_0x2b43dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43DCu;
        // 0x2b43e0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43dc) {
            ctx->pc = 0x2B4410u;
            goto label_2b4410;
        }
    }
    ctx->pc = 0x2B43E4u;
label_2b43e4:
    // 0x2b43e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b43e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b43e8:
    // 0x2b43e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b43e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b43ec:
    // 0x2b43ec: 0xc0ad184  jal         func_2B4610
label_2b43f0:
    if (ctx->pc == 0x2B43F0u) {
        ctx->pc = 0x2B43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43ECu;
        // 0x2b43f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43F4u;
        goto label_2b43f4;
    }
    ctx->pc = 0x2B43ECu;
    SET_GPR_U32(ctx, 31, 0x2B43F4u);
    ctx->pc = 0x2B43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43ECu;
    // 0x2b43f0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4610u, 0x2B43ECu, 0x2B43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43F4u;
label_2b43f4:
    // 0x2b43f4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b43f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2b43f8:
    // 0x2b43f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2b43fc:
    if (ctx->pc == 0x2B43FCu) {
        ctx->pc = 0x2B43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F8u;
        // 0x2b43fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4400u;
        goto label_2b4400;
    }
    ctx->pc = 0x2B43F8u;
    {
        const bool branch_taken_0x2b43f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F8u;
        // 0x2b43fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43f8) {
            ctx->pc = 0x2B4410u;
            goto label_2b4410;
        }
    }
    ctx->pc = 0x2B4400u;
label_2b4400:
    // 0x2b4400: 0xc0ad164  jal         func_2B4590
label_2b4404:
    if (ctx->pc == 0x2B4404u) {
        ctx->pc = 0x2B4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4400u;
        // 0x2b4404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4408u;
        goto label_2b4408;
    }
    ctx->pc = 0x2B4400u;
    SET_GPR_U32(ctx, 31, 0x2B4408u);
    ctx->pc = 0x2B4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4400u;
    // 0x2b4404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4590u, 0x2B4400u, 0x2B4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4408u;
label_2b4408:
    // 0x2b4408: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b4408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2b440c:
    // 0x2b440c: 0x2c760001  sltiu       $s6, $v1, 0x1
    ctx->pc = 0x2b440cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b4410:
    // 0x2b4410: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2b4414:
    if (ctx->pc == 0x2B4414u) {
        ctx->pc = 0x2B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4410u;
        // 0x2b4414: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4418u;
        goto label_2b4418;
    }
    ctx->pc = 0x2B4410u;
    {
        const bool branch_taken_0x2b4410 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4410u;
        // 0x2b4414: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4410) {
            ctx->pc = 0x2B4424u;
            goto label_2b4424;
        }
    }
    ctx->pc = 0x2B4418u;
label_2b4418:
    // 0x2b4418: 0xc0f528a  jal         func_3D4A28
label_2b441c:
    if (ctx->pc == 0x2B441Cu) {
        ctx->pc = 0x2B441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4418u;
        // 0x2b441c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4420u;
        goto label_2b4420;
    }
    ctx->pc = 0x2B4418u;
    SET_GPR_U32(ctx, 31, 0x2B4420u);
    ctx->pc = 0x2B441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4418u;
    // 0x2b441c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2B4418u, 0x2B4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4420u;
label_2b4420:
    // 0x2b4420: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2b4420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b4424:
    // 0x2b4424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4428:
    // 0x2b4428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b4428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b442c:
    // 0x2b442c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b442cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4430:
    // 0x2b4430: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b4430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b4434:
    // 0x2b4434: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b4434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b4438:
    // 0x2b4438: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b4438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2b443c:
    // 0x2b443c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2b443cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b4440:
    // 0x2b4440: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2b4440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2b4444:
    // 0x2b4444: 0x3e00008  jr          $ra
label_2b4448:
    if (ctx->pc == 0x2B4448u) {
        ctx->pc = 0x2B4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4444u;
        // 0x2b4448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B444Cu;
        goto label_2b444c;
    }
    ctx->pc = 0x2B4444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4444u;
        // 0x2b4448: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B444Cu;
label_2b444c:
    // 0x2b444c: 0x0  nop
    ctx->pc = 0x2b444cu;
    // NOP
    ctx->pc = 0x2b4450u;
}
