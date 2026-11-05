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

// Function: sub_00242300
// Address: 0x242300 - 0x242520
void sub_00242300_0x242300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242300_0x242300");
#endif

    switch (ctx->pc) {
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        case 0x24237cu: goto label_24237c;
        case 0x242380u: goto label_242380;
        case 0x242384u: goto label_242384;
        case 0x242388u: goto label_242388;
        case 0x24238cu: goto label_24238c;
        case 0x242390u: goto label_242390;
        case 0x242394u: goto label_242394;
        case 0x242398u: goto label_242398;
        case 0x24239cu: goto label_24239c;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423a4u: goto label_2423a4;
        case 0x2423a8u: goto label_2423a8;
        case 0x2423acu: goto label_2423ac;
        case 0x2423b0u: goto label_2423b0;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423b8u: goto label_2423b8;
        case 0x2423bcu: goto label_2423bc;
        case 0x2423c0u: goto label_2423c0;
        case 0x2423c4u: goto label_2423c4;
        case 0x2423c8u: goto label_2423c8;
        case 0x2423ccu: goto label_2423cc;
        case 0x2423d0u: goto label_2423d0;
        case 0x2423d4u: goto label_2423d4;
        case 0x2423d8u: goto label_2423d8;
        case 0x2423dcu: goto label_2423dc;
        case 0x2423e0u: goto label_2423e0;
        case 0x2423e4u: goto label_2423e4;
        case 0x2423e8u: goto label_2423e8;
        case 0x2423ecu: goto label_2423ec;
        case 0x2423f0u: goto label_2423f0;
        case 0x2423f4u: goto label_2423f4;
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        default: break;
    }

    ctx->pc = 0x242300u;

label_242300:
    // 0x242300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242304:
    // 0x242304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242308:
    // 0x242308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x242308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_24230c:
    // 0x24230c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_242310:
    // 0x242310: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x242310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_242314:
    // 0x242314: 0xc0899bc  jal         func_2266F0
label_242318:
    if (ctx->pc == 0x242318u) {
        ctx->pc = 0x242318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242314u;
        // 0x242318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24231Cu;
        goto label_24231c;
    }
    ctx->pc = 0x242314u;
    SET_GPR_U32(ctx, 31, 0x24231Cu);
    ctx->pc = 0x242318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242314u;
    // 0x242318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x242314u, 0x24231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24231Cu;
label_24231c:
    // 0x24231c: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x24231cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242320:
    // 0x242320: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x242320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_242324:
    // 0x242324: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_242328:
    if (ctx->pc == 0x242328u) {
        ctx->pc = 0x242328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242324u;
        // 0x242328: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24232Cu;
        goto label_24232c;
    }
    ctx->pc = 0x242324u;
    {
        const bool branch_taken_0x242324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242324u;
        // 0x242328: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242324) {
            ctx->pc = 0x242340u;
            goto label_242340;
        }
    }
    ctx->pc = 0x24232Cu;
label_24232c:
    // 0x24232c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24232cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242330:
    // 0x242330: 0x1000000e  b           . + 4 + (0xE << 2)
label_242334:
    if (ctx->pc == 0x242334u) {
        ctx->pc = 0x242334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242330u;
        // 0x242334: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242338u;
        goto label_242338;
    }
    ctx->pc = 0x242330u;
    {
        const bool branch_taken_0x242330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242330u;
        // 0x242334: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242330) {
            ctx->pc = 0x24236Cu;
            goto label_24236c;
        }
    }
    ctx->pc = 0x242338u;
label_242338:
    // 0x242338: 0x1000000c  b           . + 4 + (0xC << 2)
label_24233c:
    if (ctx->pc == 0x24233Cu) {
        ctx->pc = 0x24233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242338u;
        // 0x24233c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242340u;
        goto label_242340;
    }
    ctx->pc = 0x242338u;
    {
        const bool branch_taken_0x242338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242338u;
        // 0x24233c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242338) {
            ctx->pc = 0x24236Cu;
            goto label_24236c;
        }
    }
    ctx->pc = 0x242340u;
