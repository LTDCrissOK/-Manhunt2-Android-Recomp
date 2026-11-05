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

// Function: sub_0012CA88
// Address: 0x12ca88 - 0x12ca98
void sub_0012CA88_0x12ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CA88_0x12ca88");
#endif

    ctx->pc = 0x12ca88u;

    // 0x12ca88: 0x8c820800  lw          $v0, 0x800($a0)
    ctx->pc = 0x12ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2048)));
    // 0x12ca8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ca90: 0x3e00008  jr          $ra
    ctx->pc = 0x12CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA90u;
        // 0x12ca94: 0xac820800  sw          $v0, 0x800($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CA98u;
}
