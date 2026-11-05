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

// Function: sub_00168C68
// Address: 0x168c68 - 0x168c78
void sub_00168C68_0x168c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168C68_0x168c68");
#endif

    ctx->pc = 0x168c68u;

    // 0x168c68: 0xac800328  sw          $zero, 0x328($a0)
    ctx->pc = 0x168c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 808), GPR_U32(ctx, 0));
    // 0x168c6c: 0xa4800320  sh          $zero, 0x320($a0)
    ctx->pc = 0x168c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 800), (uint16_t)GPR_U32(ctx, 0));
    // 0x168c70: 0x3e00008  jr          $ra
    ctx->pc = 0x168C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168C70u;
        // 0x168c74: 0xac800324  sw          $zero, 0x324($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 804), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168C78u;
}
