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

// Function: sub_002C5270
// Address: 0x2c5270 - 0x2c52b8
void sub_002C5270_0x2c5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5270_0x2c5270");
#endif

    ctx->pc = 0x2c5270u;

    // 0x2c5270: 0x0  nop
    ctx->pc = 0x2c5270u;
    // NOP
    // 0x2c5274: 0x0  nop
    ctx->pc = 0x2c5274u;
    // NOP
    // 0x2c5278: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2c5278u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c527c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c527cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5280: 0x0  nop
    ctx->pc = 0x2c5280u;
    // NOP
    // 0x2c5284: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2c5284u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5288: 0x0  nop
    ctx->pc = 0x2c5288u;
    // NOP
    // 0x2c528c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2C528Cu;
    {
        const bool branch_taken_0x2c528c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c528c) {
            ctx->pc = 0x2C5290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C528Cu;
            // 0x2c5290: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C52ACu;
            goto label_2c52ac;
        }
    }
    ctx->pc = 0x2C5294u;
    // 0x2c5294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c529c: 0x0  nop
    ctx->pc = 0x2c529cu;
    // NOP
    // 0x2c52a0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2c52a0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2c52a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C52A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C52A4u;
        // 0x2c52a8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C52A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C52ACu;
label_2c52ac:
    // 0x2c52ac: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2c52acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2c52b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C52B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C52B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C52B8u;
}
