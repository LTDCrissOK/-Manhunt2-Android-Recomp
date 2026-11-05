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

// Function: sub_0031C4B0
// Address: 0x31c4b0 - 0x31c788
void sub_0031C4B0_0x31c4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C4B0_0x31c4b0");
#endif

    switch (ctx->pc) {
        case 0x31c504u: goto label_31c504;
        case 0x31c518u: goto label_31c518;
        case 0x31c524u: goto label_31c524;
        case 0x31c53cu: goto label_31c53c;
        case 0x31c554u: goto label_31c554;
        case 0x31c56cu: goto label_31c56c;
        case 0x31c584u: goto label_31c584;
        case 0x31c59cu: goto label_31c59c;
        case 0x31c5b4u: goto label_31c5b4;
        case 0x31c5ccu: goto label_31c5cc;
        case 0x31c5e4u: goto label_31c5e4;
        case 0x31c5fcu: goto label_31c5fc;
        case 0x31c614u: goto label_31c614;
        case 0x31c62cu: goto label_31c62c;
        case 0x31c640u: goto label_31c640;
        case 0x31c658u: goto label_31c658;
        case 0x31c66cu: goto label_31c66c;
        case 0x31c688u: goto label_31c688;
        case 0x31c6d0u: goto label_31c6d0;
        case 0x31c6ecu: goto label_31c6ec;
        case 0x31c700u: goto label_31c700;
        case 0x31c718u: goto label_31c718;
        case 0x31c724u: goto label_31c724;
        case 0x31c754u: goto label_31c754;
        default: break;
    }

    ctx->pc = 0x31c4b0u;

    // 0x31c4b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31c4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31c4b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31c4b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c4bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31c4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c4c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31c4c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31c4c8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31c4cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31c4d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x31c4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31c4d4: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x31c4d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x31c4d8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x31c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31c4dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31c4dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c4e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x31c4e4: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x31c4e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x31c4e8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x31c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x31c4ec: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x31c4ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x31c4f0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31c4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x31c4f4: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x31c4f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x31c4f8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x31c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x31c4fc: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31C4FCu;
    SET_GPR_U32(ctx, 31, 0x31C504u);
    ctx->pc = 0x31C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C4FCu;
    // 0x31c500: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31C4FCu, 0x31C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C504u;
label_31c504:
    // 0x31c504: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31c504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x31c508: 0x2451cc84  addiu       $s1, $v0, -0x337C
    ctx->pc = 0x31c508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954116));
    // 0x31c50c: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x31C50Cu;
    {
        const bool branch_taken_0x31c50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C50Cu;
        // 0x31c510: 0x2632ff28  addiu       $s2, $s1, -0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c50c) {
            ctx->pc = 0x31C718u;
            goto label_31c718;
        }
    }
    ctx->pc = 0x31C514u;
    // 0x31c514: 0x0  nop
    ctx->pc = 0x31c514u;
    // NOP
label_31c518:
    // 0x31c518: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c51c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C51Cu;
    SET_GPR_U32(ctx, 31, 0x31C524u);
    ctx->pc = 0x31C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C51Cu;
    // 0x31c520: 0x24453e10  addiu       $a1, $v0, 0x3E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C51Cu, 0x31C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C524u;
label_31c524:
    // 0x31c524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c528: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C528u;
    {
        const bool branch_taken_0x31c528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C528u;
        // 0x31c52c: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c528) {
            ctx->pc = 0x31C544u;
            goto label_31c544;
        }
    }
    ctx->pc = 0x31C530u;
    // 0x31c530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c534: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C534u;
    SET_GPR_U32(ctx, 31, 0x31C53Cu);
    ctx->pc = 0x31C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C534u;
    // 0x31c538: 0x2445cbb8  addiu       $a1, $v0, -0x3448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C534u, 0x31C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C53Cu;
label_31c53c:
    // 0x31c53c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x31C53Cu;
    {
        const bool branch_taken_0x31c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C53Cu;
        // 0x31c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c53c) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C544u;
label_31c544:
    // 0x31c544: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c54c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C54Cu;
    SET_GPR_U32(ctx, 31, 0x31C554u);
    ctx->pc = 0x31C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C54Cu;
    // 0x31c550: 0x24453e28  addiu       $a1, $v0, 0x3E28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C54Cu, 0x31C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C554u;
label_31c554:
    // 0x31c554: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C558u;
    {
        const bool branch_taken_0x31c558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C558u;
        // 0x31c55c: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c558) {
            ctx->pc = 0x31C574u;
            goto label_31c574;
        }
    }
    ctx->pc = 0x31C560u;
    // 0x31c560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c564: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C564u;
    SET_GPR_U32(ctx, 31, 0x31C56Cu);
    ctx->pc = 0x31C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C564u;
    // 0x31c568: 0x2445cc94  addiu       $a1, $v0, -0x336C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C564u, 0x31C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C56Cu;
