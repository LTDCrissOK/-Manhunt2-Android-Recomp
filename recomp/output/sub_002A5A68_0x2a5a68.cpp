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

// Function: sub_002A5A68
// Address: 0x2a5a68 - 0x2a5a78
void sub_002A5A68_0x2a5a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A68_0x2a5a68");
#endif

    ctx->pc = 0x2a5a68u;

    // 0x2a5a68: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a5a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A6Cu;
        // 0x2a5a70: 0x24422348  addiu       $v0, $v0, 0x2348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5A74u;
    // 0x2a5a74: 0x0  nop
    ctx->pc = 0x2a5a74u;
    // NOP
    ctx->pc = 0x2a5a78u;
}
