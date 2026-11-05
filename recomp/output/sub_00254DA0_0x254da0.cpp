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

// Function: sub_00254DA0
// Address: 0x254da0 - 0x254db8
void sub_00254DA0_0x254da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254DA0_0x254da0");
#endif

    ctx->pc = 0x254da0u;

    // 0x254da0: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x254da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x254da4: 0x3e00008  jr          $ra
    ctx->pc = 0x254DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DA4u;
        // 0x254da8: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254DACu;
    // 0x254dac: 0x0  nop
    ctx->pc = 0x254dacu;
    // NOP
    // 0x254db0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x254db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x254db4: 0x0  nop
    ctx->pc = 0x254db4u;
    // NOP
    ctx->pc = 0x254db8u;
}
