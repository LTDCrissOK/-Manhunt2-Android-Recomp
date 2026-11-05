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

// Function: sub_001E3418
// Address: 0x1e3418 - 0x1e35e0
void sub_001E3418_0x1e3418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3418_0x1e3418");
#endif

    ctx->pc = 0x1e3418u;

    // 0x1e3418: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1e3418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e341c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1e341cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3424: 0x252a0010  addiu       $t2, $t1, 0x10
    ctx->pc = 0x1e3424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1e3428: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e3428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e342c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e342cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3430: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x1e3430u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e3434: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3434u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3438: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e3438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e343c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3440: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x1e3440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e3444: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e3444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3448: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e344c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e3450: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e3450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e3454: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e3454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e3458: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e3458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e345c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e345cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e3460: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e3460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3464: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e3464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3468: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e346c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e346cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e3470: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e3470u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e3474: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e3474u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e3478: 0xc5240020  lwc1        $f4, 0x20($t1)
    ctx->pc = 0x1e3478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e347c: 0xc5000040  lwc1        $f0, 0x40($t0)
    ctx->pc = 0x1e347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3480: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1e3480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e3484: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3488: 0x0  nop
    ctx->pc = 0x1e3488u;
    // NOP
    // 0x1e348c: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x1E348Cu;
    {
        const bool branch_taken_0x1e348c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E348Cu;
        // 0x1e3490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e348c) {
            ctx->pc = 0x1E35D8u;
            goto label_1e35d8;
        }
    }
    ctx->pc = 0x1E3494u;
    // 0x1e3494: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1e3498: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e3498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e349c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1e349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e34a0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e34a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e34a4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e34a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e34a8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e34a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e34ac: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e34acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e34b0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1e34b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e34b4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e34b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e34b8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e34b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e34bc: 0xc5000048  lwc1        $f0, 0x48($t0)
    ctx->pc = 0x1e34bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e34c0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1e34c0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1e34c4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1e34c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1e34c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e34c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e34cc: 0x0  nop
    ctx->pc = 0x1e34ccu;
    // NOP
    // 0x1e34d0: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x1E34D0u;
    {
        const bool branch_taken_0x1e34d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D0u;
        // 0x1e34d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34d0) {
            ctx->pc = 0x1E35D8u;
            goto label_1e35d8;
        }
    }
    ctx->pc = 0x1E34D8u;
    // 0x1e34d8: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x1e34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x1e34dc: 0x7cc00010  sq          $zero, 0x10($a2)
    ctx->pc = 0x1e34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 0));
    // 0x1e34e0: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1e34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1e34e4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e34e8: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x1e34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x1e34ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e34f0: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1e34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1e34f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1e34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e34f8: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1e34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x1e34fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3500: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x1e3500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x1e3504: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x1e3504u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x1e3508: 0xc480d8dc  lwc1        $f0, -0x2724($a0)
    ctx->pc = 0x1e3508u;
    { uint32_t bits = FAST_READ32(0x45D8DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e350c: 0xacc20044  sw          $v0, 0x44($a2)
    ctx->pc = 0x1e350cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
    // 0x1e3510: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1e3510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x1e3514: 0xacc8002c  sw          $t0, 0x2C($a2)
    ctx->pc = 0x1e3514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 8));
    // 0x1e3518: 0xacc50028  sw          $a1, 0x28($a2)
    ctx->pc = 0x1e3518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 5));
    // 0x1e351c: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x1e351cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x1e3520: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x1e3520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x1e3524: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x1e3524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x1e3528: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x1e3528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x1e352c: 0xacc00048  sw          $zero, 0x48($a2)
    ctx->pc = 0x1e352cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 0));
    // 0x1e3530: 0xacc90024  sw          $t1, 0x24($a2)
    ctx->pc = 0x1e3530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 9));
    // 0x1e3534: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e3534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3538: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e3538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e353c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e353cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3540: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e3540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3544: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e3544u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e3548: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e3548u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e354c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e354cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3550: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e3550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3554: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x1e3554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3558: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1e3558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e355c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3560: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e3564: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1e3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e3568: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1e3568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e356c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x1e356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e3570: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1e3570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e3574: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1e3574u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e3578: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1e3578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e357c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1e357cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e3580: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1e3580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e3584: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1e3584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e3588: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e3588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e358c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x1e358cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e3590: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e3590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3594: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e3594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3598: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e3598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e359c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e359cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e35a0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1e35a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e35a4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1e35a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e35a8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x1e35a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e35ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e35acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e35b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1e35b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e35b4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1e35b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e35b8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1e35b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e35bc: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x1e35bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e35c0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e35c4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e35c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e35c8: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1e35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e35cc: 0xc5200020  lwc1        $f0, 0x20($t1)
    ctx->pc = 0x1e35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e35d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e35d4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1e35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1e35d8:
    // 0x1e35d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E35D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35D8u;
        // 0x1e35dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E35D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E35E0u;
}
