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

// Function: sub_0036ECF0
// Address: 0x36ecf0 - 0x36f558
void sub_0036ECF0_0x36ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ECF0_0x36ecf0");
#endif

    ctx->pc = 0x36ecf0u;

    // 0x36ecf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36ecf4: 0xc4910020  lwc1        $f17, 0x20($a0)
    ctx->pc = 0x36ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36ecf8: 0x248c0010  addiu       $t4, $a0, 0x10
    ctx->pc = 0x36ecf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x36ecfc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x36ecfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ed00: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36ed00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36ed04: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36ed04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36ed08: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ed08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ed0c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x36ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ed10: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x36ed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ed14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x36ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36ed18: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x36ed18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed1c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x36ed1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed20: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x36ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ed24: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x36ed24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36ed28: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36ed28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x36ed2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x36ed2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36ed30: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x36ed30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x36ed34: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x36ed34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36ed38: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36ed38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36ed3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ed3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ed40: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x36ed40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ed44: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x36ed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ed48: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x36ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36ed4c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x36ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ed50: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x36ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36ed54: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x36ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed58: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x36ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed5c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x36ed5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36ed60: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x36ed60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36ed64: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x36ed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36ed68: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x36ed68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36ed6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36ed6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ed70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36ed70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36ed74: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x36ed74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ed78: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x36ed78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ed7c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x36ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ed80: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x36ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ed84: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x36ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ed88: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x36ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ed8c: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x36ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ed90: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x36ed90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36ed94: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x36ed94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36ed98: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x36ed98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36ed9c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x36ed9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36eda0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36eda0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36eda4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36eda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36eda8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x36eda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36edac: 0x60682d  daddu       $t5, $v1, $zero
    ctx->pc = 0x36edacu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36edb0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x36edb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x36edb4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x36edb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x36edb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36edb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36edbc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x36edbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x36edc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36edc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36edc4: 0x0  nop
    ctx->pc = 0x36edc4u;
    // NOP
    // 0x36edc8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x36EDC8u;
    {
        const bool branch_taken_0x36edc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDC8u;
        // 0x36edcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36edc8) {
            ctx->pc = 0x36EDFCu;
            goto label_36edfc;
        }
    }
    ctx->pc = 0x36EDD0u;
    // 0x36edd0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x36edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36edd4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x36edd4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x36edd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36edd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36eddc: 0x0  nop
    ctx->pc = 0x36eddcu;
    // NOP
    // 0x36ede0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x36EDE0u;
    {
        const bool branch_taken_0x36ede0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EDE0u;
        // 0x36ede4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ede0) {
            ctx->pc = 0x36EDFCu;
            goto label_36edfc;
        }
    }
    ctx->pc = 0x36EDE8u;
    // 0x36ede8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x36ede8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x36edec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36edecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36edf0: 0x0  nop
    ctx->pc = 0x36edf0u;
    // NOP
    // 0x36edf4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x36EDF4u;
    {
        const bool branch_taken_0x36edf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36edf4) {
            ctx->pc = 0x36EDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EDF4u;
            // 0x36edf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EDFCu;
            goto label_36edfc;
        }
    }
    ctx->pc = 0x36EDFCu;
