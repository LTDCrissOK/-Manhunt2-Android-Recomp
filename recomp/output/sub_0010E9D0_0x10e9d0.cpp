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

// Function: sub_0010E9D0
// Address: 0x10e9d0 - 0x10e9f0
void sub_0010E9D0_0x10e9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E9D0_0x10e9d0");
#endif

    ctx->pc = 0x10e9d0u;

    // 0x10e9d0: 0x8c8201c0  lw          $v0, 0x1C0($a0)
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x10e9d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10e9d8: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10e9dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e9e0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x10e9e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x10e9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9E4u;
        // 0x10e9e8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9ECu;
    // 0x10e9ec: 0x0  nop
    ctx->pc = 0x10e9ecu;
    // NOP
    ctx->pc = 0x10e9f0u;
}
