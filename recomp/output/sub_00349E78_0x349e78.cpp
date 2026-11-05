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

// Function: sub_00349E78
// Address: 0x349e78 - 0x349f00
void sub_00349E78_0x349e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349E78_0x349e78");
#endif

    ctx->pc = 0x349e78u;

    // 0x349e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349e7c: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x349e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
    // 0x349e80: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x349e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x349e84: 0xf88100b0  sqc2        $vf1, 0xB0($a0)
    ctx->pc = 0x349e84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349e88: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x349e88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x349e8c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x349e8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x349e90: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x349e90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349e94: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x349e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349e98: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x349e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349e9c: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x349e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x349ea0: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x349ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349ea4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x349ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349ea8: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x349ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349eac: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x349eacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x349eb0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x349eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x349eb4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x349eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x349eb8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x349eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x349ebc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x349ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349ec0: 0xf88100c0  sqc2        $vf1, 0xC0($a0)
    ctx->pc = 0x349ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349ec4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x349ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349ec8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x349ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x349ecc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x349eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x349ed0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x349ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x349ed4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x349ed4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x349ed8: 0x4a0003bf  vwaitq
    ctx->pc = 0x349ed8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x349edc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x349edcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349ee0: 0xf88100c0  sqc2        $vf1, 0xC0($a0)
    ctx->pc = 0x349ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x349ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349eec: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x349eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
    // 0x349ef0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x349ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x349ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x349EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349EF4u;
        // 0x349ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349EFCu;
    // 0x349efc: 0x0  nop
    ctx->pc = 0x349efcu;
    // NOP
    ctx->pc = 0x349f00u;
}
