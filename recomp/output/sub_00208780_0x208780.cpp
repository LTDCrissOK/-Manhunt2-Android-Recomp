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

// Function: sub_00208780
// Address: 0x208780 - 0x208788
void sub_00208780_0x208780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208780_0x208780");
#endif

    ctx->pc = 0x208780u;

    // 0x208780: 0x3e00008  jr          $ra
    ctx->pc = 0x208780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208780u;
        // 0x208784: 0xac8533c0  sw          $a1, 0x33C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208788u;
}
