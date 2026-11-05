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

// Function: sub_002BB8F8
// Address: 0x2bb8f8 - 0x2bba98
void sub_002BB8F8_0x2bb8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB8F8_0x2bb8f8");
#endif

    switch (ctx->pc) {
        case 0x2bb954u: goto label_2bb954;
        case 0x2bb95cu: goto label_2bb95c;
        case 0x2bba04u: goto label_2bba04;
        default: break;
    }

    ctx->pc = 0x2bb8f8u;

    // 0x2bb8f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2bb8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2bb8fc: 0x3c013ed9  lui         $at, 0x3ED9
    ctx->pc = 0x2bb8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16089 << 16));
    // 0x2bb900: 0x34213dd9  ori         $at, $at, 0x3DD9
    ctx->pc = 0x2bb900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15833);
    // 0x2bb904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bb904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bb908: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2bb908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2bb90c: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x2bb90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x2bb910: 0x3421d1b7  ori         $at, $at, 0xD1B7
    ctx->pc = 0x2bb910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53687);
    // 0x2bb914: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bb914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bb918: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bb918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb91c: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x2bb91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x2bb920: 0x34210481  ori         $at, $at, 0x481
    ctx->pc = 0x2bb920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1153);
    // 0x2bb924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bb924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bb928: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bb928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb92c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2bb92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2bb930: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2bb930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2bb934: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bb934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb93c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2bb93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2bb940: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2bb940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bb944: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2bb944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bb948: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bb948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bb94c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BB94Cu;
    SET_GPR_U32(ctx, 31, 0x2BB954u);
    ctx->pc = 0x2BB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB94Cu;
    // 0x2bb950: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BB94Cu, 0x2BB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB954u;
label_2bb954:
    // 0x2bb954: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BB954u;
    SET_GPR_U32(ctx, 31, 0x2BB95Cu);
    ctx->pc = 0x2BB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB954u;
    // 0x2bb958: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BB954u, 0x2BB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB95Cu;
label_2bb95c:
    // 0x2bb95c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bb95cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb960: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2bb960u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb964: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2bb964u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb968: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2bb968u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bb96c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bb96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bb970: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2bb970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb974: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2bb974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bb978: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2bb978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb97c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2bb97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bb980: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2bb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb984: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2bb984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb988: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2bb988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bb98c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2bb98cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bb990: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2bb990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bb994: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2bb994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2bb998: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bb998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb99c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2bb99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bb9a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bb9a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb9a4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bb9a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bb9a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bb9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bb9b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bb9b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bb9b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bb9b8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bb9b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9bc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2bb9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bb9c0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bb9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb9c4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2bb9c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bb9c8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2bb9c8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bb9cc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2bb9ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bb9d0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bb9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bb9d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2bb9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb9d8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2bb9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb9dc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2bb9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bb9e0: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2bb9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bb9e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bb9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bb9e8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bb9e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bb9ec: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2bb9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bb9f0: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x2bb9f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2bb9f4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bb9f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bb9f8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2bb9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bb9fc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BB9FCu;
    SET_GPR_U32(ctx, 31, 0x2BBA04u);
    ctx->pc = 0x2BBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB9FCu;
    // 0x2bba00: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BB9FCu, 0x2BBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA04u;
label_2bba04:
    // 0x2bba04: 0xc6080008  lwc1        $f8, 0x8($s0)
    ctx->pc = 0x2bba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2bba08: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2bba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bba0c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2bba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bba10: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2bba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bba14: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2bba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bba18: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bba1c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2bba1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bba20: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2bba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bba24: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x2bba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2bba28: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x2bba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2bba2c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bba30: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2bba30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2bba34: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2bba34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2bba38: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x2bba38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bba3c: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x2bba3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bba40: 0xe7a80068  swc1        $f8, 0x68($sp)
    ctx->pc = 0x2bba40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bba44: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x2bba44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bba48: 0xe7a60074  swc1        $f6, 0x74($sp)
    ctx->pc = 0x2bba48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2bba4c: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x2bba4cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2bba50: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2bba50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2bba54: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2bba54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2bba58: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2bba58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2bba5c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2bba5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bba60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2bba60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bba64: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2bba64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bba68: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2bba68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bba6c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2bba6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bba70: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2bba70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bba74: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2bba74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bba78: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2bba78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bba7c: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x2bba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bba80: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2bba80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bba84: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2bba84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2bba88: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2bba88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bba8c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2bba8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2bba90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA90u;
        // 0x2bba94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBA98u;
}
