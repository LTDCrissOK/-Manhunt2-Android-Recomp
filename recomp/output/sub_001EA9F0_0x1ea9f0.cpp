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

// Function: sub_001EA9F0
// Address: 0x1ea9f0 - 0x1eaa50
void sub_001EA9F0_0x1ea9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA9F0_0x1ea9f0");
#endif

    ctx->pc = 0x1ea9f0u;

    // 0x1ea9f0: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x1ea9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1ea9f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ea9f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea9f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1ea9f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ea9fc: 0xd8c30010  lqc2        $vf3, 0x10($a2)
    ctx->pc = 0x1ea9fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1eaa00: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x1eaa00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1eaa04: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x1eaa04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1eaa08: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1eaa08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1eaa0c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1eaa0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1eaa10: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1eaa10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1eaa14: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1eaa14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eaa18: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1eaa18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eaa1c: 0xc4a10040  lwc1        $f1, 0x40($a1)
    ctx->pc = 0x1eaa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaa20: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1eaa24: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1eaa24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1eaa28: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x1eaa28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1eaa2c: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x1eaa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaa30: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1eaa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1eaa34: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1eaa34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1eaa38: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x1eaa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaa3c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1eaa3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1eaa40: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1eaa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1eaa44: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAA44u;
        // 0x1eaa48: 0xe4610030  swc1        $f1, 0x30($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAA4Cu;
    // 0x1eaa4c: 0x0  nop
    ctx->pc = 0x1eaa4cu;
    // NOP
    ctx->pc = 0x1eaa50u;
}
