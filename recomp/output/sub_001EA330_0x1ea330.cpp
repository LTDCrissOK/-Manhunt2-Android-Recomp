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

// Function: sub_001EA330
// Address: 0x1ea330 - 0x1ea390
void sub_001EA330_0x1ea330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA330_0x1ea330");
#endif

    ctx->pc = 0x1ea330u;

    // 0x1ea330: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ea330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea334: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1ea334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea338: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ea338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea33c: 0x0  nop
    ctx->pc = 0x1ea33cu;
    // NOP
    // 0x1ea340: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA340u;
    {
        const bool branch_taken_0x1ea340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea340) {
            ctx->pc = 0x1EA344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA340u;
            // 0x1ea344: 0xe4810020  swc1        $f1, 0x20($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA348u;
            goto label_1ea348;
        }
    }
    ctx->pc = 0x1EA348u;
label_1ea348:
    // 0x1ea348: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1ea348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea34c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ea350: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1ea350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea354: 0x0  nop
    ctx->pc = 0x1ea354u;
    // NOP
    // 0x1ea358: 0x0  nop
    ctx->pc = 0x1ea358u;
    // NOP
    // 0x1ea35c: 0x46010044  c1          0x10044
    ctx->pc = 0x1ea35cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ea360: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1ea364: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ea364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ea368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea36c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ea36cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ea370: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ea370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ea374: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ea374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ea378: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ea378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea37c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ea37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ea380: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1ea380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ea384: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1ea384u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea388: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA390u;
}
