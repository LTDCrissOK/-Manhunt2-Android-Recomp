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

// Function: sub_002267D8
// Address: 0x2267d8 - 0x226928
void sub_002267D8_0x2267d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002267D8_0x2267d8");
#endif

    switch (ctx->pc) {
        case 0x2267d8u: goto label_2267d8;
        case 0x2267dcu: goto label_2267dc;
        case 0x2267e0u: goto label_2267e0;
        case 0x2267e4u: goto label_2267e4;
        case 0x2267e8u: goto label_2267e8;
        case 0x2267ecu: goto label_2267ec;
        case 0x2267f0u: goto label_2267f0;
        case 0x2267f4u: goto label_2267f4;
        case 0x2267f8u: goto label_2267f8;
        case 0x2267fcu: goto label_2267fc;
        case 0x226800u: goto label_226800;
        case 0x226804u: goto label_226804;
        case 0x226808u: goto label_226808;
        case 0x22680cu: goto label_22680c;
        case 0x226810u: goto label_226810;
        case 0x226814u: goto label_226814;
        case 0x226818u: goto label_226818;
        case 0x22681cu: goto label_22681c;
        case 0x226820u: goto label_226820;
        case 0x226824u: goto label_226824;
        case 0x226828u: goto label_226828;
        case 0x22682cu: goto label_22682c;
        case 0x226830u: goto label_226830;
        case 0x226834u: goto label_226834;
        case 0x226838u: goto label_226838;
        case 0x22683cu: goto label_22683c;
        case 0x226840u: goto label_226840;
        case 0x226844u: goto label_226844;
        case 0x226848u: goto label_226848;
        case 0x22684cu: goto label_22684c;
        case 0x226850u: goto label_226850;
        case 0x226854u: goto label_226854;
        case 0x226858u: goto label_226858;
        case 0x22685cu: goto label_22685c;
        case 0x226860u: goto label_226860;
        case 0x226864u: goto label_226864;
        case 0x226868u: goto label_226868;
        case 0x22686cu: goto label_22686c;
        case 0x226870u: goto label_226870;
        case 0x226874u: goto label_226874;
        case 0x226878u: goto label_226878;
        case 0x22687cu: goto label_22687c;
        case 0x226880u: goto label_226880;
        case 0x226884u: goto label_226884;
        case 0x226888u: goto label_226888;
        case 0x22688cu: goto label_22688c;
        case 0x226890u: goto label_226890;
        case 0x226894u: goto label_226894;
        case 0x226898u: goto label_226898;
        case 0x22689cu: goto label_22689c;
        case 0x2268a0u: goto label_2268a0;
        case 0x2268a4u: goto label_2268a4;
        case 0x2268a8u: goto label_2268a8;
        case 0x2268acu: goto label_2268ac;
        case 0x2268b0u: goto label_2268b0;
        case 0x2268b4u: goto label_2268b4;
        case 0x2268b8u: goto label_2268b8;
        case 0x2268bcu: goto label_2268bc;
        case 0x2268c0u: goto label_2268c0;
        case 0x2268c4u: goto label_2268c4;
        case 0x2268c8u: goto label_2268c8;
        case 0x2268ccu: goto label_2268cc;
        case 0x2268d0u: goto label_2268d0;
        case 0x2268d4u: goto label_2268d4;
        case 0x2268d8u: goto label_2268d8;
        case 0x2268dcu: goto label_2268dc;
        case 0x2268e0u: goto label_2268e0;
        case 0x2268e4u: goto label_2268e4;
        case 0x2268e8u: goto label_2268e8;
        case 0x2268ecu: goto label_2268ec;
        case 0x2268f0u: goto label_2268f0;
        case 0x2268f4u: goto label_2268f4;
        case 0x2268f8u: goto label_2268f8;
        case 0x2268fcu: goto label_2268fc;
        case 0x226900u: goto label_226900;
        case 0x226904u: goto label_226904;
        case 0x226908u: goto label_226908;
        case 0x22690cu: goto label_22690c;
        case 0x226910u: goto label_226910;
        case 0x226914u: goto label_226914;
        case 0x226918u: goto label_226918;
        case 0x22691cu: goto label_22691c;
        case 0x226920u: goto label_226920;
        case 0x226924u: goto label_226924;
        default: break;
    }

    ctx->pc = 0x2267d8u;

