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

// Function: sub_002886D8
// Address: 0x2886d8 - 0x2886f0
void sub_002886D8_0x2886d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002886D8_0x2886d8");
#endif

    ctx->pc = 0x2886d8u;

    // 0x2886d8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2886dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2886DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2886E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886DCu;
        // 0x2886e0: 0x8c6225e0  lw          $v0, 0x25E0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9696)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2886DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2886E4u;
    // 0x2886e4: 0x0  nop
    ctx->pc = 0x2886e4u;
    // NOP
    // 0x2886e8: 0xac4400d8  sw          $a0, 0xD8($v0)
    ctx->pc = 0x2886e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 4));
    // 0x2886ec: 0x0  nop
    ctx->pc = 0x2886ecu;
    // NOP
    ctx->pc = 0x2886f0u;
}