label_242340:
    // 0x242340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242344:
    // 0x242344: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x242344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_242348:
    // 0x242348: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x242348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_24234c:
    // 0x24234c: 0x0  nop
    ctx->pc = 0x24234cu;
    // NOP
label_242350:
    // 0x242350: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242354:
    // 0x242354: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_242358:
    if (ctx->pc == 0x242358u) {
        ctx->pc = 0x242358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242354u;
        // 0x242358: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24235Cu;
        goto label_24235c;
    }
    ctx->pc = 0x242354u;
    {
        const bool branch_taken_0x242354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x242358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242354u;
        // 0x242358: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242354) {
            ctx->pc = 0x242338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242338;
        }
    }
    ctx->pc = 0x24235Cu;
label_24235c:
    // 0x24235c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x24235cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_242360:
    // 0x242360: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_242364:
    if (ctx->pc == 0x242364u) {
        ctx->pc = 0x242364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242360u;
        // 0x242364: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242368u;
        goto label_242368;
    }
    ctx->pc = 0x242360u;
    {
        const bool branch_taken_0x242360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242360u;
        // 0x242364: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242360) {
            ctx->pc = 0x242350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_242350;
        }
    }
    ctx->pc = 0x242368u;
label_242368:
    // 0x242368: 0x8cf101e8  lw          $s1, 0x1E8($a3)
    ctx->pc = 0x242368u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_24236c:
    // 0x24236c: 0x24a560a0  addiu       $a1, $a1, 0x60A0
    ctx->pc = 0x24236cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24736));
label_242370:
    // 0x242370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x242370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242374:
    // 0x242374: 0xc073fde  jal         func_1CFF78
label_242378:
    if (ctx->pc == 0x242378u) {
        ctx->pc = 0x242378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242374u;
        // 0x242378: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24237Cu;
        goto label_24237c;
    }
    ctx->pc = 0x242374u;
    SET_GPR_U32(ctx, 31, 0x24237Cu);
    ctx->pc = 0x242378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242374u;
    // 0x242378: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x242374u, 0x24237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24237Cu;
label_24237c:
    // 0x24237c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_242380:
    // 0x242380: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x242380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_242384:
    // 0x242384: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x242384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_242388:
    // 0x242388: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_24238c:
    if (ctx->pc == 0x24238Cu) {
        ctx->pc = 0x24238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242388u;
        // 0x24238c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242390u;
        goto label_242390;
    }
    ctx->pc = 0x242388u;
    {
        const bool branch_taken_0x242388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242388u;
        // 0x24238c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242388) {
            ctx->pc = 0x242398u;
            goto label_242398;
        }
    }
    ctx->pc = 0x242390u;
label_242390:
    // 0x242390: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x242390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_242394:
    // 0x242394: 0x284506b8  slti        $a1, $v0, 0x6B8
    ctx->pc = 0x242394u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1720) ? 1 : 0);
label_242398:
    // 0x242398: 0x10a00041  beqz        $a1, . + 4 + (0x41 << 2)
label_24239c:
    if (ctx->pc == 0x24239Cu) {
        ctx->pc = 0x2423A0u;
        goto label_2423a0;
    }
    ctx->pc = 0x242398u;
    {
        const bool branch_taken_0x242398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x242398) {
            ctx->pc = 0x2424A0u;
            goto label_2424a0;
        }
    }
    ctx->pc = 0x2423A0u;
label_2423a0:
    // 0x2423a0: 0x8e030388  lw          $v1, 0x388($s0)
    ctx->pc = 0x2423a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2423a4:
    // 0x2423a4: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_2423a8:
    if (ctx->pc == 0x2423A8u) {
        ctx->pc = 0x2423ACu;
        goto label_2423ac;
    }
    ctx->pc = 0x2423A4u;
    {
        const bool branch_taken_0x2423a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2423a4) {
            ctx->pc = 0x2424A0u;
            goto label_2424a0;
        }
    }
    ctx->pc = 0x2423ACu;
