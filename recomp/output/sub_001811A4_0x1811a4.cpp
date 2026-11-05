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

// Function: sub_001811A4
// Address: 0x1811a4 - 0x1811b8
void sub_001811A4_0x1811a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811A4_0x1811a4");
#endif

    ctx->pc = 0x1811a4u;

    // 0x1811a4: 0xe4d0006c  swc1        $f16, 0x6C($a2)
    ctx->pc = 0x1811a4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
    // 0x1811a8: 0xe4cc0060  swc1        $f12, 0x60($a2)
    ctx->pc = 0x1811a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x1811ac: 0xe4cd0064  swc1        $f13, 0x64($a2)
    ctx->pc = 0x1811acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x1811b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1811B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811B0u;
        // 0x1811b4: 0xe4ce0068  swc1        $f14, 0x68($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1811B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1811B8u;
}
