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

// Function: sub_0027A1F0
// Address: 0x27a1f0 - 0x27a208
void sub_0027A1F0_0x27a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A1F0_0x27a1f0");
#endif

    ctx->pc = 0x27a1f0u;

    // 0x27a1f0: 0x8c83100c  lw          $v1, 0x100C($a0)
    ctx->pc = 0x27a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4108)));
    // 0x27a1f4: 0x8c821010  lw          $v0, 0x1010($a0)
    ctx->pc = 0x27a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4112)));
    // 0x27a1f8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x27a1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27a1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x27A1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1FCu;
        // 0x27a200: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A204u;
    // 0x27a204: 0x0  nop
    ctx->pc = 0x27a204u;
    // NOP
    ctx->pc = 0x27a208u;
}
