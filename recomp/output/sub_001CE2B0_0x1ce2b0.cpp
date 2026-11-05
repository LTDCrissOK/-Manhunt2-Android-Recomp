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

// Function: sub_001CE2B0
// Address: 0x1ce2b0 - 0x1ce310
void sub_001CE2B0_0x1ce2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE2B0_0x1ce2b0");
#endif

    ctx->pc = 0x1ce2b0u;

    // 0x1ce2b0: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x1ce2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2b4: 0x0  nop
    ctx->pc = 0x1ce2b4u;
    // NOP
    // 0x1ce2b8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CE2B8u;
    {
        const bool branch_taken_0x1ce2b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2B8u;
        // 0x1ce2bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2b8) {
            ctx->pc = 0x1CE308u;
            goto label_1ce308;
        }
    }
    ctx->pc = 0x1CE2C0u;
    // 0x1ce2c0: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x1ce2c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2c4: 0x0  nop
    ctx->pc = 0x1ce2c4u;
    // NOP
    // 0x1ce2c8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1CE2C8u;
    {
        const bool branch_taken_0x1ce2c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2C8u;
        // 0x1ce2cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2c8) {
            ctx->pc = 0x1CE308u;
            goto label_1ce308;
        }
    }
    ctx->pc = 0x1CE2D0u;
    // 0x1ce2d0: 0x460c7834  c.lt.s      $f15, $f12
    ctx->pc = 0x1ce2d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2d4: 0x0  nop
    ctx->pc = 0x1ce2d4u;
    // NOP
    // 0x1ce2d8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CE2D8u;
    {
        const bool branch_taken_0x1ce2d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2D8u;
        // 0x1ce2dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2d8) {
            ctx->pc = 0x1CE308u;
            goto label_1ce308;
        }
    }
    ctx->pc = 0x1CE2E0u;
    // 0x1ce2e0: 0x460c8034  c.lt.s      $f16, $f12
    ctx->pc = 0x1ce2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2e4: 0x0  nop
    ctx->pc = 0x1ce2e4u;
    // NOP
    // 0x1ce2e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE2E8u;
    {
        const bool branch_taken_0x1ce2e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2E8u;
        // 0x1ce2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2e8) {
            ctx->pc = 0x1CE308u;
            goto label_1ce308;
        }
    }
    ctx->pc = 0x1CE2F0u;
    // 0x1ce2f0: 0x460c8834  c.lt.s      $f17, $f12
    ctx->pc = 0x1ce2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce2f4: 0x0  nop
    ctx->pc = 0x1ce2f4u;
    // NOP
    // 0x1ce2f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE2F8u;
    {
        const bool branch_taken_0x1ce2f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2F8u;
        // 0x1ce2fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce2f8) {
            ctx->pc = 0x1CE308u;
            goto label_1ce308;
        }
    }
    ctx->pc = 0x1CE300u;
    // 0x1ce300: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE300u;
        // 0x1ce304: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE308u;
label_1ce308:
    // 0x1ce308: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE310u;
}
