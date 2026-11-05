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

// Function: sub_0024C900
// Address: 0x24c900 - 0x24c978
void sub_0024C900_0x24c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C900_0x24c900");
#endif

    ctx->pc = 0x24c900u;

    // 0x24c900: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24c904: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24c908: 0xc44098fc  lwc1        $f0, -0x6704($v0)
    ctx->pc = 0x24c908u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c90c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x24c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24c910: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24c910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24c914: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x24c914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24c918: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24c91c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24c920: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x24c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x24c924: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x24c924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x24c928: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24c928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c92c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24c92cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24c930: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24c930u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24c934: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24c938: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x24c938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c93c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24c940: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x24c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24c944: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x24c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24c948: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24c948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24c94c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24c94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24c950: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24c950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24c954: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x24c954u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24c958: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x24c958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x24c95c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x24c95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c960: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x24c960u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x24c964: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x24c964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x24c968: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24c968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c96c: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x24c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24c970: 0x3e00008  jr          $ra
    ctx->pc = 0x24C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C970u;
        // 0x24c974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C978u;
}
