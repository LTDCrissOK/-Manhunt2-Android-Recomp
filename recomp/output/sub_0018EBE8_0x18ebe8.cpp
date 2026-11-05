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

// Function: sub_0018EBE8
// Address: 0x18ebe8 - 0x18ee10
void sub_0018EBE8_0x18ebe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EBE8_0x18ebe8");
#endif

    switch (ctx->pc) {
        case 0x18ec0cu: goto label_18ec0c;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec30u: goto label_18ec30;
        case 0x18ec68u: goto label_18ec68;
        case 0x18ec90u: goto label_18ec90;
        case 0x18ed18u: goto label_18ed18;
        default: break;
    }

    ctx->pc = 0x18ebe8u;

    // 0x18ebe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18ebec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x18ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x18ebf0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18ebf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18ebf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ebf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebf8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18ebf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18ebfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec00: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x18ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x18ec04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18EC04u;
    SET_GPR_U32(ctx, 31, 0x18EC0Cu);
    ctx->pc = 0x18EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC04u;
    // 0x18ec08: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18EC04u, 0x18EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC0Cu;
label_18ec0c:
    // 0x18ec0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ec0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec10: 0xc061a12  jal         func_186848
    ctx->pc = 0x18EC10u;
    SET_GPR_U32(ctx, 31, 0x18EC18u);
    ctx->pc = 0x18EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC10u;
    // 0x18ec14: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EC10u, 0x18EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC18u;
label_18ec18:
    // 0x18ec18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18ec1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18ec20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18ec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ec24: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ec28: 0xc070b88  jal         func_1C2E20
    ctx->pc = 0x18EC28u;
    SET_GPR_U32(ctx, 31, 0x18EC30u);
    ctx->pc = 0x18EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC28u;
    // 0x18ec2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2E20u, 0x18EC28u, 0x18EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC30u;
label_18ec30:
    // 0x18ec30: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x18EC30u;
    {
        const bool branch_taken_0x18ec30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC30u;
        // 0x18ec34: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec30) {
            ctx->pc = 0x18EDE8u;
            goto label_18ede8;
        }
    }
    ctx->pc = 0x18EC38u;
    // 0x18ec38: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x18ec38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x18ec3c: 0x8c430fec  lw          $v1, 0xFEC($v0)
    ctx->pc = 0x18ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4076)));
    // 0x18ec40: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x18ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ec44: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x18ec44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ec48: 0x0  nop
    ctx->pc = 0x18ec48u;
    // NOP
    // 0x18ec4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18EC4Cu;
    {
        const bool branch_taken_0x18ec4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC4Cu;
        // 0x18ec50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec4c) {
            ctx->pc = 0x18EC58u;
            goto label_18ec58;
        }
    }
    ctx->pc = 0x18EC54u;
    // 0x18ec54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ec58:
    // 0x18ec58: 0x14800064  bnez        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x18EC58u;
    {
        const bool branch_taken_0x18ec58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC58u;
        // 0x18ec5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec58) {
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EC60u;
    // 0x18ec60: 0xc061a12  jal         func_186848
    ctx->pc = 0x18EC60u;
    SET_GPR_U32(ctx, 31, 0x18EC68u);
    ctx->pc = 0x18EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC60u;
    // 0x18ec64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EC60u, 0x18EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC68u;
label_18ec68:
    // 0x18ec68: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x18ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ec6c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18ec6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ec70: 0x0  nop
    ctx->pc = 0x18ec70u;
    // NOP
    // 0x18ec74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18EC74u;
    {
        const bool branch_taken_0x18ec74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC74u;
        // 0x18ec78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec74) {
            ctx->pc = 0x18EC80u;
            goto label_18ec80;
        }
    }
    ctx->pc = 0x18EC7Cu;
    // 0x18ec7c: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_18ec80:
    // 0x18ec80: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x18EC80u;
    {
        const bool branch_taken_0x18ec80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC80u;
        // 0x18ec84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ec80) {
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EC88u;
    // 0x18ec88: 0xc061a12  jal         func_186848
    ctx->pc = 0x18EC88u;
    SET_GPR_U32(ctx, 31, 0x18EC90u);
    ctx->pc = 0x18EC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC88u;
    // 0x18ec8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18EC88u, 0x18EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC90u;
label_18ec90:
    // 0x18ec90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ec94: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x18ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x18ec98: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x18ec9c: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x18eca0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18eca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18eca4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18eca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18eca8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18eca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ecac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x18ecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ecb0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x18ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ecb4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18ecb8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x18ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ecbc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x18ecbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ecc0: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x18ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18ecc4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18ecc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18ecc8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x18ecc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18eccc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x18ecccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18ecd0: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x18ecd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18ecd4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x18ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ecd8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18ecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ecdc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x18ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ece0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18ece0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18ece4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18ece4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18ece8: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x18ece8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18ecec: 0x46140504  c1          0x140504
    ctx->pc = 0x18ececu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x18ecf0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18ecf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ecf4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18ecf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18ecf8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18ecf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18ecfc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18ecfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18ed00: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18ed00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18ed04: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ed04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18ed08: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18ed08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ed0c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ed10: 0xc061a12  jal         func_186848
    ctx->pc = 0x18ED10u;
    SET_GPR_U32(ctx, 31, 0x18ED18u);
    ctx->pc = 0x18ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED10u;
    // 0x18ed14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18ED10u, 0x18ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED18u;
label_18ed18:
    // 0x18ed18: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x18ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ed1c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x18ed1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed20: 0x0  nop
    ctx->pc = 0x18ed20u;
    // NOP
    // 0x18ed24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18ED24u;
    {
        const bool branch_taken_0x18ed24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED24u;
        // 0x18ed28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed24) {
            ctx->pc = 0x18ED30u;
            goto label_18ed30;
        }
    }
    ctx->pc = 0x18ED2Cu;
    // 0x18ed2c: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x18ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_18ed30:
    // 0x18ed30: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18ed30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ed34: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x18ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ed38: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x18ed38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18ed3c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x18ed3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ed40: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x18ed40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ed44: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x18ed44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x18ed48: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x18ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ed4c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x18ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ed50: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x18ed50u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18ed54: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18ed58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18ed5c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18ED5Cu;
    {
        const bool branch_taken_0x18ed5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ed5c) {
            ctx->pc = 0x18EDA8u;
            goto label_18eda8;
        }
    }
    ctx->pc = 0x18ED64u;
    // 0x18ed64: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x18ed64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x18ed68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ed68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ed6c: 0x0  nop
    ctx->pc = 0x18ed6cu;
    // NOP
    // 0x18ed70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ed70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed74: 0x0  nop
    ctx->pc = 0x18ed74u;
    // NOP
    // 0x18ed78: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x18ED78u;
    {
        const bool branch_taken_0x18ed78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED78u;
        // 0x18ed7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed78) {
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18ED80u;
    // 0x18ed80: 0x3c01bf5e  lui         $at, 0xBF5E
    ctx->pc = 0x18ed80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48990 << 16));
    // 0x18ed84: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x18ed84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x18ed88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ed88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ed8c: 0x0  nop
    ctx->pc = 0x18ed8cu;
    // NOP
    // 0x18ed90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ed90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ed94: 0x0  nop
    ctx->pc = 0x18ed94u;
    // NOP
    // 0x18ed98: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x18ED98u;
    {
        const bool branch_taken_0x18ed98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED98u;
        // 0x18ed9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ed98) {
            ctx->pc = 0x18EDE8u;
            goto label_18ede8;
        }
    }
    ctx->pc = 0x18EDA0u;
    // 0x18eda0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18EDA0u;
    {
        const bool branch_taken_0x18eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDA0u;
        // 0x18eda4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eda0) {
            ctx->pc = 0x18EDF0u;
            goto label_18edf0;
        }
    }
    ctx->pc = 0x18EDA8u;