label_2423ac:
    // 0x2423ac: 0x8c620220  lw          $v0, 0x220($v1)
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
label_2423b0:
    // 0x2423b0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2423b4:
    if (ctx->pc == 0x2423B4u) {
        ctx->pc = 0x2423B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423B0u;
        // 0x2423b4: 0x8c6300b8  lw          $v1, 0xB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423B8u;
        goto label_2423b8;
    }
    ctx->pc = 0x2423B0u;
    {
        const bool branch_taken_0x2423b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2423b0) {
            ctx->pc = 0x2423B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2423B0u;
            // 0x2423b4: 0x8c6300b8  lw          $v1, 0xB8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2423E4u;
            goto label_2423e4;
        }
    }
    ctx->pc = 0x2423B8u;
label_2423b8:
    // 0x2423b8: 0xc06974a  jal         func_1A5D28
label_2423bc:
    if (ctx->pc == 0x2423BCu) {
        ctx->pc = 0x2423BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423B8u;
        // 0x2423bc: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423C0u;
        goto label_2423c0;
    }
    ctx->pc = 0x2423B8u;
    SET_GPR_U32(ctx, 31, 0x2423C0u);
    ctx->pc = 0x2423BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423B8u;
    // 0x2423bc: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2423B8u, 0x2423C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423C0u;
label_2423c0:
    // 0x2423c0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2423c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2423c4:
    // 0x2423c4: 0xc06a05e  jal         func_1A8178
label_2423c8:
    if (ctx->pc == 0x2423C8u) {
        ctx->pc = 0x2423C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423C4u;
        // 0x2423c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423CCu;
        goto label_2423cc;
    }
    ctx->pc = 0x2423C4u;
    SET_GPR_U32(ctx, 31, 0x2423CCu);
    ctx->pc = 0x2423C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423C4u;
    // 0x2423c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2423C4u, 0x2423CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423CCu;
label_2423cc:
    // 0x2423cc: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
label_2423d0:
    if (ctx->pc == 0x2423D0u) {
        ctx->pc = 0x2423D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423CCu;
        // 0x2423d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423D4u;
        goto label_2423d4;
    }
    ctx->pc = 0x2423CCu;
    {
        const bool branch_taken_0x2423cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423CCu;
        // 0x2423d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423cc) {
            ctx->pc = 0x24250Cu;
            goto label_24250c;
        }
    }
    ctx->pc = 0x2423D4u;
label_2423d4:
    // 0x2423d4: 0xc098514  jal         func_261450
label_2423d8:
    if (ctx->pc == 0x2423D8u) {
        ctx->pc = 0x2423D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423D4u;
        // 0x2423d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423DCu;
        goto label_2423dc;
    }
    ctx->pc = 0x2423D4u;
    SET_GPR_U32(ctx, 31, 0x2423DCu);
    ctx->pc = 0x2423D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2423D4u;
    // 0x2423d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x2423D4u, 0x2423DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2423DCu;
label_2423dc:
    // 0x2423dc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2423e0:
    if (ctx->pc == 0x2423E0u) {
        ctx->pc = 0x2423E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423DCu;
        // 0x2423e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2423E4u;
        goto label_2423e4;
    }
    ctx->pc = 0x2423DCu;
    {
        const bool branch_taken_0x2423dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423DCu;
        // 0x2423e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423dc) {
            ctx->pc = 0x24250Cu;
            goto label_24250c;
        }
    }
    ctx->pc = 0x2423E4u;
label_2423e4:
    // 0x2423e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2423e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2423e8:
    // 0x2423e8: 0xc46001ac  lwc1        $f0, 0x1AC($v1)
    ctx->pc = 0x2423e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2423ec:
    // 0x2423ec: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2423ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2423f0:
    // 0x2423f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2423f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2423f4:
    // 0x2423f4: 0x0  nop
    ctx->pc = 0x2423f4u;
    // NOP
