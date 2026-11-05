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

// Function: sub_00313940
// Address: 0x313940 - 0x313af0
void sub_00313940_0x313940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313940_0x313940");
#endif

    switch (ctx->pc) {
        case 0x313968u: goto label_313968;
        case 0x313970u: goto label_313970;
        case 0x313978u: goto label_313978;
        case 0x313ac4u: goto label_313ac4;
        case 0x313accu: goto label_313acc;
        default: break;
    }

    ctx->pc = 0x313940u;

    // 0x313940: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x313940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x313944: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x313948: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x313948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCF0u));
    // 0x31394c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313950: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x313950u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x313954: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x313954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x313958: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x313958u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31395c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x31395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x313960: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x313960u;
    SET_GPR_U32(ctx, 31, 0x313968u);
    ctx->pc = 0x313964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313960u;
    // 0x313964: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x313960u, 0x313968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313968u;
label_313968:
    // 0x313968: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x313968u;
    SET_GPR_U32(ctx, 31, 0x313970u);
    ctx->pc = 0x31396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313968u;
    // 0x31396c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x313968u, 0x313970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313970u;
label_313970:
    // 0x313970: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x313970u;
    SET_GPR_U32(ctx, 31, 0x313978u);
    ctx->pc = 0x313974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313970u;
    // 0x313974: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x313970u, 0x313978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313978u;
label_313978:
    // 0x313978: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x313978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31397c: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x31397cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x313980: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313984: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x313984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313988: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x313988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31398c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x31398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x313990: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x313994: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x313994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313998: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x313998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x31399c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x31399cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3139a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3139a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3139a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3139a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3139a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3139a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3139ac: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3139acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3139b0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3139b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3139b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3139b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3139b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3139b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3139bc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3139bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3139c0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3139c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x3139c4: 0xe4440004  swc1        $f4, 0x4($v0)
    ctx->pc = 0x3139c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3139c8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3139c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x3139cc: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3139ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x3139d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3139d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3139d4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3139d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3139d8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3139d8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3139dc: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x3139dcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3139e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3139e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3139e4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x3139e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3139e8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3139e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3139ec: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x3139ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3139f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3139f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3139f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3139f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3139f8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x3139f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3139fc: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3139fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x313a00: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x313a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x313a04: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x313a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x313a08: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x313a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313a0c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x313a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313a10: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x313a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313a14: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x313a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313a18: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x313a18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x313a1c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x313a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x313a20: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x313a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x313a24: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x313a24u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x313a28: 0x4a0003bf  vwaitq
    ctx->pc = 0x313a28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x313a2c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x313a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x313a30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x313a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313a34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x313a34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313a38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x313a38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313a3c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x313a3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x313a40: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x313a40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x313a44: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x313a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313a48: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x313a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313a4c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x313a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313a50: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x313a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x313a54: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x313a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x313a58: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x313a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x313a5c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x313a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x313a60: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x313a60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x313a64: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x313a64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313a68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x313a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313a6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x313a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313a70: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x313a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313a74: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x313a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x313a78: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x313a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x313a7c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x313a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x313a80: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x313a80u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x313a84: 0x4a0003bf  vwaitq
    ctx->pc = 0x313a84u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x313a88: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x313a88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x313a8c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x313a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313a90: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x313a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x313a94: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x313a94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313a98: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x313a98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313a9c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x313a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313aa0: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x313aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313aa4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x313aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313aa8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x313aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x313aac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x313aacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x313ab0: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x313ab0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x313ab4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x313ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x313ab8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x313ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x313abc: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x313ABCu;
    SET_GPR_U32(ctx, 31, 0x313AC4u);
    ctx->pc = 0x313AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313ABCu;
    // 0x313ac0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x313ABCu, 0x313AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313AC4u;
label_313ac4:
    // 0x313ac4: 0xc0c48da  jal         func_312368
    ctx->pc = 0x313AC4u;
    SET_GPR_U32(ctx, 31, 0x313ACCu);
    ctx->pc = 0x313AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AC4u;
    // 0x313ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x313AC4u, 0x313ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313ACCu;
label_313acc:
    // 0x313acc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x313ad0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x313ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313ad4: 0xe454bcfc  swc1        $f20, -0x4304($v0)
    ctx->pc = 0x313ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBCFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCFCu, _value); } while (0); }
    // 0x313ad8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x313ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x313adc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x313adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x313AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AE0u;
        // 0x313ae4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313AE8u;
    // 0x313ae8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x313ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x313aec: 0x0  nop
    ctx->pc = 0x313aecu;
    // NOP
    ctx->pc = 0x313af0u;
}