label_2267d8:
    // 0x2267d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2267d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2267dc:
    // 0x2267dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2267dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2267e0:
    // 0x2267e0: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x2267e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_2267e4:
    // 0x2267e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2267e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2267e8:
    // 0x2267e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2267e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2267ec:
    // 0x2267ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2267ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2267f0:
    // 0x2267f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2267f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2267f4:
    // 0x2267f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2267f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2267f8:
    // 0x2267f8: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_2267fc:
    if (ctx->pc == 0x2267FCu) {
        ctx->pc = 0x2267FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267F8u;
        // 0x2267fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226800u;
        goto label_226800;
    }
    ctx->pc = 0x2267F8u;
    {
        const bool branch_taken_0x2267f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2267FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2267F8u;
        // 0x2267fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2267f8) {
            ctx->pc = 0x22690Cu;
            goto label_22690c;
        }
    }
    ctx->pc = 0x226800u;
label_226800:
    // 0x226800: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x226800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_226804:
    // 0x226804: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_226808:
    if (ctx->pc == 0x226808u) {
        ctx->pc = 0x226808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226804u;
        // 0x226808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22680Cu;
        goto label_22680c;
    }
    ctx->pc = 0x226804u;
    {
        const bool branch_taken_0x226804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226804u;
        // 0x226808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226804) {
            ctx->pc = 0x226910u;
            goto label_226910;
        }
    }
    ctx->pc = 0x22680Cu;
label_22680c:
    // 0x22680c: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x22680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_226810:
    // 0x226810: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_226814:
    if (ctx->pc == 0x226814u) {
        ctx->pc = 0x226814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226810u;
        // 0x226814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226818u;
        goto label_226818;
    }
    ctx->pc = 0x226810u;
    {
        const bool branch_taken_0x226810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226810u;
        // 0x226814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226810) {
            ctx->pc = 0x226910u;
            goto label_226910;
        }
    }
    ctx->pc = 0x226818u;
label_226818:
    // 0x226818: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x226818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_22681c:
    // 0x22681c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x22681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_226820:
    // 0x226820: 0x40f809  jalr        $v0
label_226824:
    if (ctx->pc == 0x226824u) {
        ctx->pc = 0x226828u;
        goto label_226828;
    }
    ctx->pc = 0x226820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226828u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226820u, 0x226828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226828u;
label_226828:
    // 0x226828: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x226828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_22682c:
    // 0x22682c: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_226830:
    if (ctx->pc == 0x226830u) {
        ctx->pc = 0x226830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22682Cu;
        // 0x226830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226834u;
        goto label_226834;
    }
    ctx->pc = 0x22682Cu;
    {
        const bool branch_taken_0x22682c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x226830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22682Cu;
        // 0x226830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22682c) {
            ctx->pc = 0x226910u;
            goto label_226910;
        }
    }
    ctx->pc = 0x226834u;
label_226834:
    // 0x226834: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x226834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_226838:
    // 0x226838: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x226838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_22683c:
    // 0x22683c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_226840:
    if (ctx->pc == 0x226840u) {
        ctx->pc = 0x226840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22683Cu;
        // 0x226840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226844u;
        goto label_226844;
    }
    ctx->pc = 0x22683Cu;
    {
        const bool branch_taken_0x22683c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x226840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22683Cu;
        // 0x226840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22683c) {
            ctx->pc = 0x226910u;
            goto label_226910;
        }
    }
    ctx->pc = 0x226844u;
label_226844:
    // 0x226844: 0xc0767f2  jal         func_1D9FC8
