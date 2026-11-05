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

// Function: sub_00365508
// Address: 0x365508 - 0x3655d0
void sub_00365508_0x365508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365508_0x365508");
#endif

    switch (ctx->pc) {
        case 0x365508u: goto label_365508;
        case 0x36550cu: goto label_36550c;
        case 0x365510u: goto label_365510;
        case 0x365514u: goto label_365514;
        case 0x365518u: goto label_365518;
        case 0x36551cu: goto label_36551c;
        case 0x365520u: goto label_365520;
        case 0x365524u: goto label_365524;
        case 0x365528u: goto label_365528;
        case 0x36552cu: goto label_36552c;
        case 0x365530u: goto label_365530;
        case 0x365534u: goto label_365534;
        case 0x365538u: goto label_365538;
        case 0x36553cu: goto label_36553c;
        case 0x365540u: goto label_365540;
        case 0x365544u: goto label_365544;
        case 0x365548u: goto label_365548;
        case 0x36554cu: goto label_36554c;
        case 0x365550u: goto label_365550;
        case 0x365554u: goto label_365554;
        case 0x365558u: goto label_365558;
        case 0x36555cu: goto label_36555c;
        case 0x365560u: goto label_365560;
        case 0x365564u: goto label_365564;
        case 0x365568u: goto label_365568;
        case 0x36556cu: goto label_36556c;
        case 0x365570u: goto label_365570;
        case 0x365574u: goto label_365574;
        case 0x365578u: goto label_365578;
        case 0x36557cu: goto label_36557c;
        case 0x365580u: goto label_365580;
        case 0x365584u: goto label_365584;
        case 0x365588u: goto label_365588;
        case 0x36558cu: goto label_36558c;
        case 0x365590u: goto label_365590;
        case 0x365594u: goto label_365594;
        case 0x365598u: goto label_365598;
        case 0x36559cu: goto label_36559c;
        case 0x3655a0u: goto label_3655a0;
        case 0x3655a4u: goto label_3655a4;
        case 0x3655a8u: goto label_3655a8;
        case 0x3655acu: goto label_3655ac;
        case 0x3655b0u: goto label_3655b0;
        case 0x3655b4u: goto label_3655b4;
        case 0x3655b8u: goto label_3655b8;
        case 0x3655bcu: goto label_3655bc;
        case 0x3655c0u: goto label_3655c0;
        case 0x3655c4u: goto label_3655c4;
        case 0x3655c8u: goto label_3655c8;
        case 0x3655ccu: goto label_3655cc;
        default: break;
    }

    ctx->pc = 0x365508u;

label_365508:
    // 0x365508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36550c:
    // 0x36550c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_365510:
    // 0x365510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x365510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_365514:
    // 0x365514: 0x2444dc20  addiu       $a0, $v0, -0x23E0
    ctx->pc = 0x365514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958112));
label_365518:
    // 0x365518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_36551c:
    // 0x36551c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_365520:
    // 0x365520: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x365520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_365524:
    // 0x365524: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x365524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_365528:
    // 0x365528: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36552c:
    // 0x36552c: 0x10000005  b           . + 4 + (0x5 << 2)
label_365530:
    if (ctx->pc == 0x365530u) {
        ctx->pc = 0x365530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36552Cu;
        // 0x365530: 0x3c11005c  lui         $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365534u;
        goto label_365534;
    }
    ctx->pc = 0x36552Cu;
    {
        const bool branch_taken_0x36552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36552Cu;
        // 0x365530: 0x3c11005c  lui         $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36552c) {
            ctx->pc = 0x365544u;
            goto label_365544;
        }
    }
    ctx->pc = 0x365534u;
label_365534:
    // 0x365534: 0x0  nop
    ctx->pc = 0x365534u;
    // NOP
label_365538:
    // 0x365538: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x365538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_36553c:
    // 0x36553c: 0x60f809  jalr        $v1
label_365540:
    if (ctx->pc == 0x365540u) {
        ctx->pc = 0x365544u;
        goto label_365544;
    }
    ctx->pc = 0x36553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x365544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36553Cu, 0x365544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365544u;
label_365544:
    // 0x365544: 0x2605dc20  addiu       $a1, $s0, -0x23E0
    ctx->pc = 0x365544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958112));
label_365548:
    // 0x365548: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x365548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_36554c:
    // 0x36554c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_365550:
    if (ctx->pc == 0x365550u) {
        ctx->pc = 0x365550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36554Cu;
        // 0x365550: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365554u;
        goto label_365554;
    }
    ctx->pc = 0x36554Cu;
    {
        const bool branch_taken_0x36554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36554Cu;
        // 0x365550: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36554c) {
            ctx->pc = 0x365558u;
            goto label_365558;
        }
    }
    ctx->pc = 0x365554u;
