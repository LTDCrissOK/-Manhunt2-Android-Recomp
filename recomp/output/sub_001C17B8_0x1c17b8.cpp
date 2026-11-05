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

// Function: sub_001C17B8
// Address: 0x1c17b8 - 0x1c1888
void sub_001C17B8_0x1c17b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C17B8_0x1c17b8");
#endif

    switch (ctx->pc) {
        case 0x1c187cu: goto label_1c187c;
        default: break;
    }

    ctx->pc = 0x1c17b8u;

    // 0x1c17b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c17bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1c17bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c17c0: 0x248401e0  addiu       $a0, $a0, 0x1E0
    ctx->pc = 0x1c17c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x1c17c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c17c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c17c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c17c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c17cc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c17ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c17d0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c17d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c17d4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c17d8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1c17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c17dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c17dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c17e0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1c17e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c17e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1c17e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c17e8: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c17ec: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1c17ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c17f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c17f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c17f4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c17f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c17f8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1c17f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c17fc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c17fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1800: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c1800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c1804: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c1804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c1808: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c1808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c180c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c180cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c1810: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c1810u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c1814: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c1814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1818: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c181c: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1c181cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1c1820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1824: 0x0  nop
    ctx->pc = 0x1c1824u;
    // NOP
    // 0x1c1828: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c1828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c182c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c182cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1830: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1c1830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c1834: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c1834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1838: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c1838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c183c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c183cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1840: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1c1840u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1844: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c1844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c1848: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c1848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c184c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c1850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c1850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1854: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1c1854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c1858: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c1858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c185c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1860: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1864: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c1864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1868: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c1868u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c186c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1c186cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c1870: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c1870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c1874: 0xc0f7218  jal         func_3DC860
    ctx->pc = 0x1C1874u;
    SET_GPR_U32(ctx, 31, 0x1C187Cu);
    ctx->pc = 0x1C1878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1874u;
    // 0x1c1878: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1C1874u, 0x1C187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C187Cu;
label_1c187c:
    // 0x1c187c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1880: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1880u;
        // 0x1c1884: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1888u;
}
