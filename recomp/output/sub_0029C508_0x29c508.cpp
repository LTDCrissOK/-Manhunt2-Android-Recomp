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

// Function: sub_0029C508
// Address: 0x29c508 - 0x29c628
void sub_0029C508_0x29c508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C508_0x29c508");
#endif

    switch (ctx->pc) {
        case 0x29c508u: goto label_29c508;
        case 0x29c50cu: goto label_29c50c;
        case 0x29c510u: goto label_29c510;
        case 0x29c514u: goto label_29c514;
        case 0x29c518u: goto label_29c518;
        case 0x29c51cu: goto label_29c51c;
        case 0x29c520u: goto label_29c520;
        case 0x29c524u: goto label_29c524;
        case 0x29c528u: goto label_29c528;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c530u: goto label_29c530;
        case 0x29c534u: goto label_29c534;
        case 0x29c538u: goto label_29c538;
        case 0x29c53cu: goto label_29c53c;
        case 0x29c540u: goto label_29c540;
        case 0x29c544u: goto label_29c544;
        case 0x29c548u: goto label_29c548;
        case 0x29c54cu: goto label_29c54c;
        case 0x29c550u: goto label_29c550;
        case 0x29c554u: goto label_29c554;
        case 0x29c558u: goto label_29c558;
        case 0x29c55cu: goto label_29c55c;
        case 0x29c560u: goto label_29c560;
        case 0x29c564u: goto label_29c564;
        case 0x29c568u: goto label_29c568;
        case 0x29c56cu: goto label_29c56c;
        case 0x29c570u: goto label_29c570;
        case 0x29c574u: goto label_29c574;
        case 0x29c578u: goto label_29c578;
        case 0x29c57cu: goto label_29c57c;
        case 0x29c580u: goto label_29c580;
        case 0x29c584u: goto label_29c584;
        case 0x29c588u: goto label_29c588;
        case 0x29c58cu: goto label_29c58c;
        case 0x29c590u: goto label_29c590;
        case 0x29c594u: goto label_29c594;
        case 0x29c598u: goto label_29c598;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5a0u: goto label_29c5a0;
        case 0x29c5a4u: goto label_29c5a4;
        case 0x29c5a8u: goto label_29c5a8;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c5b0u: goto label_29c5b0;
        case 0x29c5b4u: goto label_29c5b4;
        case 0x29c5b8u: goto label_29c5b8;
        case 0x29c5bcu: goto label_29c5bc;
        case 0x29c5c0u: goto label_29c5c0;
        case 0x29c5c4u: goto label_29c5c4;
        case 0x29c5c8u: goto label_29c5c8;
        case 0x29c5ccu: goto label_29c5cc;
        case 0x29c5d0u: goto label_29c5d0;
        case 0x29c5d4u: goto label_29c5d4;
        case 0x29c5d8u: goto label_29c5d8;
        case 0x29c5dcu: goto label_29c5dc;
        case 0x29c5e0u: goto label_29c5e0;
        case 0x29c5e4u: goto label_29c5e4;
        case 0x29c5e8u: goto label_29c5e8;
        case 0x29c5ecu: goto label_29c5ec;
        case 0x29c5f0u: goto label_29c5f0;
        case 0x29c5f4u: goto label_29c5f4;
        case 0x29c5f8u: goto label_29c5f8;
        case 0x29c5fcu: goto label_29c5fc;
        case 0x29c600u: goto label_29c600;
        case 0x29c604u: goto label_29c604;
        case 0x29c608u: goto label_29c608;
        case 0x29c60cu: goto label_29c60c;
        case 0x29c610u: goto label_29c610;
        case 0x29c614u: goto label_29c614;
        case 0x29c618u: goto label_29c618;
        case 0x29c61cu: goto label_29c61c;
        case 0x29c620u: goto label_29c620;
        case 0x29c624u: goto label_29c624;
        default: break;
    }

    ctx->pc = 0x29c508u;

label_29c508:
    // 0x29c508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c50c:
    // 0x29c50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29c510:
    // 0x29c510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29c514:
    // 0x29c514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c518:
    // 0x29c518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29c51c:
    // 0x29c51c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_29c520:
    // 0x29c520: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c524:
    // 0x29c524: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_29c528:
    if (ctx->pc == 0x29C528u) {
        ctx->pc = 0x29C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C524u;
        // 0x29c528: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C52Cu;
        goto label_29c52c;
    }
    ctx->pc = 0x29C524u;
    {
        const bool branch_taken_0x29c524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C524u;
        // 0x29c528: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c524) {
            ctx->pc = 0x29C60Cu;
            goto label_29c60c;
        }
    }
    ctx->pc = 0x29C52Cu;
label_29c52c:
    // 0x29c52c: 0x24840230  addiu       $a0, $a0, 0x230
    ctx->pc = 0x29c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 560));
