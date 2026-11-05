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

// Function: sub_001CEA40
// Address: 0x1cea40 - 0x1cea68
void sub_001CEA40_0x1cea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEA40_0x1cea40");
#endif

    ctx->pc = 0x1cea40u;

    // 0x1cea40: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1cea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cea44: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1cea44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cea48: 0x0  nop
    ctx->pc = 0x1cea48u;
    // NOP
    // 0x1cea4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEA4Cu;
    {
        const bool branch_taken_0x1cea4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cea4c) {
            ctx->pc = 0x1CEA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEA4Cu;
            // 0x1cea50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEA54u;
            goto label_1cea54;
        }
    }
    ctx->pc = 0x1CEA54u;
label_1cea54:
    // 0x1cea54: 0x0  nop
    ctx->pc = 0x1cea54u;
    // NOP
    // 0x1cea58: 0x0  nop
    ctx->pc = 0x1cea58u;
    // NOP
    // 0x1cea5c: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x1cea5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1cea60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA68u;
}