label_2423f8:
    // 0x2423f8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2423fc:
    if (ctx->pc == 0x2423FCu) {
        ctx->pc = 0x2423FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423F8u;
        // 0x2423fc: 0x246401ac  addiu       $a0, $v1, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 428));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242400u;
        goto label_242400;
    }
    ctx->pc = 0x2423F8u;
    {
        const bool branch_taken_0x2423f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2423FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2423F8u;
        // 0x2423fc: 0x246401ac  addiu       $a0, $v1, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423f8) {
            ctx->pc = 0x242428u;
            goto label_242428;
        }
    }
    ctx->pc = 0x242400u;
label_242400:
    // 0x242400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_242404:
    // 0x242404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_242408:
    // 0x242408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x242408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24240c:
    // 0x24240c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x24240cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_242410:
    // 0x242410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x242410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242414:
    // 0x242414: 0x0  nop
    ctx->pc = 0x242414u;
    // NOP
label_242418:
    // 0x242418: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_24241c:
    if (ctx->pc == 0x24241Cu) {
        ctx->pc = 0x24241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242418u;
        // 0x24241c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x242420u;
        goto label_242420;
    }
    ctx->pc = 0x242418u;
    {
        const bool branch_taken_0x242418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242418u;
        // 0x24241c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x242418) {
            ctx->pc = 0x242424u;
            goto label_242424;
        }
    }
    ctx->pc = 0x242420u;
label_242420:
    // 0x242420: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x242420u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_242424:
    // 0x242424: 0xe46201ac  swc1        $f2, 0x1AC($v1)
    ctx->pc = 0x242424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
label_242428:
    // 0x242428: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x242428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24242c:
    // 0x24242c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x24242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_242430:
    // 0x242430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x242430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_242434:
    // 0x242434: 0x0  nop
    ctx->pc = 0x242434u;
    // NOP
label_242438:
    // 0x242438: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_24243c:
    if (ctx->pc == 0x24243Cu) {
        ctx->pc = 0x24243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242438u;
        // 0x24243c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242440u;
        goto label_242440;
    }
    ctx->pc = 0x242438u;
    {
        const bool branch_taken_0x242438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242438u;
        // 0x24243c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242438) {
            ctx->pc = 0x24247Cu;
            goto label_24247c;
        }
    }
    ctx->pc = 0x242440u;
label_242440:
    // 0x242440: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x242440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_242444:
    // 0x242444: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x242444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_242448:
    // 0x242448: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_24244c:
    if (ctx->pc == 0x24244Cu) {
        ctx->pc = 0x24244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242448u;
        // 0x24244c: 0x8e020388  lw          $v0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242450u;
        goto label_242450;
    }
    ctx->pc = 0x242448u;
    {
        const bool branch_taken_0x242448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242448) {
            ctx->pc = 0x24244Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242448u;
            // 0x24244c: 0x8e020388  lw          $v0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24248Cu;
            goto label_24248c;
        }
    }
    ctx->pc = 0x242450u;
label_242450:
    // 0x242450: 0x8e040388  lw          $a0, 0x388($s0)
    ctx->pc = 0x242450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_242454:
    // 0x242454: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x242454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_242458:
    // 0x242458: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_24245c:
    // 0x24245c: 0x40f809  jalr        $v0
label_242460:
    if (ctx->pc == 0x242460u) {
        ctx->pc = 0x242464u;
        goto label_242464;
    }
    ctx->pc = 0x24245Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242464u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24245Cu, 0x242464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242464u;
label_242464:
    // 0x242464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242468:
    // 0x242468: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24246c:
    // 0x24246c: 0xc08fed2  jal         func_23FB48
label_242470:
    if (ctx->pc == 0x242470u) {
        ctx->pc = 0x242470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24246Cu;
        // 0x242470: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242474u;
        goto label_242474;
    }
    ctx->pc = 0x24246Cu;
    SET_GPR_U32(ctx, 31, 0x242474u);
    ctx->pc = 0x242470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24246Cu;
    // 0x242470: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x24246Cu, 0x242474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242474u;
