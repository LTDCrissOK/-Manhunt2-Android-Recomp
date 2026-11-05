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

// Function: sub_001CEA98
// Address: 0x1cea98 - 0x1cec48
void sub_001CEA98_0x1cea98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEA98_0x1cea98");
#endif

    switch (ctx->pc) {
        case 0x1ceac4u: goto label_1ceac4;
        case 0x1ceaecu: goto label_1ceaec;
        case 0x1ceb14u: goto label_1ceb14;
        case 0x1ceb30u: goto label_1ceb30;
        case 0x1ceb9cu: goto label_1ceb9c;
        case 0x1cebccu: goto label_1cebcc;
        case 0x1cebecu: goto label_1cebec;
        case 0x1cec18u: goto label_1cec18;
        default: break;
    }

    ctx->pc = 0x1cea98u;

    // 0x1cea98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cea98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cea9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ceaa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ceaa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaa4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ceaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ceaa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ceaa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ceaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceab0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ceab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ceab4: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1ceab4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ceab8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1ceab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ceabc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CEABCu;
    SET_GPR_U32(ctx, 31, 0x1CEAC4u);
    ctx->pc = 0x1CEAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEABCu;
    // 0x1ceac0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CEABCu, 0x1CEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAC4u;
label_1ceac4:
    // 0x1ceac4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ceac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ceac8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1ceac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1ceacc: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x1ceaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x1cead0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1cead0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1cead4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1cead4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1cead8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1cead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1ceadc: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x1ceadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1ceae0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ceae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1ceae4: 0xc077200  jal         func_1DC800
    ctx->pc = 0x1CEAE4u;
    SET_GPR_U32(ctx, 31, 0x1CEAECu);
    ctx->pc = 0x1CEAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEAE4u;
    // 0x1ceae8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC800u, 0x1CEAE4u, 0x1CEAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAECu;
label_1ceaec:
    // 0x1ceaec: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1CEAECu;
    {
        const bool branch_taken_0x1ceaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAECu;
        // 0x1ceaf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaec) {
            ctx->pc = 0x1CEC20u;
            goto label_1cec20;
        }
    }
    ctx->pc = 0x1CEAF4u;
    // 0x1ceaf4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ceaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ceaf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ceaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceafc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1ceafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ceb00: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ceb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceb04: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x1ceb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ceb08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ceb08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ceb0c: 0xc073bb0  jal         func_1CEEC0
    ctx->pc = 0x1CEB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB14u);
    ctx->pc = 0x1CEB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB0Cu;
    // 0x1ceb10: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEEC0u, 0x1CEB0Cu, 0x1CEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB14u;
label_1ceb14:
    // 0x1ceb14: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ceb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceb18: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1ceb18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceb1c: 0x0  nop
    ctx->pc = 0x1ceb1cu;
    // NOP
    // 0x1ceb20: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x1CEB20u;
    {
        const bool branch_taken_0x1ceb20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB20u;
        // 0x1ceb24: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb20) {
            ctx->pc = 0x1CEC24u;
            goto label_1cec24;
        }
    }
    ctx->pc = 0x1CEB28u;
    // 0x1ceb28: 0xc073a62  jal         func_1CE988
    ctx->pc = 0x1CEB28u;
    SET_GPR_U32(ctx, 31, 0x1CEB30u);
    ctx->pc = 0x1CEB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB28u;
    // 0x1ceb2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE988u, 0x1CEB28u, 0x1CEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB30u;
