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

// Function: sub_0010F1D0
// Address: 0x10f1d0 - 0x10f1e0
void sub_0010F1D0_0x10f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1D0_0x10f1d0");
#endif

    ctx->pc = 0x10f1d0u;

    // 0x10f1d0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x10f1d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x10f1d4: 0xe48c00f4  swc1        $f12, 0xF4($a0)
    ctx->pc = 0x10f1d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x10f1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1D8u;
        // 0x10f1dc: 0xe48000f8  swc1        $f0, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1E0u;
}