label_365554:
    // 0x365554: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x365554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_365558:
    // 0x365558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_36555c:
    if (ctx->pc == 0x36555Cu) {
        ctx->pc = 0x36555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365558u;
        // 0x36555c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365560u;
        goto label_365560;
    }
    ctx->pc = 0x365558u;
    {
        const bool branch_taken_0x365558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365558u;
        // 0x36555c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365558) {
            ctx->pc = 0x365568u;
            goto label_365568;
        }
    }
    ctx->pc = 0x365560u;
label_365560:
    // 0x365560: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x365560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_365564:
    // 0x365564: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x365564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_365568:
    // 0x365568: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_36556c:
    if (ctx->pc == 0x36556Cu) {
        ctx->pc = 0x36556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365568u;
        // 0x36556c: 0x8c62005c  lw          $v0, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365570u;
        goto label_365570;
    }
    ctx->pc = 0x365568u;
    {
        const bool branch_taken_0x365568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x365568) {
            ctx->pc = 0x36556Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365568u;
            // 0x36556c: 0x8c62005c  lw          $v0, 0x5C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365538;
        }
    }
    ctx->pc = 0x365570u;
label_365570:
    // 0x365570: 0x2622dc30  addiu       $v0, $s1, -0x23D0
    ctx->pc = 0x365570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958128));
label_365574:
    // 0x365574: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x365574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_365578:
    // 0x365578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36557c:
    // 0x36557c: 0x10000005  b           . + 4 + (0x5 << 2)
label_365580:
    if (ctx->pc == 0x365580u) {
        ctx->pc = 0x365580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36557Cu;
        // 0x365580: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365584u;
        goto label_365584;
    }
    ctx->pc = 0x36557Cu;
    {
        const bool branch_taken_0x36557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36557Cu;
        // 0x365580: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36557c) {
            ctx->pc = 0x365594u;
            goto label_365594;
        }
    }
    ctx->pc = 0x365584u;
label_365584:
    // 0x365584: 0x0  nop
    ctx->pc = 0x365584u;
    // NOP
label_365588:
    // 0x365588: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x365588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_36558c:
    // 0x36558c: 0x60f809  jalr        $v1
label_365590:
    if (ctx->pc == 0x365590u) {
        ctx->pc = 0x365594u;
        goto label_365594;
    }
    ctx->pc = 0x36558Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x365594u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36558Cu, 0x365594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365594u;
label_365594:
    // 0x365594: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x365594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_365598:
    // 0x365598: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_36559c:
    if (ctx->pc == 0x36559Cu) {
        ctx->pc = 0x36559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365598u;
        // 0x36559c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3655A0u;
        goto label_3655a0;
    }
    ctx->pc = 0x365598u;
    {
        const bool branch_taken_0x365598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365598u;
        // 0x36559c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365598) {
            ctx->pc = 0x3655A4u;
            goto label_3655a4;
        }
    }
    ctx->pc = 0x3655A0u;
label_3655a0:
    // 0x3655a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3655a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3655a4:
    // 0x3655a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3655a8:
    if (ctx->pc == 0x3655A8u) {
        ctx->pc = 0x3655A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655A4u;
        // 0x3655a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3655ACu;
        goto label_3655ac;
    }
    ctx->pc = 0x3655A4u;
    {
        const bool branch_taken_0x3655a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3655A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655A4u;
        // 0x3655a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3655a4) {
            ctx->pc = 0x3655B4u;
            goto label_3655b4;
        }
    }
    ctx->pc = 0x3655ACu;
label_3655ac:
    // 0x3655ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3655acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3655b0:
    // 0x3655b0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3655b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3655b4:
    // 0x3655b4: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
label_3655b8:
    if (ctx->pc == 0x3655B8u) {
        ctx->pc = 0x3655B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655B4u;
        // 0x3655b8: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3655BCu;
        goto label_3655bc;
    }
    ctx->pc = 0x3655B4u;
    {
        const bool branch_taken_0x3655b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3655b4) {
            ctx->pc = 0x3655B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3655B4u;
            // 0x3655b8: 0x8c620024  lw          $v0, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365588;
        }
    }
    ctx->pc = 0x3655BCu;
label_3655bc:
    // 0x3655bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3655bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3655c0:
    // 0x3655c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3655c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3655c4:
    // 0x3655c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3655c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3655c8:
    // 0x3655c8: 0x3e00008  jr          $ra
label_3655cc:
    if (ctx->pc == 0x3655CCu) {
        ctx->pc = 0x3655CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655C8u;
        // 0x3655cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3655D0u;
        goto label_fallthrough_0x3655c8;
    }
    ctx->pc = 0x3655C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3655CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655C8u;
        // 0x3655cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3655C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3655c8:
    ctx->pc = 0x3655D0u;
}
