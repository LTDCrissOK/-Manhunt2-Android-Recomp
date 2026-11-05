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

// Function: sub_003C9E20
// Address: 0x3c9e20 - 0x3c9e30
void sub_003C9E20_0x3c9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9E20_0x3c9e20");
#endif

    ctx->pc = 0x3c9e20u;

    // 0x3c9e20: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c9e24: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E24u;
        // 0x3c9e28: 0xac40d5f0  sw          $zero, -0x2A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9E2Cu;
    // 0x3c9e2c: 0x0  nop
    ctx->pc = 0x3c9e2cu;
    // NOP
    ctx->pc = 0x3c9e30u;
}
