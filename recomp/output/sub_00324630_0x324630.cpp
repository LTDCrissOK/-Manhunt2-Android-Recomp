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

// Function: sub_00324630
// Address: 0x324630 - 0x3246d0
void sub_00324630_0x324630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324630_0x324630");
#endif

    ctx->pc = 0x324630u;

    // 0x324630: 0xd88b0010  lqc2        $vf11, 0x10($a0)
    ctx->pc = 0x324630u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x324634: 0xd88e0020  lqc2        $vf14, 0x20($a0)
    ctx->pc = 0x324634u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x324638: 0xd8ac0010  lqc2        $vf12, 0x10($a1)
    ctx->pc = 0x324638u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32463c: 0xd8ad0000  lqc2        $vf13, 0x0($a1)
    ctx->pc = 0x32463cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x324640: 0x4beb712c  vsub.xyzw   $vf4, $vf14, $vf11
    ctx->pc = 0x324640u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x324644: 0x4bee5ae8  vadd.xyzw   $vf11, $vf11, $vf14
    ctx->pc = 0x324644u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], ctx->vu0_vf[14]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x324648: 0x4bec58ec  vsub.xyzw   $vf3, $vf11, $vf12
    ctx->pc = 0x324648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x32464c: 0x4bed18ec  vsub.xyzw   $vf3, $vf3, $vf13
    ctx->pc = 0x32464cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x324650: 0x4bed606c  vsub.xyzw   $vf1, $vf12, $vf13
    ctx->pc = 0x324650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[13]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x324654: 0x4be221fd  vabs.xyzw   $vf2, $vf4
    ctx->pc = 0x324654u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x324658: 0x4be519fd  vabs.xyzw   $vf5, $vf3
    ctx->pc = 0x324658u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x32465c: 0x4be112a8  vadd.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x32465cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x324660: 0x4be552ac  vsub.xyzw   $vf10, $vf10, $vf5
    ctx->pc = 0x324660u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x324664: 0x4a0002ff  vnop
    ctx->pc = 0x324664u;
    // NOP operation, no action needed for VU0
    // 0x324668: 0x4a0002ff  vnop
    ctx->pc = 0x324668u;
    // NOP operation, no action needed for VU0
    // 0x32466c: 0x4a0002ff  vnop
    ctx->pc = 0x32466cu;
    // NOP operation, no action needed for VU0
    // 0x324670: 0x4a0002ff  vnop
    ctx->pc = 0x324670u;
    // NOP operation, no action needed for VU0
    // 0x324674: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x324674u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x324678: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x324678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
    // 0x32467c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32467Cu;
    {
        const bool branch_taken_0x32467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32467c) {
            ctx->pc = 0x3246C4u;
            goto label_3246c4;
        }
    }
    ctx->pc = 0x324684u;
    // 0x324684: 0x4bc322fe  vopmula.xyz $ACC, $vf4, $vf3
    ctx->pc = 0x324684u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x324688: 0x4bc4192e  vopmsub.xyz $vf4, $vf3, $vf4
    ctx->pc = 0x324688u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32468c: 0x4be102ec  vsub.xyzw   $vf11, $vf0, $vf1
    ctx->pc = 0x32468cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x324690: 0x4be209be  vmulaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x324690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x324694: 0x4be110ca  vmaddz.xyzw $vf3, $vf2, $vf1z
    ctx->pc = 0x324694u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x324698: 0x4be421fd  vabs.xyzw   $vf4, $vf4
    ctx->pc = 0x324698u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[4], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x32469c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x32469cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3246a0: 0x4bcb11ae  vopmsub.xyz $vf6, $vf2, $vf11
    ctx->pc = 0x3246a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3246a4: 0x4a830180  vaddx.y     $vf6, $vf0, $vf3x
    ctx->pc = 0x3246a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3246a8: 0x4be4306c  vsub.xyzw   $vf1, $vf6, $vf4
    ctx->pc = 0x3246a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3246ac: 0x4a0002ff  vnop
    ctx->pc = 0x3246acu;
    // NOP operation, no action needed for VU0
    // 0x3246b0: 0x4a0002ff  vnop
    ctx->pc = 0x3246b0u;
    // NOP operation, no action needed for VU0
    // 0x3246b4: 0x4a0002ff  vnop
    ctx->pc = 0x3246b4u;
    // NOP operation, no action needed for VU0
    // 0x3246b8: 0x4a0002ff  vnop
    ctx->pc = 0x3246b8u;
    // NOP operation, no action needed for VU0
    // 0x3246bc: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x3246bcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x3246c0: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x3246c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
label_3246c4:
    // 0x3246c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3246C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3246C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246C4u;
        // 0x3246c8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3246C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3246CCu;
    // 0x3246cc: 0x0  nop
    ctx->pc = 0x3246ccu;
    // NOP
    ctx->pc = 0x3246d0u;
}
