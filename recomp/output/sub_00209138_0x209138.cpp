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

// Function: sub_00209138
// Address: 0x209138 - 0x209148
void sub_00209138_0x209138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209138_0x209138");
#endif

    ctx->pc = 0x209138u;

    // 0x209138: 0xac8033cc  sw          $zero, 0x33CC($a0)
    ctx->pc = 0x209138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13260), GPR_U32(ctx, 0));
    // 0x20913c: 0x3e00008  jr          $ra
    ctx->pc = 0x20913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20913Cu;
        // 0x209140: 0xac8033c8  sw          $zero, 0x33C8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 13256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209144u;
    // 0x209144: 0x0  nop
    ctx->pc = 0x209144u;
    // NOP
    ctx->pc = 0x209148u;
}
