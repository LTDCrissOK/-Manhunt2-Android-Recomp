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

// Function: sub_002DDDD0
// Address: 0x2dddd0 - 0x2dde50
void sub_002DDDD0_0x2dddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDDD0_0x2dddd0");
#endif

    ctx->pc = 0x2dddd0u;

    // 0x2dddd0: 0x14e00017  bnez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DDDD0u;
    {
        const bool branch_taken_0x2dddd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDD0u;
        // 0x2dddd4: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dddd0) {
            ctx->pc = 0x2DDE30u;
            goto label_2dde30;
        }
    }
    ctx->pc = 0x2DDDD8u;
    // 0x2dddd8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2dddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ddddc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2ddddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2ddde0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2ddde0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ddde4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddde4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddde8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ddde8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dddec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2dddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dddf0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2dddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dddf4: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x2dddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2dddf8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2dddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dddfc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2dddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dde00: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2dde00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dde04: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2dde04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dde08: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2dde08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dde0c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2dde0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dde10: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2dde10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dde14: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dde14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dde18: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2dde18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dde1c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2dde1cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2dde20: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2dde20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dde24: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2dde24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dde28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDE28u;
    {
        const bool branch_taken_0x2dde28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde28) {
            ctx->pc = 0x2DDE48u;
            goto label_2dde48;
        }
    }
    ctx->pc = 0x2DDE30u;
label_2dde30:
    // 0x2dde30: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x2dde30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2dde34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dde34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dde38: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2dde38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dde3c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2dde3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2dde40: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2dde40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dde44: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2dde44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dde48:
    // 0x2dde48: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDE48u;
        // 0x2dde4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDE50u;
}
