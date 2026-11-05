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

// Function: sub_002DDB90
// Address: 0x2ddb90 - 0x2ddc30
void sub_002DDB90_0x2ddb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDB90_0x2ddb90");
#endif

    ctx->pc = 0x2ddb90u;

    // 0x2ddb90: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2ddb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ddb94: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2ddb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2ddb98: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DDB98u;
    {
        const bool branch_taken_0x2ddb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB98u;
        // 0x2ddb9c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddb98) {
            ctx->pc = 0x2DDC28u;
            goto label_2ddc28;
        }
    }
    ctx->pc = 0x2DDBA0u;
    // 0x2ddba0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDBA0u;
    {
        const bool branch_taken_0x2ddba0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDBA0u;
        // 0x2ddba4: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddba0) {
            ctx->pc = 0x2DDBB8u;
            goto label_2ddbb8;
        }
    }
    ctx->pc = 0x2DDBA8u;
    // 0x2ddba8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2ddba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ddbac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddbacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddbb0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ddbb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddbb4: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2ddbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2ddbb8:
    // 0x2ddbb8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2ddbb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ddbbc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2ddbbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ddbc0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2ddbc0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddbc4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2ddbc4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddbc8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2ddbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ddbcc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2ddbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddbd0: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x2ddbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x2ddbd4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2ddbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddbd8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2ddbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddbdc: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2ddbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddbe0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2ddbe0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ddbe4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2ddbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ddbe8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2ddbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ddbec: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2ddbecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2ddbf0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2ddbf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddbf4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2ddbf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddbf8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ddbf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddbfc: 0xf8810090  sqc2        $vf1, 0x90($a0)
    ctx->pc = 0x2ddbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ddc00: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x2ddc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2ddc04: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2ddc04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddc08: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddc08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddc0c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddc0cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddc10: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddc10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddc14: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddc14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddc18: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddc18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddc1c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddc1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddc20: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2ddc20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ddc24: 0xf88500a0  sqc2        $vf5, 0xA0($a0)
    ctx->pc = 0x2ddc24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[5]));
label_2ddc28:
    // 0x2ddc28: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDC28u;
        // 0x2ddc2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDC30u;
}
