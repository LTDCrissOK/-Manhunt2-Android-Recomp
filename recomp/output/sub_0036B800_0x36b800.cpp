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

// Function: sub_0036B800
// Address: 0x36b800 - 0x36bbb0
void sub_0036B800_0x36b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B800_0x36b800");
#endif

    switch (ctx->pc) {
        case 0x36ba94u: goto label_36ba94;
        case 0x36bb08u: goto label_36bb08;
        case 0x36bb7cu: goto label_36bb7c;
        case 0x36bb84u: goto label_36bb84;
        default: break;
    }

    ctx->pc = 0x36b800u;

    // 0x36b800: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x36b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x36b804: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x36b804u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b808: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x36b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x36b80c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x36b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x36b810: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36b810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b814: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x36b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x36b818: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36b818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b81c: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x36b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x36b820: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x36b820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b824: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x36b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x36b828: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x36b828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b82c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x36b82cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x36b830: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x36b830u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36b834: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36B834u;
    {
        const bool branch_taken_0x36b834 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B834u;
        // 0x36b838: 0xe7ac00a4  swc1        $f12, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b834) {
            ctx->pc = 0x36B844u;
            goto label_36b844;
        }
    }
    ctx->pc = 0x36B83Cu;
    // 0x36b83c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x36b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x36b840: 0x8c4abd48  lw          $t2, -0x42B8($v0)
    ctx->pc = 0x36b840u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x3FBD48u));
label_36b844:
    // 0x36b844: 0x8d430100  lw          $v1, 0x100($t2)
    ctx->pc = 0x36b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 256)));
    // 0x36b848: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x36b848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36b84c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x36b84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36b850: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36b850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36b854: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x36b854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b858: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x36b858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x36b85c: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x36b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x36b860: 0x460260c2  mul.s       $f3, $f12, $f2
    ctx->pc = 0x36b860u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x36b864: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x36b864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x36b868: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x36b868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b86c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x36b86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x36b870: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x36b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b874: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x36b874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36b878: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x36b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b87c: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x36b87cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36b880: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x36b880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x36b884: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x36b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b888: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x36b888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36b88c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b890: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x36b890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x36b894: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x36b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b898: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x36b898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36b89c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x36b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b8a0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x36b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36b8a4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x36b8a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36b8a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x36b8a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x36b8ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36b8acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b8b0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x36b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b8b4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x36b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b8b8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x36b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36b8bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x36b8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36b8c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x36b8c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36b8c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x36b8c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36b8c8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x36b8c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x36b8cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x36b8ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b8d0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x36b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b8d4: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36b8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36b8d8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36b8d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36b8dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b8dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b8e0: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36b8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b8e4: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x36b8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b8e8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x36b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x36b8ec: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x36b8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b8f0: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x36b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b8f4: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x36b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b8f8: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x36b8f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x36b8fc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x36b8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x36b900: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x36b900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x36b904: 0xe7a200ec  swc1        $f2, 0xEC($sp)
    ctx->pc = 0x36b904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x36b908: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36b908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b90c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36b90cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36b910: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b914: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36b914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b918: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x36b918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b91c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x36b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36b920: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x36b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b924: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x36b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b928: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x36b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b92c: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x36b92cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36b930: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x36b930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36b934: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x36b934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36b938: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x36b938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36b93c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36b93cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b940: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x36b940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b944: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36b944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36b948: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36b948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36b94c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b94cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b950: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b954: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b958: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x36b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b95c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x36b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b960: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x36b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b964: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x36b964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x36b968: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x36b968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x36b96c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x36b96cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x36b970: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x36b970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x36b974: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36b974u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b978: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36b978u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36b97c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b980: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b984: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b988: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x36b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b98c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x36b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b990: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x36b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b994: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36b998: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36b998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36b99c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36b99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36b9a0: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36b9a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36b9a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36b9a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36b9a8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x36b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b9ac: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36b9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36b9b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36b9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36b9b4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b9b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b9b8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b9bc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b9c0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x36b9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b9c4: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x36b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b9c8: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x36b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b9cc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x36b9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x36b9d0: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x36b9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x36b9d4: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x36b9d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x36b9d8: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x36b9d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x36b9dc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36b9dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36b9e0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36b9e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36b9e4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36b9e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36b9e8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36b9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36b9ec: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36b9f0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x36b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36b9f4: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x36b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36b9f8: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x36b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36b9fc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36b9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36ba00: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36ba00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36ba04: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36ba04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36ba08: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36ba08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36ba0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36ba0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ba10: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x36ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ba14: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x36ba14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36ba18: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x36ba18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36ba1c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ba1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ba20: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ba24: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36ba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ba28: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x36ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ba2c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x36ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ba30: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x36ba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ba34: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x36ba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x36ba38: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x36ba38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x36ba3c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x36ba3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x36ba40: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x36ba40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x36ba44: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x36ba44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ba48: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36ba48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36ba4c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36ba4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x36ba50: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x36ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ba54: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x36ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ba58: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x36ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ba5c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x36ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ba60: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x36ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36ba64: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x36ba64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x36ba68: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36ba68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x36ba6c: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x36ba6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x36ba70: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x36ba70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x36ba74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x36ba74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36ba78: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x36ba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36ba7c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x36ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ba80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36ba84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36ba88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x36ba88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x36ba8c: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x36BA8Cu;
    SET_GPR_U32(ctx, 31, 0x36BA94u);
    ctx->pc = 0x36BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA8Cu;
    // 0x36ba90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x36BA8Cu, 0x36BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA94u;
