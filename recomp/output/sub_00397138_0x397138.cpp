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

// Function: sub_00397138
// Address: 0x397138 - 0x397148
void sub_00397138_0x397138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397138_0x397138");
#endif

    ctx->pc = 0x397138u;

    // 0x397138: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x397138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39713c: 0x3e00008  jr          $ra
    ctx->pc = 0x39713Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39713Cu;
        // 0x397140: 0x8c6218c8  lw          $v0, 0x18C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6344)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39713Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397144u;
    // 0x397144: 0x0  nop
    ctx->pc = 0x397144u;
    // NOP
    ctx->pc = 0x397148u;
}
