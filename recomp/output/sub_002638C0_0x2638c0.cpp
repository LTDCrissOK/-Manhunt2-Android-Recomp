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

// Function: sub_002638C0
// Address: 0x2638c0 - 0x263c50
void sub_002638C0_0x2638c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002638C0_0x2638c0");
#endif

    switch (ctx->pc) {
        case 0x263a34u: goto label_263a34;
        case 0x263a48u: goto label_263a48;
        case 0x263a58u: goto label_263a58;
        case 0x263a98u: goto label_263a98;
        case 0x263aa4u: goto label_263aa4;
        case 0x263abcu: goto label_263abc;
        case 0x263ac4u: goto label_263ac4;
        case 0x263ad4u: goto label_263ad4;
        case 0x263b48u: goto label_263b48;
        case 0x263b58u: goto label_263b58;
        case 0x263b94u: goto label_263b94;
        case 0x263ba0u: goto label_263ba0;
        case 0x263bb0u: goto label_263bb0;
        case 0x263bc0u: goto label_263bc0;
        case 0x263c20u: goto label_263c20;
        default: break;
    }

    ctx->pc = 0x2638c0u;

    // 0x2638c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2638c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2638c4: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2638c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x2638c8: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2638c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x2638cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2638ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638d0: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x2638d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x2638d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2638d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638d8: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x2638d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x2638dc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2638dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638e0: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2638e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x2638e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2638e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638e8: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2638e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2638ec: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x2638ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x2638f0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x2638f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x2638f4: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x2638f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x2638f8: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x2638f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x2638fc: 0x8d22002c  lw          $v0, 0x2C($t1)
    ctx->pc = 0x2638fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
    // 0x263900: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x263900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x263904: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x263904u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x263908: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x263908u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26390c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26390cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263910: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x263910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263914: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x263914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263918: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x263918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26391c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x26391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263920: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x263920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x263924: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x263924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263928: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x263928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26392c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x26392cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x263930: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x263930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x263934: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x263934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x263938: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x263938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x26393c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26393cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263940: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x263940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x263944: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x263944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x263948: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x263948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x26394c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26394cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x263950: 0x4a0003bf  vwaitq
    ctx->pc = 0x263950u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x263954: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x263954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263958: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x263958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26395c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26395cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263960: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x263960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x263964: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x263964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x263968: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x263968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26396c: 0x240203e9  addiu       $v0, $zero, 0x3E9
    ctx->pc = 0x26396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x263970: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263970u;
    {
        const bool branch_taken_0x263970 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x263974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263970u;
        // 0x263974: 0xc463000c  lwc1        $f3, 0xC($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x263970) {
            ctx->pc = 0x263984u;
            goto label_263984;
        }
    }
    ctx->pc = 0x263978u;
    // 0x263978: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x263978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26397c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26397cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x263980: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x263980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_263984:
    // 0x263984: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x263984u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x263988: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x263988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26398c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x26398cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263990: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x263990u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x263994: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x263994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263998: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x263998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x26399c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x26399cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2639a0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2639a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2639a4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2639a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2639a8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2639a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2639ac: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2639acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2639b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2639b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2639b4: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x2639b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2639b8: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2639b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2639bc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2639bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2639c0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2639c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2639c4: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2639c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x2639c8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2639cc: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2639ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2639d0: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2639d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x2639d4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2639d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2639d8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2639d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2639dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2639dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2639e0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2639e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2639e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2639e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2639e8: 0x8e7400b8  lw          $s4, 0xB8($s3)
    ctx->pc = 0x2639e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x2639ec: 0xa3a00031  sb          $zero, 0x31($sp)
    ctx->pc = 0x2639ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2639f0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2639f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2639f4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2639f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2639f8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2639f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2639fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2639fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x263a00: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x263a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x263a04: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x263a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x263a08: 0xa3a00032  sb          $zero, 0x32($sp)
    ctx->pc = 0x263a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x263a0c: 0x8e650274  lw          $a1, 0x274($s3)
    ctx->pc = 0x263a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
    // 0x263a10: 0x8e6600d4  lw          $a2, 0xD4($s3)
    ctx->pc = 0x263a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x263a14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x263a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x263a18: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x263a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x263a1c: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x263a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x263a20: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x263a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x263a24: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x263a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x263a28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x263a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x263a2c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x263A2Cu;
    SET_GPR_U32(ctx, 31, 0x263A34u);
    ctx->pc = 0x263A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A2Cu;
    // 0x263a30: 0xa3a20031  sb          $v0, 0x31($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x263A2Cu, 0x263A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A34u;
