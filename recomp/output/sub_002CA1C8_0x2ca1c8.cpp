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

// Function: sub_002CA1C8
// Address: 0x2ca1c8 - 0x2ca1e8
void sub_002CA1C8_0x2ca1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA1C8_0x2ca1c8");
#endif

    ctx->pc = 0x2ca1c8u;

    // 0x2ca1c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ca1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca1cc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2ca1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2ca1d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ca1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca1d4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2ca1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2ca1d8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2ca1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x2ca1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1DCu;
        // 0x2ca1e0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA1E4u;
    // 0x2ca1e4: 0x0  nop
    ctx->pc = 0x2ca1e4u;
    // NOP
    ctx->pc = 0x2ca1e8u;
}
