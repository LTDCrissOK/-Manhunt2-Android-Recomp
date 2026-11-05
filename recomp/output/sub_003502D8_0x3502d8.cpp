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

// Function: sub_003502D8
// Address: 0x3502d8 - 0x3502f8
void sub_003502D8_0x3502d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003502D8_0x3502d8");
#endif

    ctx->pc = 0x3502d8u;

    // 0x3502d8: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x3502d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x3502dc: 0xac850050  sw          $a1, 0x50($a0)
    ctx->pc = 0x3502dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
    // 0x3502e0: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x3502e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x3502e4: 0xaca4004c  sw          $a0, 0x4C($a1)
    ctx->pc = 0x3502e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 4));
    // 0x3502e8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3502e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3502ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3502ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3502F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3502ECu;
        // 0x3502f0: 0xac440050  sw          $a0, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3502ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3502F4u;
    // 0x3502f4: 0x0  nop
    ctx->pc = 0x3502f4u;
    // NOP
    ctx->pc = 0x3502f8u;
}
