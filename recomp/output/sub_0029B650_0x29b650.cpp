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

// Function: sub_0029B650
// Address: 0x29b650 - 0x29b668
void sub_0029B650_0x29b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B650_0x29b650");
#endif

    ctx->pc = 0x29b650u;

    // 0x29b650: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29b654: 0x3e00008  jr          $ra
    ctx->pc = 0x29B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B654u;
        // 0x29b658: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B65Cu;
    // 0x29b65c: 0x0  nop
    ctx->pc = 0x29b65cu;
    // NOP
    // 0x29b660: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x29b660u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b664: 0x0  nop
    ctx->pc = 0x29b664u;
    // NOP
    ctx->pc = 0x29b668u;
}
