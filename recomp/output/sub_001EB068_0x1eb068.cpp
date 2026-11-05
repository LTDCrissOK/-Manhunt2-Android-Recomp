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

// Function: sub_001EB068
// Address: 0x1eb068 - 0x1eb080
void sub_001EB068_0x1eb068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB068_0x1eb068");
#endif

    ctx->pc = 0x1eb068u;

    // 0x1eb068: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1eb068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1eb06c: 0x8c629208  lw          $v0, -0x6DF8($v1)
    ctx->pc = 0x1eb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9208u));
    // 0x1eb070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eb074: 0xac629208  sw          $v0, -0x6DF8($v1)
    ctx->pc = 0x1eb074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9208u, _value); } while (0);
    // 0x1eb078: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB078u;
        // 0x1eb07c: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB080u;
}
