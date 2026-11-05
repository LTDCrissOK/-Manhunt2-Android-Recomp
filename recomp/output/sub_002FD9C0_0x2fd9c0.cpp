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

// Function: sub_002FD9C0
// Address: 0x2fd9c0 - 0x2fdb90
void sub_002FD9C0_0x2fd9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD9C0_0x2fd9c0");
#endif

    switch (ctx->pc) {
        case 0x2fd9c0u: goto label_2fd9c0;
        case 0x2fd9c4u: goto label_2fd9c4;
        case 0x2fd9c8u: goto label_2fd9c8;
        case 0x2fd9ccu: goto label_2fd9cc;
        case 0x2fd9d0u: goto label_2fd9d0;
        case 0x2fd9d4u: goto label_2fd9d4;
        case 0x2fd9d8u: goto label_2fd9d8;
        case 0x2fd9dcu: goto label_2fd9dc;
        case 0x2fd9e0u: goto label_2fd9e0;
        case 0x2fd9e4u: goto label_2fd9e4;
        case 0x2fd9e8u: goto label_2fd9e8;
        case 0x2fd9ecu: goto label_2fd9ec;
        case 0x2fd9f0u: goto label_2fd9f0;
        case 0x2fd9f4u: goto label_2fd9f4;
        case 0x2fd9f8u: goto label_2fd9f8;
        case 0x2fd9fcu: goto label_2fd9fc;
        case 0x2fda00u: goto label_2fda00;
        case 0x2fda04u: goto label_2fda04;
        case 0x2fda08u: goto label_2fda08;
        case 0x2fda0cu: goto label_2fda0c;
        case 0x2fda10u: goto label_2fda10;
        case 0x2fda14u: goto label_2fda14;
        case 0x2fda18u: goto label_2fda18;
        case 0x2fda1cu: goto label_2fda1c;
        case 0x2fda20u: goto label_2fda20;
        case 0x2fda24u: goto label_2fda24;
        case 0x2fda28u: goto label_2fda28;
        case 0x2fda2cu: goto label_2fda2c;
        case 0x2fda30u: goto label_2fda30;
        case 0x2fda34u: goto label_2fda34;
        case 0x2fda38u: goto label_2fda38;
        case 0x2fda3cu: goto label_2fda3c;
        case 0x2fda40u: goto label_2fda40;
        case 0x2fda44u: goto label_2fda44;
        case 0x2fda48u: goto label_2fda48;
        case 0x2fda4cu: goto label_2fda4c;
        case 0x2fda50u: goto label_2fda50;
        case 0x2fda54u: goto label_2fda54;
        case 0x2fda58u: goto label_2fda58;
        case 0x2fda5cu: goto label_2fda5c;
        case 0x2fda60u: goto label_2fda60;
        case 0x2fda64u: goto label_2fda64;
        case 0x2fda68u: goto label_2fda68;
        case 0x2fda6cu: goto label_2fda6c;
        case 0x2fda70u: goto label_2fda70;
        case 0x2fda74u: goto label_2fda74;
        case 0x2fda78u: goto label_2fda78;
        case 0x2fda7cu: goto label_2fda7c;
        case 0x2fda80u: goto label_2fda80;
        case 0x2fda84u: goto label_2fda84;
        case 0x2fda88u: goto label_2fda88;
        case 0x2fda8cu: goto label_2fda8c;
        case 0x2fda90u: goto label_2fda90;
        case 0x2fda94u: goto label_2fda94;
        case 0x2fda98u: goto label_2fda98;
        case 0x2fda9cu: goto label_2fda9c;
        case 0x2fdaa0u: goto label_2fdaa0;
        case 0x2fdaa4u: goto label_2fdaa4;
        case 0x2fdaa8u: goto label_2fdaa8;
        case 0x2fdaacu: goto label_2fdaac;
        case 0x2fdab0u: goto label_2fdab0;
        case 0x2fdab4u: goto label_2fdab4;
        case 0x2fdab8u: goto label_2fdab8;
        case 0x2fdabcu: goto label_2fdabc;
        case 0x2fdac0u: goto label_2fdac0;
        case 0x2fdac4u: goto label_2fdac4;
        case 0x2fdac8u: goto label_2fdac8;
        case 0x2fdaccu: goto label_2fdacc;
        case 0x2fdad0u: goto label_2fdad0;
        case 0x2fdad4u: goto label_2fdad4;
        case 0x2fdad8u: goto label_2fdad8;
        case 0x2fdadcu: goto label_2fdadc;
        case 0x2fdae0u: goto label_2fdae0;
        case 0x2fdae4u: goto label_2fdae4;
        case 0x2fdae8u: goto label_2fdae8;
        case 0x2fdaecu: goto label_2fdaec;
        case 0x2fdaf0u: goto label_2fdaf0;
        case 0x2fdaf4u: goto label_2fdaf4;
        case 0x2fdaf8u: goto label_2fdaf8;
        case 0x2fdafcu: goto label_2fdafc;
        case 0x2fdb00u: goto label_2fdb00;
        case 0x2fdb04u: goto label_2fdb04;
        case 0x2fdb08u: goto label_2fdb08;
        case 0x2fdb0cu: goto label_2fdb0c;
        case 0x2fdb10u: goto label_2fdb10;
        case 0x2fdb14u: goto label_2fdb14;
        case 0x2fdb18u: goto label_2fdb18;
        case 0x2fdb1cu: goto label_2fdb1c;
        case 0x2fdb20u: goto label_2fdb20;
        case 0x2fdb24u: goto label_2fdb24;
        case 0x2fdb28u: goto label_2fdb28;
        case 0x2fdb2cu: goto label_2fdb2c;
        case 0x2fdb30u: goto label_2fdb30;
        case 0x2fdb34u: goto label_2fdb34;
        case 0x2fdb38u: goto label_2fdb38;
        case 0x2fdb3cu: goto label_2fdb3c;
        case 0x2fdb40u: goto label_2fdb40;
        case 0x2fdb44u: goto label_2fdb44;
        case 0x2fdb48u: goto label_2fdb48;
        case 0x2fdb4cu: goto label_2fdb4c;
        case 0x2fdb50u: goto label_2fdb50;
        case 0x2fdb54u: goto label_2fdb54;
        case 0x2fdb58u: goto label_2fdb58;
        case 0x2fdb5cu: goto label_2fdb5c;
        case 0x2fdb60u: goto label_2fdb60;
        case 0x2fdb64u: goto label_2fdb64;
        case 0x2fdb68u: goto label_2fdb68;
        case 0x2fdb6cu: goto label_2fdb6c;
        case 0x2fdb70u: goto label_2fdb70;
        case 0x2fdb74u: goto label_2fdb74;
        case 0x2fdb78u: goto label_2fdb78;
        case 0x2fdb7cu: goto label_2fdb7c;
        case 0x2fdb80u: goto label_2fdb80;
        case 0x2fdb84u: goto label_2fdb84;
        case 0x2fdb88u: goto label_2fdb88;
        case 0x2fdb8cu: goto label_2fdb8c;
        default: break;
    }

    ctx->pc = 0x2fd9c0u;

