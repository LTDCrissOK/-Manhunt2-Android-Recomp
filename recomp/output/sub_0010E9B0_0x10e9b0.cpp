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

// Function: sub_0010E9B0
// Address: 0x10e9b0 - 0x10e9d0
void sub_0010E9B0_0x10e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E9B0_0x10e9b0");
#endif

    ctx->pc = 0x10e9b0u;

    // 0x10e9b0: 0x8c8201bc  lw          $v0, 0x1BC($a0)
    ctx->pc = 0x10e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x10e9b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10e9b8: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10e9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e9c0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10e9c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10e9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9C4u;
        // 0x10e9c8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9CCu;
    // 0x10e9cc: 0x0  nop
    ctx->pc = 0x10e9ccu;
    // NOP
    ctx->pc = 0x10e9d0u;
}
