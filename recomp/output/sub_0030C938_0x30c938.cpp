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

// Function: sub_0030C938
// Address: 0x30c938 - 0x30c950
void sub_0030C938_0x30c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C938_0x30c938");
#endif

    ctx->pc = 0x30c938u;

    // 0x30c938: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c93c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30C93Cu;
    {
        const bool branch_taken_0x30c93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c93c) {
            ctx->pc = 0x30C940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C93Cu;
            // 0x30c940: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C944u;
            goto label_30c944;
        }
    }
    ctx->pc = 0x30C944u;
label_30c944:
    // 0x30c944: 0x3e00008  jr          $ra
    ctx->pc = 0x30C944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C944u;
        // 0x30c948: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C94Cu;
    // 0x30c94c: 0x0  nop
    ctx->pc = 0x30c94cu;
    // NOP
    ctx->pc = 0x30c950u;
}
