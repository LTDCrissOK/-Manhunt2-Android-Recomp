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

// Function: sub_001E2280
// Address: 0x1e2280 - 0x1e2300
void sub_001E2280_0x1e2280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2280_0x1e2280");
#endif

    ctx->pc = 0x1e2280u;

    // 0x1e2280: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1e2280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2284: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2288: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1e2288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e228c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e2290: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1e2290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1e2294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e2294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2298: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e2298u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e229c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1e229cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e22a0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e22a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e22a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e22a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e22a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e22a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e22ac: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1e22acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e22b0: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1e22b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e22b4: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1e22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1e22b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e22b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e22bc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1e22bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e22c0: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x1e22c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e22c4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1e22c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e22c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e22c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e22cc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1e22ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e22d0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1e22d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e22d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e22d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e22d8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e22d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e22dc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e22dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e22e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e22e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e22e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e22e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e22e8: 0x0  nop
    ctx->pc = 0x1e22e8u;
    // NOP
    // 0x1e22ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E22ECu;
    {
        const bool branch_taken_0x1e22ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22ECu;
        // 0x1e22f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e22ec) {
            ctx->pc = 0x1E22F8u;
            goto label_1e22f8;
        }
    }
    ctx->pc = 0x1E22F4u;
    // 0x1e22f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e22f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e22f8:
    // 0x1e22f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E22F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22F8u;
        // 0x1e22fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E22F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2300u;
}
