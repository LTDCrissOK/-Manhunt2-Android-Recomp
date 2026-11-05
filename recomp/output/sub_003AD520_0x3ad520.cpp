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

// Function: sub_003AD520
// Address: 0x3ad520 - 0x3ad5a8
void sub_003AD520_0x3ad520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD520_0x3ad520");
#endif

    switch (ctx->pc) {
        case 0x3ad520u: goto label_3ad520;
        case 0x3ad524u: goto label_3ad524;
        case 0x3ad528u: goto label_3ad528;
        case 0x3ad52cu: goto label_3ad52c;
        case 0x3ad530u: goto label_3ad530;
        case 0x3ad534u: goto label_3ad534;
        case 0x3ad538u: goto label_3ad538;
        case 0x3ad53cu: goto label_3ad53c;
        case 0x3ad540u: goto label_3ad540;
        case 0x3ad544u: goto label_3ad544;
        case 0x3ad548u: goto label_3ad548;
        case 0x3ad54cu: goto label_3ad54c;
        case 0x3ad550u: goto label_3ad550;
        case 0x3ad554u: goto label_3ad554;
        case 0x3ad558u: goto label_3ad558;
        case 0x3ad55cu: goto label_3ad55c;
        case 0x3ad560u: goto label_3ad560;
        case 0x3ad564u: goto label_3ad564;
        case 0x3ad568u: goto label_3ad568;
        case 0x3ad56cu: goto label_3ad56c;
        case 0x3ad570u: goto label_3ad570;
        case 0x3ad574u: goto label_3ad574;
        case 0x3ad578u: goto label_3ad578;
        case 0x3ad57cu: goto label_3ad57c;
        case 0x3ad580u: goto label_3ad580;
        case 0x3ad584u: goto label_3ad584;
        case 0x3ad588u: goto label_3ad588;
        case 0x3ad58cu: goto label_3ad58c;
        case 0x3ad590u: goto label_3ad590;
        case 0x3ad594u: goto label_3ad594;
        case 0x3ad598u: goto label_3ad598;
        case 0x3ad59cu: goto label_3ad59c;
        case 0x3ad5a0u: goto label_3ad5a0;
        case 0x3ad5a4u: goto label_3ad5a4;
        default: break;
    }

    ctx->pc = 0x3ad520u;

label_3ad520:
    // 0x3ad520: 0x3e00008  jr          $ra
label_3ad524:
    if (ctx->pc == 0x3AD524u) {
        ctx->pc = 0x3AD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD520u;
        // 0x3ad524: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD528u;
        goto label_3ad528;
    }
    ctx->pc = 0x3AD520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD520u;
        // 0x3ad524: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD528u;
label_3ad528:
    // 0x3ad528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad52c:
    // 0x3ad52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad530:
    // 0x3ad530: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x3ad530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_3ad534:
    // 0x3ad534: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad538:
    if (ctx->pc == 0x3AD538u) {
        ctx->pc = 0x3AD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD534u;
        // 0x3ad538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD53Cu;
        goto label_3ad53c;
    }
    ctx->pc = 0x3AD534u;
    {
        const bool branch_taken_0x3ad534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD534u;
        // 0x3ad538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad534) {
            ctx->pc = 0x3AD54Cu;
            goto label_3ad54c;
        }
    }
    ctx->pc = 0x3AD53Cu;
label_3ad53c:
    // 0x3ad53c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ad540:
    // 0x3ad540: 0x8c4336d8  lw          $v1, 0x36D8($v0)
    ctx->pc = 0x3ad540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14040)));
label_3ad544:
    // 0x3ad544: 0x60f809  jalr        $v1
label_3ad548:
    if (ctx->pc == 0x3AD548u) {
        ctx->pc = 0x3AD54Cu;
        goto label_3ad54c;
    }
    ctx->pc = 0x3AD544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD54Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD544u, 0x3AD54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD54Cu;
label_3ad54c:
    // 0x3ad54c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad550:
    // 0x3ad550: 0x3e00008  jr          $ra
label_3ad554:
    if (ctx->pc == 0x3AD554u) {
        ctx->pc = 0x3AD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD550u;
        // 0x3ad554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD558u;
        goto label_3ad558;
    }
    ctx->pc = 0x3AD550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD550u;
        // 0x3ad554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD558u;
label_3ad558:
    // 0x3ad558: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x3ad558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_3ad55c:
    // 0x3ad55c: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x3ad55cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
label_3ad560:
    // 0x3ad560: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x3ad560u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ad564:
    // 0x3ad564: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3ad568:
    if (ctx->pc == 0x3AD568u) {
        ctx->pc = 0x3AD568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD564u;
        // 0x3ad568: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD56Cu;
        goto label_3ad56c;
    }
    ctx->pc = 0x3AD564u;
    {
        const bool branch_taken_0x3ad564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad564) {
            ctx->pc = 0x3AD568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD564u;
            // 0x3ad568: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD56Cu;
            goto label_3ad56c;
        }
    }
    ctx->pc = 0x3AD56Cu;
label_3ad56c:
    // 0x3ad56c: 0x1812  mflo        $v1
    ctx->pc = 0x3ad56cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3ad570:
    // 0x3ad570: 0x3e00008  jr          $ra
label_3ad574:
    if (ctx->pc == 0x3AD574u) {
        ctx->pc = 0x3AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD570u;
        // 0x3ad574: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD578u;
        goto label_3ad578;
    }
    ctx->pc = 0x3AD570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD570u;
        // 0x3ad574: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD578u;
label_3ad578:
    // 0x3ad578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad57c:
    // 0x3ad57c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad580:
    // 0x3ad580: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x3ad580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
label_3ad584:
    // 0x3ad584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad588:
    if (ctx->pc == 0x3AD588u) {
        ctx->pc = 0x3AD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD584u;
        // 0x3ad588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD58Cu;
        goto label_3ad58c;
    }
    ctx->pc = 0x3AD584u;
    {
        const bool branch_taken_0x3ad584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD584u;
        // 0x3ad588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad584) {
            ctx->pc = 0x3AD59Cu;
            goto label_3ad59c;
        }
    }
    ctx->pc = 0x3AD58Cu;
label_3ad58c:
    // 0x3ad58c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ad590:
    // 0x3ad590: 0x8c4336dc  lw          $v1, 0x36DC($v0)
    ctx->pc = 0x3ad590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14044)));
label_3ad594:
    // 0x3ad594: 0x60f809  jalr        $v1
label_3ad598:
    if (ctx->pc == 0x3AD598u) {
        ctx->pc = 0x3AD59Cu;
        goto label_3ad59c;
    }
    ctx->pc = 0x3AD594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD59Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD594u, 0x3AD59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD59Cu;
label_3ad59c:
    // 0x3ad59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad5a0:
    // 0x3ad5a0: 0x3e00008  jr          $ra
label_3ad5a4:
    if (ctx->pc == 0x3AD5A4u) {
        ctx->pc = 0x3AD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5A0u;
        // 0x3ad5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD5A8u;
        goto label_fallthrough_0x3ad5a0;
    }
    ctx->pc = 0x3AD5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5A0u;
        // 0x3ad5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ad5a0:
    ctx->pc = 0x3AD5A8u;
}
