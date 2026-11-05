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

// Function: sub_001496E8
// Address: 0x1496e8 - 0x1497f8
void sub_001496E8_0x1496e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001496E8_0x1496e8");
#endif

    switch (ctx->pc) {
        case 0x14970cu: goto label_14970c;
        case 0x14971cu: goto label_14971c;
        case 0x149728u: goto label_149728;
        case 0x149738u: goto label_149738;
        case 0x149774u: goto label_149774;
        case 0x149784u: goto label_149784;
        case 0x1497d0u: goto label_1497d0;
        case 0x1497dcu: goto label_1497dc;
        default: break;
    }

    ctx->pc = 0x1496e8u;

    // 0x1496e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1496e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1496ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1496f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1496f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1496f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1496f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1496f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1496f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1496fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x149700: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x149700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x149704: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x149704u;
    SET_GPR_U32(ctx, 31, 0x14970Cu);
    ctx->pc = 0x149708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149704u;
    // 0x149708: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x149704u, 0x14970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14970Cu;
label_14970c:
    // 0x14970c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14970cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x149710: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x149710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149714: 0xc052388  jal         func_148E20
    ctx->pc = 0x149714u;
    SET_GPR_U32(ctx, 31, 0x14971Cu);
    ctx->pc = 0x149718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149714u;
    // 0x149718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x149714u, 0x14971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14971Cu;
label_14971c:
    // 0x14971c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14971cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x149720: 0xc052394  jal         func_148E50
    ctx->pc = 0x149720u;
    SET_GPR_U32(ctx, 31, 0x149728u);
    ctx->pc = 0x149724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149720u;
    // 0x149724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E50u, 0x149720u, 0x149728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149728u;
label_149728:
    // 0x149728: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x149728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14972c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149730: 0xc052698  jal         func_149A60
    ctx->pc = 0x149730u;
    SET_GPR_U32(ctx, 31, 0x149738u);
    ctx->pc = 0x149734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149730u;
    // 0x149734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149A60u, 0x149730u, 0x149738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149738u;
label_149738:
    // 0x149738: 0x9206046c  lbu         $a2, 0x46C($s0)
    ctx->pc = 0x149738u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14973c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x149740: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x149740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x149744: 0x24529a08  addiu       $s2, $v0, -0x65F8
    ctx->pc = 0x149744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x149748: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x149748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14974c: 0x8e0506e0  lw          $a1, 0x6E0($s0)
    ctx->pc = 0x14974cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1760)));
    // 0x149750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x149750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x149754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149758: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14975c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x149760: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x149760u;
    {
        const bool branch_taken_0x149760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x149764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149760u;
        // 0x149764: 0x8c51020c  lw          $s1, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149760) {
            ctx->pc = 0x1497D0u;
            goto label_1497d0;
        }
    }
    ctx->pc = 0x149768u;
    // 0x149768: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x149768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14976c: 0xc05243a  jal         func_1490E8
    ctx->pc = 0x14976Cu;
    SET_GPR_U32(ctx, 31, 0x149774u);
    ctx->pc = 0x149770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14976Cu;
    // 0x149770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490E8u, 0x14976Cu, 0x149774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149774u;
label_149774:
    // 0x149774: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x149774u;
    {
        const bool branch_taken_0x149774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149774u;
        // 0x149778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149774) {
            ctx->pc = 0x1497D4u;
            goto label_1497d4;
        }
    }
    ctx->pc = 0x14977Cu;
    // 0x14977c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x14977Cu;
    SET_GPR_U32(ctx, 31, 0x149784u);
    ctx->pc = 0x149780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14977Cu;
    // 0x149780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x14977Cu, 0x149784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149784u;
label_149784:
    // 0x149784: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14978c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x149790: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x149790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x149794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x149794u;
    {
        const bool branch_taken_0x149794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149794) {
            ctx->pc = 0x149798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149794u;
            // 0x149798: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1497A4u;
            goto label_1497a4;
        }
    }
    ctx->pc = 0x14979Cu;
    // 0x14979c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14979Cu;
    {
        const bool branch_taken_0x14979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14979Cu;
        // 0x1497a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14979c) {
            ctx->pc = 0x1497ACu;
            goto label_1497ac;
        }
    }
    ctx->pc = 0x1497A4u;
label_1497a4:
    // 0x1497a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1497a8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1497a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1497ac:
    // 0x1497ac: 0x260206d0  addiu       $v0, $s0, 0x6D0
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x1497b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1497b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1497b4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1497b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1497b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1497b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1497bc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1497bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1497c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1497c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1497c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497c8: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x1497C8u;
    SET_GPR_U32(ctx, 31, 0x1497D0u);
    ctx->pc = 0x1497CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1497C8u;
    // 0x1497cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x1497C8u, 0x1497D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497D0u;
label_1497d0:
    // 0x1497d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1497d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1497d4:
    // 0x1497d4: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1497D4u;
    SET_GPR_U32(ctx, 31, 0x1497DCu);
    ctx->pc = 0x1497D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1497D4u;
    // 0x1497d8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1497D4u, 0x1497DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1497DCu;
label_1497dc:
    // 0x1497dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1497dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1497e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1497e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1497e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1497e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1497e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1497e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1497ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1497ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1497F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497ECu;
        // 0x1497f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1497ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1497F4u;
    // 0x1497f4: 0x0  nop
    ctx->pc = 0x1497f4u;
    // NOP
    ctx->pc = 0x1497f8u;
}
