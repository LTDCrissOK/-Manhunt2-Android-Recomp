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

// Function: sub_00346288
// Address: 0x346288 - 0x346370
void sub_00346288_0x346288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346288_0x346288");
#endif

    ctx->pc = 0x346288u;

    // 0x346288: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x346288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34628c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x34628cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x346290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x346290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x346294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x346294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34629c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x34629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3462a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3462a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3462a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3462a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3462a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3462a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3462ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3462acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3462b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3462b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3462b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3462b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3462b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3462b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3462bc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3462bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3462c0: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x3462c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x3462c4: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x3462c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3462c8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3462c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3462cc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3462ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3462d0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3462d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3462d4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3462d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3462d8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x3462d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x3462dc: 0x460360c2  mul.s       $f3, $f12, $f3
    ctx->pc = 0x3462dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3462e0: 0x8c830118  lw          $v1, 0x118($a0)
    ctx->pc = 0x3462e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x3462e4: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x3462e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x3462e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3462e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3462ec: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3462ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3462f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3462f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3462f4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3462f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3462f8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x3462f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3462fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3462fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346300: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x346300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346304: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x346304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346308: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x346308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34630c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34630cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346310: 0x8c830118  lw          $v1, 0x118($a0)
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x346314: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x346314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x346318: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34631c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x34631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346320: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x346320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346324: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x346324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346328: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x346328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x34632c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x34632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346330: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x346330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x346334: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x346334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x346338: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x346338u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x34633c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x34633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x346340: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x346340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x346344: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x346344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x346348: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x346348u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x34634c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x34634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x346350: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x346350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x346354: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x346354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346358: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x346358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34635c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34635cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346360: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x346360u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346364: 0x3e00008  jr          $ra
    ctx->pc = 0x346364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346364u;
        // 0x346368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34636Cu;
    // 0x34636c: 0x0  nop
    ctx->pc = 0x34636cu;
    // NOP
    ctx->pc = 0x346370u;
}