label_226848:
    if (ctx->pc == 0x226848u) {
        ctx->pc = 0x22684Cu;
        goto label_22684c;
    }
    ctx->pc = 0x226844u;
    SET_GPR_U32(ctx, 31, 0x22684Cu);
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x226844u, 0x22684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22684Cu;
label_22684c:
    // 0x22684c: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x22684cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_226850:
    // 0x226850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226854:
    // 0x226854: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x226854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_226858:
    // 0x226858: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x226858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22685c:
    // 0x22685c: 0x40f809  jalr        $v0
label_226860:
    if (ctx->pc == 0x226860u) {
        ctx->pc = 0x226860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22685Cu;
        // 0x226860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226864u;
        goto label_226864;
    }
    ctx->pc = 0x22685Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226864u);
        ctx->pc = 0x226860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22685Cu;
        // 0x226860: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22685Cu, 0x226864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226864u;
label_226864:
    // 0x226864: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x226864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_226868:
    // 0x226868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22686c:
    // 0x22686c: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x22686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_226870:
    // 0x226870: 0x40f809  jalr        $v0
label_226874:
    if (ctx->pc == 0x226874u) {
        ctx->pc = 0x226874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226870u;
        // 0x226874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226878u;
        goto label_226878;
    }
    ctx->pc = 0x226870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226878u);
        ctx->pc = 0x226874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226870u;
        // 0x226874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226870u, 0x226878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226878u;
label_226878:
    // 0x226878: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x226878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_22687c:
    // 0x22687c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22687cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226880:
    // 0x226880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226884:
    // 0x226884: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x226884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_226888:
    // 0x226888: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x226888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_22688c:
    // 0x22688c: 0x40f809  jalr        $v0
label_226890:
    if (ctx->pc == 0x226890u) {
        ctx->pc = 0x226890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22688Cu;
        // 0x226890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226894u;
        goto label_226894;
    }
    ctx->pc = 0x22688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226894u);
        ctx->pc = 0x226890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22688Cu;
        // 0x226890: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22688Cu, 0x226894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226894u;
label_226894:
    // 0x226894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226898:
    // 0x226898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x226898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22689c:
    // 0x22689c: 0xc0898d6  jal         func_226358
label_2268a0:
    if (ctx->pc == 0x2268A0u) {
        ctx->pc = 0x2268A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22689Cu;
        // 0x2268a0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268A4u;
        goto label_2268a4;
    }
    ctx->pc = 0x22689Cu;
    SET_GPR_U32(ctx, 31, 0x2268A4u);
    ctx->pc = 0x2268A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22689Cu;
    // 0x2268a0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226358u, 0x22689Cu, 0x2268A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268A4u;
label_2268a4:
    // 0x2268a4: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x2268a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_2268a8:
    // 0x2268a8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2268ac:
    if (ctx->pc == 0x2268ACu) {
        ctx->pc = 0x2268ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268A8u;
        // 0x2268ac: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268B0u;
        goto label_2268b0;
    }
    ctx->pc = 0x2268A8u;
    {
        const bool branch_taken_0x2268a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268A8u;
        // 0x2268ac: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268a8) {
            ctx->pc = 0x2268E0u;
            goto label_2268e0;
        }
    }
    ctx->pc = 0x2268B0u;
label_2268b0:
    // 0x2268b0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2268b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2268b4:
    // 0x2268b4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2268b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2268b8:
    // 0x2268b8: 0x40f809  jalr        $v0
label_2268bc:
    if (ctx->pc == 0x2268BCu) {
        ctx->pc = 0x2268C0u;
        goto label_2268c0;
    }
    ctx->pc = 0x2268B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2268C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2268B8u, 0x2268C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2268C0u;
label_2268c0:
    // 0x2268c0: 0xc076de4  jal         func_1DB790
