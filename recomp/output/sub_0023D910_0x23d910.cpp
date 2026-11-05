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

// Function: sub_0023D910
// Address: 0x23d910 - 0x23d928
void sub_0023D910_0x23d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D910_0x23d910");
#endif

    ctx->pc = 0x23d910u;

    // 0x23d910: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x23d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x23d914: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23d914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x23d918: 0x2442ffc8  addiu       $v0, $v0, -0x38
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x23d91c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D91Cu;
        // 0x23d920: 0x2c420005  sltiu       $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D924u;
    // 0x23d924: 0x0  nop
    ctx->pc = 0x23d924u;
    // NOP
    ctx->pc = 0x23d928u;
}