label_263a34:
    // 0x263a34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a38: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x263a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x263a3c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263a40: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x263A40u;
    SET_GPR_U32(ctx, 31, 0x263A48u);
    ctx->pc = 0x263A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A40u;
    // 0x263a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263A40u, 0x263A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A48u;
label_263a48:
    // 0x263a48: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x263A48u;
    {
        const bool branch_taken_0x263a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a48) {
            ctx->pc = 0x263A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263A48u;
            // 0x263a4c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263A5Cu;
            goto label_263a5c;
        }
    }
    ctx->pc = 0x263A50u;
    // 0x263a50: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263A50u;
    SET_GPR_U32(ctx, 31, 0x263A58u);
    ctx->pc = 0x263A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A50u;
    // 0x263a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263A50u, 0x263A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A58u;
label_263a58:
    // 0x263a58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x263a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_263a5c:
    // 0x263a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a60: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x263a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x263a64: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x263a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a68: 0xc68c05dc  lwc1        $f12, 0x5DC($s4)
    ctx->pc = 0x263a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263a6c: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x263a70: 0x8e670288  lw          $a3, 0x288($s3)
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x263a74: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x263a74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x263a78: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x263a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x263a7c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x263a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x263a80: 0x46006c06  mov.s       $f16, $f13
    ctx->pc = 0x263a80u;
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    // 0x263a84: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x263a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x263a88: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x263a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a8c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x263a8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a90: 0xc0d1d7e  jal         func_3475F8
    ctx->pc = 0x263A90u;
    SET_GPR_U32(ctx, 31, 0x263A98u);
    ctx->pc = 0x263A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A90u;
    // 0x263a94: 0x268b05c0  addiu       $t3, $s4, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x263A90u, 0x263A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A98u;
label_263a98:
    // 0x263a98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x263a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a9c: 0xc0d438a  jal         func_350E28
    ctx->pc = 0x263A9Cu;
    SET_GPR_U32(ctx, 31, 0x263AA4u);
    ctx->pc = 0x263AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A9Cu;
    // 0x263aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x263A9Cu, 0x263AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AA4u;
label_263aa4:
    // 0x263aa4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263AA4u;
    {
        const bool branch_taken_0x263aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263aa4) {
            ctx->pc = 0x263ABCu;
            goto label_263abc;
        }
    }
    ctx->pc = 0x263AACu;
    // 0x263aac: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x263AACu;
    {
        const bool branch_taken_0x263aac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AACu;
        // 0x263ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263aac) {
            ctx->pc = 0x263ABCu;
            goto label_263abc;
        }
    }
    ctx->pc = 0x263AB4u;
    // 0x263ab4: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x263AB4u;
    SET_GPR_U32(ctx, 31, 0x263ABCu);
    ctx->pc = 0x263AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AB4u;
    // 0x263ab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x263AB4u, 0x263ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263ABCu;
label_263abc:
    // 0x263abc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x263ABCu;
    SET_GPR_U32(ctx, 31, 0x263AC4u);
    ctx->pc = 0x263AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263ABCu;
    // 0x263ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263ABCu, 0x263AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AC4u;
label_263ac4:
    // 0x263ac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263AC4u;
    {
        const bool branch_taken_0x263ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AC4u;
        // 0x263ac8: 0x26340080  addiu       $s4, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ac4) {
            ctx->pc = 0x263AD8u;
            goto label_263ad8;
        }
    }
    ctx->pc = 0x263ACCu;
    // 0x263acc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263ACCu;
    SET_GPR_U32(ctx, 31, 0x263AD4u);
    ctx->pc = 0x263AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263ACCu;
    // 0x263ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263ACCu, 0x263AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AD4u;