label_2fd9c0:
    // 0x2fd9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fd9c4:
    // 0x2fd9c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2fd9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2fd9c8:
    // 0x2fd9c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd9cc:
    // 0x2fd9cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fd9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2fd9d0:
    // 0x2fd9d0: 0x260613b0  addiu       $a2, $s0, 0x13B0
    ctx->pc = 0x2fd9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5040));
label_2fd9d4:
    // 0x2fd9d4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2fd9d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2fd9d8:
    // 0x2fd9d8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2fd9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fd9dc:
    // 0x2fd9dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fd9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fd9e0:
    // 0x2fd9e0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fd9e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2fd9e4:
    // 0x2fd9e4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fd9e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2fd9e8:
    // 0x2fd9e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fd9e8u;
    // VWAITQ (Q already resolved in this runtime)
label_2fd9ec:
    // 0x2fd9ec: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2fd9ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fd9f0:
    // 0x2fd9f0: 0xfa0113b0  sqc2        $vf1, 0x13B0($s0)
    ctx->pc = 0x2fd9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5040), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fd9f4:
    // 0x2fd9f4: 0x8e0411e8  lw          $a0, 0x11E8($s0)
    ctx->pc = 0x2fd9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fd9f8:
    // 0x2fd9f8: 0x260513a0  addiu       $a1, $s0, 0x13A0
    ctx->pc = 0x2fd9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5024));
