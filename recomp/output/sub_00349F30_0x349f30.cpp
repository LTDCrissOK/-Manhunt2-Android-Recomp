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

// Function: sub_00349F30
// Address: 0x349f30 - 0x349f38
void sub_00349F30_0x349f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349F30_0x349f30");
#endif

    ctx->pc = 0x349f30u;

    // 0x349f30: 0x3e00008  jr          $ra
    ctx->pc = 0x349F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F30u;
        // 0x349f34: 0xac8500f8  sw          $a1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F38u;
}
