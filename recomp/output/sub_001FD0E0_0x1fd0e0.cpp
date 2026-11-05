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

// Function: sub_001FD0E0
// Address: 0x1fd0e0 - 0x1fd0f0
void sub_001FD0E0_0x1fd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0E0_0x1fd0e0");
#endif

    ctx->pc = 0x1fd0e0u;

    // 0x1fd0e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fd0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0E4u;
        // 0x1fd0e8: 0xac449334  sw          $a0, -0x6CCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294939444), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD0ECu;
    // 0x1fd0ec: 0x0  nop
    ctx->pc = 0x1fd0ecu;
    // NOP
    ctx->pc = 0x1fd0f0u;
}
