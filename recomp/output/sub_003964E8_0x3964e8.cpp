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

// Function: sub_003964E8
// Address: 0x3964e8 - 0x396598
void sub_003964E8_0x3964e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003964E8_0x3964e8");
#endif

    switch (ctx->pc) {
        case 0x3964e8u: goto label_3964e8;
        case 0x3964ecu: goto label_3964ec;
        case 0x3964f0u: goto label_3964f0;
        case 0x3964f4u: goto label_3964f4;
        case 0x3964f8u: goto label_3964f8;
        case 0x3964fcu: goto label_3964fc;
        case 0x396500u: goto label_396500;
        case 0x396504u: goto label_396504;
        case 0x396508u: goto label_396508;
        case 0x39650cu: goto label_39650c;
        case 0x396510u: goto label_396510;
        case 0x396514u: goto label_396514;
        case 0x396518u: goto label_396518;
        case 0x39651cu: goto label_39651c;
        case 0x396520u: goto label_396520;
        case 0x396524u: goto label_396524;
        case 0x396528u: goto label_396528;
        case 0x39652cu: goto label_39652c;
        case 0x396530u: goto label_396530;
        case 0x396534u: goto label_396534;
        case 0x396538u: goto label_396538;
        case 0x39653cu: goto label_39653c;
        case 0x396540u: goto label_396540;
        case 0x396544u: goto label_396544;
        case 0x396548u: goto label_396548;
        case 0x39654cu: goto label_39654c;
        case 0x396550u: goto label_396550;
        case 0x396554u: goto label_396554;
        case 0x396558u: goto label_396558;
        case 0x39655cu: goto label_39655c;
        case 0x396560u: goto label_396560;
        case 0x396564u: goto label_396564;
        case 0x396568u: goto label_396568;
        case 0x39656cu: goto label_39656c;
        case 0x396570u: goto label_396570;
        case 0x396574u: goto label_396574;
        case 0x396578u: goto label_396578;
        case 0x39657cu: goto label_39657c;
        case 0x396580u: goto label_396580;
        case 0x396584u: goto label_396584;
        case 0x396588u: goto label_396588;
        case 0x39658cu: goto label_39658c;
        case 0x396590u: goto label_396590;
        case 0x396594u: goto label_396594;
        default: break;
    }

    ctx->pc = 0x3964e8u;

label_3964e8:
    // 0x3964e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3964e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3964ec:
    // 0x3964ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3964ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3964f0:
    // 0x3964f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3964f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3964f4:
    // 0x3964f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3964f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3964f8:
    // 0x3964f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3964f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3964fc:
    // 0x3964fc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_396500:
    if (ctx->pc == 0x396500u) {
        ctx->pc = 0x396500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964FCu;
        // 0x396500: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396504u;
        goto label_396504;
    }
    ctx->pc = 0x3964FCu;
    {
        const bool branch_taken_0x3964fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x396500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964FCu;
        // 0x396500: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964fc) {
            ctx->pc = 0x396520u;
            goto label_396520;
        }
    }
    ctx->pc = 0x396504u;
label_396504:
    // 0x396504: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x396504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_396508:
    // 0x396508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39650c:
    // 0x39650c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39650cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_396510:
    // 0x396510: 0x2484aec0  addiu       $a0, $a0, -0x5140
    ctx->pc = 0x396510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946496));
label_396514:
    // 0x396514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396518:
    // 0x396518: 0x80ec0fe  j           func_3B03F8
label_39651c:
    if (ctx->pc == 0x39651Cu) {
        ctx->pc = 0x39651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396518u;
        // 0x39651c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396520u;
        goto label_396520;
    }
    ctx->pc = 0x396518u;
    ctx->pc = 0x39651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396518u;
    // 0x39651c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x396520u;
label_396520:
    // 0x396520: 0xc0e6dd0  jal         func_39B740
