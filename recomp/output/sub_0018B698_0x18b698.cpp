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

// Function: sub_0018B698
// Address: 0x18b698 - 0x18b848
void sub_0018B698_0x18b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B698_0x18b698");
#endif

    switch (ctx->pc) {
        case 0x18b7ecu: goto label_18b7ec;
        case 0x18b7fcu: goto label_18b7fc;
        default: break;
    }

    ctx->pc = 0x18b698u;

    // 0x18b698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18b69c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x18b69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x18b6a0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x18b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x18b6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b6a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18b6a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b6ac: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x18b6acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18b6b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b6b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b6b4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b6b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x18b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b6bc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b6c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x18b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b6c4: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x18b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18b6c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18b6cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18b6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18b6d0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x18b6d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18b6d4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x18b6d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18b6d8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b6dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x18b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b6e0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x18b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b6e4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b6e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b6e8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b6e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b6ec: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x18b6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b6f0: 0x46010044  c1          0x10044
    ctx->pc = 0x18b6f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b6f4: 0x3c014026  lui         $at, 0x4026
    ctx->pc = 0x18b6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16422 << 16));
    // 0x18b6f8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x18b6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x18b6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b700: 0x0  nop
    ctx->pc = 0x18b700u;
    // NOP
    // 0x18b704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b708: 0x0  nop
    ctx->pc = 0x18b708u;
    // NOP
    // 0x18b70c: 0x4501004a  bc1t        . + 4 + (0x4A << 2)
    ctx->pc = 0x18B70Cu;
    {
        const bool branch_taken_0x18b70c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B70Cu;
        // 0x18b710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b70c) {
            ctx->pc = 0x18B838u;
            goto label_18b838;
        }
    }
    ctx->pc = 0x18B714u;
    // 0x18b714: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b714u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b718: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18b718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b71c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18b71cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b720: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18b720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b724: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18b724u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18b728: 0x4a0003bf  vwaitq
    ctx->pc = 0x18b728u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18b72c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18b72cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b730: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b734: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x18b734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b73c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18b73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x18b740: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18b740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x18b744: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18b744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18b748: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x18b748u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x18b74c: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x18b74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b750: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x18b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b754: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18b754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18b758: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x18b758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b75c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x18b75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18b760: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x18b760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18b764: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18B764u;
    {
        const bool branch_taken_0x18b764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B764u;
        // 0x18b768: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b764) {
            ctx->pc = 0x18B780u;
            goto label_18b780;
        }
    }
    ctx->pc = 0x18B76Cu;
    // 0x18b76c: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x18b76cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x18b770: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x18b770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b774: 0x0  nop
    ctx->pc = 0x18b774u;
    // NOP
    // 0x18b778: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18B778u;
    {
        const bool branch_taken_0x18b778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b778) {
            ctx->pc = 0x18B77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B778u;
            // 0x18b77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B780u;
            goto label_18b780;
        }
    }
    ctx->pc = 0x18B780u;
label_18b780:
    // 0x18b780: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18B780u;
    {
        const bool branch_taken_0x18b780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b780) {
            ctx->pc = 0x18B784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B780u;
            // 0x18b784: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B7CCu;
            goto label_18b7cc;
        }
    }
    ctx->pc = 0x18B788u;
    // 0x18b788: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18b788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b78c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x18b78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b790: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x18b790u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18b794: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x18b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b798: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x18b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b79c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x18b79cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x18b7a0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x18b7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b7a4: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x18b7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b7a8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x18b7a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18b7ac: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x18b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x18b7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b7b4: 0x0  nop
    ctx->pc = 0x18b7b4u;
    // NOP
    // 0x18b7b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18b7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b7bc: 0x0  nop
    ctx->pc = 0x18b7bcu;
    // NOP
    // 0x18b7c0: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x18B7C0u;
    {
        const bool branch_taken_0x18b7c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7C0u;
        // 0x18b7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7c0) {
            ctx->pc = 0x18B838u;
            goto label_18b838;
        }
    }
    ctx->pc = 0x18B7C8u;
    // 0x18b7c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b7cc:
    // 0x18b7cc: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x18b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x18b7d0: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x18b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x18b7d4: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x18b7d8: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x18b7d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x18b7dc: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B7DCu;
    {
        const bool branch_taken_0x18b7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7dc) {
            ctx->pc = 0x18B7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B7DCu;
            // 0x18b7e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B838u;
            goto label_18b838;
        }
    }
    ctx->pc = 0x18B7E4u;
    // 0x18b7e4: 0xc061a12  jal         func_186848
    ctx->pc = 0x18B7E4u;
    SET_GPR_U32(ctx, 31, 0x18B7ECu);
    ctx->pc = 0x18B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B7E4u;
    // 0x18b7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18B7E4u, 0x18B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7ECu;
label_18b7ec:
    // 0x18b7ec: 0x244601e0  addiu       $a2, $v0, 0x1E0
    ctx->pc = 0x18b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x18b7f0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x18b7f4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x18B7F4u;
    SET_GPR_U32(ctx, 31, 0x18B7FCu);
    ctx->pc = 0x18B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B7F4u;
    // 0x18b7f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x18B7F4u, 0x18B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7FCu;
label_18b7fc:
    // 0x18b7fc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18b800: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x18b800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b804: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18b804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b808: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x18b808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b80c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b80cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b810: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b810u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b814: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x18b814u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b818: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18b818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x18b81c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b81cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b820: 0x0  nop
    ctx->pc = 0x18b820u;
    // NOP
    // 0x18b824: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18b824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b828: 0x0  nop
    ctx->pc = 0x18b828u;
    // NOP
    // 0x18b82c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18B82Cu;
    {
        const bool branch_taken_0x18b82c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B82Cu;
        // 0x18b830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b82c) {
            ctx->pc = 0x18B838u;
            goto label_18b838;
        }
    }
    ctx->pc = 0x18B834u;
    // 0x18b834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b838:
    // 0x18b838: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x18b838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b83c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x18b83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18b840: 0x3e00008  jr          $ra
    ctx->pc = 0x18B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B840u;
        // 0x18b844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B848u;
}
