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

// Function: sub_00181168
// Address: 0x181168 - 0x18117c
void sub_00181168_0x181168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181168_0x181168");
#endif

    ctx->pc = 0x181168u;

    // 0x181168: 0xe4d0003c  swc1        $f16, 0x3C($a2)
    ctx->pc = 0x181168u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
    // 0x18116c: 0xe4cc0030  swc1        $f12, 0x30($a2)
    ctx->pc = 0x18116cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x181170: 0xe4cd0034  swc1        $f13, 0x34($a2)
    ctx->pc = 0x181170u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x181174: 0x3e00008  jr          $ra
    ctx->pc = 0x181174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181174u;
        // 0x181178: 0xe4ce0038  swc1        $f14, 0x38($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18117Cu;
}