label_263ad4:
    // 0x263ad4: 0x26340080  addiu       $s4, $s1, 0x80
    ctx->pc = 0x263ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_263ad8:
    // 0x263ad8: 0x263000b0  addiu       $s0, $s1, 0xB0
    ctx->pc = 0x263ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x263adc: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x263adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x263ae0: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x263ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x263ae4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x263ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263ae8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x263ae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263aec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x263aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263af0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x263af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263af4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x263af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263af8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x263af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263afc: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x263afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263b00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x263b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x263b04: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x263b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x263b08: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x263b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x263b0c: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x263b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x263b10: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x263b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x263b14: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x263b14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x263b18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x263b18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263b1c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x263b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263b20: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x263b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b28: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x263b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263b2c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x263b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b30: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x263b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263b34: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x263b34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x263b38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x263b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x263b3c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x263b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x263b40: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x263B40u;
    SET_GPR_U32(ctx, 31, 0x263B48u);
    ctx->pc = 0x263B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B40u;
    // 0x263b44: 0xe7a2006c  swc1        $f2, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263B40u, 0x263B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B48u;
label_263b48:
    // 0x263b48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263B48u;
    {
        const bool branch_taken_0x263b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B48u;
        // 0x263b4c: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b48) {
            ctx->pc = 0x263B5Cu;
            goto label_263b5c;
        }
    }
    ctx->pc = 0x263B50u;
    // 0x263b50: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263B50u;
    SET_GPR_U32(ctx, 31, 0x263B58u);
    ctx->pc = 0x263B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B50u;
    // 0x263b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263B50u, 0x263B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B58u;
label_263b58:
    // 0x263b58: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x263b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_263b5c:
    // 0x263b5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x263b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263b60: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x263b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263b64: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x263b64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263b68: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x263b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x263b6c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x263b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263b70: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x263b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x263b74: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x263b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263b78: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x263b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b7c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x263b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263b80: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x263b80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x263b84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x263b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x263b88: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x263b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x263b8c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x263B8Cu;
    SET_GPR_U32(ctx, 31, 0x263B94u);
    ctx->pc = 0x263B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B8Cu;
    // 0x263b90: 0xe7a2005c  swc1        $f2, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x263B8Cu, 0x263B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B94u;
label_263b94:
    // 0x263b94: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x263b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x263b98: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x263B98u;
    SET_GPR_U32(ctx, 31, 0x263BA0u);
    ctx->pc = 0x263B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B98u;
    // 0x263b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263B98u, 0x263BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BA0u;
label_263ba0:
    // 0x263ba0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263BA0u;
    {
        const bool branch_taken_0x263ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BA0u;
        // 0x263ba4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ba0) {
            ctx->pc = 0x263BB4u;
            goto label_263bb4;
        }
    }
    ctx->pc = 0x263BA8u;
    // 0x263ba8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263BA8u;
    SET_GPR_U32(ctx, 31, 0x263BB0u);
    ctx->pc = 0x263BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263BA8u;
    // 0x263bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263BA8u, 0x263BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BB0u;
label_263bb0:
    // 0x263bb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x263bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263bb4:
    // 0x263bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263bb8: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x263BB8u;
    SET_GPR_U32(ctx, 31, 0x263BC0u);
    ctx->pc = 0x263BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263BB8u;
    // 0x263bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x263BB8u, 0x263BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BC0u;
label_263bc0:
    // 0x263bc0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x263bc4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x263bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x263bc8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x263bc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263bcc: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x263bccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x263bd0: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x263bd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x263bd4: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x263bd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x263bd8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x263bd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x263bdc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x263bdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x263be0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x263be0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x263be4: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x263be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x263be8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x263be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x263bec: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x263becu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x263bf0: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x263bf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x263bf4: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x263bf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x263bf8: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x263bf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x263bfc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x263bfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x263c00: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x263c00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x263c04: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x263c04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x263c08: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x263c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x263c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x263c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c10: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x263c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c18: 0xc0d279e  jal         func_349E78
    ctx->pc = 0x263C18u;
    SET_GPR_U32(ctx, 31, 0x263C20u);
    ctx->pc = 0x263C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C18u;
    // 0x263c1c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349E78u, 0x263C18u, 0x263C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C20u;
label_263c20:
    // 0x263c20: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x263c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x263c24: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x263c24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x263c28: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x263c28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x263c2c: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x263c2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263c30: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x263c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x263c34: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x263c34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263c38: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x263c38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x263c3c: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x263c3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x263c40: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x263c40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x263c44: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x263c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x263c48: 0x3e00008  jr          $ra
    ctx->pc = 0x263C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C48u;
        // 0x263c4c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263C50u;
}