label_29c530:
    // 0x29c530: 0xc0d73cc  jal         func_35CF30
label_29c534:
    if (ctx->pc == 0x29C534u) {
        ctx->pc = 0x29C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C530u;
        // 0x29c534: 0x24a5bed8  addiu       $a1, $a1, -0x4128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C538u;
        goto label_29c538;
    }
    ctx->pc = 0x29C530u;
    SET_GPR_U32(ctx, 31, 0x29C538u);
    ctx->pc = 0x29C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C530u;
    // 0x29c534: 0x24a5bed8  addiu       $a1, $a1, -0x4128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C530u, 0x29C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C538u;
label_29c538:
    // 0x29c538: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29c53c:
    // 0x29c53c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c540:
    // 0x29c540: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_29c544:
    if (ctx->pc == 0x29C544u) {
        ctx->pc = 0x29C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C540u;
        // 0x29c544: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C548u;
        goto label_29c548;
    }
    ctx->pc = 0x29C540u;
    {
        const bool branch_taken_0x29c540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C540u;
        // 0x29c544: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c540) {
            ctx->pc = 0x29C60Cu;
            goto label_29c60c;
        }
    }
    ctx->pc = 0x29C548u;
label_29c548:
    // 0x29c548: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x29c548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_29c54c:
    // 0x29c54c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29c54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29c550:
    // 0x29c550: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x29c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_29c554:
    // 0x29c554: 0xc07f540  jal         func_1FD500
label_29c558:
    if (ctx->pc == 0x29C558u) {
        ctx->pc = 0x29C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C554u;
        // 0x29c558: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C55Cu;
        goto label_29c55c;
    }
    ctx->pc = 0x29C554u;
    SET_GPR_U32(ctx, 31, 0x29C55Cu);
    ctx->pc = 0x29C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C554u;
    // 0x29c558: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x29C554u, 0x29C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C55Cu;
label_29c55c:
    // 0x29c55c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x29c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_29c560:
    // 0x29c560: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_29c564:
    if (ctx->pc == 0x29C564u) {
        ctx->pc = 0x29C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C560u;
        // 0x29c564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C568u;
        goto label_29c568;
    }
    ctx->pc = 0x29C560u;
    {
        const bool branch_taken_0x29c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C560u;
        // 0x29c564: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c560) {
            ctx->pc = 0x29C60Cu;
            goto label_29c60c;
        }
    }
    ctx->pc = 0x29C568u;
label_29c568:
    // 0x29c568: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x29c568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_29c56c:
    // 0x29c56c: 0x0  nop
    ctx->pc = 0x29c56cu;
    // NOP
label_29c570:
    // 0x29c570: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c574:
    // 0x29c574: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c578:
    // 0x29c578: 0x8c450230  lw          $a1, 0x230($v0)
    ctx->pc = 0x29c578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
label_29c57c:
    // 0x29c57c: 0xc0d73cc  jal         func_35CF30
label_29c580:
    if (ctx->pc == 0x29C580u) {
        ctx->pc = 0x29C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C57Cu;
        // 0x29c580: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C584u;
        goto label_29c584;
    }
    ctx->pc = 0x29C57Cu;
    SET_GPR_U32(ctx, 31, 0x29C584u);
    ctx->pc = 0x29C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C57Cu;
    // 0x29c580: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C57Cu, 0x29C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C584u;
label_29c584:
    // 0x29c584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c588:
    // 0x29c588: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_29c58c:
    if (ctx->pc == 0x29C58Cu) {
        ctx->pc = 0x29C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C588u;
        // 0x29c58c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C590u;
        goto label_29c590;
    }
    ctx->pc = 0x29C588u;
    {
        const bool branch_taken_0x29c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C588u;
        // 0x29c58c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c588) {
            ctx->pc = 0x29C600u;
            goto label_29c600;
        }
    }
    ctx->pc = 0x29C590u;
label_29c590:
    // 0x29c590: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c594:
    // 0x29c594: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29c598:
    if (ctx->pc == 0x29C598u) {
        ctx->pc = 0x29C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C594u;
        // 0x29c598: 0x90500011  lbu         $s0, 0x11($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C59Cu;
        goto label_29c59c;
    }
    ctx->pc = 0x29C594u;
    {
        const bool branch_taken_0x29c594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C594u;
        // 0x29c598: 0x90500011  lbu         $s0, 0x11($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c594) {
            ctx->pc = 0x29C5E4u;
            goto label_29c5e4;
        }
    }
    ctx->pc = 0x29C59Cu;
label_29c59c:
    // 0x29c59c: 0xa0500010  sb          $s0, 0x10($v0)
    ctx->pc = 0x29c59cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 16));