label_36edfc:
    // 0x36edfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36EDFCu;
    {
        const bool branch_taken_0x36edfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36edfc) {
            ctx->pc = 0x36EE24u;
            goto label_36ee24;
        }
    }
    ctx->pc = 0x36EE04u;
    // 0x36ee04: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36ee04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ee08: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x36ee08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36ee0c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x36ee0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36ee10: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x36ee10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36ee14: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x36ee14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x36ee18: 0x4a0003bf  vwaitq
    ctx->pc = 0x36ee18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36ee1c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x36ee1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ee20: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x36ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_36ee24:
    // 0x36ee24: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x36ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee28: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x36ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ee2c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x36ee2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ee30: 0xc5820004  lwc1        $f2, 0x4($t4)
    ctx->pc = 0x36ee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee34: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x36ee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ee38: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36ee38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36ee3c: 0xc5820008  lwc1        $f2, 0x8($t4)
    ctx->pc = 0x36ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee40: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x36ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ee44: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x36ee44u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ee48: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x36ee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee4c: 0xc5630000  lwc1        $f3, 0x0($t3)
    ctx->pc = 0x36ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ee50: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x36ee50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ee54: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x36ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee58: 0xc5630004  lwc1        $f3, 0x4($t3)
    ctx->pc = 0x36ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ee5c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36ee5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36ee60: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee64: 0xc5630008  lwc1        $f3, 0x8($t3)
    ctx->pc = 0x36ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ee68: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x36ee68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ee6c: 0x46000a81  sub.s       $f10, $f1, $f0
    ctx->pc = 0x36ee6cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36ee70: 0x46005405  abs.s       $f16, $f10
    ctx->pc = 0x36ee70u;
    ctx->f[16] = FPU_ABS_S(ctx->f[10]);
    // 0x36ee74: 0x46108834  c.lt.s      $f17, $f16
    ctx->pc = 0x36ee74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36ee78: 0x0  nop
    ctx->pc = 0x36ee78u;
    // NOP
    // 0x36ee7c: 0x450101b3  bc1t        . + 4 + (0x1B3 << 2)
    ctx->pc = 0x36EE7Cu;
    {
        const bool branch_taken_0x36ee7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EE7Cu;
        // 0x36ee80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ee7c) {
            ctx->pc = 0x36F54Cu;
            goto label_36f54c;
        }
    }
    ctx->pc = 0x36EE84u;
    // 0x36ee84: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36ee84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36ee88: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36ee88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36ee8c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ee8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ee90: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x36ee90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ee94: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x36ee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ee98: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x36ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36ee9c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x36ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36eea0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x36eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36eea4: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x36eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36eea8: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x36eea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36eeac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x36eeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x36eeb0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x36eeb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36eeb4: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x36eeb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36eeb8: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x36eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36eebc: 0xc5a30004  lwc1        $f3, 0x4($t5)
    ctx->pc = 0x36eebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36eec0: 0xc5a40008  lwc1        $f4, 0x8($t5)
    ctx->pc = 0x36eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36eec4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x36eec4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36eec8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36eec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x36eecc: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x36eeccu;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x36eed0: 0x46060184  c1          0x60184
    ctx->pc = 0x36eed0u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x36eed4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36eed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36eed8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x36eed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x36eedc: 0x0  nop
    ctx->pc = 0x36eedcu;
    // NOP
    // 0x36eee0: 0x46067803  div.s       $f0, $f15, $f6
    ctx->pc = 0x36eee0u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[15], ctx->f[6]); }
    // 0x36eee4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x36eee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36eee8: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x36eee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36eeec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x36eeecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36eef0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36eef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36eef4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x36eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36eef8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x36eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36eefc: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x36eefcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x36ef00: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x36ef00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ef04: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x36ef04u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x36ef08: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x36ef08u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ef0c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x36ef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ef10: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x36ef10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ef14: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x36ef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ef18: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x36ef18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef1c: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x36ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ef20: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36ef20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36ef24: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36ef24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36ef28: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x36ef28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36ef2c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x36ef2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36ef30: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x36ef30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36ef34: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x36ef34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36ef38: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36ef38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36ef3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ef3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ef40: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36ef40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ef44: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x36ef44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x36ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x36ef4c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x36ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ef50: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x36ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ef54: 0xc7a4006c  lwc1        $f4, 0x6C($sp)
    ctx->pc = 0x36ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36ef58: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x36ef58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36ef5c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x36ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x36ef60: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x36ef60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x36ef64: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x36ef64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x36ef68: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x36ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef6c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ef70: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x36ef70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ef74: 0xc5a20004  lwc1        $f2, 0x4($t5)
    ctx->pc = 0x36ef74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef78: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x36ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ef7c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36ef7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36ef80: 0xc5a20008  lwc1        $f2, 0x8($t5)
    ctx->pc = 0x36ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef84: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x36ef84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ef88: 0x4603121c  madd.s      $f8, $f2, $f3
    ctx->pc = 0x36ef88u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ef8c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x36ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef90: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ef94: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x36ef94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36ef98: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x36ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ef9c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x36ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36efa0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36efa0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36efa4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x36efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36efa8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x36efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36efac: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x36efacu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36efb0: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36efb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36efb4: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36efb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36efb8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36efb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36efbc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x36efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36efc0: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x36efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36efc4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x36efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36efc8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x36efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36efcc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x36efccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36efd0: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x36efd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36efd4: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x36efd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x36efd8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x36efd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x36efdc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x36efdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x36efe0: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x36efe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x36efe4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36efe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36efe8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x36efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36efec: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x36efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36eff0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36eff4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x36eff4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36eff8: 0xc5a20004  lwc1        $f2, 0x4($t5)
    ctx->pc = 0x36eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36effc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x36effcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f000: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36f000u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36f004: 0xc5a20008  lwc1        $f2, 0x8($t5)
    ctx->pc = 0x36f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f008: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x36f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f00c: 0x460311dc  madd.s      $f7, $f2, $f3
    ctx->pc = 0x36f00cu;
    ctx->f[7] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36f010: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x36f010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f014: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f018: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x36f018u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36f01c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x36f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f020: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x36f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f024: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36f024u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36f028: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x36f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f02c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x36f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f030: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x36f030u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36f034: 0x46053342  mul.s       $f13, $f6, $f5
    ctx->pc = 0x36f034u;
    ctx->f[13] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x36f038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36f038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f03c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x36f03cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f040: 0x460d7036  c.le.s      $f14, $f13
    ctx->pc = 0x36f040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f044: 0x0  nop
    ctx->pc = 0x36f044u;
    // NOP
    // 0x36f048: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36F048u;
    {
        const bool branch_taken_0x36f048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F048u;
        // 0x36f04c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f048) {
            ctx->pc = 0x36F058u;
            goto label_36f058;
        }
    }
    ctx->pc = 0x36F050u;
    // 0x36f050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f054: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x36f054u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f058:
    // 0x36f058: 0x46072302  mul.s       $f12, $f4, $f7
    ctx->pc = 0x36f058u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x36f05c: 0x460542c2  mul.s       $f11, $f8, $f5
    ctx->pc = 0x36f05cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x36f060: 0x460b6001  sub.s       $f0, $f12, $f11
    ctx->pc = 0x36f060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x36f064: 0x46007036  c.le.s      $f14, $f0
    ctx->pc = 0x36f064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f068: 0x0  nop
    ctx->pc = 0x36f068u;
    // NOP
    // 0x36f06c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x36F06Cu;
    {
        const bool branch_taken_0x36f06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F06Cu;
        // 0x36f070: 0x460640c1  sub.s       $f3, $f8, $f6 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f06c) {
            ctx->pc = 0x36F07Cu;
            goto label_36f07c;
        }
    }
    ctx->pc = 0x36F074u;
    // 0x36f074: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36f074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36f078: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x36f078u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f07c:
    // 0x36f07c: 0x46063881  sub.s       $f2, $f7, $f6
    ctx->pc = 0x36f07cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x36f080: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x36f080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x36f084: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x36f084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x36f088: 0x46000a41  sub.s       $f9, $f1, $f0
    ctx->pc = 0x36f088u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36f08c: 0x46097036  c.le.s      $f14, $f9
    ctx->pc = 0x36f08cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f090: 0x0  nop
    ctx->pc = 0x36f090u;
    // NOP
    // 0x36f094: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x36F094u;
    {
        const bool branch_taken_0x36f094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f094) {
            ctx->pc = 0x36F098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F094u;
            // 0x36f098: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F09Cu;
            goto label_36f09c;
        }
    }
    ctx->pc = 0x36F09Cu;