label_2fd9fc:
    // 0x2fd9fc: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2fd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2fda00:
    // 0x2fda00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fda04:
    // 0x2fda04: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2fda04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2fda08:
    // 0x2fda08: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x2fda08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fda0c:
    // 0x2fda0c: 0x8e0211e8  lw          $v0, 0x11E8($s0)
    ctx->pc = 0x2fda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fda10:
    // 0x2fda10: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2fda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2fda14:
    // 0x2fda14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fda14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fda18:
    // 0x2fda18: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2fda18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2fda1c:
    // 0x2fda1c: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x2fda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fda20:
    // 0x2fda20: 0x8e0311e8  lw          $v1, 0x11E8($s0)
    ctx->pc = 0x2fda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fda24:
    // 0x2fda24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fda24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2fda28:
    // 0x2fda28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fda28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2fda2c:
    // 0x2fda2c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x2fda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_2fda30:
    // 0x2fda30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fda30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fda34:
    // 0x2fda34: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fda34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2fda38:
    // 0x2fda38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2fda38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2fda3c:
    // 0x2fda3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2fda40:
    // 0x2fda40: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2fda40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2fda44:
    // 0x2fda44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fda44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fda48:
    // 0x2fda48: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x2fda48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fda4c:
    // 0x2fda4c: 0x8e0211e8  lw          $v0, 0x11E8($s0)
    ctx->pc = 0x2fda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fda50:
    // 0x2fda50: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x2fda50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2fda54:
    // 0x2fda54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fda58:
    // 0x2fda58: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2fda58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2fda5c:
    // 0x2fda5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fda5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fda60:
    // 0x2fda60: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2fda60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2fda64:
    // 0x2fda64: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2fda64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2fda68:
    // 0x2fda68: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2fda68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fda6c:
    // 0x2fda6c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fda6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fda70:
    // 0x2fda70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2fda70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fda74:
    // 0x2fda74: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2fda74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fda78:
    // 0x2fda78: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fda78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fda7c:
    // 0x2fda7c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2fda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fda80:
    // 0x2fda80: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fda80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2fda84:
    // 0x2fda84: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fda84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2fda88:
    // 0x2fda88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fda88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2fda8c:
    // 0x2fda8c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2fda8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2fda90:
    // 0x2fda90: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fda90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fda94:
    // 0x2fda94: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x2fda94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fda98:
    // 0x2fda98: 0x8e0211e8  lw          $v0, 0x11E8($s0)
    ctx->pc = 0x2fda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fda9c:
    // 0x2fda9c: 0xc0767f2  jal         func_1D9FC8
label_2fdaa0:
    if (ctx->pc == 0x2FDAA0u) {
        ctx->pc = 0x2FDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDA9Cu;
        // 0x2fdaa0: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDAA4u;
        goto label_2fdaa4;
    }
    ctx->pc = 0x2FDA9Cu;
    SET_GPR_U32(ctx, 31, 0x2FDAA4u);
    ctx->pc = 0x2FDAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA9Cu;
    // 0x2fdaa0: 0x8c4400c4  lw          $a0, 0xC4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FDA9Cu, 0x2FDAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAA4u;
label_2fdaa4:
    // 0x2fdaa4: 0x8e0411e8  lw          $a0, 0x11E8($s0)
    ctx->pc = 0x2fdaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fdaa8:
    // 0x2fdaa8: 0xc08bdc6  jal         func_22F718
label_2fdaac:
    if (ctx->pc == 0x2FDAACu) {
        ctx->pc = 0x2FDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAA8u;
        // 0x2fdaac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDAB0u;
        goto label_2fdab0;
    }
    ctx->pc = 0x2FDAA8u;
    SET_GPR_U32(ctx, 31, 0x2FDAB0u);
    ctx->pc = 0x2FDAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAA8u;
    // 0x2fdaac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x2FDAA8u, 0x2FDAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAB0u;
label_2fdab0:
    // 0x2fdab0: 0x8e0211e8  lw          $v0, 0x11E8($s0)
    ctx->pc = 0x2fdab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
