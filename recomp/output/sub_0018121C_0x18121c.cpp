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

// Function: sub_0018121C
// Address: 0x18121c - 0x181230
void sub_0018121C_0x18121c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018121C_0x18121c");
#endif

    ctx->pc = 0x18121cu;

    // 0x18121c: 0xe4d000cc  swc1        $f16, 0xCC($a2)
    ctx->pc = 0x18121cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 204), bits); }
    // 0x181220: 0xe4cc00c0  swc1        $f12, 0xC0($a2)
    ctx->pc = 0x181220u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 192), bits); }
    // 0x181224: 0xe4cd00c4  swc1        $f13, 0xC4($a2)
    ctx->pc = 0x181224u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 196), bits); }
    // 0x181228: 0x3e00008  jr          $ra
    ctx->pc = 0x181228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181228u;
        // 0x18122c: 0xe4ce00c8  swc1        $f14, 0xC8($a2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181230u;
}