label_36f09c:
    // 0x36f09c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f0a0: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36F0A0u;
    {
        const bool branch_taken_0x36f0a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x36F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0A0u;
        // 0x36f0a4: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0a0) {
            ctx->pc = 0x36F124u;
            goto label_36f124;
        }
    }
    ctx->pc = 0x36F0A8u;
    // 0x36f0a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36F0A8u;
    {
        const bool branch_taken_0x36f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0A8u;
        // 0x36f0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0a8) {
            ctx->pc = 0x36F0C0u;
            goto label_36f0c0;
        }
    }
    ctx->pc = 0x36F0B0u;
    // 0x36f0b0: 0x10a200c5  beq         $a1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x36F0B0u;
    {
        const bool branch_taken_0x36f0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x36f0b0) {
            ctx->pc = 0x36F3C8u;
            goto label_36f3c8;
        }
    }
    ctx->pc = 0x36F0B8u;
    // 0x36f0b8: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x36F0B8u;
    {
        const bool branch_taken_0x36f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f0b8) {
            ctx->pc = 0x36F4ECu;
            goto label_36f4ec;
        }
    }
    ctx->pc = 0x36F0C0u;
label_36f0c0:
    // 0x36f0c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f0c4: 0x14a20109  bne         $a1, $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x36F0C4u;
    {
        const bool branch_taken_0x36f0c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x36F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0C4u;
        // 0x36f0c8: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0c4) {
            ctx->pc = 0x36F4ECu;
            goto label_36f4ec;
        }
    }
    ctx->pc = 0x36F0CCu;
    // 0x36f0cc: 0x46008246  mov.s       $f9, $f16
    ctx->pc = 0x36f0ccu;
    ctx->f[9] = FPU_MOV_S(ctx->f[16]);
    // 0x36f0d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x36f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f0d4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x36f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36f0d8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x36f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f0dc: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x36f0dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x36f0e0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x36f0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f0e4: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x36f0e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x36f0e8: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x36f0e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x36f0ec: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x36f0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x36f0f0: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x36f0f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36f0f4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x36f0f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x36f0f8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x36f0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x36f0fc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x36f0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x36f100: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36f100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36f104: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36f104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f108: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f10c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x36f10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f110: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x36f110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f114: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x36f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f118: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x36f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f11c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x36F11Cu;
    {
        const bool branch_taken_0x36f11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F11Cu;
        // 0x36f120: 0xc7a3009c  lwc1        $f3, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f11c) {
            ctx->pc = 0x36F3A8u;
            goto label_36f3a8;
        }
    }
    ctx->pc = 0x36F124u;
