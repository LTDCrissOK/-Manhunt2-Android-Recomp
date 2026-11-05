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

// Function: sub_00203FA8
// Address: 0x203fa8 - 0x203fb8
void sub_00203FA8_0x203fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203FA8_0x203fa8");
#endif

    ctx->pc = 0x203fa8u;

    // 0x203fa8: 0x2482fffb  addiu       $v0, $a0, -0x5
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x203fac: 0x3e00008  jr          $ra
    ctx->pc = 0x203FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FACu;
        // 0x203fb0: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203FB4u;
    // 0x203fb4: 0x0  nop
    ctx->pc = 0x203fb4u;
    // NOP
    ctx->pc = 0x203fb8u;
}