label_36ba94:
    // 0x36ba94: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x36ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ba98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba9c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x36ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36baa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36baa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baa4: 0xc7ad0064  lwc1        $f13, 0x64($sp)
    ctx->pc = 0x36baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36baa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36baa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baac: 0xc7ae0068  lwc1        $f14, 0x68($sp)
    ctx->pc = 0x36baacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36bab0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36bab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bab4: 0xc7af0070  lwc1        $f15, 0x70($sp)
    ctx->pc = 0x36bab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36bab8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x36bab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36babc: 0xc7b00074  lwc1        $f16, 0x74($sp)
    ctx->pc = 0x36babcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36bac0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x36bac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bac4: 0xc7b10078  lwc1        $f17, 0x78($sp)
    ctx->pc = 0x36bac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36bac8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x36bac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bacc: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x36baccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36bad0: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x36bad0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bad4: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x36bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36bad8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36bad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36badc: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x36badcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36bae0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x36bae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36bae4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36bae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36bae8: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x36bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x36baec: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x36baecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x36baf0: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x36baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x36baf4: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x36baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x36baf8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x36baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x36bafc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x36bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x36bb00: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x36BB00u;
    SET_GPR_U32(ctx, 31, 0x36BB08u);
    ctx->pc = 0x36BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB00u;
    // 0x36bb04: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x36BB00u, 0x36BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB08u;
label_36bb08:
    // 0x36bb08: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x36bb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36bb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36bb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36bb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb18: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36bb18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb1c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x36bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36bb20: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x36bb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36bb24: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x36bb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb28: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x36bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36bb2c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36bb2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb30: 0xc7af0080  lwc1        $f15, 0x80($sp)
    ctx->pc = 0x36bb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36bb34: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x36bb34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb38: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x36bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x36bb3c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x36bb3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb40: 0xc7b10088  lwc1        $f17, 0x88($sp)
    ctx->pc = 0x36bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x36bb44: 0xc7b20090  lwc1        $f18, 0x90($sp)
    ctx->pc = 0x36bb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x36bb48: 0xc7b30094  lwc1        $f19, 0x94($sp)
    ctx->pc = 0x36bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x36bb4c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36bb4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36bb50: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x36bb50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x36bb54: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x36bb54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x36bb58: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x36bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x36bb5c: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x36bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x36bb60: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x36bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x36bb64: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x36bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x36bb68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36bb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36bb6c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x36bb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x36bb70: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x36bb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x36bb74: 0xc0dabf6  jal         func_36AFD8
    ctx->pc = 0x36BB74u;
    SET_GPR_U32(ctx, 31, 0x36BB7Cu);
    ctx->pc = 0x36BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB74u;
    // 0x36bb78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AFD8u, 0x36BB74u, 0x36BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB7Cu;
label_36bb7c:
    // 0x36bb7c: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x36BB7Cu;
    SET_GPR_U32(ctx, 31, 0x36BB84u);
    ctx->pc = 0x36BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB7Cu;
    // 0x36bb80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x36BB7Cu, 0x36BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB84u;
label_36bb84:
    // 0x36bb84: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x36bb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x36bb88: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x36bb88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x36bb8c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x36bb8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36bb90: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x36bb90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x36bb94: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x36bb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x36bb98: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x36bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36bb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB9Cu;
        // 0x36bba0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BBA4u;
    // 0x36bba4: 0x0  nop
    ctx->pc = 0x36bba4u;
    // NOP
    // 0x36bba8: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x36bba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x36bbac: 0x0  nop
    ctx->pc = 0x36bbacu;
    // NOP
    ctx->pc = 0x36bbb0u;
}
