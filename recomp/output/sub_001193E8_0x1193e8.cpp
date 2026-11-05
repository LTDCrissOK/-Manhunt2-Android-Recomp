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

// Function: sub_001193E8
// Address: 0x1193e8 - 0x1193f8
void sub_001193E8_0x1193e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001193E8_0x1193e8");
#endif

    ctx->pc = 0x1193e8u;

    // 0x1193e8: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x1193e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x1193ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1193ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193ECu;
        // 0x1193f0: 0xac820084  sw          $v0, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193F4u;
    // 0x1193f4: 0x0  nop
    ctx->pc = 0x1193f4u;
    // NOP
    ctx->pc = 0x1193f8u;
}