label_29c5a0:
    // 0x29c5a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c5a4:
    // 0x29c5a4: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c5a8:
    // 0x29c5a8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29c5ac:
    // 0x29c5ac: 0x40f809  jalr        $v0
label_29c5b0:
    if (ctx->pc == 0x29C5B0u) {
        ctx->pc = 0x29C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5ACu;
        // 0x29c5b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5B4u;
        goto label_29c5b4;
    }
    ctx->pc = 0x29C5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C5B4u);
        ctx->pc = 0x29C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5ACu;
        // 0x29c5b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5ACu, 0x29C5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C5B4u;
label_29c5b4:
    // 0x29c5b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c5b8:
    // 0x29c5b8: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c5bc:
    // 0x29c5bc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29c5c0:
    // 0x29c5c0: 0x40f809  jalr        $v0
label_29c5c4:
    if (ctx->pc == 0x29C5C4u) {
        ctx->pc = 0x29C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C0u;
        // 0x29c5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5C8u;
        goto label_29c5c8;
    }
    ctx->pc = 0x29C5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C5C8u);
        ctx->pc = 0x29C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C0u;
        // 0x29c5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5C0u, 0x29C5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C5C8u;
label_29c5c8:
    // 0x29c5c8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x29c5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29c5cc:
    // 0x29c5cc: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x29c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_29c5d0:
    // 0x29c5d0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_29c5d4:
    // 0x29c5d4: 0x40f809  jalr        $v0
label_29c5d8:
    if (ctx->pc == 0x29C5D8u) {
        ctx->pc = 0x29C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5D4u;
        // 0x29c5d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5DCu;
        goto label_29c5dc;
    }
    ctx->pc = 0x29C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C5DCu);
        ctx->pc = 0x29C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5D4u;
        // 0x29c5d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5D4u, 0x29C5DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C5DCu;
label_29c5dc:
    // 0x29c5dc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_29c5e0:
    if (ctx->pc == 0x29C5E0u) {
        ctx->pc = 0x29C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5DCu;
        // 0x29c5e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5E4u;
        goto label_29c5e4;
    }
    ctx->pc = 0x29C5DCu;
    {
        const bool branch_taken_0x29c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c5dc) {
            ctx->pc = 0x29C5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C5DCu;
            // 0x29c5e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C610u;
            goto label_29c610;
        }
    }
    ctx->pc = 0x29C5E4u;
label_29c5e4:
    // 0x29c5e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29c5e8:
    // 0x29c5e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c5ec:
    // 0x29c5ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29c5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c5f0:
    // 0x29c5f0: 0xc0a711e  jal         func_29C478
label_29c5f4:
    if (ctx->pc == 0x29C5F4u) {
        ctx->pc = 0x29C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5F0u;
        // 0x29c5f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5F8u;
        goto label_29c5f8;
    }
    ctx->pc = 0x29C5F0u;
    SET_GPR_U32(ctx, 31, 0x29C5F8u);
    ctx->pc = 0x29C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5F0u;
    // 0x29c5f4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C478u, 0x29C5F0u, 0x29C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5F8u;
label_29c5f8:
    // 0x29c5f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29c5fc:
    if (ctx->pc == 0x29C5FCu) {
        ctx->pc = 0x29C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5F8u;
        // 0x29c5fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C600u;
        goto label_29c600;
    }
    ctx->pc = 0x29C5F8u;
    {
        const bool branch_taken_0x29c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5F8u;
        // 0x29c5fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5f8) {
            ctx->pc = 0x29C610u;
            goto label_29c610;
        }
    }
    ctx->pc = 0x29C600u;
label_29c600:
    // 0x29c600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c604:
    // 0x29c604: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_29c608:
    if (ctx->pc == 0x29C608u) {
        ctx->pc = 0x29C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C604u;
        // 0x29c608: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C60Cu;
        goto label_29c60c;
    }
    ctx->pc = 0x29C604u;
    {
        const bool branch_taken_0x29c604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C604u;
        // 0x29c608: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c604) {
            ctx->pc = 0x29C570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c570;
        }
    }
    ctx->pc = 0x29C60Cu;
label_29c60c:
    // 0x29c60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c610:
    // 0x29c610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29c614:
    // 0x29c614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c618:
    // 0x29c618: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29c61c:
    // 0x29c61c: 0x3e00008  jr          $ra
label_29c620:
    if (ctx->pc == 0x29C620u) {
        ctx->pc = 0x29C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C61Cu;
        // 0x29c620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C624u;
        goto label_29c624;
    }
    ctx->pc = 0x29C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C61Cu;
        // 0x29c620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C624u;
label_29c624:
    // 0x29c624: 0x0  nop
    ctx->pc = 0x29c624u;
    // NOP
    ctx->pc = 0x29c628u;
}
