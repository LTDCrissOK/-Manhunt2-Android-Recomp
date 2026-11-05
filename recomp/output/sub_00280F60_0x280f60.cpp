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

// Function: sub_00280F60
// Address: 0x280f60 - 0x280f70
void sub_00280F60_0x280f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F60_0x280f60");
#endif

    ctx->pc = 0x280f60u;

    // 0x280f60: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x280f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x280f64: 0x3e00008  jr          $ra
    ctx->pc = 0x280F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F64u;
        // 0x280f68: 0x8c62cd84  lw          $v0, -0x327C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954372)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F6Cu;
    // 0x280f6c: 0x0  nop
    ctx->pc = 0x280f6cu;
    // NOP
    ctx->pc = 0x280f70u;
}
