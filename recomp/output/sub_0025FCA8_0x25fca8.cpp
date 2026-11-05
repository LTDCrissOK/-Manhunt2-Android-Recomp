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

// Function: sub_0025FCA8
// Address: 0x25fca8 - 0x25fcb8
void sub_0025FCA8_0x25fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FCA8_0x25fca8");
#endif

    ctx->pc = 0x25fca8u;

    // 0x25fca8: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x25fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x25fcac: 0x3e00008  jr          $ra
    ctx->pc = 0x25FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCACu;
        // 0x25fcb0: 0x8c620224  lw          $v0, 0x224($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FCB4u;
    // 0x25fcb4: 0x0  nop
    ctx->pc = 0x25fcb4u;
    // NOP
    ctx->pc = 0x25fcb8u;
}
