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

// Function: sub_002C6B38
// Address: 0x2c6b38 - 0x2c6b80
void sub_002C6B38_0x2c6b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6B38_0x2c6b38");
#endif

    switch (ctx->pc) {
        case 0x2c6b4cu: goto label_2c6b4c;
        default: break;
    }

    ctx->pc = 0x2c6b38u;

    // 0x2c6b38: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x2c6b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c6b3c: 0xd8e30010  lqc2        $vf3, 0x10($a3)
    ctx->pc = 0x2c6b3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c6b40: 0xd8e40020  lqc2        $vf4, 0x20($a3)
    ctx->pc = 0x2c6b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2c6b44: 0xd8e50030  lqc2        $vf5, 0x30($a3)
    ctx->pc = 0x2c6b44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2c6b48: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2c6b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2c6b4c:
    // 0x2c6b4c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2c6b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2c6b50: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2c6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c6b54: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2c6b54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2c6b58: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x2c6b58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x2c6b5c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x2c6b5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2c6b60: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2c6b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2c6b64: 0x4bc0298b  vmaddw.xyz  $vf6, $vf5, $vf0w
    ctx->pc = 0x2c6b64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2c6b68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2c6b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c6b6c: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C6B6Cu;
    {
        const bool branch_taken_0x2c6b6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B6Cu;
        // 0x2c6b70: 0xf886fff0  sqc2        $vf6, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b6c) {
            ctx->pc = 0x2C6B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6b4c;
        }
    }
    ctx->pc = 0x2C6B74u;
    // 0x2c6b74: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B7Cu;
    // 0x2c6b7c: 0x0  nop
    ctx->pc = 0x2c6b7cu;
    // NOP
    ctx->pc = 0x2c6b80u;
}
