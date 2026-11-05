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

// Function: sub_003E0110
// Address: 0x3e0110 - 0x3e0128
void sub_003E0110_0x3e0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0110_0x3e0110");
#endif

    ctx->pc = 0x3e0110u;

    // 0x3e0110: 0x8c832008  lw          $v1, 0x2008($a0)
    ctx->pc = 0x3e0110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8200)));
    // 0x3e0114: 0x8c82200c  lw          $v0, 0x200C($a0)
    ctx->pc = 0x3e0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8204)));
    // 0x3e0118: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3e0118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3e011c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E011Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E011Cu;
        // 0x3e0120: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E011Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0124u;
    // 0x3e0124: 0x0  nop
    ctx->pc = 0x3e0124u;
    // NOP
    ctx->pc = 0x3e0128u;
}
