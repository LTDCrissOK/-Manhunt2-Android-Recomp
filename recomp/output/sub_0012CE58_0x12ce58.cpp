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

// Function: sub_0012CE58
// Address: 0x12ce58 - 0x12ce68
void sub_0012CE58_0x12ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CE58_0x12ce58");
#endif

    ctx->pc = 0x12ce58u;

    // 0x12ce58: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x12ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x12ce5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE5Cu;
        // 0x12ce60: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CE64u;
    // 0x12ce64: 0x0  nop
    ctx->pc = 0x12ce64u;
    // NOP
    ctx->pc = 0x12ce68u;
}
