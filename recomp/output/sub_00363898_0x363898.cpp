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

// Function: sub_00363898
// Address: 0x363898 - 0x3638f0
void sub_00363898_0x363898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363898_0x363898");
#endif

    ctx->pc = 0x363898u;

    // 0x363898: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x363898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36389c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x36389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3638a0: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3638a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3638a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3638a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3638a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3638a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3638ac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3638acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3638b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3638b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3638b4: 0x0  nop
    ctx->pc = 0x3638b4u;
    // NOP
    // 0x3638b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3638b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3638bc: 0x0  nop
    ctx->pc = 0x3638bcu;
    // NOP
    // 0x3638c0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3638C0u;
    {
        const bool branch_taken_0x3638c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3638c0) {
            ctx->pc = 0x3638C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3638C0u;
            // 0x3638c4: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3638D8u;
            goto label_3638d8;
        }
    }
    ctx->pc = 0x3638C8u;
    // 0x3638c8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3638c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3638cc: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x3638ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3638d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3638D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3638D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3638D8u;
label_3638d8:
    // 0x3638d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3638d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3638dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3638dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3638e0: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x3638e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3638e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3638E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3638E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3638ECu;
    // 0x3638ec: 0x0  nop
    ctx->pc = 0x3638ecu;
    // NOP
    ctx->pc = 0x3638f0u;
}
