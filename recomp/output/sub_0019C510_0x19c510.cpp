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

// Function: sub_0019C510
// Address: 0x19c510 - 0x19c5e0
void sub_0019C510_0x19c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C510_0x19c510");
#endif

    switch (ctx->pc) {
        case 0x19c510u: goto label_19c510;
        case 0x19c514u: goto label_19c514;
        case 0x19c518u: goto label_19c518;
        case 0x19c51cu: goto label_19c51c;
        case 0x19c520u: goto label_19c520;
        case 0x19c524u: goto label_19c524;
        case 0x19c528u: goto label_19c528;
        case 0x19c52cu: goto label_19c52c;
        case 0x19c530u: goto label_19c530;
        case 0x19c534u: goto label_19c534;
        case 0x19c538u: goto label_19c538;
        case 0x19c53cu: goto label_19c53c;
        case 0x19c540u: goto label_19c540;
        case 0x19c544u: goto label_19c544;
        case 0x19c548u: goto label_19c548;
        case 0x19c54cu: goto label_19c54c;
        case 0x19c550u: goto label_19c550;
        case 0x19c554u: goto label_19c554;
        case 0x19c558u: goto label_19c558;
        case 0x19c55cu: goto label_19c55c;
        case 0x19c560u: goto label_19c560;
        case 0x19c564u: goto label_19c564;
        case 0x19c568u: goto label_19c568;
        case 0x19c56cu: goto label_19c56c;
        case 0x19c570u: goto label_19c570;
        case 0x19c574u: goto label_19c574;
        case 0x19c578u: goto label_19c578;
        case 0x19c57cu: goto label_19c57c;
        case 0x19c580u: goto label_19c580;
        case 0x19c584u: goto label_19c584;
        case 0x19c588u: goto label_19c588;
        case 0x19c58cu: goto label_19c58c;
        case 0x19c590u: goto label_19c590;
        case 0x19c594u: goto label_19c594;
        case 0x19c598u: goto label_19c598;
        case 0x19c59cu: goto label_19c59c;
        case 0x19c5a0u: goto label_19c5a0;
        case 0x19c5a4u: goto label_19c5a4;
        case 0x19c5a8u: goto label_19c5a8;
        case 0x19c5acu: goto label_19c5ac;
        case 0x19c5b0u: goto label_19c5b0;
        case 0x19c5b4u: goto label_19c5b4;
        case 0x19c5b8u: goto label_19c5b8;
        case 0x19c5bcu: goto label_19c5bc;
        case 0x19c5c0u: goto label_19c5c0;
        case 0x19c5c4u: goto label_19c5c4;
        case 0x19c5c8u: goto label_19c5c8;
        case 0x19c5ccu: goto label_19c5cc;
        case 0x19c5d0u: goto label_19c5d0;
        case 0x19c5d4u: goto label_19c5d4;
        case 0x19c5d8u: goto label_19c5d8;
        case 0x19c5dcu: goto label_19c5dc;
        default: break;
    }

    ctx->pc = 0x19c510u;

label_19c510:
    // 0x19c510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19c514:
    // 0x19c514: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x19c514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19c518:
    // 0x19c518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19c51c:
    // 0x19c51c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19c51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_19c520:
    // 0x19c520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c524:
    // 0x19c524: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19c528:
    // 0x19c528: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19c52c:
    // 0x19c52c: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19c530:
    // 0x19c530: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19c534:
    // 0x19c534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c538:
    // 0x19c538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c53c:
    // 0x19c53c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c540:
    // 0x19c540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c544:
    // 0x19c544: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c548:
    // 0x19c548: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x19c548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_19c54c:
    // 0x19c54c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x19c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_19c550:
    // 0x19c550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c554:
    // 0x19c554: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x19c554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_19c558:
    // 0x19c558: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19c558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19c55c:
    // 0x19c55c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19c560:
    if (ctx->pc == 0x19C560u) {
        ctx->pc = 0x19C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C55Cu;
        // 0x19c560: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C564u;
        goto label_19c564;
    }
    ctx->pc = 0x19C55Cu;
    {
        const bool branch_taken_0x19c55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C55Cu;
        // 0x19c560: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c55c) {
            ctx->pc = 0x19C574u;
            goto label_19c574;
        }
    }
    ctx->pc = 0x19C564u;
label_19c564:
    // 0x19c564: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19c564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19c568:
    // 0x19c568: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c56c:
    // 0x19c56c: 0x40f809  jalr        $v0