label_2268c4:
    if (ctx->pc == 0x2268C4u) {
        ctx->pc = 0x2268C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268C0u;
        // 0x2268c4: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268C8u;
        goto label_2268c8;
    }
    ctx->pc = 0x2268C0u;
    SET_GPR_U32(ctx, 31, 0x2268C8u);
    ctx->pc = 0x2268C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268C0u;
    // 0x2268c4: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2268C0u, 0x2268C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268C8u;
label_2268c8:
    // 0x2268c8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2268c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2268cc:
    // 0x2268cc: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2268ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_2268d0:
    // 0x2268d0: 0xa2000115  sb          $zero, 0x115($s0)
    ctx->pc = 0x2268d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 0));
label_2268d4:
    // 0x2268d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2268d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2268d8:
    // 0x2268d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2268dc:
    if (ctx->pc == 0x2268DCu) {
        ctx->pc = 0x2268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268D8u;
        // 0x2268dc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268E0u;
        goto label_2268e0;
    }
    ctx->pc = 0x2268D8u;
    {
        const bool branch_taken_0x2268d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268D8u;
        // 0x2268dc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268d8) {
            ctx->pc = 0x226904u;
            goto label_226904;
        }
    }
    ctx->pc = 0x2268E0u;
label_2268e0:
    // 0x2268e0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2268e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2268e4:
    // 0x2268e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2268e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2268e8:
    // 0x2268e8: 0x40f809  jalr        $v0
label_2268ec:
    if (ctx->pc == 0x2268ECu) {
        ctx->pc = 0x2268F0u;
        goto label_2268f0;
    }
    ctx->pc = 0x2268E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2268F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2268E8u, 0x2268F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2268F0u;
label_2268f0:
    // 0x2268f0: 0xc076e00  jal         func_1DB800
label_2268f4:
    if (ctx->pc == 0x2268F4u) {
        ctx->pc = 0x2268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268F0u;
        // 0x2268f4: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2268F8u;
        goto label_2268f8;
    }
    ctx->pc = 0x2268F0u;
    SET_GPR_U32(ctx, 31, 0x2268F8u);
    ctx->pc = 0x2268F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268F0u;
    // 0x2268f4: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB800u, 0x2268F0u, 0x2268F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268F8u;
label_2268f8:
    // 0x2268f8: 0xc083f5e  jal         func_20FD78
label_2268fc:
    if (ctx->pc == 0x2268FCu) {
        ctx->pc = 0x2268FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268F8u;
        // 0x2268fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226900u;
        goto label_226900;
    }
    ctx->pc = 0x2268F8u;
    SET_GPR_U32(ctx, 31, 0x226900u);
    ctx->pc = 0x2268FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268F8u;
    // 0x2268fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FD78u, 0x2268F8u, 0x226900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226900u;
label_226900:
    // 0x226900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x226900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226904:
    // 0x226904: 0x10000002  b           . + 4 + (0x2 << 2)
label_226908:
    if (ctx->pc == 0x226908u) {
        ctx->pc = 0x226908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226904u;
        // 0x226908: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22690Cu;
        goto label_22690c;
    }
    ctx->pc = 0x226904u;
    {
        const bool branch_taken_0x226904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226904u;
        // 0x226908: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226904) {
            ctx->pc = 0x226910u;
            goto label_226910;
        }
    }
    ctx->pc = 0x22690Cu;
label_22690c:
    // 0x22690c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226910:
    // 0x226910: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x226910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226914:
    // 0x226914: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x226914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_226918:
    // 0x226918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22691c:
    // 0x22691c: 0x3e00008  jr          $ra
label_226920:
    if (ctx->pc == 0x226920u) {
        ctx->pc = 0x226920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22691Cu;
        // 0x226920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226924u;
        goto label_226924;
    }
    ctx->pc = 0x22691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22691Cu;
        // 0x226920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22691Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226924u;
label_226924:
    // 0x226924: 0x0  nop
    ctx->pc = 0x226924u;
    // NOP
    ctx->pc = 0x226928u;
}
