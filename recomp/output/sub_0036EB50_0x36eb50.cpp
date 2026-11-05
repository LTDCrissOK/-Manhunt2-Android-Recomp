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

// Function: sub_0036EB50
// Address: 0x36eb50 - 0x36eb60
void sub_0036EB50_0x36eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EB50_0x36eb50");
#endif

    ctx->pc = 0x36eb50u;

    // 0x36eb50: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36eb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36eb54: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB54u;
        // 0x36eb58: 0x8c62f8e4  lw          $v0, -0x71C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965476)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB5Cu;
    // 0x36eb5c: 0x0  nop
    ctx->pc = 0x36eb5cu;
    // NOP
    ctx->pc = 0x36eb60u;
}
