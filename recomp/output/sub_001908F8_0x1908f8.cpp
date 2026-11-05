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

// Function: sub_001908F8
// Address: 0x1908f8 - 0x1909c0
void sub_001908F8_0x1908f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001908F8_0x1908f8");
#endif

    switch (ctx->pc) {
        case 0x190910u: goto label_190910;
        default: break;
    }

    ctx->pc = 0x1908f8u;

    // 0x1908f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1908f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1908fc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1908fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x190900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190904: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x190904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x190908: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x190908u;
    SET_GPR_U32(ctx, 31, 0x190910u);
    ctx->pc = 0x19090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190908u;
    // 0x19090c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x190908u, 0x190910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190910u;
label_190910:
    // 0x190910: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x190910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190914: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190918: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x190918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x19091c: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x19091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x190920: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190924: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x190924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x190928: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x190928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19092c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19092cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190930: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x190930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190934: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x190934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190938: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x190938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x19093c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x19093cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190940: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x190940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190944: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x190944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x190948: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x190948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19094c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19094cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x190950: 0x4a0003bf  vwaitq
    ctx->pc = 0x190950u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x190954: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x190954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190958: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x190958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19095c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x190960: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x190960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190964: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x190964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x190968: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x19096c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190970: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x190970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190974: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x190974u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190978: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x190978u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x19097c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x19097cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x190980: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x190980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x190984: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x190988: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19098c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19098cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190990: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x190990u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190994: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x190994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190998: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x190998u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19099c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x19099cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1909a0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1909a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1909a4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1909a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1909a8: 0xfa050060  sqc2        $vf5, 0x60($s0)
    ctx->pc = 0x1909a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1909ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1909acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1909b0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1909b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1909b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1909B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1909B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909B4u;
        // 0x1909b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1909B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1909BCu;
    // 0x1909bc: 0x0  nop
    ctx->pc = 0x1909bcu;
    // NOP
    ctx->pc = 0x1909c0u;
}
