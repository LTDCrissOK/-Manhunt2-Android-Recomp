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

// Function: sub_003A6E50
// Address: 0x3a6e50 - 0x3a6e60
void sub_003A6E50_0x3a6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6E50_0x3a6e50");
#endif

    ctx->pc = 0x3a6e50u;

    // 0x3a6e50: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E50u;
        // 0x3a6e54: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6E58u;
    // 0x3a6e58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a6e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a6e5c: 0x0  nop
    ctx->pc = 0x3a6e5cu;
    // NOP
    ctx->pc = 0x3a6e60u;
}
