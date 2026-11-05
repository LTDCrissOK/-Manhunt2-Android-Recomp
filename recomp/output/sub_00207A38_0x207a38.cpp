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

// Function: sub_00207A38
// Address: 0x207a38 - 0x207a48
void sub_00207A38_0x207a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A38_0x207a38");
#endif

    ctx->pc = 0x207a38u;

    // 0x207a38: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x207a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x207a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x207A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A3Cu;
        // 0x207a40: 0xa0800018  sb          $zero, 0x18($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A44u;
    // 0x207a44: 0x0  nop
    ctx->pc = 0x207a44u;
    // NOP
    ctx->pc = 0x207a48u;
}
