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

// Function: sub_0013A840
// Address: 0x13a840 - 0x13a9b8
void sub_0013A840_0x13a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A840_0x13a840");
#endif

    switch (ctx->pc) {
        case 0x13a878u: goto label_13a878;
        case 0x13a8ccu: goto label_13a8cc;
        case 0x13a91cu: goto label_13a91c;
        case 0x13a924u: goto label_13a924;
        case 0x13a93cu: goto label_13a93c;
        case 0x13a94cu: goto label_13a94c;
        case 0x13a96cu: goto label_13a96c;
        case 0x13a974u: goto label_13a974;
        case 0x13a994u: goto label_13a994;
        default: break;
    }

    ctx->pc = 0x13a840u;

    // 0x13a840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13a844: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13a848: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x13a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x13a84c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13a84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a850: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x13a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x13a854: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x13a854u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a858: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x13a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x13a85c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x13a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x13a860: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13a864: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x13a864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13a868: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x13a868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13a86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a870: 0xc04ee04  jal         func_13B810
    ctx->pc = 0x13A870u;
    SET_GPR_U32(ctx, 31, 0x13A878u);
    ctx->pc = 0x13A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A870u;
    // 0x13a874: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B810u, 0x13A870u, 0x13A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A878u;
label_13a878:
    // 0x13a878: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13a87c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13a87cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13a880: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x13a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13a884: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x13a884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13a888: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x13a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x13a88c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x13A88Cu;
    {
        const bool branch_taken_0x13a88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A88Cu;
        // 0x13a890: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a88c) {
            ctx->pc = 0x13A998u;
            goto label_13a998;
        }
    }
    ctx->pc = 0x13A894u;
    // 0x13a894: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13a894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13a898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13a89c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a8a0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13a8a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A8A4u;
    {
        const bool branch_taken_0x13a8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a8a4) {
            ctx->pc = 0x13A8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A8A4u;
            // 0x13a8a8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A8B4u;
            goto label_13a8b4;
        }
    }
    ctx->pc = 0x13A8ACu;
    // 0x13a8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13A8ACu;
    {
        const bool branch_taken_0x13a8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A8ACu;
        // 0x13a8b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a8ac) {
            ctx->pc = 0x13A8BCu;
            goto label_13a8bc;
        }
    }
    ctx->pc = 0x13A8B4u;
label_13a8b4:
    // 0x13a8b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a8b8: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x13a8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13a8bc:
    // 0x13a8bc: 0x52000036  beql        $s0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x13A8BCu;
    {
        const bool branch_taken_0x13a8bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8bc) {
            ctx->pc = 0x13A8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A8BCu;
            // 0x13a8c0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A998u;
            goto label_13a998;
        }
    }
    ctx->pc = 0x13A8C4u;
    // 0x13a8c4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13A8C4u;
    SET_GPR_U32(ctx, 31, 0x13A8CCu);
    ctx->pc = 0x13A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A8C4u;
    // 0x13a8c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13A8C4u, 0x13A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8CCu;
label_13a8cc:
    // 0x13a8cc: 0x8e420ab4  lw          $v0, 0xAB4($s2)
    ctx->pc = 0x13a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2740)));
    // 0x13a8d0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x13a8d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a8d4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13a8d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a8d8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13a8d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a8dc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a8e0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13a8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a8e4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13a8e8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13a8ec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13a8ecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13a8f0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13a8f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13a8f4: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x13a8f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13a8f8: 0x46140504  c1          0x140504
    ctx->pc = 0x13a8f8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x13a8fc: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x13a8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x13a900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a904: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13a904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x13a908: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13a908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13a90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13a90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13a910: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x13a910u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13a914: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x13A914u;
    SET_GPR_U32(ctx, 31, 0x13A91Cu);
    ctx->pc = 0x13A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A914u;
    // 0x13a918: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x13A914u, 0x13A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A91Cu;
label_13a91c:
    // 0x13a91c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A91Cu;
    SET_GPR_U32(ctx, 31, 0x13A924u);
    ctx->pc = 0x13A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A91Cu;
    // 0x13a920: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A91Cu, 0x13A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A924u;
label_13a924:
    // 0x13a924: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13a924u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a928: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A928u;
    {
        const bool branch_taken_0x13a928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a928) {
            ctx->pc = 0x13A92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A928u;
            // 0x13a92c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A930u;
            goto label_13a930;
        }
    }
    ctx->pc = 0x13A930u;
label_13a930:
    // 0x13a930: 0x8810  mfhi        $s1
    ctx->pc = 0x13a930u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x13a934: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A934u;
    SET_GPR_U32(ctx, 31, 0x13A93Cu);
    ctx->pc = 0x13A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A934u;
    // 0x13a938: 0x118023  negu        $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A934u, 0x13A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A93Cu;
label_13a93c:
    // 0x13a93c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13a940: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13a940u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13a944: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x13A944u;
    SET_GPR_U32(ctx, 31, 0x13A94Cu);
    ctx->pc = 0x13A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A944u;
    // 0x13a948: 0x222800b  movn        $s0, $s1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x13A944u, 0x13A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A94Cu;
label_13a94c:
    // 0x13a94c: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x13a94cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13a950: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x13a950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x13a954: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x13a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x13a958: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x13a958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13a95c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x13a95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13a960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a964: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A964u;
    SET_GPR_U32(ctx, 31, 0x13A96Cu);
    ctx->pc = 0x13A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A964u;
    // 0x13a968: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A964u, 0x13A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A96Cu;
label_13a96c:
    // 0x13a96c: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A96Cu;
    SET_GPR_U32(ctx, 31, 0x13A974u);
    ctx->pc = 0x13A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A96Cu;
    // 0x13a970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A96Cu, 0x13A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A974u;
label_13a974:
    // 0x13a974: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a978: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13a97c: 0x2632018  mult        $a0, $s3, $v1
    ctx->pc = 0x13a97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13a980: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a984: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x13a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x13a988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a98c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A98Cu;
    SET_GPR_U32(ctx, 31, 0x13A994u);
    ctx->pc = 0x13A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A98Cu;
    // 0x13a990: 0xac620524  sw          $v0, 0x524($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A98Cu, 0x13A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A994u;
label_13a994:
    // 0x13a994: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x13a994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13a998:
    // 0x13a998: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x13a998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a99c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13a99cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a9a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x13a9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a9a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a9a8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x13a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13A9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A9ACu;
        // 0x13a9b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A9B4u;
    // 0x13a9b4: 0x0  nop
    ctx->pc = 0x13a9b4u;
    // NOP
    ctx->pc = 0x13a9b8u;
}
