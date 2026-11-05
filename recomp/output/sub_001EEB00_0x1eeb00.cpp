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

// Function: sub_001EEB00
// Address: 0x1eeb00 - 0x1eeb40
void sub_001EEB00_0x1eeb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEB00_0x1eeb00");
#endif

    ctx->pc = 0x1eeb00u;

    // 0x1eeb00: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x1eeb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eeb04: 0x0  nop
    ctx->pc = 0x1eeb04u;
    // NOP
    // 0x1eeb08: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1EEB08u;
    {
        const bool branch_taken_0x1eeb08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eeb08) {
            ctx->pc = 0x1EEB34u;
            goto label_1eeb34;
        }
    }
    ctx->pc = 0x1EEB10u;
    // 0x1eeb10: 0x460c7034  c.lt.s      $f14, $f12
    ctx->pc = 0x1eeb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eeb14: 0x0  nop
    ctx->pc = 0x1eeb14u;
    // NOP
    // 0x1eeb18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EEB18u;
    {
        const bool branch_taken_0x1eeb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eeb18) {
            ctx->pc = 0x1EEB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEB18u;
            // 0x1eeb1c: 0x46007306  mov.s       $f12, $f14 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEB20u;
            goto label_1eeb20;
        }
    }
    ctx->pc = 0x1EEB20u;
label_1eeb20:
    // 0x1eeb20: 0x460d6001  sub.s       $f0, $f12, $f13
    ctx->pc = 0x1eeb20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x1eeb24: 0x0  nop
    ctx->pc = 0x1eeb24u;
    // NOP
    // 0x1eeb28: 0x460f0003  div.s       $f0, $f0, $f15
    ctx->pc = 0x1eeb28u;
    { if (ctx->f[15] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[15]); }
    // 0x1eeb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEB34u;
label_1eeb34:
    // 0x1eeb34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eeb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeb38: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EEB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EEB40u;
}
