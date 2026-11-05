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

// Function: sub_0019E4F8
// Address: 0x19e4f8 - 0x19e5a0
void sub_0019E4F8_0x19e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E4F8_0x19e4f8");
#endif

    switch (ctx->pc) {
        case 0x19e4f8u: goto label_19e4f8;
        case 0x19e4fcu: goto label_19e4fc;
        case 0x19e500u: goto label_19e500;
        case 0x19e504u: goto label_19e504;
        case 0x19e508u: goto label_19e508;
        case 0x19e50cu: goto label_19e50c;
        case 0x19e510u: goto label_19e510;
        case 0x19e514u: goto label_19e514;
        case 0x19e518u: goto label_19e518;
        case 0x19e51cu: goto label_19e51c;
        case 0x19e520u: goto label_19e520;
        case 0x19e524u: goto label_19e524;
        case 0x19e528u: goto label_19e528;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e530u: goto label_19e530;
        case 0x19e534u: goto label_19e534;
        case 0x19e538u: goto label_19e538;
        case 0x19e53cu: goto label_19e53c;
        case 0x19e540u: goto label_19e540;
        case 0x19e544u: goto label_19e544;
        case 0x19e548u: goto label_19e548;
        case 0x19e54cu: goto label_19e54c;
        case 0x19e550u: goto label_19e550;
        case 0x19e554u: goto label_19e554;
        case 0x19e558u: goto label_19e558;
        case 0x19e55cu: goto label_19e55c;
        case 0x19e560u: goto label_19e560;
        case 0x19e564u: goto label_19e564;
        case 0x19e568u: goto label_19e568;
        case 0x19e56cu: goto label_19e56c;
        case 0x19e570u: goto label_19e570;
        case 0x19e574u: goto label_19e574;
        case 0x19e578u: goto label_19e578;
        case 0x19e57cu: goto label_19e57c;
        case 0x19e580u: goto label_19e580;
        case 0x19e584u: goto label_19e584;
        case 0x19e588u: goto label_19e588;
        case 0x19e58cu: goto label_19e58c;
        case 0x19e590u: goto label_19e590;
        case 0x19e594u: goto label_19e594;
        case 0x19e598u: goto label_19e598;
        case 0x19e59cu: goto label_19e59c;
        default: break;
    }

    ctx->pc = 0x19e4f8u;

label_19e4f8:
    // 0x19e4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19e4fc:
    // 0x19e4fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e500:
    // 0x19e500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19e504:
    // 0x19e504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e508:
    // 0x19e508: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19e50c:
    // 0x19e50c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19e510:
    if (ctx->pc == 0x19E510u) {
        ctx->pc = 0x19E514u;
        goto label_19e514;
    }
    ctx->pc = 0x19E50Cu;
    {
        const bool branch_taken_0x19e50c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e50c) {
            ctx->pc = 0x19E524u;
            goto label_19e524;
        }
    }
    ctx->pc = 0x19E514u;
label_19e514:
    // 0x19e514: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19e514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19e518:
    // 0x19e518: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19e51c:
    // 0x19e51c: 0x40f809  jalr        $v0
label_19e520:
    if (ctx->pc == 0x19E520u) {
        ctx->pc = 0x19E524u;
        goto label_19e524;
    }
    ctx->pc = 0x19E51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E524u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E51Cu, 0x19E524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E524u;
label_19e524:
    // 0x19e524: 0xc061a1e  jal         func_186878
label_19e528:
    if (ctx->pc == 0x19E528u) {
        ctx->pc = 0x19E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E524u;
        // 0x19e528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E52Cu;
        goto label_19e52c;
    }
    ctx->pc = 0x19E524u;
    SET_GPR_U32(ctx, 31, 0x19E52Cu);
    ctx->pc = 0x19E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E524u;
    // 0x19e528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E524u, 0x19E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E52Cu;
label_19e52c:
    // 0x19e52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e530:
    // 0x19e530: 0xc061a1e  jal         func_186878
