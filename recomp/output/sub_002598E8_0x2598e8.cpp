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

// Function: sub_002598E8
// Address: 0x2598e8 - 0x259990
void sub_002598E8_0x2598e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002598E8_0x2598e8");
#endif

    switch (ctx->pc) {
        case 0x259930u: goto label_259930;
        default: break;
    }

    ctx->pc = 0x2598e8u;

    // 0x2598e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2598e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2598ec: 0x3c013e0c  lui         $at, 0x3E0C
    ctx->pc = 0x2598ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15884 << 16));
    // 0x2598f0: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x2598f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
    // 0x2598f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2598f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2598f8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2598f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2598fc: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x2598fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x259900: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x259900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x259904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x259904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x259908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25990c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x259910: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x259910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259914: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259918: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x259918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25991c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25991cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259920: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x259920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x259924: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x259924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x259928: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x259928u;
    SET_GPR_U32(ctx, 31, 0x259930u);
    ctx->pc = 0x25992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259928u;
    // 0x25992c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x259928u, 0x259930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259930u;
label_259930:
    // 0x259930: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x259930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x259934: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259938: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x259938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25993c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25993cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259940: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x259940u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259944: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x259944u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x259948: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x259948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x25994c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x25994cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x259950: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x259950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x259954: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x259954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x259958: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x259958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25995c: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x25995cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x259960: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x259960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x259964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259968: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x259968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25996c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x25996cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x259970: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x259970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259974: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x259974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x259978: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x259978u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25997c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25997cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259980: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x259980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x259984: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259988: 0x3e00008  jr          $ra
    ctx->pc = 0x259988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259988u;
        // 0x25998c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259990u;
}