label_242474:
    // 0x242474: 0x10000005  b           . + 4 + (0x5 << 2)
label_242478:
    if (ctx->pc == 0x242478u) {
        ctx->pc = 0x242478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242474u;
        // 0x242478: 0x8e020388  lw          $v0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24247Cu;
        goto label_24247c;
    }
    ctx->pc = 0x242474u;
    {
        const bool branch_taken_0x242474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242474u;
        // 0x242478: 0x8e020388  lw          $v0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242474) {
            ctx->pc = 0x24248Cu;
            goto label_24248c;
        }
    }
    ctx->pc = 0x24247Cu;
label_24247c:
    // 0x24247c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24247cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_242480:
    // 0x242480: 0xc08fed2  jal         func_23FB48
label_242484:
    if (ctx->pc == 0x242484u) {
        ctx->pc = 0x242484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242480u;
        // 0x242484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242488u;
        goto label_242488;
    }
    ctx->pc = 0x242480u;
    SET_GPR_U32(ctx, 31, 0x242488u);
    ctx->pc = 0x242484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242480u;
    // 0x242484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x242480u, 0x242488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242488u;
label_242488:
    // 0x242488: 0x8e020388  lw          $v0, 0x388($s0)
    ctx->pc = 0x242488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_24248c:
    // 0x24248c: 0x8c440250  lw          $a0, 0x250($v0)
    ctx->pc = 0x24248cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_242490:
    // 0x242490: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_242494:
    if (ctx->pc == 0x242494u) {
        ctx->pc = 0x242498u;
        goto label_242498;
    }
    ctx->pc = 0x242490u;
    {
        const bool branch_taken_0x242490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242490) {
            ctx->pc = 0x2424A0u;
            goto label_2424a0;
        }
    }
    ctx->pc = 0x242498u;
label_242498:
    // 0x242498: 0xc073e86  jal         func_1CFA18
label_24249c:
    if (ctx->pc == 0x24249Cu) {
        ctx->pc = 0x24249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242498u;
        // 0x24249c: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424A0u;
        goto label_2424a0;
    }
    ctx->pc = 0x242498u;
    SET_GPR_U32(ctx, 31, 0x2424A0u);
    ctx->pc = 0x24249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242498u;
    // 0x24249c: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x242498u, 0x2424A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424A0u;
label_2424a0:
    // 0x2424a0: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_2424a4:
    if (ctx->pc == 0x2424A4u) {
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424A0u;
        // 0x2424a4: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424A8u;
        goto label_2424a8;
    }
    ctx->pc = 0x2424A0u;
    {
        const bool branch_taken_0x2424a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2424a0) {
            ctx->pc = 0x2424A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2424A0u;
            // 0x2424a4: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2424D8u;
            goto label_2424d8;
        }
    }
    ctx->pc = 0x2424A8u;
label_2424a8:
    // 0x2424a8: 0x8e44025c  lw          $a0, 0x25C($s2)
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_2424ac:
    // 0x2424ac: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2424b0:
    if (ctx->pc == 0x2424B0u) {
        ctx->pc = 0x2424B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424ACu;
        // 0x2424b0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424B4u;
        goto label_2424b4;
    }
    ctx->pc = 0x2424ACu;
    {
        const bool branch_taken_0x2424ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2424ac) {
            ctx->pc = 0x2424B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2424ACu;
            // 0x2424b0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2424D8u;
            goto label_2424d8;
        }
    }
    ctx->pc = 0x2424B4u;
label_2424b4:
    // 0x2424b4: 0xc073e86  jal         func_1CFA18
