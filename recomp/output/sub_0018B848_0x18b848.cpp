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

// Function: sub_0018B848
// Address: 0x18b848 - 0x18bbc0
void sub_0018B848_0x18b848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B848_0x18b848");
#endif

    switch (ctx->pc) {
        case 0x18ba00u: goto label_18ba00;
        case 0x18ba08u: goto label_18ba08;
        case 0x18bb24u: goto label_18bb24;
        case 0x18bb38u: goto label_18bb38;
        case 0x18bb90u: goto label_18bb90;
        case 0x18bba4u: goto label_18bba4;
        default: break;
    }

    ctx->pc = 0x18b848u;

    // 0x18b848: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x18b848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x18b84c: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x18b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x18b850: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x18b850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x18b854: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18b854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b858: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x18b858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x18b85c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b860: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x18b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x18b864: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18b864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18b868: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x18b868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b86c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b86cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b870: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18b870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b874: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x18b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x18b878: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x18b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x18b87c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x18b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b880: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x18b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b884: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18b888: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x18b888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18b88c: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x18b88cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18b890: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x18b890u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18b894: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b898: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x18b898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b89c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x18b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b8a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b8a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b8a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b8a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b8a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x18b8a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b8ac: 0x46010044  c1          0x10044
    ctx->pc = 0x18b8acu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b8b0: 0x3c014053  lui         $at, 0x4053
    ctx->pc = 0x18b8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16467 << 16));
    // 0x18b8b4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18b8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x18b8b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b8bc: 0x0  nop
    ctx->pc = 0x18b8bcu;
    // NOP
    // 0x18b8c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b8c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b8c4: 0x0  nop
    ctx->pc = 0x18b8c4u;
    // NOP
    // 0x18b8c8: 0x450100b7  bc1t        . + 4 + (0xB7 << 2)
    ctx->pc = 0x18B8C8u;
    {
        const bool branch_taken_0x18b8c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8C8u;
        // 0x18b8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8c8) {
            ctx->pc = 0x18BBA8u;
            goto label_18bba8;
        }
    }
    ctx->pc = 0x18B8D0u;
    // 0x18b8d0: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x18b8d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x18b8d4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18b8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x18b8d8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18b8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x18b8dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b8e0: 0x0  nop
    ctx->pc = 0x18b8e0u;
    // NOP
    // 0x18b8e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18b8e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b8e8: 0x0  nop
    ctx->pc = 0x18b8e8u;
    // NOP
    // 0x18b8ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18B8ECu;
    {
        const bool branch_taken_0x18b8ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8ECu;
        // 0x18b8f0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8ec) {
            ctx->pc = 0x18B908u;
            goto label_18b908;
        }
    }
    ctx->pc = 0x18B8F4u;
    // 0x18b8f4: 0x46003005  abs.s       $f0, $f6
    ctx->pc = 0x18b8f4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[6]);
    // 0x18b8f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18b8f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b8fc: 0x0  nop
    ctx->pc = 0x18b8fcu;
    // NOP
    // 0x18b900: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18B900u;
    {
        const bool branch_taken_0x18b900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b900) {
            ctx->pc = 0x18B904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B900u;
            // 0x18b904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B908u;
            goto label_18b908;
        }
    }
    ctx->pc = 0x18B908u;
label_18b908:
    // 0x18b908: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x18B908u;
    {
        const bool branch_taken_0x18b908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B908u;
        // 0x18b90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b908) {
            ctx->pc = 0x18BBA8u;
            goto label_18bba8;
        }
    }
    ctx->pc = 0x18B910u;
    // 0x18b910: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b910u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b914: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18b914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b918: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18b918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b91c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18b91cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b920: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18b920u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18b924: 0x4a0003bf  vwaitq
    ctx->pc = 0x18b924u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18b928: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18b928u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b92c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b930: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x18b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18b934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b938: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x18b938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x18b93c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x18b93cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x18b940: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x18b940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18b944: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x18b944u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x18b948: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x18b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b94c: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x18b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b950: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18b950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18b954: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x18b954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b958: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x18b958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18b95c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x18b95cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18b960: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18B960u;
    {
        const bool branch_taken_0x18b960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B960u;
        // 0x18b964: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b960) {
            ctx->pc = 0x18B97Cu;
            goto label_18b97c;
        }
    }
    ctx->pc = 0x18B968u;
    // 0x18b968: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x18b968u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x18b96c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x18b96cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b970: 0x0  nop
    ctx->pc = 0x18b970u;
    // NOP
    // 0x18b974: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x18B974u;
    {
        const bool branch_taken_0x18b974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b974) {
            ctx->pc = 0x18B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B974u;
            // 0x18b978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B97Cu;
            goto label_18b97c;
        }
    }
    ctx->pc = 0x18B97Cu;
