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

// Function: sub_001F5C90
// Address: 0x1f5c90 - 0x1f5ca0
void sub_001F5C90_0x1f5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5C90_0x1f5c90");
#endif

    ctx->pc = 0x1f5c90u;

    // 0x1f5c90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f5c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C94u;
        // 0x1f5c98: 0xe44c9240  swc1        $f12, -0x6DC0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939200), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C9Cu;
    // 0x1f5c9c: 0x0  nop
    ctx->pc = 0x1f5c9cu;
    // NOP
    ctx->pc = 0x1f5ca0u;
}