label_2424b8:
    if (ctx->pc == 0x2424B8u) {
        ctx->pc = 0x2424B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424B4u;
        // 0x2424b8: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424BCu;
        goto label_2424bc;
    }
    ctx->pc = 0x2424B4u;
    SET_GPR_U32(ctx, 31, 0x2424BCu);
    ctx->pc = 0x2424B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2424B4u;
    // 0x2424b8: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2424B4u, 0x2424BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424BCu;
label_2424bc:
    // 0x2424bc: 0x8e44025c  lw          $a0, 0x25C($s2)
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_2424c0:
    // 0x2424c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2424c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2424c4:
    // 0x2424c4: 0xc073f08  jal         func_1CFC20
label_2424c8:
    if (ctx->pc == 0x2424C8u) {
        ctx->pc = 0x2424C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424C4u;
        // 0x2424c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424CCu;
        goto label_2424cc;
    }
    ctx->pc = 0x2424C4u;
    SET_GPR_U32(ctx, 31, 0x2424CCu);
    ctx->pc = 0x2424C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2424C4u;
    // 0x2424c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2424C4u, 0x2424CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424CCu;
label_2424cc:
    // 0x2424cc: 0xc09823c  jal         func_2608F0
label_2424d0:
    if (ctx->pc == 0x2424D0u) {
        ctx->pc = 0x2424D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424CCu;
        // 0x2424d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424D4u;
        goto label_2424d4;
    }
    ctx->pc = 0x2424CCu;
    SET_GPR_U32(ctx, 31, 0x2424D4u);
    ctx->pc = 0x2424D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2424CCu;
    // 0x2424d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2608F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2608F0u, 0x2424CCu, 0x2424D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424D4u;
label_2424d4:
    // 0x2424d4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2424d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2424d8:
    // 0x2424d8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2424d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_2424dc:
    // 0x2424dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2424e0:
    if (ctx->pc == 0x2424E0u) {
        ctx->pc = 0x2424E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424DCu;
        // 0x2424e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424E4u;
        goto label_2424e4;
    }
    ctx->pc = 0x2424DCu;
    {
        const bool branch_taken_0x2424dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424DCu;
        // 0x2424e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424dc) {
            ctx->pc = 0x2424ECu;
            goto label_2424ec;
        }
    }
    ctx->pc = 0x2424E4u;
label_2424e4:
    // 0x2424e4: 0xc08dc16  jal         func_237058
label_2424e8:
    if (ctx->pc == 0x2424E8u) {
        ctx->pc = 0x2424E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2424E4u;
        // 0x2424e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2424ECu;
        goto label_2424ec;
    }
    ctx->pc = 0x2424E4u;
    SET_GPR_U32(ctx, 31, 0x2424ECu);
    ctx->pc = 0x2424E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2424E4u;
    // 0x2424e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x2424E4u, 0x2424ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2424ECu;
label_2424ec:
    // 0x2424ec: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2424ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2424f0:
    // 0x2424f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2424f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2424f4:
    // 0x2424f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2424f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2424f8:
    // 0x2424f8: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2424f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_2424fc:
    // 0x2424fc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x2424fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_242500:
    // 0x242500: 0xc08a15a  jal         func_228568
label_242504:
    if (ctx->pc == 0x242504u) {
        ctx->pc = 0x242504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242500u;
        // 0x242504: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242508u;
        goto label_242508;
    }
    ctx->pc = 0x242500u;
    SET_GPR_U32(ctx, 31, 0x242508u);
    ctx->pc = 0x242504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242500u;
    // 0x242504: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x242500u, 0x242508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242508u;
label_242508:
    // 0x242508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24250c:
    // 0x24250c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24250cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_242510:
    // 0x242510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x242510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242514:
    // 0x242514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x242514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_242518:
    // 0x242518: 0x3e00008  jr          $ra
label_24251c:
    if (ctx->pc == 0x24251Cu) {
        ctx->pc = 0x24251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242518u;
        // 0x24251c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242520u;
        goto label_fallthrough_0x242518;
    }
    ctx->pc = 0x242518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242518u;
        // 0x24251c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x242518:
    ctx->pc = 0x242520u;
}
