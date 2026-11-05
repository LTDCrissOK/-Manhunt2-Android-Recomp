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

// Function: sub_0018E530
// Address: 0x18e530 - 0x18e648
void sub_0018E530_0x18e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E530_0x18e530");
#endif

    switch (ctx->pc) {
        case 0x18e530u: goto label_18e530;
        case 0x18e534u: goto label_18e534;
        case 0x18e538u: goto label_18e538;
        case 0x18e53cu: goto label_18e53c;
        case 0x18e540u: goto label_18e540;
        case 0x18e544u: goto label_18e544;
        case 0x18e548u: goto label_18e548;
        case 0x18e54cu: goto label_18e54c;
        case 0x18e550u: goto label_18e550;
        case 0x18e554u: goto label_18e554;
        case 0x18e558u: goto label_18e558;
        case 0x18e55cu: goto label_18e55c;
        case 0x18e560u: goto label_18e560;
        case 0x18e564u: goto label_18e564;
        case 0x18e568u: goto label_18e568;
        case 0x18e56cu: goto label_18e56c;
        case 0x18e570u: goto label_18e570;
        case 0x18e574u: goto label_18e574;
        case 0x18e578u: goto label_18e578;
        case 0x18e57cu: goto label_18e57c;
        case 0x18e580u: goto label_18e580;
        case 0x18e584u: goto label_18e584;
        case 0x18e588u: goto label_18e588;
        case 0x18e58cu: goto label_18e58c;
        case 0x18e590u: goto label_18e590;
        case 0x18e594u: goto label_18e594;
        case 0x18e598u: goto label_18e598;
        case 0x18e59cu: goto label_18e59c;
        case 0x18e5a0u: goto label_18e5a0;
        case 0x18e5a4u: goto label_18e5a4;
        case 0x18e5a8u: goto label_18e5a8;
        case 0x18e5acu: goto label_18e5ac;
        case 0x18e5b0u: goto label_18e5b0;
        case 0x18e5b4u: goto label_18e5b4;
        case 0x18e5b8u: goto label_18e5b8;
        case 0x18e5bcu: goto label_18e5bc;
        case 0x18e5c0u: goto label_18e5c0;
        case 0x18e5c4u: goto label_18e5c4;
        case 0x18e5c8u: goto label_18e5c8;
        case 0x18e5ccu: goto label_18e5cc;
        case 0x18e5d0u: goto label_18e5d0;
        case 0x18e5d4u: goto label_18e5d4;
        case 0x18e5d8u: goto label_18e5d8;
        case 0x18e5dcu: goto label_18e5dc;
        case 0x18e5e0u: goto label_18e5e0;
        case 0x18e5e4u: goto label_18e5e4;
        case 0x18e5e8u: goto label_18e5e8;
        case 0x18e5ecu: goto label_18e5ec;
        case 0x18e5f0u: goto label_18e5f0;
        case 0x18e5f4u: goto label_18e5f4;
        case 0x18e5f8u: goto label_18e5f8;
        case 0x18e5fcu: goto label_18e5fc;
        case 0x18e600u: goto label_18e600;
        case 0x18e604u: goto label_18e604;
        case 0x18e608u: goto label_18e608;
        case 0x18e60cu: goto label_18e60c;
        case 0x18e610u: goto label_18e610;
        case 0x18e614u: goto label_18e614;
        case 0x18e618u: goto label_18e618;
        case 0x18e61cu: goto label_18e61c;
        case 0x18e620u: goto label_18e620;
        case 0x18e624u: goto label_18e624;
        case 0x18e628u: goto label_18e628;
        case 0x18e62cu: goto label_18e62c;
        case 0x18e630u: goto label_18e630;
        case 0x18e634u: goto label_18e634;
        case 0x18e638u: goto label_18e638;
        case 0x18e63cu: goto label_18e63c;
        case 0x18e640u: goto label_18e640;
        case 0x18e644u: goto label_18e644;
        default: break;
    }

    ctx->pc = 0x18e530u;

label_18e530:
    // 0x18e530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e534:
    // 0x18e534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e538:
    // 0x18e538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18e53c:
    // 0x18e53c: 0xc061a2e  jal         func_1868B8
label_18e540:
    if (ctx->pc == 0x18E540u) {
        ctx->pc = 0x18E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E53Cu;
        // 0x18e540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E544u;
        goto label_18e544;
    }
    ctx->pc = 0x18E53Cu;
    SET_GPR_U32(ctx, 31, 0x18E544u);
    ctx->pc = 0x18E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E53Cu;
    // 0x18e540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18E53Cu, 0x18E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E544u;
label_18e544:
    // 0x18e544: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18e548:
    // 0x18e548: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18e54c:
    // 0x18e54c: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18e54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18e550:
    // 0x18e550: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18e554:
    // 0x18e554: 0x14450025  bne         $v0, $a1, . + 4 + (0x25 << 2)
