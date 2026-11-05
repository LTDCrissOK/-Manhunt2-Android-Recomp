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

// Function: sub_00156760
// Address: 0x156760 - 0x1568a0
void sub_00156760_0x156760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156760_0x156760");
#endif

    switch (ctx->pc) {
        case 0x15678cu: goto label_15678c;
        case 0x156798u: goto label_156798;
        case 0x1567a8u: goto label_1567a8;
        case 0x1567dcu: goto label_1567dc;
        case 0x156800u: goto label_156800;
        case 0x15680cu: goto label_15680c;
        case 0x156820u: goto label_156820;
        case 0x15682cu: goto label_15682c;
        case 0x15685cu: goto label_15685c;
        case 0x156880u: goto label_156880;
        default: break;
    }

    ctx->pc = 0x156760u;

    // 0x156760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156764: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x156768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15676c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x156770: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x156770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x156774: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x156774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x156778: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x156778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15677c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15677cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156780: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x156780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x156784: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156784u;
    SET_GPR_U32(ctx, 31, 0x15678Cu);
    ctx->pc = 0x156788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156784u;
    // 0x156788: 0x9265046c  lbu         $a1, 0x46C($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156784u, 0x15678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15678Cu;
label_15678c:
    // 0x15678c: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x15678cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x156790: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156790u;
    SET_GPR_U32(ctx, 31, 0x156798u);
    ctx->pc = 0x156794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156790u;
    // 0x156794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156790u, 0x156798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156798u;
label_156798:
    // 0x156798: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x156798u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x15679c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15679cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1567a0: 0xc055950  jal         func_156540
    ctx->pc = 0x1567A0u;
    SET_GPR_U32(ctx, 31, 0x1567A8u);
    ctx->pc = 0x1567A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567A0u;
    // 0x1567a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x1567A0u, 0x1567A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567A8u;
label_1567a8:
    // 0x1567a8: 0x9263046c  lbu         $v1, 0x46C($s3)
    ctx->pc = 0x1567a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x1567ac: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1567b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1567b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1567b4: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x1567b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x1567b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1567b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1567bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1567bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1567c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1567c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1567c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567c8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1567c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1567cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1567ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1567d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1567d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1567d4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1567D4u;
    SET_GPR_U32(ctx, 31, 0x1567DCu);
    ctx->pc = 0x1567D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567D4u;
    // 0x1567d8: 0x8c54020c  lw          $s4, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1567D4u, 0x1567DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1567DCu;
label_1567dc:
    // 0x1567dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1567dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567e0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1567e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1567e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1567e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1567e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1567ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1567f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1567f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1567f8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1567F8u;
    SET_GPR_U32(ctx, 31, 0x156800u);
    ctx->pc = 0x1567FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1567F8u;
    // 0x1567fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1567F8u, 0x156800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156800u;
label_156800:
    // 0x156800: 0x9265046c  lbu         $a1, 0x46C($s3)
    ctx->pc = 0x156800u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1132)));
    // 0x156804: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156804u;
    SET_GPR_U32(ctx, 31, 0x15680Cu);
    ctx->pc = 0x156808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156804u;
    // 0x156808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156804u, 0x15680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15680Cu;
label_15680c:
    // 0x15680c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15680cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x156810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156814: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x156814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156818: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156818u;
    SET_GPR_U32(ctx, 31, 0x156820u);
    ctx->pc = 0x15681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156818u;
    // 0x15681c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156818u, 0x156820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156820u;
label_156820:
    // 0x156820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156824: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156824u;
    SET_GPR_U32(ctx, 31, 0x15682Cu);
    ctx->pc = 0x156828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156824u;
    // 0x156828: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156824u, 0x15682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15682Cu;
label_15682c:
    // 0x15682c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x15682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x156830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156834: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x156834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x156838: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x156838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x15683c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15683Cu;
    {
        const bool branch_taken_0x15683c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15683c) {
            ctx->pc = 0x156840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15683Cu;
            // 0x156840: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15684Cu;
            goto label_15684c;
        }
    }
    ctx->pc = 0x156844u;
    // 0x156844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156844u;
    {
        const bool branch_taken_0x156844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156844u;
        // 0x156848: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156844) {
            ctx->pc = 0x156854u;
            goto label_156854;
        }
    }
    ctx->pc = 0x15684Cu;
label_15684c:
    // 0x15684c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156850: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x156850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_156854:
    // 0x156854: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x156854u;
    SET_GPR_U32(ctx, 31, 0x15685Cu);
    ctx->pc = 0x156858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156854u;
    // 0x156858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x156854u, 0x15685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15685Cu;
label_15685c:
    // 0x15685c: 0x26620530  addiu       $v0, $s3, 0x530
    ctx->pc = 0x15685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1328));
    // 0x156860: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x156860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156864: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x156864u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156868: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x156868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15686c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x156870: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x156870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156874: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x156874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156878: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x156878u;
    SET_GPR_U32(ctx, 31, 0x156880u);
    ctx->pc = 0x15687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156878u;
    // 0x15687c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x156878u, 0x156880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156880u;
label_156880:
    // 0x156880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x156880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156884: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x156884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156888: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x156888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15688c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15688cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x156890: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x156890u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156894: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x156894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x156898: 0x3e00008  jr          $ra
    ctx->pc = 0x156898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156898u;
        // 0x15689c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1568A0u;
}