label_19c570:
    if (ctx->pc == 0x19C570u) {
        ctx->pc = 0x19C574u;
        goto label_19c574;
    }
    ctx->pc = 0x19C56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C574u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C56Cu, 0x19C574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0xc061a16  jal         func_186858
label_19c578:
    if (ctx->pc == 0x19C578u) {
        ctx->pc = 0x19C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C574u;
        // 0x19c578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C57Cu;
        goto label_19c57c;
    }
    ctx->pc = 0x19C574u;
    SET_GPR_U32(ctx, 31, 0x19C57Cu);
    ctx->pc = 0x19C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C574u;
    // 0x19c578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C574u, 0x19C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C57Cu;
label_19c57c:
    // 0x19c57c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19c57cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19c580:
    // 0x19c580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c584:
    // 0x19c584: 0xc06ee7e  jal         func_1BB9F8
label_19c588:
    if (ctx->pc == 0x19C588u) {
        ctx->pc = 0x19C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C584u;
        // 0x19c588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C58Cu;
        goto label_19c58c;
    }
    ctx->pc = 0x19C584u;
    SET_GPR_U32(ctx, 31, 0x19C58Cu);
    ctx->pc = 0x19C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C584u;
    // 0x19c588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x19C584u, 0x19C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C58Cu;
label_19c58c:
    // 0x19c58c: 0xc061a12  jal         func_186848
label_19c590:
    if (ctx->pc == 0x19C590u) {
        ctx->pc = 0x19C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C58Cu;
        // 0x19c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C594u;
        goto label_19c594;
    }
    ctx->pc = 0x19C58Cu;
    SET_GPR_U32(ctx, 31, 0x19C594u);
    ctx->pc = 0x19C590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C58Cu;
    // 0x19c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C58Cu, 0x19C594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C594u;
label_19c594:
    // 0x19c594: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19c594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c598:
    // 0x19c598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c59c:
    // 0x19c59c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c5a0:
    // 0x19c5a0: 0xc07026c  jal         func_1C09B0
label_19c5a4:
    if (ctx->pc == 0x19C5A4u) {
        ctx->pc = 0x19C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5A0u;
        // 0x19c5a4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C5A8u;
        goto label_19c5a8;
    }
    ctx->pc = 0x19C5A0u;
    SET_GPR_U32(ctx, 31, 0x19C5A8u);
    ctx->pc = 0x19C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5A0u;
    // 0x19c5a4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C09B0u, 0x19C5A0u, 0x19C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5A8u;
label_19c5a8:
    // 0x19c5a8: 0xc061a16  jal         func_186858
label_19c5ac:
    if (ctx->pc == 0x19C5ACu) {
        ctx->pc = 0x19C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5A8u;
        // 0x19c5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C5B0u;
        goto label_19c5b0;
    }
    ctx->pc = 0x19C5A8u;
    SET_GPR_U32(ctx, 31, 0x19C5B0u);
    ctx->pc = 0x19C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5A8u;
    // 0x19c5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C5A8u, 0x19C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5B0u;
label_19c5b0:
    // 0x19c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19c5b4:
    // 0x19c5b4: 0xc061a16  jal         func_186858
label_19c5b8:
    if (ctx->pc == 0x19C5B8u) {
        ctx->pc = 0x19C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5B4u;
        // 0x19c5b8: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C5BCu;
        goto label_19c5bc;
    }
    ctx->pc = 0x19C5B4u;
    SET_GPR_U32(ctx, 31, 0x19C5BCu);
    ctx->pc = 0x19C5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5B4u;
    // 0x19c5b8: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C5B4u, 0x19C5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5BCu;
label_19c5bc:
    // 0x19c5bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19c5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19c5c0:
    // 0x19c5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c5c4:
    // 0x19c5c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c5c8:
    // 0x19c5c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19c5cc:
    // 0x19c5cc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19c5d0:
    // 0x19c5d0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19c5d4:
    // 0x19c5d4: 0x3e00008  jr          $ra
label_19c5d8:
    if (ctx->pc == 0x19C5D8u) {
        ctx->pc = 0x19C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5D4u;
        // 0x19c5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C5DCu;
        goto label_19c5dc;
    }
    ctx->pc = 0x19C5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5D4u;
        // 0x19c5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5DCu;
label_19c5dc:
    // 0x19c5dc: 0x0  nop
    ctx->pc = 0x19c5dcu;
    // NOP
    ctx->pc = 0x19c5e0u;
}
