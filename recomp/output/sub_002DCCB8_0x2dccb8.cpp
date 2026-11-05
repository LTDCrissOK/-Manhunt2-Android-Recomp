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

// Function: sub_002DCCB8
// Address: 0x2dccb8 - 0x2dced8
void sub_002DCCB8_0x2dccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCCB8_0x2dccb8");
#endif

    switch (ctx->pc) {
        case 0x2dcce8u: goto label_2dcce8;
        case 0x2dcd94u: goto label_2dcd94;
        case 0x2dcde4u: goto label_2dcde4;
        case 0x2dceb8u: goto label_2dceb8;
        default: break;
    }

    ctx->pc = 0x2dccb8u;

    // 0x2dccb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dccb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dccbc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2dccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2dccc0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2dccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2dccc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dccc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2dccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dcccc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2dccccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccd0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2dccd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dccd4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2dccd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dccd8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2dccd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2dccdc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2dccdcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2dcce0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DCCE0u;
    SET_GPR_U32(ctx, 31, 0x2DCCE8u);
    ctx->pc = 0x2DCCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCCE0u;
    // 0x2dcce4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DCCE0u, 0x2DCCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCE8u;
label_2dcce8:
    // 0x2dcce8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2dccec: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2DCCECu;
    {
        const bool branch_taken_0x2dccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCECu;
        // 0x2dccf0: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dccec) {
            ctx->pc = 0x2DCEB8u;
            goto label_2dceb8;
        }
    }
    ctx->pc = 0x2DCCF4u;
    // 0x2dccf4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2dccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dccf8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2dccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dccfc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dccfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dcd00: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2dcd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dcd04: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2dcd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dcd08: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dcd08u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2dcd0c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2dcd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dcd10: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2dcd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dcd14: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2dcd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2dcd18: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x2dcd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dcd1c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2dcd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dcd20: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2dcd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcd24: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2dcd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dcd28: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2dcd28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dcd2c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2dcd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dcd30: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dcd30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dcd34: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2dcd34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dcd38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2dcd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dcd3c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x2dcd3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2dcd40: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2dcd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2dcd44: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2dcd44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2dcd48: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2dcd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2dcd4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dcd4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcd50: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2dcd50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcd54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dcd54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dcd58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dcd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dcd5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcd5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcd60: 0x0  nop
    ctx->pc = 0x2dcd60u;
    // NOP
    // 0x2dcd64: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2dcd64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcd68: 0x0  nop
    ctx->pc = 0x2dcd68u;
    // NOP
    // 0x2dcd6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD6Cu;
    {
        const bool branch_taken_0x2dcd6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD6Cu;
        // 0x2dcd70: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd6c) {
            ctx->pc = 0x2DCD80u;
            goto label_2dcd80;
        }
    }
    ctx->pc = 0x2DCD74u;
    // 0x2dcd74: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2dcd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcd78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCD78u;
    {
        const bool branch_taken_0x2dcd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCD78u;
        // 0x2dcd7c: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcd78) {
            ctx->pc = 0x2DCD8Cu;
            goto label_2dcd8c;
        }
    }
    ctx->pc = 0x2DCD80u;
label_2dcd80:
    // 0x2dcd80: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2dcd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcd84: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2dcd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcd88: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x2dcd88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dcd8c:
    // 0x2dcd8c: 0xc0fb7fe  jal         func_3EDFF8
    ctx->pc = 0x2DCD8Cu;
    SET_GPR_U32(ctx, 31, 0x2DCD94u);
    ctx->pc = 0x2DCD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCD8Cu;
    // 0x2dcd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDFF8u, 0x2DCD8Cu, 0x2DCD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD94u;
label_2dcd94:
    // 0x2dcd94: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2dcd94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2dcd98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2dcd98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dcd9c: 0x0  nop
    ctx->pc = 0x2dcd9cu;
    // NOP
    // 0x2dcda0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2dcda0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcda4: 0x0  nop
    ctx->pc = 0x2dcda4u;
    // NOP
    // 0x2dcda8: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x2DCDA8u;
    {
        const bool branch_taken_0x2dcda8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDA8u;
        // 0x2dcdac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcda8) {
            ctx->pc = 0x2DCEBCu;
            goto label_2dcebc;
        }
    }
    ctx->pc = 0x2DCDB0u;
    // 0x2dcdb0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2dcdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dcdb4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2dcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2dcdb8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DCDB8u;
    {
        const bool branch_taken_0x2dcdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdb8) {
            ctx->pc = 0x2DCDECu;
            goto label_2dcdec;
        }
    }
    ctx->pc = 0x2DCDC0u;
    // 0x2dcdc0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x2dcdc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x2dcdc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dcdc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dcdc8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dcdc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcdcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dcdccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dcdd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dcdd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dcdd4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dcdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dcdd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dcdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcddc: 0xc0b71e0  jal         func_2DC780
    ctx->pc = 0x2DCDDCu;
    SET_GPR_U32(ctx, 31, 0x2DCDE4u);
    ctx->pc = 0x2DCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCDDCu;
    // 0x2dcde0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DCDDCu, 0x2DCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDE4u;