label_2fdab4:
    // 0x2fdab4: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2fdab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2fdab8:
    // 0x2fdab8: 0x8c460104  lw          $a2, 0x104($v0)
    ctx->pc = 0x2fdab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_2fdabc:
    // 0x2fdabc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2fdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fdac0:
    // 0x2fdac0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2fdac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fdac4:
    // 0x2fdac4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2fdac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2fdac8:
    // 0x2fdac8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fdac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdacc:
    // 0x2fdacc: 0xf8a10040  sqc2        $vf1, 0x40($a1)
    ctx->pc = 0x2fdaccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdad0:
    // 0x2fdad0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2fdad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2fdad4:
    // 0x2fdad4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fdad4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fdad8:
    // 0x2fdad8: 0xf8a10050  sqc2        $vf1, 0x50($a1)
    ctx->pc = 0x2fdad8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdadc:
    // 0x2fdadc: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2fdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2fdae0:
    // 0x2fdae0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fdae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdae4:
    // 0x2fdae4: 0xf8a10060  sqc2        $vf1, 0x60($a1)
    ctx->pc = 0x2fdae4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdae8:
    // 0x2fdae8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2fdae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2fdaec:
    // 0x2fdaec: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2fdaecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2fdaf0:
    // 0x2fdaf0: 0xf8a10070  sqc2        $vf1, 0x70($a1)
    ctx->pc = 0x2fdaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdaf4:
    // 0x2fdaf4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2fdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2fdaf8:
    // 0x2fdaf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2fdaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdafc:
    // 0x2fdafc: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x2fdafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2fdb00:
    // 0x2fdb00: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2fdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2fdb04:
    // 0x2fdb04: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fdb04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fdb08:
    // 0x2fdb08: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2fdb08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdb0c:
    // 0x2fdb0c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fdb0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fdb10:
    // 0x2fdb10: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fdb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdb14:
    // 0x2fdb14: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2fdb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fdb18:
    // 0x2fdb18: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2fdb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fdb1c:
    // 0x2fdb1c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2fdb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2fdb20:
    // 0x2fdb20: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x2fdb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2fdb24:
    // 0x2fdb24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fdb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2fdb28:
    // 0x2fdb28: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fdb28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2fdb2c:
    // 0x2fdb2c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2fdb2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2fdb30:
    // 0x2fdb30: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2fdb30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2fdb34:
    // 0x2fdb34: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fdb34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdb38:
    // 0x2fdb38: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x2fdb38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fdb3c:
    // 0x2fdb3c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2fdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2fdb40:
    // 0x2fdb40: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2fdb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2fdb44:
    // 0x2fdb44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fdb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fdb48:
    // 0x2fdb48: 0xc0763f2  jal         func_1D8FC8
label_2fdb4c:
    if (ctx->pc == 0x2FDB4Cu) {
        ctx->pc = 0x2FDB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB48u;
        // 0x2fdb4c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDB50u;
        goto label_2fdb50;
    }
    ctx->pc = 0x2FDB48u;
    SET_GPR_U32(ctx, 31, 0x2FDB50u);
    ctx->pc = 0x2FDB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB48u;
    // 0x2fdb4c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2FDB48u, 0x2FDB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB50u;
label_2fdb50:
    // 0x2fdb50: 0xc0767f2  jal         func_1D9FC8
label_2fdb54:
    if (ctx->pc == 0x2FDB54u) {
        ctx->pc = 0x2FDB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB50u;
        // 0x2fdb54: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDB58u;
        goto label_2fdb58;
    }
    ctx->pc = 0x2FDB50u;
    SET_GPR_U32(ctx, 31, 0x2FDB58u);
    ctx->pc = 0x2FDB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB50u;
    // 0x2fdb54: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FDB50u, 0x2FDB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB58u;
label_2fdb58:
    // 0x2fdb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb5c:
    // 0x2fdb5c: 0xc08bdc6  jal         func_22F718
label_2fdb60:
    if (ctx->pc == 0x2FDB60u) {
        ctx->pc = 0x2FDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB5Cu;
        // 0x2fdb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDB64u;
        goto label_2fdb64;
    }
    ctx->pc = 0x2FDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2FDB64u);
    ctx->pc = 0x2FDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB5Cu;
    // 0x2fdb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F718u, 0x2FDB5Cu, 0x2FDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB64u;
label_2fdb64:
    // 0x2fdb64: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x2fdb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2fdb68:
    // 0x2fdb68: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fdb6c:
    // 0x2fdb6c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2fdb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2fdb70:
    // 0x2fdb70: 0x40f809  jalr        $v0
label_2fdb74:
    if (ctx->pc == 0x2FDB74u) {
        ctx->pc = 0x2FDB78u;
        goto label_2fdb78;
    }
    ctx->pc = 0x2FDB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FDB78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB70u, 0x2FDB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FDB78u;
label_2fdb78:
    // 0x2fdb78: 0xc076de4  jal         func_1DB790
label_2fdb7c:
    if (ctx->pc == 0x2FDB7Cu) {
        ctx->pc = 0x2FDB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB78u;
        // 0x2fdb7c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDB80u;
        goto label_2fdb80;
    }
    ctx->pc = 0x2FDB78u;
    SET_GPR_U32(ctx, 31, 0x2FDB80u);
    ctx->pc = 0x2FDB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDB78u;
    // 0x2fdb7c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2FDB78u, 0x2FDB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDB80u;
label_2fdb80:
    // 0x2fdb80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2fdb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdb84:
    // 0x2fdb84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fdb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2fdb88:
    // 0x2fdb88: 0x3e00008  jr          $ra
label_2fdb8c:
    if (ctx->pc == 0x2FDB8Cu) {
        ctx->pc = 0x2FDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB88u;
        // 0x2fdb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FDB90u;
        goto label_fallthrough_0x2fdb88;
    }
    ctx->pc = 0x2FDB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDB88u;
        // 0x2fdb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fdb88:
    ctx->pc = 0x2FDB90u;
}