label_36f124:
    // 0x36f124: 0x15a00032  bnez        $t5, . + 4 + (0x32 << 2)
    ctx->pc = 0x36F124u;
    {
        const bool branch_taken_0x36f124 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f124) {
            ctx->pc = 0x36F1F0u;
            goto label_36f1f0;
        }
    }
    ctx->pc = 0x36F12Cu;
    // 0x36f12c: 0x46063802  mul.s       $f0, $f7, $f6
    ctx->pc = 0x36f12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x36f130: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x36f130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x36f134: 0x0  nop
    ctx->pc = 0x36f134u;
    // NOP
    // 0x36f138: 0x0  nop
    ctx->pc = 0x36f138u;
    // NOP
    // 0x36f13c: 0x46010203  div.s       $f8, $f0, $f1
    ctx->pc = 0x36f13cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x36f140: 0x460e4036  c.le.s      $f8, $f14
    ctx->pc = 0x36f140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f144: 0x0  nop
    ctx->pc = 0x36f144u;
    // NOP
    // 0x36f148: 0x450100d1  bc1t        . + 4 + (0xD1 << 2)
    ctx->pc = 0x36F148u;
    {
        const bool branch_taken_0x36f148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f148) {
            ctx->pc = 0x36F490u;
            goto label_36f490;
        }
    }
    ctx->pc = 0x36F150u;
    // 0x36f150: 0x46087836  c.le.s      $f15, $f8
    ctx->pc = 0x36f150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f154: 0x0  nop
    ctx->pc = 0x36f154u;
    // NOP
    // 0x36f158: 0x450100b6  bc1t        . + 4 + (0xB6 << 2)
    ctx->pc = 0x36F158u;
    {
        const bool branch_taken_0x36f158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f158) {
            ctx->pc = 0x36F434u;
            goto label_36f434;
        }
    }
    ctx->pc = 0x36F160u;
    // 0x36f160: 0x0  nop
    ctx->pc = 0x36f160u;
    // NOP
    // 0x36f164: 0x0  nop
    ctx->pc = 0x36f164u;
    // NOP
    // 0x36f168: 0x46016816  rsqrt.s     $f0, $f13, $f1
    ctx->pc = 0x36f168u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[13], ctx->f[1]);
    // 0x36f16c: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x36f16cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x36f170: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x36f170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x36f174: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36f174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36f178: 0x0  nop
    ctx->pc = 0x36f178u;
    // NOP
    // 0x36f17c: 0x0  nop
    ctx->pc = 0x36f17cu;
    // NOP
    // 0x36f180: 0x46000244  c1          0x244
    ctx->pc = 0x36f180u;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
    // 0x36f184: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36f184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36f188: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36f188u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36f18c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f18cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f190: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36f190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f194: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x36f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f198: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x36f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36f19c: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x36f19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36f1a0: 0xc7a700a8  lwc1        $f7, 0xA8($sp)
    ctx->pc = 0x36f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36f1a4: 0x46034102  mul.s       $f4, $f8, $f3
    ctx->pc = 0x36f1a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x36f1a8: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x36f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36f1ac: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x36f1acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x36f1b0: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x36f1b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x36f1b4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x36f1b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x36f1b8: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x36f1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x36f1bc: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x36f1bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36f1c0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x36f1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x36f1c4: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x36f1c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x36f1c8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x36f1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x36f1cc: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x36f1ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x36f1d0: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x36f1d0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36f1d4: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x36f1d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36f1d8: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36f1d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36f1dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36f1dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f1e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f1e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f1e4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36f1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f1e8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x36F1E8u;
    {
        const bool branch_taken_0x36f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1E8u;
        // 0x36f1ec: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f1e8) {
            ctx->pc = 0x36F39Cu;
            goto label_36f39c;
        }
    }
    ctx->pc = 0x36F1F0u;
