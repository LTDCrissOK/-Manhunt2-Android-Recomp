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

// Function: sub_001E47F8
// Address: 0x1e47f8 - 0x1e4990
void sub_001E47F8_0x1e47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E47F8_0x1e47f8");
#endif

    ctx->pc = 0x1e47f8u;

    // 0x1e47f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e47f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e47fc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e47fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e4800: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e4800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4804: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4804u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4808: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e480c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4810: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e4810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e4814: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4818: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e4818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e481c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e4820: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e4820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4824: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e4824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e4828: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1e4828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e482c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e482cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e4830: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e4830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4834: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e4834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4838: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e4838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e483c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e483cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e4840: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e4840u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e4844: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x1e4844u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e4848: 0x46050144  c1          0x50144
    ctx->pc = 0x1e4848u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e484c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1e484cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e4850: 0x0  nop
    ctx->pc = 0x1e4850u;
    // NOP
    // 0x1e4854: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x1e4854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4858: 0x0  nop
    ctx->pc = 0x1e4858u;
    // NOP
    // 0x1e485c: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1E485Cu;
    {
        const bool branch_taken_0x1e485c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e485c) {
            ctx->pc = 0x1E4980u;
            goto label_1e4980;
        }
    }
    ctx->pc = 0x1E4864u;
    // 0x1e4864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e4868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e486c: 0x0  nop
    ctx->pc = 0x1e486cu;
    // NOP
    // 0x1e4870: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x1e4870u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x1e4874: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e4874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4878: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e487c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e487cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4880: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4884: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4888: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e4888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e488c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e488cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4890: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4890u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4894: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4898: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e4898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e489c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1e489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e48a0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e48a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e48a4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1e48a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e48a8: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x1e48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e48ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e48acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e48b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1e48b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e48b4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1e48b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e48b8: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x1e48b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e48bc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e48c0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e48c4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e48c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e48c8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1e48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e48cc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e48d0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e48d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e48d4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e48d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e48d8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e48dc: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1e48dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e48e0: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x1e48e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e48e4: 0x0  nop
    ctx->pc = 0x1e48e4u;
    // NOP
    // 0x1e48e8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1E48E8u;
    {
        const bool branch_taken_0x1e48e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e48e8) {
            ctx->pc = 0x1E4980u;
            goto label_1e4980;
        }
    }
    ctx->pc = 0x1E48F0u;
    // 0x1e48f0: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x1e48f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e48f4: 0x0  nop
    ctx->pc = 0x1e48f4u;
    // NOP
    // 0x1e48f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E48F8u;
    {
        const bool branch_taken_0x1e48f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F8u;
        // 0x1e48fc: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48f8) {
            ctx->pc = 0x1E4910u;
            goto label_1e4910;
        }
    }
    ctx->pc = 0x1E4900u;
    // 0x1e4900: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e4900u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e4904: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e4904u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4908: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E4908u;
    {
        const bool branch_taken_0x1e4908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4908) {
            ctx->pc = 0x1E4988u;
            goto label_1e4988;
        }
    }
    ctx->pc = 0x1E4910u;
label_1e4910:
    // 0x1e4910: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1e4910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4914: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e4914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4918: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1e4918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e491c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1e491cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e4920: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1e4920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4924: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e4924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e4928: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e4928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e492c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e492cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e4930: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1e4930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e4934: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1e4934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e4938: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1e4938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e493c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1e493cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1e4940: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4944: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e4944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4948: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e4948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e494c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4950: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e4950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4954: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1e4954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4958: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1e4958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e495c: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1e495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e4960: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e4960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e4964: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1e4964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e4968: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1e4968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e496c: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1e496cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e4970: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e4970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4974: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e4974u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4978u;
    {
        const bool branch_taken_0x1e4978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4978) {
            ctx->pc = 0x1E4988u;
            goto label_1e4988;
        }
    }
    ctx->pc = 0x1E4980u;
label_1e4980:
    // 0x1e4980: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1e4980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4984: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e4984u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e4988:
    // 0x1e4988: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4988u;
        // 0x1e498c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4990u;
}
