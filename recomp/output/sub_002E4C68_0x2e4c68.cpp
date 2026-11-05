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

// Function: sub_002E4C68
// Address: 0x2e4c68 - 0x2e4c80
void sub_002E4C68_0x2e4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C68_0x2e4c68");
#endif

    ctx->pc = 0x2e4c68u;

    // 0x2e4c68: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2e4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2e4c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C6Cu;
        // 0x2e4c70: 0xac451558  sw          $a1, 0x1558($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5464), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C74u;
    // 0x2e4c74: 0x0  nop
    ctx->pc = 0x2e4c74u;
    // NOP
    // 0x2e4c78: 0x0  nop
    ctx->pc = 0x2e4c78u;
    // NOP
    // 0x2e4c7c: 0x0  nop
    ctx->pc = 0x2e4c7cu;
    // NOP
    ctx->pc = 0x2e4c80u;
}