label_36f1f0:
    // 0x36f1f0: 0x55c00037  bnel        $t6, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x36F1F0u;
    {
        const bool branch_taken_0x36f1f0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f1f0) {
            ctx->pc = 0x36F1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36F1F0u;
            // 0x36f1f4: 0x46031002  mul.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36F2D0u;
            goto label_36f2d0;
        }
    }
    ctx->pc = 0x36F1F8u;
    // 0x36f1f8: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x36f1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x36f1fc: 0x460840c2  mul.s       $f3, $f8, $f8
    ctx->pc = 0x36f1fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x36f200: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x36f200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x36f204: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x36f204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x36f208: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36f208u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36f20c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x36f20cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x36f210: 0x0  nop
    ctx->pc = 0x36f210u;
    // NOP
    // 0x36f214: 0x0  nop
    ctx->pc = 0x36f214u;
    // NOP
    // 0x36f218: 0x46030203  div.s       $f8, $f0, $f3
    ctx->pc = 0x36f218u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x36f21c: 0x460e4036  c.le.s      $f8, $f14
    ctx->pc = 0x36f21cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f220: 0x0  nop
    ctx->pc = 0x36f220u;
    // NOP
    // 0x36f224: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
    ctx->pc = 0x36F224u;
    {
        const bool branch_taken_0x36f224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f224) {
            ctx->pc = 0x36F490u;
            goto label_36f490;
        }
    }
    ctx->pc = 0x36F22Cu;
    // 0x36f22c: 0x46087836  c.le.s      $f15, $f8
    ctx->pc = 0x36f22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f230: 0x0  nop
    ctx->pc = 0x36f230u;
    // NOP
    // 0x36f234: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x36F234u;
    {
        const bool branch_taken_0x36f234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f234) {
            ctx->pc = 0x36F3D0u;
            goto label_36f3d0;
        }
    }
    ctx->pc = 0x36F23Cu;
    // 0x36f23c: 0x460c5801  sub.s       $f0, $f11, $f12
    ctx->pc = 0x36f23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[12]);
    // 0x36f240: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x36f240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x36f244: 0x0  nop
    ctx->pc = 0x36f244u;
    // NOP
    // 0x36f248: 0x0  nop
    ctx->pc = 0x36f248u;
    // NOP
    // 0x36f24c: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x36f24cu;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[0], ctx->f[3]);
    // 0x36f250: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x36f250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x36f254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36f254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36f258: 0x0  nop
    ctx->pc = 0x36f258u;
    // NOP
    // 0x36f25c: 0x0  nop
    ctx->pc = 0x36f25cu;
    // NOP
    // 0x36f260: 0x46000244  c1          0x244
    ctx->pc = 0x36f260u;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
    // 0x36f264: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x36f264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36f268: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36f268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36f26c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f26cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f270: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36f270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f274: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x36f274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f278: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x36f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36f27c: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x36f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36f280: 0xc7a700a8  lwc1        $f7, 0xA8($sp)
    ctx->pc = 0x36f280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36f284: 0x46034102  mul.s       $f4, $f8, $f3
    ctx->pc = 0x36f284u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x36f288: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x36f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36f28c: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x36f28cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x36f290: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x36f290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x36f294: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x36f294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x36f298: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x36f298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x36f29c: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x36f29cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36f2a0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x36f2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x36f2a4: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x36f2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x36f2a8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x36f2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x36f2ac: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x36f2acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x36f2b0: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x36f2b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36f2b4: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x36f2b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36f2b8: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36f2b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36f2bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36f2bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f2c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f2c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f2c4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f2c8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x36F2C8u;
    {
        const bool branch_taken_0x36f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F2C8u;
        // 0x36f2cc: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f2c8) {
            ctx->pc = 0x36F39Cu;
            goto label_36f39c;
        }
    }
    ctx->pc = 0x36F2D0u;
