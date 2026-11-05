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

// Function: sub_00254F60
// Address: 0x254f60 - 0x254f78
void sub_00254F60_0x254f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254F60_0x254f60");
#endif

    ctx->pc = 0x254f60u;

    // 0x254f60: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x254f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x254f64: 0x3e00008  jr          $ra
    ctx->pc = 0x254F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F64u;
        // 0x254f68: 0xac400360  sw          $zero, 0x360($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F6Cu;
    // 0x254f6c: 0x0  nop
    ctx->pc = 0x254f6cu;
    // NOP
    // 0x254f70: 0x8c620360  lw          $v0, 0x360($v1)
    ctx->pc = 0x254f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x254f74: 0x0  nop
    ctx->pc = 0x254f74u;
    // NOP
    ctx->pc = 0x254f78u;
}
