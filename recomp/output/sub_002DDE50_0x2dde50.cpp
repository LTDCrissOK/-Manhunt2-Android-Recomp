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

// Function: sub_002DDE50
// Address: 0x2dde50 - 0x2dded8
void sub_002DDE50_0x2dde50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDE50_0x2dde50");
#endif

    switch (ctx->pc) {
        case 0x2dde80u: goto label_2dde80;
        case 0x2dde94u: goto label_2dde94;
        default: break;
    }

    ctx->pc = 0x2dde50u;

    // 0x2dde50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dde50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dde54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2dde54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dde58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dde58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dde5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dde5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dde60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dde64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde68: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2dde68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2dde6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dde6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dde70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dde74: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2dde74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde78: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DDE78u;
    SET_GPR_U32(ctx, 31, 0x2DDE80u);
    ctx->pc = 0x2DDE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE78u;
    // 0x2dde7c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DDE78u, 0x2DDE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE80u;
label_2dde80:
    // 0x2dde80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dde80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dde84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dde88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde8c: 0xc0b7774  jal         func_2DDDD0
    ctx->pc = 0x2DDE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE94u);
    ctx->pc = 0x2DDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDE8Cu;
    // 0x2dde90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDDD0u, 0x2DDE8Cu, 0x2DDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE94u;
label_2dde94:
    // 0x2dde94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2dde94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dde98: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2dde98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dde9c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dde9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddea0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddea0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddea4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddea8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddea8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddeac: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddeacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddeb0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddeb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddeb4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2ddeb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ddeb8: 0xfa650000  sqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2ddeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ddebc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ddebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddec0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ddec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ddec4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ddec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddec8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ddec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ddecc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ddeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dded0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDED0u;
        // 0x2dded4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDED8u;
}