label_31c56c:
    // 0x31c56c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x31C56Cu;
    {
        const bool branch_taken_0x31c56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C56Cu;
        // 0x31c570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c56c) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C574u;
label_31c574:
    // 0x31c574: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c57c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C57Cu;
    SET_GPR_U32(ctx, 31, 0x31C584u);
    ctx->pc = 0x31C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C57Cu;
    // 0x31c580: 0x24453e40  addiu       $a1, $v0, 0x3E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C57Cu, 0x31C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C584u;
label_31c584:
    // 0x31c584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c588: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C588u;
    {
        const bool branch_taken_0x31c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C588u;
        // 0x31c58c: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c588) {
            ctx->pc = 0x31C5A4u;
            goto label_31c5a4;
        }
    }
    ctx->pc = 0x31C590u;
    // 0x31c590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c594: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C594u;
    SET_GPR_U32(ctx, 31, 0x31C59Cu);
    ctx->pc = 0x31C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C594u;
    // 0x31c598: 0x24a5cba4  addiu       $a1, $a1, -0x345C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C594u, 0x31C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C59Cu;
label_31c59c:
    // 0x31c59c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x31C59Cu;
    {
        const bool branch_taken_0x31c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C59Cu;
        // 0x31c5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c59c) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C5A4u;
label_31c5a4:
    // 0x31c5a4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c5a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C5ACu;
    SET_GPR_U32(ctx, 31, 0x31C5B4u);
    ctx->pc = 0x31C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5ACu;
    // 0x31c5b0: 0x24453e60  addiu       $a1, $v0, 0x3E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C5ACu, 0x31C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5B4u;
label_31c5b4:
    // 0x31c5b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c5b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C5B8u;
    {
        const bool branch_taken_0x31c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5B8u;
        // 0x31c5bc: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5b8) {
            ctx->pc = 0x31C5D4u;
            goto label_31c5d4;
        }
    }
    ctx->pc = 0x31C5C0u;
    // 0x31c5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5c4: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C5C4u;
    SET_GPR_U32(ctx, 31, 0x31C5CCu);
    ctx->pc = 0x31C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5C4u;
    // 0x31c5c8: 0x24a5cca4  addiu       $a1, $a1, -0x335C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C5C4u, 0x31C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5CCu;
label_31c5cc:
    // 0x31c5cc: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x31C5CCu;
    {
        const bool branch_taken_0x31c5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5CCu;
        // 0x31c5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5cc) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C5D4u;
label_31c5d4:
    // 0x31c5d4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c5d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C5DCu;
    SET_GPR_U32(ctx, 31, 0x31C5E4u);
    ctx->pc = 0x31C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5DCu;
    // 0x31c5e0: 0x24453e78  addiu       $a1, $v0, 0x3E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C5DCu, 0x31C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5E4u;
label_31c5e4:
    // 0x31c5e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c5e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C5E8u;
    {
        const bool branch_taken_0x31c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5E8u;
        // 0x31c5ec: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5e8) {
            ctx->pc = 0x31C604u;
            goto label_31c604;
        }
    }
    ctx->pc = 0x31C5F0u;
    // 0x31c5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c5f4: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C5F4u;
    SET_GPR_U32(ctx, 31, 0x31C5FCu);
    ctx->pc = 0x31C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C5F4u;
    // 0x31c5f8: 0x24a5ccc8  addiu       $a1, $a1, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C5F4u, 0x31C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C5FCu;
label_31c5fc:
    // 0x31c5fc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x31C5FCu;
    {
        const bool branch_taken_0x31c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C5FCu;
        // 0x31c600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c5fc) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C604u;
label_31c604:
    // 0x31c604: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31c608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c60c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C60Cu;
    SET_GPR_U32(ctx, 31, 0x31C614u);
    ctx->pc = 0x31C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C60Cu;
    // 0x31c610: 0x24453e90  addiu       $a1, $v0, 0x3E90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C60Cu, 0x31C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C614u;
label_31c614:
    // 0x31c614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c618: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C618u;
    {
        const bool branch_taken_0x31c618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C618u;
        // 0x31c61c: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c618) {
            ctx->pc = 0x31C634u;
            goto label_31c634;
        }
    }
    ctx->pc = 0x31C620u;
    // 0x31c620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c624: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C624u;
    SET_GPR_U32(ctx, 31, 0x31C62Cu);
    ctx->pc = 0x31C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C624u;
    // 0x31c628: 0x24a5ccf8  addiu       $a1, $a1, -0x3308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C624u, 0x31C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C62Cu;