label_19e534:
    if (ctx->pc == 0x19E534u) {
        ctx->pc = 0x19E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E530u;
        // 0x19e534: 0xac400220  sw          $zero, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E538u;
        goto label_19e538;
    }
    ctx->pc = 0x19E530u;
    SET_GPR_U32(ctx, 31, 0x19E538u);
    ctx->pc = 0x19E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E530u;
    // 0x19e534: 0xac400220  sw          $zero, 0x220($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E530u, 0x19E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E538u;
label_19e538:
    // 0x19e538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e53c:
    // 0x19e53c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19e540:
    // 0x19e540: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x19e540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_19e544:
    // 0x19e544: 0x3e00008  jr          $ra
label_19e548:
    if (ctx->pc == 0x19E548u) {
        ctx->pc = 0x19E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E544u;
        // 0x19e548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E54Cu;
        goto label_19e54c;
    }
    ctx->pc = 0x19E544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E544u;
        // 0x19e548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E54Cu;
label_19e54c:
    // 0x19e54c: 0x0  nop
    ctx->pc = 0x19e54cu;
    // NOP
label_19e550:
    // 0x19e550: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x19e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_19e554:
    // 0x19e554: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19e558:
    // 0x19e558: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_19e55c:
    if (ctx->pc == 0x19E55Cu) {
        ctx->pc = 0x19E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E558u;
        // 0x19e55c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E560u;
        goto label_19e560;
    }
    ctx->pc = 0x19E558u;
    {
        const bool branch_taken_0x19e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E558u;
        // 0x19e55c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e558) {
            ctx->pc = 0x19E578u;
            goto label_19e578;
        }
    }
    ctx->pc = 0x19E560u;
label_19e560:
    // 0x19e560: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x19e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_19e564:
    // 0x19e564: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x19e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_19e568:
    // 0x19e568: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_19e56c:
    if (ctx->pc == 0x19E56Cu) {
        ctx->pc = 0x19E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E568u;
        // 0x19e56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E570u;
        goto label_19e570;
    }
    ctx->pc = 0x19E568u;
    {
        const bool branch_taken_0x19e568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E568u;
        // 0x19e56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e568) {
            ctx->pc = 0x19E594u;
            goto label_19e594;
        }
    }
    ctx->pc = 0x19E570u;
label_19e570:
    // 0x19e570: 0x3e00008  jr          $ra
label_19e574:
    if (ctx->pc == 0x19E574u) {
        ctx->pc = 0x19E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E570u;
        // 0x19e574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E578u;
        goto label_19e578;
    }
    ctx->pc = 0x19E570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E570u;
        // 0x19e574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E578u;
label_19e578:
    // 0x19e578: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_19e57c:
    if (ctx->pc == 0x19E57Cu) {
        ctx->pc = 0x19E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E578u;
        // 0x19e57c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E580u;
        goto label_19e580;
    }
    ctx->pc = 0x19E578u;
    {
        const bool branch_taken_0x19e578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E578u;
        // 0x19e57c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e578) {
            ctx->pc = 0x19E594u;
            goto label_19e594;
        }
    }
    ctx->pc = 0x19E580u;
label_19e580:
    // 0x19e580: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_19e584:
    // 0x19e584: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_19e588:
    // 0x19e588: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
label_19e58c:
    if (ctx->pc == 0x19E58Cu) {
        ctx->pc = 0x19E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E588u;
        // 0x19e58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E590u;
        goto label_19e590;
    }
    ctx->pc = 0x19E588u;
    {
        const bool branch_taken_0x19e588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E588u;
        // 0x19e58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e588) {
            ctx->pc = 0x19E594u;
            goto label_19e594;
        }
    }
    ctx->pc = 0x19E590u;
label_19e590:
    // 0x19e590: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e594:
    // 0x19e594: 0x3e00008  jr          $ra
label_19e598:
    if (ctx->pc == 0x19E598u) {
        ctx->pc = 0x19E59Cu;
        goto label_19e59c;
    }
    ctx->pc = 0x19E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E59Cu;
label_19e59c:
    // 0x19e59c: 0x0  nop
    ctx->pc = 0x19e59cu;
    // NOP
    ctx->pc = 0x19e5a0u;
}
