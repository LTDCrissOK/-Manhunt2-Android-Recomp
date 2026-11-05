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

// Function: sub_001F7EB8
// Address: 0x1f7eb8 - 0x1f7ec8
void sub_001F7EB8_0x1f7eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7EB8_0x1f7eb8");
#endif

    ctx->pc = 0x1f7eb8u;

    // 0x1f7eb8: 0xe48e00e8  swc1        $f14, 0xE8($a0)
    ctx->pc = 0x1f7eb8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x1f7ebc: 0xe48c00e0  swc1        $f12, 0xE0($a0)
    ctx->pc = 0x1f7ebcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x1f7ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EC0u;
        // 0x1f7ec4: 0xe48d00e4  swc1        $f13, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7EC8u;
}
