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

// Function: sub_003415E0
// Address: 0x3415e0 - 0x341600
void sub_003415E0_0x3415e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003415E0_0x3415e0");
#endif

    ctx->pc = 0x3415e0u;

    // 0x3415e0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3415e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3415e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3415E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3415E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415E4u;
        // 0x3415e8: 0xac44cc70  sw          $a0, -0x3390($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3415E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3415ECu;
    // 0x3415ec: 0x0  nop
    ctx->pc = 0x3415ecu;
    // NOP
    // 0x3415f0: 0xac460154  sw          $a2, 0x154($v0)
    ctx->pc = 0x3415f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 6));
    // 0x3415f4: 0x0  nop
    ctx->pc = 0x3415f4u;
    // NOP
    // 0x3415f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3415f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3415fc: 0x0  nop
    ctx->pc = 0x3415fcu;
    // NOP
    ctx->pc = 0x341600u;
}
