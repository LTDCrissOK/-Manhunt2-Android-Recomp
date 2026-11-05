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

// Function: sub_002CBF50
// Address: 0x2cbf50 - 0x2cbf70
void sub_002CBF50_0x2cbf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBF50_0x2cbf50");
#endif

    ctx->pc = 0x2cbf50u;

    // 0x2cbf50: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2cbf54: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2cbf58: 0x8c83b4a8  lw          $v1, -0x4B58($a0)
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cbf5c: 0xac600800  sw          $zero, 0x800($v1)
    ctx->pc = 0x2cbf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 0));
    // 0x2cbf60: 0x8c82b4a8  lw          $v0, -0x4B58($a0)
    ctx->pc = 0x2cbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cbf64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cbf68: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF68u;
        // 0x2cbf6c: 0xac4030a8  sw          $zero, 0x30A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBF70u;
}
