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

// Function: sub_002C4310
// Address: 0x2c4310 - 0x2c4400
void sub_002C4310_0x2c4310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4310_0x2c4310");
#endif

    switch (ctx->pc) {
        case 0x2c4310u: goto label_2c4310;
        case 0x2c4314u: goto label_2c4314;
        case 0x2c4318u: goto label_2c4318;
        case 0x2c431cu: goto label_2c431c;
        case 0x2c4320u: goto label_2c4320;
        case 0x2c4324u: goto label_2c4324;
        case 0x2c4328u: goto label_2c4328;
        case 0x2c432cu: goto label_2c432c;
        case 0x2c4330u: goto label_2c4330;
        case 0x2c4334u: goto label_2c4334;
        case 0x2c4338u: goto label_2c4338;
        case 0x2c433cu: goto label_2c433c;
        case 0x2c4340u: goto label_2c4340;
        case 0x2c4344u: goto label_2c4344;
        case 0x2c4348u: goto label_2c4348;
        case 0x2c434cu: goto label_2c434c;
        case 0x2c4350u: goto label_2c4350;
        case 0x2c4354u: goto label_2c4354;
        case 0x2c4358u: goto label_2c4358;
        case 0x2c435cu: goto label_2c435c;
        case 0x2c4360u: goto label_2c4360;
        case 0x2c4364u: goto label_2c4364;
        case 0x2c4368u: goto label_2c4368;
        case 0x2c436cu: goto label_2c436c;
        case 0x2c4370u: goto label_2c4370;
        case 0x2c4374u: goto label_2c4374;
        case 0x2c4378u: goto label_2c4378;
        case 0x2c437cu: goto label_2c437c;
        case 0x2c4380u: goto label_2c4380;
        case 0x2c4384u: goto label_2c4384;
        case 0x2c4388u: goto label_2c4388;
        case 0x2c438cu: goto label_2c438c;
        case 0x2c4390u: goto label_2c4390;
        case 0x2c4394u: goto label_2c4394;
        case 0x2c4398u: goto label_2c4398;
        case 0x2c439cu: goto label_2c439c;
        case 0x2c43a0u: goto label_2c43a0;
        case 0x2c43a4u: goto label_2c43a4;
        case 0x2c43a8u: goto label_2c43a8;
        case 0x2c43acu: goto label_2c43ac;
        case 0x2c43b0u: goto label_2c43b0;
        case 0x2c43b4u: goto label_2c43b4;
        case 0x2c43b8u: goto label_2c43b8;
        case 0x2c43bcu: goto label_2c43bc;
        case 0x2c43c0u: goto label_2c43c0;
        case 0x2c43c4u: goto label_2c43c4;
        case 0x2c43c8u: goto label_2c43c8;
        case 0x2c43ccu: goto label_2c43cc;
        case 0x2c43d0u: goto label_2c43d0;
        case 0x2c43d4u: goto label_2c43d4;
        case 0x2c43d8u: goto label_2c43d8;
        case 0x2c43dcu: goto label_2c43dc;
        case 0x2c43e0u: goto label_2c43e0;
        case 0x2c43e4u: goto label_2c43e4;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c43ecu: goto label_2c43ec;
        case 0x2c43f0u: goto label_2c43f0;
        case 0x2c43f4u: goto label_2c43f4;
        case 0x2c43f8u: goto label_2c43f8;
        case 0x2c43fcu: goto label_2c43fc;
        default: break;
    }

    ctx->pc = 0x2c4310u;

label_2c4310:
    // 0x2c4310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c4314:
    // 0x2c4314: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c4314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c4318:
    // 0x2c4318: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c4318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c431c:
    // 0x2c431c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c431cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4320:
    // 0x2c4320: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c4324:
    // 0x2c4324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c4324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4328:
    // 0x2c4328: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c4328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c432c:
    // 0x2c432c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c432cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c4330:
    // 0x2c4330: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c4330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c4334:
    // 0x2c4334: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c4338:
    // 0x2c4338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c433c:
    // 0x2c433c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2c433cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_2c4340:
    // 0x2c4340: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c4340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4344:
    // 0x2c4344: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c4344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c4348:
    // 0x2c4348: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_2c434c:
    if (ctx->pc == 0x2C434Cu) {
        ctx->pc = 0x2C434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4348u;
        // 0x2c434c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4350u;
        goto label_2c4350;
    }
    ctx->pc = 0x2C4348u;
    {
        const bool branch_taken_0x2c4348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4348u;
        // 0x2c434c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4348) {
            ctx->pc = 0x2C43D4u;
            goto label_2c43d4;
        }
    }
    ctx->pc = 0x2C4350u;
label_2c4350:
    // 0x2c4350: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2c4350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c4354:
    // 0x2c4354: 0x0  nop
    ctx->pc = 0x2c4354u;
    // NOP