label_18eda8:
    // 0x18eda8: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x18eda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x18edac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x18edacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x18edb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18edb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18edb4: 0x0  nop
    ctx->pc = 0x18edb4u;
    // NOP
    // 0x18edb8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18edb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18edbc: 0x0  nop
    ctx->pc = 0x18edbcu;
    // NOP
    // 0x18edc0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18EDC0u;
    {
        const bool branch_taken_0x18edc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDC0u;
        // 0x18edc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18edc0) {
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EDC8u;
    // 0x18edc8: 0x3c01bf77  lui         $at, 0xBF77
    ctx->pc = 0x18edc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49015 << 16));
    // 0x18edcc: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x18edccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x18edd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18edd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18edd4: 0x0  nop
    ctx->pc = 0x18edd4u;
    // NOP
    // 0x18edd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18edd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18eddc: 0x0  nop
    ctx->pc = 0x18eddcu;
    // NOP
    // 0x18ede0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18EDE0u;
    {
        const bool branch_taken_0x18ede0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDE0u;
        // 0x18ede4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ede0) {
            ctx->pc = 0x18EDECu;
            goto label_18edec;
        }
    }
    ctx->pc = 0x18EDE8u;
label_18ede8:
    // 0x18ede8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ede8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18edec:
    // 0x18edec: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x18edecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18edf0:
    // 0x18edf0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x18edf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x18edf4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x18edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18edf8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18edfc: 0x3e00008  jr          $ra
    ctx->pc = 0x18EDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EDFCu;
        // 0x18ee00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EE04u;
    // 0x18ee04: 0x0  nop
    ctx->pc = 0x18ee04u;
    // NOP
    // 0x18ee08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x18ee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18ee0c: 0x0  nop
    ctx->pc = 0x18ee0cu;
    // NOP
    ctx->pc = 0x18ee10u;
}