label_1ceb30:
    // 0x1ceb30: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1ceb30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1ceb34: 0x4614b032  c.eq.s      $f22, $f20
    ctx->pc = 0x1ceb34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ceb38: 0x0  nop
    ctx->pc = 0x1ceb38u;
    // NOP
    // 0x1ceb3c: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x1CEB3Cu;
    {
        const bool branch_taken_0x1ceb3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB3Cu;
        // 0x1ceb40: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb3c) {
            ctx->pc = 0x1CEC24u;
            goto label_1cec24;
        }
    }
    ctx->pc = 0x1CEB44u;
    // 0x1ceb44: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ceb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ceb48: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x1ceb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1ceb4c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ceb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ceb50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ceb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ceb54: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x1ceb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1ceb58: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1ceb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1ceb5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ceb60: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ceb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1ceb64: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ceb64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb68: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1ceb68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ceb6c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ceb6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ceb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ceb74: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1ceb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ceb78: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1ceb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ceb7c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1ceb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ceb80: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ceb80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ceb84: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ceb84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ceb88: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1ceb88u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ceb8c: 0x46140504  c1          0x140504
    ctx->pc = 0x1ceb8cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ceb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ceb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb94: 0xc073a90  jal         func_1CEA40
    ctx->pc = 0x1CEB94u;
    SET_GPR_U32(ctx, 31, 0x1CEB9Cu);
    ctx->pc = 0x1CEB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB94u;
    // 0x1ceb98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA40u, 0x1CEB94u, 0x1CEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB9Cu;
label_1ceb9c:
    // 0x1ceb9c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1ceb9cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1ceba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ceba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ceba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ceba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ceba8: 0x0  nop
    ctx->pc = 0x1ceba8u;
    // NOP
    // 0x1cebac: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1cebacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cebb0: 0x0  nop
    ctx->pc = 0x1cebb0u;
    // NOP
    // 0x1cebb4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1CEBB4u;
    {
        const bool branch_taken_0x1cebb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBB4u;
        // 0x1cebb8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebb4) {
            ctx->pc = 0x1CEC24u;
            goto label_1cec24;
        }
    }
    ctx->pc = 0x1CEBBCu;
    // 0x1cebbc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1cebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cebc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cebc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cebc4: 0xc073a9a  jal         func_1CEA68
    ctx->pc = 0x1CEBC4u;
    SET_GPR_U32(ctx, 31, 0x1CEBCCu);
    ctx->pc = 0x1CEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBC4u;
    // 0x1cebc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA68u, 0x1CEBC4u, 0x1CEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBCCu;
label_1cebcc:
    // 0x1cebcc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEBCCu;
    {
        const bool branch_taken_0x1cebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBCCu;
        // 0x1cebd0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebcc) {
            ctx->pc = 0x1CEBF0u;
            goto label_1cebf0;
        }
    }
    ctx->pc = 0x1CEBD4u;
    // 0x1cebd4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cebd8: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1cebd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1cebdc: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1cebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cebe0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1cebe0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1cebe4: 0xc0738c4  jal         func_1CE310
    ctx->pc = 0x1CEBE4u;
    SET_GPR_U32(ctx, 31, 0x1CEBECu);
    ctx->pc = 0x1CEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBE4u;
    // 0x1cebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE310u, 0x1CEBE4u, 0x1CEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBECu;
label_1cebec:
    // 0x1cebec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cebecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cebf0:
    // 0x1cebf0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cebf4: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CEBF4u;
    {
        const bool branch_taken_0x1cebf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBF4u;
        // 0x1cebf8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebf4) {
            ctx->pc = 0x1CEC20u;
            goto label_1cec20;
        }
    }
    ctx->pc = 0x1CEBFCu;
    // 0x1cebfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cec04: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x1cec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x1cec08: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1cec08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x1cec0c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1cec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1cec10: 0xc073a12  jal         func_1CE848
    ctx->pc = 0x1CEC10u;
    SET_GPR_U32(ctx, 31, 0x1CEC18u);
    ctx->pc = 0x1CEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC10u;
    // 0x1cec14: 0xae050088  sw          $a1, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE848u, 0x1CEC10u, 0x1CEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC18u;
label_1cec18:
    // 0x1cec18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CEC18u;
    {
        const bool branch_taken_0x1cec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC18u;
        // 0x1cec1c: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec18) {
            ctx->pc = 0x1CEC24u;
            goto label_1cec24;
        }
    }
    ctx->pc = 0x1CEC20u;
label_1cec20:
    // 0x1cec20: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cec24:
    // 0x1cec24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cec24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cec28: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1cec28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cec2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cec2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cec30: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1cec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cec34: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1cec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cec38: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1cec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC3Cu;
        // 0x1cec40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC44u;
    // 0x1cec44: 0x0  nop
    ctx->pc = 0x1cec44u;
    // NOP
    ctx->pc = 0x1cec48u;
}
