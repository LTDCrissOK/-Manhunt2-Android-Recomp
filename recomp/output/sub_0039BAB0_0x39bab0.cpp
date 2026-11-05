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

// Function: sub_0039BAB0
// Address: 0x39bab0 - 0x39bad0
void sub_0039BAB0_0x39bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BAB0_0x39bab0");
#endif

    ctx->pc = 0x39bab0u;

    // 0x39bab0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39bab4: 0x2463ada8  addiu       $v1, $v1, -0x5258
    ctx->pc = 0x39bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946216));
    // 0x39bab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x39bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40ADA8u));
    // 0x39babc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39bac0: 0x3e00008  jr          $ra
    ctx->pc = 0x39BAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAC0u;
        // 0x39bac4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BAC8u;
    // 0x39bac8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39bac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39bacc: 0x0  nop
    ctx->pc = 0x39baccu;
    // NOP
    ctx->pc = 0x39bad0u;
}
