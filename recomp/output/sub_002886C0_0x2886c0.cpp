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

// Function: sub_002886C0
// Address: 0x2886c0 - 0x2886d8
void sub_002886C0_0x2886c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002886C0_0x2886c0");
#endif

    ctx->pc = 0x2886c0u;

    // 0x2886c0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2886c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2886c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2886C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886C4u;
        // 0x2886c8: 0x8c6225dc  lw          $v0, 0x25DC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9692)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2886C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2886CCu;
    // 0x2886cc: 0x0  nop
    ctx->pc = 0x2886ccu;
    // NOP
    // 0x2886d0: 0xac4400d4  sw          $a0, 0xD4($v0)
    ctx->pc = 0x2886d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 4));
    // 0x2886d4: 0x0  nop
    ctx->pc = 0x2886d4u;
    // NOP
    ctx->pc = 0x2886d8u;
}
