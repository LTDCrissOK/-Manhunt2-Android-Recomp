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

// Function: sub_001868B8
// Address: 0x1868b8 - 0x1868c8
void sub_001868B8_0x1868b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001868B8_0x1868b8");
#endif

    ctx->pc = 0x1868b8u;

    // 0x1868b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1868bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1868BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1868C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868BCu;
        // 0x1868c0: 0x8c621000  lw          $v0, 0x1000($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1868BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1868C4u;
    // 0x1868c4: 0x0  nop
    ctx->pc = 0x1868c4u;
    // NOP
    ctx->pc = 0x1868c8u;
}
