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

// Function: sub_003B1158
// Address: 0x3b1158 - 0x3b1168
void sub_003B1158_0x3b1158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1158_0x3b1158");
#endif

    ctx->pc = 0x3b1158u;

    // 0x3b1158: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b1158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3b115c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1160: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1160u;
        // 0x3b1164: 0xac624888  sw          $v0, 0x4888($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1168u;
}
