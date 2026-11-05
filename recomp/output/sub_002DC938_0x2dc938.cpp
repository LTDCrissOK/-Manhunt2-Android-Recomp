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

// Function: sub_002DC938
// Address: 0x2dc938 - 0x2dc990
void sub_002DC938_0x2dc938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC938_0x2dc938");
#endif

    ctx->pc = 0x2dc938u;

    // 0x2dc938: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2dc938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2dc93c: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2dc93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc940: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2dc940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc948: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2dc948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc94c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2dc94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2dc950: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2dc950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc954: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2dc954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2dc958: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2dc958u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2dc95c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2dc95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc960: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x2dc960u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2dc964: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2dc964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dc968: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2dc968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dc96c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2dc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2dc970: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2dc970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dc974: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x2dc974u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dc978: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dc978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc97c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2dc97cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc980: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dc980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dc984: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x2dc984u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dc988: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC988u;
        // 0x2dc98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC990u;
}
