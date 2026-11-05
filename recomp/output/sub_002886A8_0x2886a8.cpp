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

// Function: sub_002886A8
// Address: 0x2886a8 - 0x2886c0
void sub_002886A8_0x2886a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002886A8_0x2886a8");
#endif

    ctx->pc = 0x2886a8u;

    // 0x2886a8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2886a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2886ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2886ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2886B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886ACu;
        // 0x2886b0: 0x8c6225d8  lw          $v0, 0x25D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9688)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2886ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2886B4u;
    // 0x2886b4: 0x0  nop
    ctx->pc = 0x2886b4u;
    // NOP
    // 0x2886b8: 0xac4400d0  sw          $a0, 0xD0($v0)
    ctx->pc = 0x2886b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 4));
    // 0x2886bc: 0x0  nop
    ctx->pc = 0x2886bcu;
    // NOP
    ctx->pc = 0x2886c0u;
}
