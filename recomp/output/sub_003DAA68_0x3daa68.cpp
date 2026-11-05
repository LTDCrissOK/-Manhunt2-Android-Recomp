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

// Function: sub_003DAA68
// Address: 0x3daa68 - 0x3daaa8
void sub_003DAA68_0x3daa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAA68_0x3daa68");
#endif

    ctx->pc = 0x3daa68u;

    // 0x3daa68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daa6c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3daa6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3daa70: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x3daa70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3daa74: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3daa74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3daa78: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3daa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3daa7c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3daa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3daa80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3daa80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daa84: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3daa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3daa88: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3daa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3daa8c: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x3daa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3daa90: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x3daa90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3daa94: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3daa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3daa98: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3daa98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3daa9c: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x3daa9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3daaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAAA0u;
        // 0x3daaa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAAA8u;
}