label_31c62c:
    // 0x31c62c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x31C62Cu;
    {
        const bool branch_taken_0x31c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C62Cu;
        // 0x31c630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c62c) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C634u;
label_31c634:
    // 0x31c634: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c638: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C638u;
    SET_GPR_U32(ctx, 31, 0x31C640u);
    ctx->pc = 0x31C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C638u;
    // 0x31c63c: 0x27c53ea8  addiu       $a1, $fp, 0x3EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C638u, 0x31C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C640u;
label_31c640:
    // 0x31c640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c644: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C644u;
    {
        const bool branch_taken_0x31c644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C644u;
        // 0x31c648: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c644) {
            ctx->pc = 0x31C660u;
            goto label_31c660;
        }
    }
    ctx->pc = 0x31C64Cu;
    // 0x31c64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c650: 0xc09e056  jal         func_278158
    ctx->pc = 0x31C650u;
    SET_GPR_U32(ctx, 31, 0x31C658u);
    ctx->pc = 0x31C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C650u;
    // 0x31c654: 0x24a5cb9c  addiu       $a1, $a1, -0x3464 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x31C650u, 0x31C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C658u;
label_31c658:
    // 0x31c658: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x31C658u;
    {
        const bool branch_taken_0x31c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C658u;
        // 0x31c65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c658) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C660u;
label_31c660:
    // 0x31c660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c664: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C664u;
    SET_GPR_U32(ctx, 31, 0x31C66Cu);
    ctx->pc = 0x31C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C664u;
    // 0x31c668: 0x26e53ec0  addiu       $a1, $s7, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C664u, 0x31C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C66Cu;
label_31c66c:
    // 0x31c66c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c670: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31C670u;
    {
        const bool branch_taken_0x31c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C670u;
        // 0x31c674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c670) {
            ctx->pc = 0x31C6C4u;
            goto label_31c6c4;
        }
    }
    ctx->pc = 0x31C678u;
    // 0x31c678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c67c: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x31c67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x31c680: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31C680u;
    SET_GPR_U32(ctx, 31, 0x31C688u);
    ctx->pc = 0x31C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C680u;
    // 0x31c684: 0x26270008  addiu       $a3, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31C680u, 0x31C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C688u;
label_31c688:
    // 0x31c688: 0x2625fea4  addiu       $a1, $s1, -0x15C
    ctx->pc = 0x31c688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966948));
    // 0x31c68c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31c690: 0x8ca3015c  lw          $v1, 0x15C($a1)
    ctx->pc = 0x31c690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x31c694: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x31C694u;
    {
        const bool branch_taken_0x31c694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C694u;
        // 0x31c698: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c694) {
            ctx->pc = 0x31C718u;
            goto label_31c718;
        }
    }
    ctx->pc = 0x31C69Cu;
    // 0x31c69c: 0x8ca40160  lw          $a0, 0x160($a1)
    ctx->pc = 0x31c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x31c6a0: 0x5483001e  bnel        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x31C6A0u;
    {
        const bool branch_taken_0x31c6a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31c6a0) {
            ctx->pc = 0x31C6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C6A0u;
            // 0x31c6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C6A8u;
    // 0x31c6a8: 0x8ca20164  lw          $v0, 0x164($a1)
    ctx->pc = 0x31c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 356)));
    // 0x31c6ac: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x31C6ACu;
    {
        const bool branch_taken_0x31c6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x31C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6ACu;
        // 0x31c6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6ac) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C6B4u;
    // 0x31c6b4: 0xacb30164  sw          $s3, 0x164($a1)
    ctx->pc = 0x31c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 356), GPR_U32(ctx, 19));
    // 0x31c6b8: 0xacb3015c  sw          $s3, 0x15C($a1)
    ctx->pc = 0x31c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 19));
    // 0x31c6bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31C6BCu;
    {
        const bool branch_taken_0x31c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6BCu;
        // 0x31c6c0: 0xacb30160  sw          $s3, 0x160($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6bc) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C6C4u;
label_31c6c4:
    // 0x31c6c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C6C8u;
    SET_GPR_U32(ctx, 31, 0x31C6D0u);
    ctx->pc = 0x31C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6C8u;
    // 0x31c6cc: 0x26c53ed0  addiu       $a1, $s6, 0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C6C8u, 0x31C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6D0u;
label_31c6d0:
    // 0x31c6d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c6d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C6D4u;
    {
        const bool branch_taken_0x31c6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6D4u;
        // 0x31c6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6d4) {
            ctx->pc = 0x31C6F4u;
            goto label_31c6f4;
        }
    }
    ctx->pc = 0x31C6DCu;
    // 0x31c6dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31c6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6e0: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x31c6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x31c6e4: 0xc09dfd6  jal         func_277F58
    ctx->pc = 0x31C6E4u;
    SET_GPR_U32(ctx, 31, 0x31C6ECu);
    ctx->pc = 0x31C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6E4u;
    // 0x31c6e8: 0x26470008  addiu       $a3, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F58u, 0x31C6E4u, 0x31C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C6ECu;