label_18e558:
    if (ctx->pc == 0x18E558u) {
        ctx->pc = 0x18E55Cu;
        goto label_18e55c;
    }
    ctx->pc = 0x18E554u;
    {
        const bool branch_taken_0x18e554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18e554) {
            ctx->pc = 0x18E5ECu;
            goto label_18e5ec;
        }
    }
    ctx->pc = 0x18E55Cu;
label_18e55c:
    // 0x18e55c: 0xc063290  jal         func_18CA40
label_18e560:
    if (ctx->pc == 0x18E560u) {
        ctx->pc = 0x18E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E55Cu;
        // 0x18e560: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E564u;
        goto label_18e564;
    }
    ctx->pc = 0x18E55Cu;
    SET_GPR_U32(ctx, 31, 0x18E564u);
    ctx->pc = 0x18E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E55Cu;
    // 0x18e560: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CA40u, 0x18E55Cu, 0x18E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E564u;
label_18e564:
    // 0x18e564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18e568:
    if (ctx->pc == 0x18E568u) {
        ctx->pc = 0x18E56Cu;
        goto label_18e56c;
    }
    ctx->pc = 0x18E564u;
    {
        const bool branch_taken_0x18e564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e564) {
            ctx->pc = 0x18E578u;
            goto label_18e578;
        }
    }
    ctx->pc = 0x18E56Cu;
label_18e56c:
    // 0x18e56c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x18e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_18e570:
    // 0x18e570: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_18e574:
    if (ctx->pc == 0x18E574u) {
        ctx->pc = 0x18E578u;
        goto label_18e578;
    }
    ctx->pc = 0x18E570u;
    {
        const bool branch_taken_0x18e570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e570) {
            ctx->pc = 0x18E59Cu;
            goto label_18e59c;
        }
    }
    ctx->pc = 0x18E578u;
label_18e578:
    // 0x18e578: 0xc061a12  jal         func_186848
label_18e57c:
    if (ctx->pc == 0x18E57Cu) {
        ctx->pc = 0x18E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E578u;
        // 0x18e57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E580u;
        goto label_18e580;
    }
    ctx->pc = 0x18E578u;
    SET_GPR_U32(ctx, 31, 0x18E580u);
    ctx->pc = 0x18E57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E578u;
    // 0x18e57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E578u, 0x18E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E580u;
label_18e580:
    // 0x18e580: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e584:
    // 0x18e584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e588:
    // 0x18e588: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x18e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_18e58c:
    // 0x18e58c: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x18e58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18e590:
    // 0x18e590: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e594:
    // 0x18e594: 0x40f809  jalr        $v0
label_18e598:
    if (ctx->pc == 0x18E598u) {
        ctx->pc = 0x18E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E594u;
        // 0x18e598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E59Cu;
        goto label_18e59c;
    }
    ctx->pc = 0x18E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E59Cu);
        ctx->pc = 0x18E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E594u;
        // 0x18e598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E594u, 0x18E59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E59Cu;
label_18e59c:
    // 0x18e59c: 0xc061a16  jal         func_186858
label_18e5a0:
    if (ctx->pc == 0x18E5A0u) {
        ctx->pc = 0x18E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E59Cu;
        // 0x18e5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5A4u;
        goto label_18e5a4;
    }
    ctx->pc = 0x18E59Cu;
    SET_GPR_U32(ctx, 31, 0x18E5A4u);
    ctx->pc = 0x18E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E59Cu;
    // 0x18e5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18E59Cu, 0x18E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5A4u;
label_18e5a4:
    // 0x18e5a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e5a8:
    // 0x18e5a8: 0xc06ee30  jal         func_1BB8C0
label_18e5ac:
    if (ctx->pc == 0x18E5ACu) {
        ctx->pc = 0x18E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5A8u;
        // 0x18e5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5B0u;
        goto label_18e5b0;
    }
    ctx->pc = 0x18E5A8u;
    SET_GPR_U32(ctx, 31, 0x18E5B0u);
    ctx->pc = 0x18E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5A8u;
    // 0x18e5ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x18E5A8u, 0x18E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5B0u;
label_18e5b0:
    // 0x18e5b0: 0xc061a12  jal         func_186848
label_18e5b4:
    if (ctx->pc == 0x18E5B4u) {
        ctx->pc = 0x18E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5B0u;
        // 0x18e5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5B8u;
        goto label_18e5b8;
    }
    ctx->pc = 0x18E5B0u;
    SET_GPR_U32(ctx, 31, 0x18E5B8u);
    ctx->pc = 0x18E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5B0u;
    // 0x18e5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E5B0u, 0x18E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5B8u;
label_18e5b8:
    // 0x18e5b8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e5bc:
    // 0x18e5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e5c0:
    // 0x18e5c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18e5c4:
    // 0x18e5c4: 0x40f809  jalr        $v0
