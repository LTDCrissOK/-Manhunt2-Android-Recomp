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

// Function: sub_002254E8
// Address: 0x2254e8 - 0x225580
void sub_002254E8_0x2254e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002254E8_0x2254e8");
#endif

    switch (ctx->pc) {
        case 0x2254e8u: goto label_2254e8;
        case 0x2254ecu: goto label_2254ec;
        case 0x2254f0u: goto label_2254f0;
        case 0x2254f4u: goto label_2254f4;
        case 0x2254f8u: goto label_2254f8;
        case 0x2254fcu: goto label_2254fc;
        case 0x225500u: goto label_225500;
        case 0x225504u: goto label_225504;
        case 0x225508u: goto label_225508;
        case 0x22550cu: goto label_22550c;
        case 0x225510u: goto label_225510;
        case 0x225514u: goto label_225514;
        case 0x225518u: goto label_225518;
        case 0x22551cu: goto label_22551c;
        case 0x225520u: goto label_225520;
        case 0x225524u: goto label_225524;
        case 0x225528u: goto label_225528;
        case 0x22552cu: goto label_22552c;
        case 0x225530u: goto label_225530;
        case 0x225534u: goto label_225534;
        case 0x225538u: goto label_225538;
        case 0x22553cu: goto label_22553c;
        case 0x225540u: goto label_225540;
        case 0x225544u: goto label_225544;
        case 0x225548u: goto label_225548;
        case 0x22554cu: goto label_22554c;
        case 0x225550u: goto label_225550;
        case 0x225554u: goto label_225554;
        case 0x225558u: goto label_225558;
        case 0x22555cu: goto label_22555c;
        case 0x225560u: goto label_225560;
        case 0x225564u: goto label_225564;
        case 0x225568u: goto label_225568;
        case 0x22556cu: goto label_22556c;
        case 0x225570u: goto label_225570;
        case 0x225574u: goto label_225574;
        case 0x225578u: goto label_225578;
        case 0x22557cu: goto label_22557c;
        default: break;
    }

    ctx->pc = 0x2254e8u;

label_2254e8:
    // 0x2254e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2254e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2254ec:
    // 0x2254ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2254ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2254f0:
    // 0x2254f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2254f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2254f4:
    // 0x2254f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2254f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2254f8:
    // 0x2254f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2254f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2254fc:
    // 0x2254fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2254fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225500:
    // 0x225500: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x225500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_225504:
    // 0x225504: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_225508:
    if (ctx->pc == 0x225508u) {
        ctx->pc = 0x22550Cu;
        goto label_22550c;
    }
    ctx->pc = 0x225504u;
    {
        const bool branch_taken_0x225504 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x225504) {
            ctx->pc = 0x225514u;
            goto label_225514;
        }
    }
    ctx->pc = 0x22550Cu;
label_22550c:
    // 0x22550c: 0x10000016  b           . + 4 + (0x16 << 2)
label_225510:
    if (ctx->pc == 0x225510u) {
        ctx->pc = 0x225510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22550Cu;
        // 0x225510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225514u;
        goto label_225514;
    }
    ctx->pc = 0x22550Cu;
    {
        const bool branch_taken_0x22550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22550Cu;
        // 0x225510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22550c) {
            ctx->pc = 0x225568u;
            goto label_225568;
        }
    }
    ctx->pc = 0x225514u;
label_225514:
    // 0x225514: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_225518:
    if (ctx->pc == 0x225518u) {
        ctx->pc = 0x225518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225514u;
        // 0x225518: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22551Cu;
        goto label_22551c;
    }
    ctx->pc = 0x225514u;
    {
        const bool branch_taken_0x225514 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x225518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225514u;
        // 0x225518: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225514) {
            ctx->pc = 0x22553Cu;
            goto label_22553c;
        }
    }
    ctx->pc = 0x22551Cu;
label_22551c:
    // 0x22551c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x22551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_225520:
    // 0x225520: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x225520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225524:
    // 0x225524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225528:
    // 0x225528: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x225528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22552c:
    // 0x22552c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x22552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_225530:
    // 0x225530: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x225530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_225534:
    // 0x225534: 0x40f809  jalr        $v0
label_225538:
    if (ctx->pc == 0x225538u) {
        ctx->pc = 0x22553Cu;
        goto label_22553c;
    }
    ctx->pc = 0x225534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22553Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225534u, 0x22553Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22553Cu;
label_22553c:
    // 0x22553c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x22553cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_225540:
    // 0x225540: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x225540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_225544:
    // 0x225544: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x225544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225548:
    // 0x225548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22554c:
    // 0x22554c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22554cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_225550:
    // 0x225550: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x225550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_225554:
    // 0x225554: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x225554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_225558:
    // 0x225558: 0x40f809  jalr        $v0
label_22555c:
    if (ctx->pc == 0x22555Cu) {
        ctx->pc = 0x225560u;
        goto label_225560;
    }
    ctx->pc = 0x225558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225558u, 0x225560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225560u;
label_225560:
    // 0x225560: 0xae110228  sw          $s1, 0x228($s0)
    ctx->pc = 0x225560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 17));
label_225564:
    // 0x225564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225568:
    // 0x225568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22556c:
    // 0x22556c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22556cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_225570:
    // 0x225570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225574:
    // 0x225574: 0x3e00008  jr          $ra
label_225578:
    if (ctx->pc == 0x225578u) {
        ctx->pc = 0x225578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225574u;
        // 0x225578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22557Cu;
        goto label_22557c;
    }
    ctx->pc = 0x225574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225574u;
        // 0x225578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22557Cu;
label_22557c:
    // 0x22557c: 0x0  nop
    ctx->pc = 0x22557cu;
    // NOP
    ctx->pc = 0x225580u;
}