label_36f2d0:
    // 0x36f2d0: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x36f2d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x36f2d4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x36f2d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x36f2d8: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x36f2d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x36f2dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x36f2dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x36f2e0: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x36f2e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x36f2e4: 0x0  nop
    ctx->pc = 0x36f2e4u;
    // NOP
    // 0x36f2e8: 0x0  nop
    ctx->pc = 0x36f2e8u;
    // NOP
    // 0x36f2ec: 0x46010203  div.s       $f8, $f0, $f1
    ctx->pc = 0x36f2ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x36f2f0: 0x460e4036  c.le.s      $f8, $f14
    ctx->pc = 0x36f2f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f2f4: 0x0  nop
    ctx->pc = 0x36f2f4u;
    // NOP
    // 0x36f2f8: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
    ctx->pc = 0x36F2F8u;
    {
        const bool branch_taken_0x36f2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f2f8) {
            ctx->pc = 0x36F434u;
            goto label_36f434;
        }
    }
    ctx->pc = 0x36F300u;
    // 0x36f300: 0x46087836  c.le.s      $f15, $f8
    ctx->pc = 0x36f300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[15], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f304: 0x0  nop
    ctx->pc = 0x36f304u;
    // NOP
    // 0x36f308: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x36F308u;
    {
        const bool branch_taken_0x36f308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f308) {
            ctx->pc = 0x36F3D0u;
            goto label_36f3d0;
        }
    }
    ctx->pc = 0x36F310u;
    // 0x36f310: 0x0  nop
    ctx->pc = 0x36f310u;
    // NOP
    // 0x36f314: 0x0  nop
    ctx->pc = 0x36f314u;
    // NOP
    // 0x36f318: 0x46014816  rsqrt.s     $f0, $f9, $f1
    ctx->pc = 0x36f318u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[9], ctx->f[1]);
    // 0x36f31c: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x36f31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x36f320: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x36f320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x36f324: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36f324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36f328: 0x0  nop
    ctx->pc = 0x36f328u;
    // NOP
    // 0x36f32c: 0x0  nop
    ctx->pc = 0x36f32cu;
    // NOP
    // 0x36f330: 0x46000244  c1          0x244
    ctx->pc = 0x36f330u;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
    // 0x36f334: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x36f334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36f338: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x36f338u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36f33c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f33cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f340: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f344: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x36f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f348: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x36f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36f34c: 0xc7a600a4  lwc1        $f6, 0xA4($sp)
    ctx->pc = 0x36f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x36f350: 0xc7a700a8  lwc1        $f7, 0xA8($sp)
    ctx->pc = 0x36f350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x36f354: 0x46034102  mul.s       $f4, $f8, $f3
    ctx->pc = 0x36f354u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x36f358: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x36f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36f35c: 0x46064042  mul.s       $f1, $f8, $f6
    ctx->pc = 0x36f35cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x36f360: 0x46074082  mul.s       $f2, $f8, $f7
    ctx->pc = 0x36f360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x36f364: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x36f364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x36f368: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x36f368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x36f36c: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x36f36cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36f370: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x36f370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x36f374: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x36f374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x36f378: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x36f378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x36f37c: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x36f37cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x36f380: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x36f380u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36f384: 0xe7a5009c  swc1        $f5, 0x9C($sp)
    ctx->pc = 0x36f384u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36f388: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36f388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36f38c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36f38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f390: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f394: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x36f394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f398: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x36f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f39c:
    // 0x36f39c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x36f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f3a0: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x36f3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f3a4: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x36f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_36f3a8:
    // 0x36f3a8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36f3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36f3ac: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x36f3acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x36f3b0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x36f3b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36f3b4: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x36f3b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x36f3b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36f3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36f3bc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36f3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f3c0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x36F3C0u;
    {
        const bool branch_taken_0x36f3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f3c0) {
            ctx->pc = 0x36F4F0u;
            goto label_36f4f0;
        }
    }
    ctx->pc = 0x36F3C8u;
