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

// Function: sub_001147FC
// Address: 0x1147fc - 0x114808
void sub_001147FC_0x1147fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001147FC_0x1147fc");
#endif

    ctx->pc = 0x1147fcu;

    // 0x1147fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1147FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147FCu;
        // 0x114800: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114804u;
    // 0x114804: 0x0  nop
    ctx->pc = 0x114804u;
    // NOP
    ctx->pc = 0x114808u;
}
