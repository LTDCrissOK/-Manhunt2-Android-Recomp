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

// Function: sub_001811B8
// Address: 0x1811b8 - 0x1811cc
void sub_001811B8_0x1811b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811B8_0x1811b8");
#endif

    ctx->pc = 0x1811b8u;

    // 0x1811b8: 0xe4d0007c  swc1        $f16, 0x7C($a2)
    ctx->pc = 0x1811b8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 124), bits); }
    // 0x1811bc: 0xe4cc0070  swc1        $f12, 0x70($a2)
    ctx->pc = 0x1811bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 112), bits); }
    // 0x1811c0: 0xe4cd0074  swc1        $f13, 0x74($a2)
    ctx->pc = 0x1811c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
    // 0x1811c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1811C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811C4u;
        // 0x1811c8: 0xe4ce0078  swc1        $f14, 0x78($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1811C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1811CCu;
}
