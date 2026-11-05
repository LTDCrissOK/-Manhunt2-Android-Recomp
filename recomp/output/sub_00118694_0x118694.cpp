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

// Function: sub_00118694
// Address: 0x118694 - 0x1186a0
void sub_00118694_0x118694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118694_0x118694");
#endif

    ctx->pc = 0x118694u;

    // 0x118694: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x118694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x118698: 0x3e00008  jr          $ra
    ctx->pc = 0x118698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118698u;
        // 0x11869c: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1186A0u;
}
