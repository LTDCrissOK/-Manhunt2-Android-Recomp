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

// Function: sub_003E04D0
// Address: 0x3e04d0 - 0x3e04e0
void sub_003E04D0_0x3e04d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E04D0_0x3e04d0");
#endif

    ctx->pc = 0x3e04d0u;

    // 0x3e04d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3e04d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E04D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04D4u;
        // 0x3e04d8: 0xc440ac6c  lwc1        $f0, -0x5394($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294945900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E04D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E04DCu;
    // 0x3e04dc: 0x0  nop
    ctx->pc = 0x3e04dcu;
    // NOP
    ctx->pc = 0x3e04e0u;
}
