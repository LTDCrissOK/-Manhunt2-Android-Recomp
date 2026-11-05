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

// Function: sub_002DDA58
// Address: 0x2dda58 - 0x2ddae8
void sub_002DDA58_0x2dda58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDA58_0x2dda58");
#endif

    switch (ctx->pc) {
        case 0x2dda6cu: goto label_2dda6c;
        default: break;
    }

    ctx->pc = 0x2dda58u;

    // 0x2dda58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dda58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dda5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dda5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dda60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dda60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dda64: 0xc0b71be  jal         func_2DC6F8
    ctx->pc = 0x2DDA64u;
    SET_GPR_U32(ctx, 31, 0x2DDA6Cu);
    ctx->pc = 0x2DDA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA64u;
    // 0x2dda68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC6F8u, 0x2DDA64u, 0x2DDA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA6Cu;
label_2dda6c:
    // 0x2dda6c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2dda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dda70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dda70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dda74: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2dda74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dda78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dda78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dda7c: 0x0  nop
    ctx->pc = 0x2dda7cu;
    // NOP
    // 0x2dda80: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2DDA80u;
    {
        const bool branch_taken_0x2dda80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DDA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA80u;
        // 0x2dda84: 0x26030090  addiu       $v1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda80) {
            ctx->pc = 0x2DDAD4u;
            goto label_2ddad4;
        }
    }
    ctx->pc = 0x2DDA88u;
    // 0x2dda88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dda88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dda8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dda8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dda90: 0x0  nop
    ctx->pc = 0x2dda90u;
    // NOP
    // 0x2dda94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dda94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dda98: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dda98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dda9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dda9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddaa0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2ddaa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2ddaa4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2ddaa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddaa8: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x2ddaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ddaac: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ddab0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2ddab0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddab4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddab4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddab8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddab8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddabc: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddabcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddac0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddac0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddac4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddac8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddacc: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2ddaccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ddad0: 0xfa0500a0  sqc2        $vf5, 0xA0($s0)
    ctx->pc = 0x2ddad0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[5]));
label_2ddad4:
    // 0x2ddad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddadc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDADCu;
        // 0x2ddae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDAE4u;
    // 0x2ddae4: 0x0  nop
    ctx->pc = 0x2ddae4u;
    // NOP
    ctx->pc = 0x2ddae8u;
}