label_31c6ec:
    // 0x31c6ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31C6ECu;
    {
        const bool branch_taken_0x31c6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C6ECu;
        // 0x31c6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c6ec) {
            ctx->pc = 0x31C71Cu;
            goto label_31c71c;
        }
    }
    ctx->pc = 0x31C6F4u;
label_31c6f4:
    // 0x31c6f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c6f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31C6F8u;
    SET_GPR_U32(ctx, 31, 0x31C700u);
    ctx->pc = 0x31C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C6F8u;
    // 0x31c6fc: 0x26a53ee8  addiu       $a1, $s5, 0x3EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31C6F8u, 0x31C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C700u;
label_31c700:
    // 0x31c700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31c700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31c704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C704u;
    {
        const bool branch_taken_0x31c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C704u;
        // 0x31c708: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c704) {
            ctx->pc = 0x31C718u;
            goto label_31c718;
        }
    }
    ctx->pc = 0x31C70Cu;
    // 0x31c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c710: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x31C710u;
    SET_GPR_U32(ctx, 31, 0x31C718u);
    ctx->pc = 0x31C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C710u;
    // 0x31c714: 0x24a5cba0  addiu       $a1, $a1, -0x3460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x31C710u, 0x31C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C718u;
label_31c718:
    // 0x31c718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31c71c:
    // 0x31c71c: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31C71Cu;
    SET_GPR_U32(ctx, 31, 0x31C724u);
    ctx->pc = 0x31C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C71Cu;
    // 0x31c720: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31C71Cu, 0x31C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C724u;
label_31c724:
    // 0x31c724: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x31C724u;
    {
        const bool branch_taken_0x31c724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C724u;
        // 0x31c728: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c724) {
            ctx->pc = 0x31C518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c518;
        }
    }
    ctx->pc = 0x31C72Cu;
    // 0x31c72c: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x31C72Cu;
    {
        const bool branch_taken_0x31c72c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C72Cu;
        // 0x31c730: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c72c) {
            ctx->pc = 0x31C74Cu;
            goto label_31c74c;
        }
    }
    ctx->pc = 0x31C734u;
    // 0x31c734: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x31c734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x31c738: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x31c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x31c73c: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x31c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x31c740: 0xac430164  sw          $v1, 0x164($v0)
    ctx->pc = 0x31c740u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CC8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC8Cu, _value); } while (0);
    // 0x31c744: 0xac43015c  sw          $v1, 0x15C($v0)
    ctx->pc = 0x31c744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CC84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC84u, _value); } while (0);
    // 0x31c748: 0xac430160  sw          $v1, 0x160($v0)
    ctx->pc = 0x31c748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x66CC88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CC88u, _value); } while (0);
label_31c74c:
    // 0x31c74c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31C74Cu;
    SET_GPR_U32(ctx, 31, 0x31C754u);
    ctx->pc = 0x31C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C74Cu;
    // 0x31c750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31C74Cu, 0x31C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C754u;
label_31c754:
    // 0x31c754: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31c754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c758: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31c758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31c75c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31c75cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31c760: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31c760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31c764: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x31c764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31c768: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x31c768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31c76c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x31c76cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c770: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x31c770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31c774: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x31c774u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31c778: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x31c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31c77c: 0x3e00008  jr          $ra
    ctx->pc = 0x31C77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C77Cu;
        // 0x31c780: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C784u;
    // 0x31c784: 0x0  nop
    ctx->pc = 0x31c784u;
    // NOP
    ctx->pc = 0x31c788u;
}
