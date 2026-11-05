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

// Function: sub_00115848
// Address: 0x115848 - 0x115858
void sub_00115848_0x115848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115848_0x115848");
#endif

    ctx->pc = 0x115848u;

    // 0x115848: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x115848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x11584c: 0x3e00008  jr          $ra
    ctx->pc = 0x11584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11584Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115854u;
    // 0x115854: 0x0  nop
    ctx->pc = 0x115854u;
    // NOP
    ctx->pc = 0x115858u;
}
