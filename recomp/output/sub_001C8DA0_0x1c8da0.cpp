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

// Function: sub_001C8DA0
// Address: 0x1c8da0 - 0x1c9068
void sub_001C8DA0_0x1c8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8DA0_0x1c8da0");
#endif

    ctx->pc = 0x1c8da0u;

    // 0x1c8da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c8da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c8da4: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1c8da8: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x1c8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1c8dac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c8dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8db0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c8db0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8db4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8db4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8db8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8dbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8dc0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8dc4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c8dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8dc8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c8dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8dcc: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1c8dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c8dd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c8dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8dd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c8dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c8dd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c8dd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c8ddc: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1c8ddcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c8de0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8de4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8de8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c8de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c8dec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c8decu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c8df0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c8df0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c8df4: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x1c8df4u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c8df8: 0x46060184  c1          0x60184
    ctx->pc = 0x1c8df8u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8dfc: 0xc4a90020  lwc1        $f9, 0x20($a1)
    ctx->pc = 0x1c8dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1c8e00: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x1c8e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e04: 0x46004940  add.s       $f5, $f9, $f0
    ctx->pc = 0x1c8e04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x1c8e08: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x1c8e08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x1c8e0c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1c8e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8e10: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1c8e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8e14: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1c8e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c8e18: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c8e18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c8e1c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c8e1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c8e20: 0x4604221c  madd.s      $f8, $f4, $f4
    ctx->pc = 0x1c8e20u;
    ctx->f[8] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c8e24: 0x46080204  c1          0x80204
    ctx->pc = 0x1c8e24u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8e28: 0x46014034  c.lt.s      $f8, $f1
    ctx->pc = 0x1c8e28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8e2c: 0x0  nop
    ctx->pc = 0x1c8e2cu;
    // NOP
    // 0x1c8e30: 0x4503008a  bc1tl       . + 4 + (0x8A << 2)
    ctx->pc = 0x1C8E30u;
    {
        const bool branch_taken_0x1c8e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8e30) {
            ctx->pc = 0x1C8E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E30u;
            // 0x1c8e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C8E38u;
    // 0x1c8e38: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1c8e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8e3c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x1c8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8e40: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x1c8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8e44: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e48: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1c8e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c8e4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c8e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c8e50: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c8e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c8e54: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1c8e54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c8e58: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8e5c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c8e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8e60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c8e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8e64: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c8e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8e68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c8e68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c8e6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c8e6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c8e70: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c8e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8e74: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c8e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8e78: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c8e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8e7c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1c8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8e80: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8e80u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8e84: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8e88: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8e8c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c8e8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c8e90: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8e94: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1c8e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8e98: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1c8e98u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8e9c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1c8e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1c8ea0: 0x0  nop
    ctx->pc = 0x1c8ea0u;
    // NOP
    // 0x1c8ea4: 0x46072036  c.le.s      $f4, $f7
    ctx->pc = 0x1c8ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8ea8: 0x0  nop
    ctx->pc = 0x1c8ea8u;
    // NOP
    // 0x1c8eac: 0x4503006b  bc1tl       . + 4 + (0x6B << 2)
    ctx->pc = 0x1C8EACu;
    {
        const bool branch_taken_0x1c8eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8eac) {
            ctx->pc = 0x1C8EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8EACu;
            // 0x1c8eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C8EB4u;
    // 0x1c8eb4: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x1c8eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1c8eb8: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x1c8eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1c8ebc: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x1c8ebcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1c8ec0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8ec4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c8ec4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8ec8: 0x0  nop
    ctx->pc = 0x1c8ec8u;
    // NOP
    // 0x1c8ecc: 0x45030063  bc1tl       . + 4 + (0x63 << 2)
    ctx->pc = 0x1C8ECCu;
    {
        const bool branch_taken_0x1c8ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8ecc) {
            ctx->pc = 0x1C8ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8ECCu;
            // 0x1c8ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C8ED4u;
    // 0x1c8ed4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c8ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c8ed8: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x1c8ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8edc: 0x0  nop
    ctx->pc = 0x1c8edcu;
    // NOP
    // 0x1c8ee0: 0x4503005e  bc1tl       . + 4 + (0x5E << 2)
    ctx->pc = 0x1C8EE0u;
    {
        const bool branch_taken_0x1c8ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8ee0) {
            ctx->pc = 0x1C8EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8EE0u;
            // 0x1c8ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C8EE8u;
    // 0x1c8ee8: 0x0  nop
    ctx->pc = 0x1c8ee8u;
    // NOP
    // 0x1c8eec: 0x0  nop
    ctx->pc = 0x1c8eecu;
    // NOP
    // 0x1c8ef0: 0x46000004  c1          0x4
    ctx->pc = 0x1c8ef0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8ef4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1c8ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1c8ef8: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x1c8ef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8efc: 0x0  nop
    ctx->pc = 0x1c8efcu;
    // NOP
    // 0x1c8f00: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
    ctx->pc = 0x1C8F00u;
    {
        const bool branch_taken_0x1c8f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8f00) {
            ctx->pc = 0x1C8F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8F00u;
            // 0x1c8f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C8F08u;
    // 0x1c8f08: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1c8f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c8f0c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8f10: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c8f10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c8f14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c8f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f18: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c8f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8f1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8f20: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c8f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8f24: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f28: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c8f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8f2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c8f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8f30: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c8f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8f34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8f34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f38: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8f3c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8f3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f40: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c8f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f44: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c8f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f48: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c8f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f4c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c8f4cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c8f50: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c8f50u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c8f54: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c8f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8f5c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c8f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f60: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c8f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8f64: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c8f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8f68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8f68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8f6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1c8f6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1c8f70: 0xe7a7002c  swc1        $f7, 0x2C($sp)
    ctx->pc = 0x1c8f70u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c8f74: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c8f74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c8f78: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c8f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c8f7c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1c8f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1c8f80: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c8f80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c8f84: 0x44034800  mfc1        $v1, $f9
    ctx->pc = 0x1c8f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c8f88: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f8c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c8f8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8f90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c8f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f94: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8f98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c8f98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8f9c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c8f9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8fa0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8fa4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8fa8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8fac: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1c8facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8fb0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8fb4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c8fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8fb8: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1c8fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8fbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c8fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c8fc0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c8fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1c8fc4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c8fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1c8fc8: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1c8fc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1c8fcc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c8fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8fd0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c8fd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8fd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c8fd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8fd8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c8fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8fdc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8fe0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x1c8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8fe4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c8fe4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c8fe8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8fec: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1c8fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8ff0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c8ff0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c8ff4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1c8ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8ff8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x1c8ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8ffc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c8ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c9000: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x1c9000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9004: 0x0  nop
    ctx->pc = 0x1c9004u;
    // NOP
    // 0x1c9008: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9008u;
    {
        const bool branch_taken_0x1c9008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9008) {
            ctx->pc = 0x1C900Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9008u;
            // 0x1c900c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C9010u;
    // 0x1c9010: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1c9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9014: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c9014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9018: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1c9018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c901c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c901cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c9020: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c9020u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c9024: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c9024u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c9028: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1c9028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c902c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c902cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9030: 0x0  nop
    ctx->pc = 0x1c9030u;
    // NOP
    // 0x1c9034: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9034u;
    {
        const bool branch_taken_0x1c9034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9034u;
        // 0x1c9038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9034) {
            ctx->pc = 0x1C905Cu;
            goto label_1c905c;
        }
    }
    ctx->pc = 0x1C903Cu;
    // 0x1c903c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c903cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9040: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1c9040u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9044: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c9044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9048: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c9048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c904c: 0xf9410000  sqc2        $vf1, 0x0($t2)
    ctx->pc = 0x1c904cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9050: 0xe5470004  swc1        $f7, 0x4($t2)
    ctx->pc = 0x1c9050u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x1c9054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9058: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x1c9058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1c905c:
    // 0x1c905c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C905Cu;
        // 0x1c9060: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9064u;
    // 0x1c9064: 0x0  nop
    ctx->pc = 0x1c9064u;
    // NOP
    ctx->pc = 0x1c9068u;
}
