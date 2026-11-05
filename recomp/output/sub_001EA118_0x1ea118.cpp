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

// Function: sub_001EA118
// Address: 0x1ea118 - 0x1ea200
void sub_001EA118_0x1ea118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA118_0x1ea118");
#endif

    ctx->pc = 0x1ea118u;

    // 0x1ea118: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ea118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea11c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ea120: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ea120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ea124: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ea124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ea128: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ea128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea12c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1ea12cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea130: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ea130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea134: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ea134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea138: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ea13c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ea13cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea140: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1ea140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea144: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ea144u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea148: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ea148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea14c: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x1ea14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1ea150: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ea154: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ea154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea158: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1ea158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea15c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1ea15cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1ea160: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1ea160u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea164: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1ea164u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea168: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1ea168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea16c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1ea16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1ea170: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1ea170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1ea174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea178: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ea178u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ea17c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ea17cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea180: 0x0  nop
    ctx->pc = 0x1ea180u;
    // NOP
    // 0x1ea184: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1EA184u;
    {
        const bool branch_taken_0x1ea184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA184u;
        // 0x1ea188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea184) {
            ctx->pc = 0x1EA1BCu;
            goto label_1ea1bc;
        }
    }
    ctx->pc = 0x1EA18Cu;
    // 0x1ea18c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ea18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea190: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ea190u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ea194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ea194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea198: 0x0  nop
    ctx->pc = 0x1ea198u;
    // NOP
    // 0x1ea19c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA19Cu;
    {
        const bool branch_taken_0x1ea19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea19c) {
            ctx->pc = 0x1EA1BCu;
            goto label_1ea1bc;
        }
    }
    ctx->pc = 0x1EA1A4u;
    // 0x1ea1a4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ea1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea1a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ea1a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ea1ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ea1acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea1b0: 0x0  nop
    ctx->pc = 0x1ea1b0u;
    // NOP
    // 0x1ea1b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA1B4u;
    {
        const bool branch_taken_0x1ea1b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea1b4) {
            ctx->pc = 0x1EA1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA1B4u;
            // 0x1ea1b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA1BCu;
            goto label_1ea1bc;
        }
    }
    ctx->pc = 0x1EA1BCu;
label_1ea1bc:
    // 0x1ea1bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA1BCu;
    {
        const bool branch_taken_0x1ea1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1BCu;
        // 0x1ea1c0: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1bc) {
            ctx->pc = 0x1EA1D4u;
            goto label_1ea1d4;
        }
    }
    ctx->pc = 0x1EA1C4u;
    // 0x1ea1c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ea1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ea1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ea1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ea1cc: 0x0  nop
    ctx->pc = 0x1ea1ccu;
    // NOP
    // 0x1ea1d0: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x1ea1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_1ea1d4:
    // 0x1ea1d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ea1d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea1d8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1ea1d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1dc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1ea1dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1e0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1ea1e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1e4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ea1e4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ea1e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ea1e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ea1ec: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1ea1ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea1f0: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1ea1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1F4u;
        // 0x1ea1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA1FCu;
    // 0x1ea1fc: 0x0  nop
    ctx->pc = 0x1ea1fcu;
    // NOP
    ctx->pc = 0x1ea200u;
}
