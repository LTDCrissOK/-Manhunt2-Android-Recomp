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

// Function: sub_002DC820
// Address: 0x2dc820 - 0x2dc840
void sub_002DC820_0x2dc820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC820_0x2dc820");
#endif

    ctx->pc = 0x2dc820u;

    // 0x2dc820: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2dc820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2dc824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc82c: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2dc82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc830: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2dc830u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2dc834: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC834u;
        // 0x2dc838: 0xe4800024  swc1        $f0, 0x24($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC83Cu;
    // 0x2dc83c: 0x0  nop
    ctx->pc = 0x2dc83cu;
    // NOP
    ctx->pc = 0x2dc840u;
}
