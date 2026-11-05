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

// Function: sub_002C5988
// Address: 0x2c5988 - 0x2c5a00
void sub_002C5988_0x2c5988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5988_0x2c5988");
#endif

    ctx->pc = 0x2c5988u;

    // 0x2c5988: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x2c5988u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c598c: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x2c598cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c5990: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x2c5990u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c5994: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x2c5994u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c5998: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2c5998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c599c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x2c599cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c59a0: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x2c59a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2c59a4: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x2c59a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2c59a8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x2c59a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59ac: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x2c59acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59b0: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x2c59b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59b4: 0x4be5214b  vmaddw.xyzw $vf5, $vf4, $vf5w
    ctx->pc = 0x2c59b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2c59b8: 0x4be609bc  vmulax.xyzw $ACC, $vf1, $vf6x
    ctx->pc = 0x2c59b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59bc: 0x4be610bd  vmadday.xyzw $ACC, $vf2, $vf6y
    ctx->pc = 0x2c59bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59c0: 0x4be618be  vmaddaz.xyzw $ACC, $vf3, $vf6z
    ctx->pc = 0x2c59c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59c4: 0x4be6218b  vmaddw.xyzw $vf6, $vf4, $vf6w
    ctx->pc = 0x2c59c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c59c8: 0x4be709bc  vmulax.xyzw $ACC, $vf1, $vf7x
    ctx->pc = 0x2c59c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59cc: 0x4be710bd  vmadday.xyzw $ACC, $vf2, $vf7y
    ctx->pc = 0x2c59ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59d0: 0x4be718be  vmaddaz.xyzw $ACC, $vf3, $vf7z
    ctx->pc = 0x2c59d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59d4: 0x4be721cb  vmaddw.xyzw $vf7, $vf4, $vf7w
    ctx->pc = 0x2c59d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2c59d8: 0x4be809bc  vmulax.xyzw $ACC, $vf1, $vf8x
    ctx->pc = 0x2c59d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59dc: 0x4be810bd  vmadday.xyzw $ACC, $vf2, $vf8y
    ctx->pc = 0x2c59dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59e0: 0x4be818be  vmaddaz.xyzw $ACC, $vf3, $vf8z
    ctx->pc = 0x2c59e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2c59e4: 0x4be8220b  vmaddw.xyzw $vf8, $vf4, $vf8w
    ctx->pc = 0x2c59e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2c59e8: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2c59e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2c59ec: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x2c59ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2c59f0: 0xf8870020  sqc2        $vf7, 0x20($a0)
    ctx->pc = 0x2c59f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2c59f4: 0xf8880030  sqc2        $vf8, 0x30($a0)
    ctx->pc = 0x2c59f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x2c59f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C59F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C59F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5A00u;
}