label_18e5c8:
    if (ctx->pc == 0x18E5C8u) {
        ctx->pc = 0x18E5CCu;
        goto label_18e5cc;
    }
    ctx->pc = 0x18E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E5CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E5C4u, 0x18E5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E5CCu;
label_18e5cc:
    // 0x18e5cc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_18e5d0:
    if (ctx->pc == 0x18E5D0u) {
        ctx->pc = 0x18E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5CCu;
        // 0x18e5d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5D4u;
        goto label_18e5d4;
    }
    ctx->pc = 0x18E5CCu;
    {
        const bool branch_taken_0x18e5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e5cc) {
            ctx->pc = 0x18E5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E5CCu;
            // 0x18e5d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E5D4u;
label_18e5d4:
    // 0x18e5d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18e5d8:
    // 0x18e5d8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e5dc:
    // 0x18e5dc: 0x40f809  jalr        $v0
label_18e5e0:
    if (ctx->pc == 0x18E5E0u) {
        ctx->pc = 0x18E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5DCu;
        // 0x18e5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5E4u;
        goto label_18e5e4;
    }
    ctx->pc = 0x18E5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E5E4u);
        ctx->pc = 0x18E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5DCu;
        // 0x18e5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E5DCu, 0x18E5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E5E4u;
label_18e5e4:
    // 0x18e5e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_18e5e8:
    if (ctx->pc == 0x18E5E8u) {
        ctx->pc = 0x18E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E4u;
        // 0x18e5e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5ECu;
        goto label_18e5ec;
    }
    ctx->pc = 0x18E5E4u;
    {
        const bool branch_taken_0x18e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5E4u;
        // 0x18e5e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e5e4) {
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E5ECu;
label_18e5ec:
    // 0x18e5ec: 0xc061a2a  jal         func_1868A8
label_18e5f0:
    if (ctx->pc == 0x18E5F0u) {
        ctx->pc = 0x18E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E5ECu;
        // 0x18e5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E5F4u;
        goto label_18e5f4;
    }
    ctx->pc = 0x18E5ECu;
    SET_GPR_U32(ctx, 31, 0x18E5F4u);
    ctx->pc = 0x18E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E5ECu;
    // 0x18e5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E5ECu, 0x18E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E5F4u;
label_18e5f4:
    // 0x18e5f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18e5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e5f8:
    // 0x18e5f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e5fc:
    // 0x18e5fc: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_18e600:
    // 0x18e600: 0xc0952e8  jal         func_254BA0
label_18e604:
    if (ctx->pc == 0x18E604u) {
        ctx->pc = 0x18E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E600u;
        // 0x18e604: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E608u;
        goto label_18e608;
    }
    ctx->pc = 0x18E600u;
    SET_GPR_U32(ctx, 31, 0x18E608u);
    ctx->pc = 0x18E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E600u;
    // 0x18e604: 0x8c650fe4  lw          $a1, 0xFE4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18E600u, 0x18E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E608u;
label_18e608:
    // 0x18e608: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_18e60c:
    // 0x18e60c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e610:
    // 0x18e610: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x18e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_18e614:
    // 0x18e614: 0x40f809  jalr        $v0
label_18e618:
    if (ctx->pc == 0x18E618u) {
        ctx->pc = 0x18E61Cu;
        goto label_18e61c;
    }
    ctx->pc = 0x18E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E61Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E614u, 0x18E61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E61Cu;
label_18e61c:
    // 0x18e61c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_18e620:
    if (ctx->pc == 0x18E620u) {
        ctx->pc = 0x18E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E61Cu;
        // 0x18e620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E624u;
        goto label_18e624;
    }
    ctx->pc = 0x18E61Cu;
    {
        const bool branch_taken_0x18e61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e61c) {
            ctx->pc = 0x18E620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E61Cu;
            // 0x18e620: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E638u;
            goto label_18e638;
        }
    }
    ctx->pc = 0x18E624u;
label_18e624:
    // 0x18e624: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18e628:
    // 0x18e628: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e62c:
    // 0x18e62c: 0x40f809  jalr        $v0
label_18e630:
    if (ctx->pc == 0x18E630u) {
        ctx->pc = 0x18E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E62Cu;
        // 0x18e630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E634u;
        goto label_18e634;
    }
    ctx->pc = 0x18E62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E634u);
        ctx->pc = 0x18E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E62Cu;
        // 0x18e630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E62Cu, 0x18E634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E634u;
label_18e634:
    // 0x18e634: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e638:
    // 0x18e638: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18e63c:
    // 0x18e63c: 0x3e00008  jr          $ra
label_18e640:
    if (ctx->pc == 0x18E640u) {
        ctx->pc = 0x18E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E63Cu;
        // 0x18e640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E644u;
        goto label_18e644;
    }
    ctx->pc = 0x18E63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E63Cu;
        // 0x18e640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E644u;
label_18e644:
    // 0x18e644: 0x0  nop
    ctx->pc = 0x18e644u;
    // NOP
    ctx->pc = 0x18e648u;
}