label_18b97c:
    // 0x18b97c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x18B97Cu;
    {
        const bool branch_taken_0x18b97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b97c) {
            ctx->pc = 0x18B980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B97Cu;
            // 0x18b980: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9F0u;
            goto label_18b9f0;
        }
    }
    ctx->pc = 0x18B984u;
    // 0x18b984: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18b988: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18b988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b98c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x18b98cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b990: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x18b990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b994: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x18b994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x18b998: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x18b998u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x18b99c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18b99cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18b9a0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x18b9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b9a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x18b9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b9a8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b9ac: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x18b9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b9b0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x18b9b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18b9b4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x18b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b9b8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x18b9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b9bc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x18b9bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x18b9c0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x18b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b9c4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x18b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b9c8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x18b9c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x18b9cc: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
    // 0x18b9d0: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x18b9d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x18b9d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b9d8: 0x0  nop
    ctx->pc = 0x18b9d8u;
    // NOP
    // 0x18b9dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18b9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b9e0: 0x0  nop
    ctx->pc = 0x18b9e0u;
    // NOP
    // 0x18b9e4: 0x45010070  bc1t        . + 4 + (0x70 << 2)
    ctx->pc = 0x18B9E4u;
    {
        const bool branch_taken_0x18b9e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9E4u;
        // 0x18b9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9e4) {
            ctx->pc = 0x18BBA8u;
            goto label_18bba8;
        }
    }
    ctx->pc = 0x18B9ECu;
    // 0x18b9ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18b9f0:
    // 0x18b9f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18b9f4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x18b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x18b9f8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18B9F8u;
    SET_GPR_U32(ctx, 31, 0x18BA00u);
    ctx->pc = 0x18B9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9F8u;
    // 0x18b9fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18B9F8u, 0x18BA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA00u;
label_18ba00:
    // 0x18ba00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18BA00u;
    SET_GPR_U32(ctx, 31, 0x18BA08u);
    ctx->pc = 0x18BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA00u;
    // 0x18ba04: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18BA00u, 0x18BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BA08u;
