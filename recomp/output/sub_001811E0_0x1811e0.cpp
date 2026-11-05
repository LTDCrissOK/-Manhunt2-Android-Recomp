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

// Function: sub_001811E0
// Address: 0x1811e0 - 0x1811f4
void sub_001811E0_0x1811e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811E0_0x1811e0");
#endif

    ctx->pc = 0x1811e0u;

    // 0x1811e0: 0xe4d0009c  swc1        $f16, 0x9C($a2)
    ctx->pc = 0x1811e0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 156), bits); }
    // 0x1811e4: 0xe4cc0090  swc1        $f12, 0x90($a2)
    ctx->pc = 0x1811e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 144), bits); }
    // 0x1811e8: 0xe4cd0094  swc1        $f13, 0x94($a2)
    ctx->pc = 0x1811e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 148), bits); }
    // 0x1811ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1811ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811ECu;
        // 0x1811f0: 0xe4ce0098  swc1        $f14, 0x98($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1811ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1811F4u;
}
