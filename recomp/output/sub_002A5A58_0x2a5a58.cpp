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

// Function: sub_002A5A58
// Address: 0x2a5a58 - 0x2a5a68
void sub_002A5A58_0x2a5a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A58_0x2a5a58");
#endif

    ctx->pc = 0x2a5a58u;

    // 0x2a5a58: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a5a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A5Cu;
        // 0x2a5a60: 0x24422330  addiu       $v0, $v0, 0x2330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5A64u;
    // 0x2a5a64: 0x0  nop
    ctx->pc = 0x2a5a64u;
    // NOP
    ctx->pc = 0x2a5a68u;
}
