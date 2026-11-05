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

// Function: sub_0037B480
// Address: 0x37b480 - 0x37b528
void sub_0037B480_0x37b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B480_0x37b480");
#endif

    switch (ctx->pc) {
        case 0x37b4f8u: goto label_37b4f8;
        default: break;
    }

    ctx->pc = 0x37b480u;

    // 0x37b480: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x37b480u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37b484: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x37b484u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x37b488: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x37b488u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x37b48c: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x37b48cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x37b490: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x37b490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37b494: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x37b494u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x37b498: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x37b498u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x37b49c: 0xd8c40030  lqc2        $vf4, 0x30($a2)
    ctx->pc = 0x37b49cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x37b4a0: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x37b4a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4a4: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x37b4a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4a8: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x37b4a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4ac: 0x4be1424b  vmaddw.xyzw $vf9, $vf8, $vf1w
    ctx->pc = 0x37b4acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x37b4b0: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x37b4b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4b4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x37b4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4b8: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x37b4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4bc: 0x4be2428b  vmaddw.xyzw $vf10, $vf8, $vf2w
    ctx->pc = 0x37b4bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x37b4c0: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x37b4c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4c4: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x37b4c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4c8: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x37b4c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4cc: 0x4be342cb  vmaddw.xyzw $vf11, $vf8, $vf3w
    ctx->pc = 0x37b4ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x37b4d0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x37b4d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4d4: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x37b4d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4d8: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x37b4d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b4dc: 0x4be4430b  vmaddw.xyzw $vf12, $vf8, $vf4w
    ctx->pc = 0x37b4dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x37b4e0: 0xf8890000  sqc2        $vf9, 0x0($a0)
    ctx->pc = 0x37b4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x37b4e4: 0xf88a0010  sqc2        $vf10, 0x10($a0)
    ctx->pc = 0x37b4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x37b4e8: 0xf88b0020  sqc2        $vf11, 0x20($a0)
    ctx->pc = 0x37b4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x37b4ec: 0xf88c0030  sqc2        $vf12, 0x30($a0)
    ctx->pc = 0x37b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x37b4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x37B4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B4F8u;
label_37b4f8:
    // 0x37b4f8: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x37b4f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37b4fc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37b4fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37b500: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x37b500u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x37b504: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x37b504u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x37b508: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x37b508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x37b50c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x37b50cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b510: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x37b510u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b514: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x37b514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x37b518: 0x4be5208b  vmaddw.xyzw $vf2, $vf4, $vf5w
    ctx->pc = 0x37b518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x37b51c: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x37b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x37b520: 0x3e00008  jr          $ra
    ctx->pc = 0x37B520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B528u;
}