label_2c4358:
    // 0x2c4358: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c4358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2c435c:
    // 0x2c435c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2c435cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c4360:
    // 0x2c4360: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c4360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c4364:
    // 0x2c4364: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c4368:
    // 0x2c4368: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x2c4368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2c436c:
    // 0x2c436c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2c4370:
    if (ctx->pc == 0x2C4370u) {
        ctx->pc = 0x2C4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C436Cu;
        // 0x2c4370: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4374u;
        goto label_2c4374;
    }
    ctx->pc = 0x2C436Cu;
    {
        const bool branch_taken_0x2c436c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C436Cu;
        // 0x2c4370: 0x24b40001  addiu       $s4, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c436c) {
            ctx->pc = 0x2C43BCu;
            goto label_2c43bc;
        }
    }
    ctx->pc = 0x2C4374u;
label_2c4374:
    // 0x2c4374: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c4374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c4378:
    // 0x2c4378: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c437c:
    // 0x2c437c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2c437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2c4380:
    // 0x2c4380: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c4384:
    // 0x2c4384: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2c4384u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2c4388:
    // 0x2c4388: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
label_2c438c:
    if (ctx->pc == 0x2C438Cu) {
        ctx->pc = 0x2C438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4388u;
        // 0x2c438c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4390u;
        goto label_2c4390;
    }
    ctx->pc = 0x2C4388u;
    {
        const bool branch_taken_0x2c4388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4388) {
            ctx->pc = 0x2C438Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4388u;
            // 0x2c438c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43B4u;
            goto label_2c43b4;
        }
    }
    ctx->pc = 0x2C4390u;
label_2c4390:
    // 0x2c4390: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2c4394:
    // 0x2c4394: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
label_2c4398:
    if (ctx->pc == 0x2C4398u) {
        ctx->pc = 0x2C4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4394u;
        // 0x2c4398: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C439Cu;
        goto label_2c439c;
    }
    ctx->pc = 0x2C4394u;
    {
        const bool branch_taken_0x2c4394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4394) {
            ctx->pc = 0x2C4398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4394u;
            // 0x2c4398: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43B4u;
            goto label_2c43b4;
        }
    }
    ctx->pc = 0x2C439Cu;
label_2c439c:
    // 0x2c439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c43a0:
    // 0x2c43a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c43a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c43a4:
    // 0x2c43a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c43a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c43a8:
    // 0x2c43a8: 0x2a0f809  jalr        $s5
label_2c43ac:
    if (ctx->pc == 0x2C43ACu) {
        ctx->pc = 0x2C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43A8u;
        // 0x2c43ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43B0u;
        goto label_2c43b0;
    }
    ctx->pc = 0x2C43A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2C43B0u);
        ctx->pc = 0x2C43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43A8u;
        // 0x2c43ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C43A8u, 0x2C43B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C43B0u;
label_2c43b0:
    // 0x2c43b0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2c43b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c43b4:
    // 0x2c43b4: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_2c43b8:
    if (ctx->pc == 0x2C43B8u) {
        ctx->pc = 0x2C43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43B4u;
        // 0x2c43b8: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43BCu;
        goto label_2c43bc;
    }
    ctx->pc = 0x2C43B4u;
    {
        const bool branch_taken_0x2c43b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c43b4) {
            ctx->pc = 0x2C43B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43B4u;
            // 0x2c43b8: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4378;
        }
    }
    ctx->pc = 0x2C43BCu;
label_2c43bc:
    // 0x2c43bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c43c0:
    // 0x2c43c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c43c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c43c4:
    // 0x2c43c4: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c43c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c43c8:
    // 0x2c43c8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2c43c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c43cc:
    // 0x2c43cc: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_2c43d0:
    if (ctx->pc == 0x2C43D0u) {
        ctx->pc = 0x2C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43CCu;
        // 0x2c43d0: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43D4u;
        goto label_2c43d4;
    }
    ctx->pc = 0x2C43CCu;
    {
        const bool branch_taken_0x2c43cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c43cc) {
            ctx->pc = 0x2C43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43CCu;
            // 0x2c43d0: 0x8c64001c  lw          $a0, 0x1C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4358;
        }
    }
    ctx->pc = 0x2C43D4u;
label_2c43d4:
    // 0x2c43d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2c43d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c43d8:
    // 0x2c43d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c43d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c43dc:
    // 0x2c43dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c43dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c43e0:
    // 0x2c43e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c43e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c43e4:
    // 0x2c43e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c43e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c43e8:
    // 0x2c43e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c43e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c43ec:
    // 0x2c43ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c43ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c43f0:
    // 0x2c43f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c43f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c43f4:
    // 0x2c43f4: 0x3e00008  jr          $ra
label_2c43f8:
    if (ctx->pc == 0x2C43F8u) {
        ctx->pc = 0x2C43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F4u;
        // 0x2c43f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43FCu;
        goto label_2c43fc;
    }
    ctx->pc = 0x2C43F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F4u;
        // 0x2c43f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C43F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C43FCu;
label_2c43fc:
    // 0x2c43fc: 0x0  nop
    ctx->pc = 0x2c43fcu;
    // NOP
    ctx->pc = 0x2c4400u;
}
