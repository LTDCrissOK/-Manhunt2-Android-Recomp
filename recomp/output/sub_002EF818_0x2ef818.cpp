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

// Function: sub_002EF818
// Address: 0x2ef818 - 0x2ef828
void sub_002EF818_0x2ef818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF818_0x2ef818");
#endif

    ctx->pc = 0x2ef818u;

    // 0x2ef818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef81c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF81Cu;
        // 0x2ef820: 0xa0821440  sb          $v0, 0x1440($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5184), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF824u;
    // 0x2ef824: 0x0  nop
    ctx->pc = 0x2ef824u;
    // NOP
    ctx->pc = 0x2ef828u;
}