label_396524:
    if (ctx->pc == 0x396524u) {
        ctx->pc = 0x396528u;
        goto label_396528;
    }
    ctx->pc = 0x396520u;
    SET_GPR_U32(ctx, 31, 0x396528u);
    ctx->pc = 0x39B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B740u, 0x396520u, 0x396528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396528u;
label_396528:
    // 0x396528: 0xc0ebe50  jal         func_3AF940
label_39652c:
    if (ctx->pc == 0x39652Cu) {
        ctx->pc = 0x396530u;
        goto label_396530;
    }
    ctx->pc = 0x396528u;
    SET_GPR_U32(ctx, 31, 0x396530u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x396528u, 0x396530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396530u;
label_396530:
    // 0x396530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x396530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_396534:
    // 0x396534: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x396534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_396538:
    // 0x396538: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x396538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_39653c:
    // 0x39653c: 0xc0e6d28  jal         func_39B4A0
label_396540:
    if (ctx->pc == 0x396540u) {
        ctx->pc = 0x396540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39653Cu;
        // 0x396540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396544u;
        goto label_396544;
    }
    ctx->pc = 0x39653Cu;
    SET_GPR_U32(ctx, 31, 0x396544u);
    ctx->pc = 0x396540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39653Cu;
    // 0x396540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B4A0u, 0x39653Cu, 0x396544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396544u;
label_396544:
    // 0x396544: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x396544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_396548:
    // 0x396548: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x396548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39654c:
    // 0x39654c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_396550:
    // 0x396550: 0x40f809  jalr        $v0
label_396554:
    if (ctx->pc == 0x396554u) {
        ctx->pc = 0x396558u;
        goto label_396558;
    }
    ctx->pc = 0x396550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396558u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396550u, 0x396558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396558u;
label_396558:
    // 0x396558: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x396558u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_39655c:
    // 0x39655c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396560:
    // 0x396560: 0xc0e9cd2  jal         func_3A7348
label_396564:
    if (ctx->pc == 0x396564u) {
        ctx->pc = 0x396564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396560u;
        // 0x396564: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396568u;
        goto label_396568;
    }
    ctx->pc = 0x396560u;
    SET_GPR_U32(ctx, 31, 0x396568u);
    ctx->pc = 0x396564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396560u;
    // 0x396564: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7348u, 0x396560u, 0x396568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396568u;
label_396568:
    // 0x396568: 0xc0ebe56  jal         func_3AF958
label_39656c:
    if (ctx->pc == 0x39656Cu) {
        ctx->pc = 0x396570u;
        goto label_396570;
    }
    ctx->pc = 0x396568u;
    SET_GPR_U32(ctx, 31, 0x396570u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x396568u, 0x396570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396570u;
label_396570:
    // 0x396570: 0xc0e9c38  jal         func_3A70E0
label_396574:
    if (ctx->pc == 0x396574u) {
        ctx->pc = 0x396574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396570u;
        // 0x396574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396578u;
        goto label_396578;
    }
    ctx->pc = 0x396570u;
    SET_GPR_U32(ctx, 31, 0x396578u);
    ctx->pc = 0x396574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396570u;
    // 0x396574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A70E0u, 0x396570u, 0x396578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396578u;
label_396578:
    // 0x396578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39657c:
    // 0x39657c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39657cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_396580:
    // 0x396580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x396580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396584:
    // 0x396584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_396588:
    // 0x396588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39658c:
    // 0x39658c: 0x80e7278  j           func_39C9E0
label_396590:
    if (ctx->pc == 0x396590u) {
        ctx->pc = 0x396590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39658Cu;
        // 0x396590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396594u;
        goto label_396594;
    }
    ctx->pc = 0x39658Cu;
    ctx->pc = 0x396590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39658Cu;
    // 0x396590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    sub_0039C9E0_0x39c9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x396594u;
label_396594:
    // 0x396594: 0x0  nop
    ctx->pc = 0x396594u;
    // NOP
    ctx->pc = 0x396598u;
}
