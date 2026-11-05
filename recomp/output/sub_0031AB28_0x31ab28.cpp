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

// Function: sub_0031AB28
// Address: 0x31ab28 - 0x31ab38
void sub_0031AB28_0x31ab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AB28_0x31ab28");
#endif

    ctx->pc = 0x31ab28u;

    // 0x31ab28: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31ab2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB30u;
        // 0x31ab34: 0xa062bd74  sb          $v0, -0x428C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294950260), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AB38u;
}
