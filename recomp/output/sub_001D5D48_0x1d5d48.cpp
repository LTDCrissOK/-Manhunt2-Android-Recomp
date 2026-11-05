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

// Function: sub_001D5D48
// Address: 0x1d5d48 - 0x1d5d68
void sub_001D5D48_0x1d5d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D48_0x1d5d48");
#endif

    ctx->pc = 0x1d5d48u;

    // 0x1d5d48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5d50: 0xe4ad0010  swc1        $f13, 0x10($a1)
    ctx->pc = 0x1d5d50u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1d5d54: 0x0  nop
    ctx->pc = 0x1d5d54u;
    // NOP
    // 0x1d5d58: 0x0  nop
    ctx->pc = 0x1d5d58u;
    // NOP
    // 0x1d5d5c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x1d5d5cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x1d5d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D60u;
        // 0x1d5d64: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D68u;
}