label_18ba08:
    // 0x18ba08: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x18ba08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x18ba0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x18ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18ba10: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x18ba10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ba14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18ba14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18ba18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18ba1c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x18ba1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x18ba20: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x18ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x18ba24: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x18ba24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ba28: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x18ba28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ba2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18ba2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ba30: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x18ba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18ba34: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x18ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ba38: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x18ba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18ba3c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x18ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18ba40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18ba40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18ba44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18ba44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18ba48: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18ba48u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18ba4c: 0x0  nop
    ctx->pc = 0x18ba4cu;
    // NOP
    // 0x18ba50: 0x0  nop
    ctx->pc = 0x18ba50u;
    // NOP
    // 0x18ba54: 0x46000044  c1          0x44
    ctx->pc = 0x18ba54u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18ba58: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x18ba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18ba5c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x18ba5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x18ba60: 0x0  nop
    ctx->pc = 0x18ba60u;
    // NOP
    // 0x18ba64: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x18ba64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ba68: 0x0  nop
    ctx->pc = 0x18ba68u;
    // NOP
    // 0x18ba6c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18BA6Cu;
    {
        const bool branch_taken_0x18ba6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA6Cu;
        // 0x18ba70: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba6c) {
            ctx->pc = 0x18BA98u;
            goto label_18ba98;
        }
    }
    ctx->pc = 0x18BA74u;
    // 0x18ba74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18ba74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18ba78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ba78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ba7c: 0x0  nop
    ctx->pc = 0x18ba7cu;
    // NOP
    // 0x18ba80: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18ba80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18ba84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ba84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ba88: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18ba88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18ba8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18ba8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18ba90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18ba90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18ba94: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18ba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_18ba98:
    // 0x18ba98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x18ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x18ba9c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x18ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18baa0: 0xc441405c  lwc1        $f1, 0x405C($v0)
    ctx->pc = 0x18baa0u;
    { uint32_t bits = FAST_READ32(0x46405Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18baa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18baa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18baa8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x18baa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x18baac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x18baacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18bab0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x18bab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18bab4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18bab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18bab8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x18bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18babc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x18babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bac0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x18bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bac4: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x18bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18bac8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18bac8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18bacc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18baccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18bad0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x18bad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18bad4: 0x0  nop
    ctx->pc = 0x18bad4u;
    // NOP
    // 0x18bad8: 0x0  nop
    ctx->pc = 0x18bad8u;
    // NOP
    // 0x18badc: 0x46000044  c1          0x44
    ctx->pc = 0x18badcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18bae0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x18bae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x18bae4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x18bae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18bae8: 0x0  nop
    ctx->pc = 0x18bae8u;
    // NOP
    // 0x18baec: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x18BAECu;
    {
        const bool branch_taken_0x18baec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAECu;
        // 0x18baf0: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18baec) {
            ctx->pc = 0x18BB18u;
            goto label_18bb18;
        }
    }
    ctx->pc = 0x18BAF4u;
    // 0x18baf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18baf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18baf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bafc: 0x0  nop
    ctx->pc = 0x18bafcu;
    // NOP
    // 0x18bb00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x18bb00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x18bb04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18bb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18bb08: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18bb08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18bb0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x18bb0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x18bb10: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x18bb10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18bb14: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x18bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_18bb18:
    // 0x18bb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18bb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb1c: 0xc062ef0  jal         func_18BBC0
    ctx->pc = 0x18BB1Cu;
    SET_GPR_U32(ctx, 31, 0x18BB24u);
    ctx->pc = 0x18BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB1Cu;
    // 0x18bb20: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BBC0u, 0x18BB1Cu, 0x18BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB24u;
label_18bb24:
    // 0x18bb24: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18BB24u;
    {
        const bool branch_taken_0x18bb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB24u;
        // 0x18bb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb24) {
            ctx->pc = 0x18BBA8u;
            goto label_18bba8;
        }
    }
    ctx->pc = 0x18BB2Cu;
    // 0x18bb2c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18bb30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18BB30u;
    SET_GPR_U32(ctx, 31, 0x18BB38u);
    ctx->pc = 0x18BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB30u;
    // 0x18bb34: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18BB30u, 0x18BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB38u;
label_18bb38:
    // 0x18bb38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18bb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18bb3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18bb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18bb40: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x18bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x18bb44: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x18bb44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb48: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x18bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x18bb4c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x18bb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x18bb50: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x18bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x18bb54: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x18bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18bb58: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x18bb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18bb5c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x18bb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18bb60: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x18bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18bb64: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x18bb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x18bb68: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x18bb68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x18bb6c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x18bb6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x18bb70: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x18bb70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x18bb74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x18bb74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bb78: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x18bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18bb7c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x18bb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x18bb84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x18bb88: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x18BB88u;
    SET_GPR_U32(ctx, 31, 0x18BB90u);
    ctx->pc = 0x18BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB88u;
    // 0x18bb8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x18BB88u, 0x18BB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BB90u;
label_18bb90:
    // 0x18bb90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB90u;
    {
        const bool branch_taken_0x18bb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB90u;
        // 0x18bb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb90) {
            ctx->pc = 0x18BBA8u;
            goto label_18bba8;
        }
    }
    ctx->pc = 0x18BB98u;
    // 0x18bb98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18bb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb9c: 0xc062d60  jal         func_18B580
    ctx->pc = 0x18BB9Cu;
    SET_GPR_U32(ctx, 31, 0x18BBA4u);
    ctx->pc = 0x18BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB9Cu;
    // 0x18bba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B580u, 0x18BB9Cu, 0x18BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBA4u;
label_18bba4:
    // 0x18bba4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18bba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_18bba8:
    // 0x18bba8: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x18bba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x18bbac: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x18bbacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x18bbb0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x18bbb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x18bbb4: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x18bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x18bbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBB8u;
        // 0x18bbbc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BBC0u;
}
