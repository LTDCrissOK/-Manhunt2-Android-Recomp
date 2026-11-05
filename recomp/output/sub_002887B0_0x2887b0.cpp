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

// Function: sub_002887B0
// Address: 0x2887b0 - 0x2887c8
void sub_002887B0_0x2887b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002887B0_0x2887b0");
#endif

    ctx->pc = 0x2887b0u;

    // 0x2887b0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2887b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2887b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2887B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2887B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887B4u;
        // 0x2887b8: 0x8c6225bc  lw          $v0, 0x25BC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9660)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2887B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2887BCu;
    // 0x2887bc: 0x0  nop
    ctx->pc = 0x2887bcu;
    // NOP
    // 0x2887c0: 0xac4400b4  sw          $a0, 0xB4($v0)
    ctx->pc = 0x2887c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
    // 0x2887c4: 0x0  nop
    ctx->pc = 0x2887c4u;
    // NOP
    ctx->pc = 0x2887c8u;
}
