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

// Function: sub_002B97B0
// Address: 0x2b97b0 - 0x2b97c0
void sub_002B97B0_0x2b97b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97B0_0x2b97b0");
#endif

    ctx->pc = 0x2b97b0u;

    // 0x2b97b0: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x2b97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x2b97b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B97B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97B4u;
        // 0x2b97b8: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B97BCu;
    // 0x2b97bc: 0x0  nop
    ctx->pc = 0x2b97bcu;
    // NOP
    ctx->pc = 0x2b97c0u;
}
