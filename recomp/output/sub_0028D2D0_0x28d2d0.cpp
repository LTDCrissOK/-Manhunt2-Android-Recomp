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

// Function: sub_0028D2D0
// Address: 0x28d2d0 - 0x28d328
void sub_0028D2D0_0x28d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D2D0_0x28d2d0");
#endif

    ctx->pc = 0x28d2d0u;

    // 0x28d2d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28d2d4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x28d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28d2d8: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x28d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28d2dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28d2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x28d2e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d2e4: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x28d2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x28d2e8: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x28d2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x28d2ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d2f0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x28d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d2f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28d2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d2f8: 0x0  nop
    ctx->pc = 0x28d2f8u;
    // NOP
    // 0x28d2fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28D2FCu;
    {
        const bool branch_taken_0x28d2fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D2FCu;
        // 0x28d300: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d2fc) {
            ctx->pc = 0x28D320u;
            goto label_28d320;
        }
    }
    ctx->pc = 0x28D304u;
    // 0x28d304: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x28d304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x28d308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28d308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d30c: 0x0  nop
    ctx->pc = 0x28d30cu;
    // NOP
    // 0x28d310: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x28D310u;
    {
        const bool branch_taken_0x28d310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D310u;
        // 0x28d314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d310) {
            ctx->pc = 0x28D320u;
            goto label_28d320;
        }
    }
    ctx->pc = 0x28D318u;
    // 0x28d318: 0x3e00008  jr          $ra
    ctx->pc = 0x28D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D318u;
        // 0x28d31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D320u;
label_28d320:
    // 0x28d320: 0x3e00008  jr          $ra
    ctx->pc = 0x28D320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D328u;
}
