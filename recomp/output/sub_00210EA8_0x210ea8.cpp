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

// Function: sub_00210EA8
// Address: 0x210ea8 - 0x210f28
void sub_00210EA8_0x210ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210EA8_0x210ea8");
#endif

    switch (ctx->pc) {
        case 0x210ec0u: goto label_210ec0;
        default: break;
    }

    ctx->pc = 0x210ea8u;

    // 0x210ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210eac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x210eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210eb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x210eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x210eb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x210EB8u;
    SET_GPR_U32(ctx, 31, 0x210EC0u);
    ctx->pc = 0x210EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EB8u;
    // 0x210ebc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x210EB8u, 0x210EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EC0u;
label_210ec0:
    // 0x210ec0: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x210ec4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x210ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x210ec8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x210ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210ecc: 0x24840110  addiu       $a0, $a0, 0x110
    ctx->pc = 0x210eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x210ed0: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x210ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x210ed4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x210ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x210ed8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x210ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210edc: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x210edcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x210ee0: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x210ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x210ee4: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x210ee4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210ee8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x210ee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x210eec: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x210eecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x210ef0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x210ef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x210ef4: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x210ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x210ef8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x210ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210efc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x210efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x210f00: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x210f00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210f04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x210f04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210f08: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x210f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210f0c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x210f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210f10: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x210f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210f14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x210f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210f18: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x210f18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x210f1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x210f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210f20: 0x3e00008  jr          $ra
    ctx->pc = 0x210F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F20u;
        // 0x210f24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210F28u;
}