label_2dcde4:
    // 0x2dcde4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2DCDE4u;
    {
        const bool branch_taken_0x2dcde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCDE4u;
        // 0x2dcde8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcde4) {
            ctx->pc = 0x2DCEBCu;
            goto label_2dcebc;
        }
    }
    ctx->pc = 0x2DCDECu;
label_2dcdec:
    // 0x2dcdec: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2dcdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dcdf0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2dcdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dcdf4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2dcdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dcdf8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dcdf8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2dcdfc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dcdfcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2dce00: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2dce00u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2dce04: 0x46050144  c1          0x50144
    ctx->pc = 0x2dce04u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x2dce08: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x2dce08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dce0c: 0x0  nop
    ctx->pc = 0x2dce0cu;
    // NOP
    // 0x2dce10: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2DCE10u;
    {
        const bool branch_taken_0x2dce10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE10u;
        // 0x2dce14: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce10) {
            ctx->pc = 0x2DCEBCu;
            goto label_2dcebc;
        }
    }
    ctx->pc = 0x2DCE18u;
    // 0x2dce18: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2dce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dce1c: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DCE1Cu;
    {
        const bool branch_taken_0x2dce1c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2DCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE1Cu;
        // 0x2dce20: 0x46002842  mul.s       $f1, $f5, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce1c) {
            ctx->pc = 0x2DCE38u;
            goto label_2dce38;
        }
    }
    ctx->pc = 0x2DCE24u;
    // 0x2dce24: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2dce24u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dce28: 0x0  nop
    ctx->pc = 0x2dce28u;
    // NOP
    // 0x2dce2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dce2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dce30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DCE30u;
    {
        const bool branch_taken_0x2dce30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce30) {
            ctx->pc = 0x2DCE54u;
            goto label_2dce54;
        }
    }
    ctx->pc = 0x2DCE38u;
label_2dce38:
    // 0x2dce38: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x2dce38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2dce3c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2dce3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2dce40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2dce40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2dce44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dce44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dce48: 0x0  nop
    ctx->pc = 0x2dce48u;
    // NOP
    // 0x2dce4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dce4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dce50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2dce50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2dce54:
    // 0x2dce54: 0x0  nop
    ctx->pc = 0x2dce54u;
    // NOP
    // 0x2dce58: 0x0  nop
    ctx->pc = 0x2dce58u;
    // NOP
    // 0x2dce5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2dce5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2dce60: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2dce60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dce64: 0x0  nop
    ctx->pc = 0x2dce64u;
    // NOP
    // 0x2dce68: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2DCE68u;
    {
        const bool branch_taken_0x2dce68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dce68) {
            ctx->pc = 0x2DCE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCE68u;
            // 0x2dce6c: 0x4600a046  mov.s       $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCE70u;
            goto label_2dce70;
        }
    }
    ctx->pc = 0x2DCE70u;
label_2dce70:
    // 0x2dce70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dce74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dce74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dce78: 0x0  nop
    ctx->pc = 0x2dce78u;
    // NOP
    // 0x2dce7c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2dce7cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x2dce80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dce80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dce84: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dce84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dce88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dce88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dce8c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dce8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dce90: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dce94: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dce94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2dce98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2dce98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dce9c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dce9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcea0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2dcea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2dcea4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2dcea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dcea8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dcea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dceac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dceb0: 0xc0b71e0  jal         func_2DC780
    ctx->pc = 0x2DCEB0u;
    SET_GPR_U32(ctx, 31, 0x2DCEB8u);
    ctx->pc = 0x2DCEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEB0u;
    // 0x2dceb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC780u, 0x2DCEB0u, 0x2DCEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEB8u;
label_2dceb8:
    // 0x2dceb8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2dceb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dcebc:
    // 0x2dcebc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2dcebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dcec0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2dcec0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcec4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2dcec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dcec8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2dcec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dcecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCECCu;
        // 0x2dced0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCED4u;
    // 0x2dced4: 0x0  nop
    ctx->pc = 0x2dced4u;
    // NOP
    ctx->pc = 0x2dced8u;
}
