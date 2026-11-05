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

// Function: sub_001B3A00
// Address: 0x1b3a00 - 0x1b3a10
void sub_001B3A00_0x1b3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A00_0x1b3a00");
#endif

    ctx->pc = 0x1b3a00u;

    // 0x1b3a00: 0xe48c0134  swc1        $f12, 0x134($a0)
    ctx->pc = 0x1b3a00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 308), bits); }
    // 0x1b3a04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A04u;
        // 0x1b3a08: 0xe48d0138  swc1        $f13, 0x138($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A0Cu;
    // 0x1b3a0c: 0x0  nop
    ctx->pc = 0x1b3a0cu;
    // NOP
    ctx->pc = 0x1b3a10u;
}