label_36f3c8:
    // 0x36f3c8: 0x11a00018  beqz        $t5, . + 4 + (0x18 << 2)
    ctx->pc = 0x36F3C8u;
    {
        const bool branch_taken_0x36f3c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f3c8) {
            ctx->pc = 0x36F42Cu;
            goto label_36f42c;
        }
    }
    ctx->pc = 0x36F3D0u;
label_36f3d0:
    // 0x36f3d0: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36f3d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36f3d4: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x36f3d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36f3d8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f3d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f3dc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x36f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f3e0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x36f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f3e4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x36f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f3e8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x36f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f3ec: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x36f3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36f3f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36f3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36f3f4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x36f3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x36f3f8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x36f3f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36f3fc: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x36f3fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x36f400: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f404: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x36f404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f408: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x36f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36f40c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x36f40cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36f410: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36f410u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x36f414: 0x4604225c  madd.s      $f9, $f4, $f4
    ctx->pc = 0x36f414u;
    ctx->f[9] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x36f418: 0x46090244  c1          0x90244
    ctx->pc = 0x36f418u;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
    // 0x36f41c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x36f41cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x36f420: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36f420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f424: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x36F424u;
    {
        const bool branch_taken_0x36f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f424) {
            ctx->pc = 0x36F4F0u;
            goto label_36f4f0;
        }
    }
    ctx->pc = 0x36F42Cu;
label_36f42c:
    // 0x36f42c: 0x11c00018  beqz        $t6, . + 4 + (0x18 << 2)
    ctx->pc = 0x36F42Cu;
    {
        const bool branch_taken_0x36f42c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f42c) {
            ctx->pc = 0x36F490u;
            goto label_36f490;
        }
    }
    ctx->pc = 0x36F434u;
