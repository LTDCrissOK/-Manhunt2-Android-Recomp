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

// Function: sub_003A9EC8
// Address: 0x3a9ec8 - 0x3a9ee0
void sub_003A9EC8_0x3a9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9EC8_0x3a9ec8");
#endif

    ctx->pc = 0x3a9ec8u;

    // 0x3a9ec8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a9ecc: 0x2463d440  addiu       $v1, $v1, -0x2BC0
    ctx->pc = 0x3a9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x3a9ed0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D440u));
    // 0x3a9ed4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9ED8u;
        // 0x3a9edc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9EE0u;
}
