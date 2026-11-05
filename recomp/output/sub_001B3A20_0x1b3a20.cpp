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

// Function: sub_001B3A20
// Address: 0x1b3a20 - 0x1b3a30
void sub_001B3A20_0x1b3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3A20_0x1b3a20");
#endif

    ctx->pc = 0x1b3a20u;

    // 0x1b3a20: 0xe48c0144  swc1        $f12, 0x144($a0)
    ctx->pc = 0x1b3a20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x1b3a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A24u;
        // 0x1b3a28: 0xe48d0148  swc1        $f13, 0x148($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A2Cu;
    // 0x1b3a2c: 0x0  nop
    ctx->pc = 0x1b3a2cu;
    // NOP
    ctx->pc = 0x1b3a30u;
}
