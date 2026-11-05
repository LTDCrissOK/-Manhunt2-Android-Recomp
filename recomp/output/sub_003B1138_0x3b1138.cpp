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

// Function: sub_003B1138
// Address: 0x3b1138 - 0x3b1150
void sub_003B1138_0x3b1138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1138_0x3b1138");
#endif

    ctx->pc = 0x3b1138u;

    // 0x3b1138: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3b1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3b113c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b113cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b1140: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B1140u;
    {
        const bool branch_taken_0x3b1140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b1140) {
            ctx->pc = 0x3B1144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B1140u;
            // 0x3b1144: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B1148u;
            goto label_3b1148;
        }
    }
    ctx->pc = 0x3B1148u;
label_3b1148:
    // 0x3b1148: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1150u;
}