label_36f434:
    // 0x36f434: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36f434u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36f438: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x36f438u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36f43c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f43cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f440: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x36f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f444: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x36f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f448: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x36f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f44c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x36f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f450: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x36f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36f454: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36f454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36f458: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x36f458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x36f45c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x36f45cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36f460: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x36f460u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x36f464: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f468: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x36f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f46c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x36f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36f470: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x36f470u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36f474: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36f474u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x36f478: 0x4604225c  madd.s      $f9, $f4, $f4
    ctx->pc = 0x36f478u;
    ctx->f[9] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x36f47c: 0x46090244  c1          0x90244
    ctx->pc = 0x36f47cu;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
    // 0x36f480: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x36f480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36f484: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36f484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f488: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x36F488u;
    {
        const bool branch_taken_0x36f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f488) {
            ctx->pc = 0x36F4F0u;
            goto label_36f4f0;
        }
    }
    ctx->pc = 0x36F490u;
label_36f490:
    // 0x36f490: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x36f490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x36f494: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x36f494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36f498: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36f498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36f49c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x36f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f4a0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x36f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f4a4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x36f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f4a8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x36f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f4ac: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x36f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x36f4b0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36f4b4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x36f4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x36f4b8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x36f4b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36f4bc: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x36f4bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x36f4c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36f4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f4c4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x36f4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36f4c8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x36f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36f4cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x36f4ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36f4d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36f4d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x36f4d4: 0x4604225c  madd.s      $f9, $f4, $f4
    ctx->pc = 0x36f4d4u;
    ctx->f[9] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x36f4d8: 0x46090244  c1          0x90244
    ctx->pc = 0x36f4d8u;
    ctx->f[9] = FPU_SQRT_S(ctx->f[0]);
    // 0x36f4dc: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36f4dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36f4e0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f4e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36F4E4u;
    {
        const bool branch_taken_0x36f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f4e4) {
            ctx->pc = 0x36F4F0u;
            goto label_36f4f0;
        }
    }
    ctx->pc = 0x36F4ECu;
label_36f4ec:
    // 0x36f4ec: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x36f4ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_36f4f0:
    // 0x36f4f0: 0x0  nop
    ctx->pc = 0x36f4f0u;
    // NOP
    // 0x36f4f4: 0x46114834  c.lt.s      $f9, $f17
    ctx->pc = 0x36f4f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36f4f8: 0x0  nop
    ctx->pc = 0x36f4f8u;
    // NOP
    // 0x36f4fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x36F4FCu;
    {
        const bool branch_taken_0x36f4fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F4FCu;
        // 0x36f500: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f4fc) {
            ctx->pc = 0x36F50Cu;
            goto label_36f50c;
        }
    }
    ctx->pc = 0x36F504u;
    // 0x36f504: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x36F504u;
    {
        const bool branch_taken_0x36f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F504u;
        // 0x36f508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f504) {
            ctx->pc = 0x36F54Cu;
            goto label_36f54c;
        }
    }
    ctx->pc = 0x36F50Cu;
label_36f50c:
    // 0x36f50c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f510: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36f510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f514: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36f514u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36f518: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x36f518u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x36f51c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x36f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x36f520: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x36f520u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x36f524: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36f524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36f528: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x36f528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x36f52c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x36f52cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36f530: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36f530u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36f534: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x36f534u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f538: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36f538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f53c: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x36f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36f540: 0x46098801  sub.s       $f0, $f17, $f9
    ctx->pc = 0x36f540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[17], ctx->f[9]);
    // 0x36f544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f548: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x36f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_36f54c:
    // 0x36f54c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F54Cu;
        // 0x36f550: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F554u;
    // 0x36f554: 0x0  nop
    ctx->pc = 0x36f554u;
    // NOP
    ctx->pc = 0x36f558u;
}
