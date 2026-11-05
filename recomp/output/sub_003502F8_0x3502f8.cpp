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

// Function: sub_003502F8
// Address: 0x3502f8 - 0x350318
void sub_003502F8_0x3502f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003502F8_0x3502f8");
#endif

    ctx->pc = 0x3502f8u;

    // 0x3502f8: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x3502f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3502fc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x3502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x350300: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x350300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x350304: 0x8c85004c  lw          $a1, 0x4C($a0)
    ctx->pc = 0x350304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x350308: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x350308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x35030c: 0x3e00008  jr          $ra
    ctx->pc = 0x35030Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35030Cu;
        // 0x350310: 0xac45004c  sw          $a1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35030Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350314u;
    // 0x350314: 0x0  nop
    ctx->pc = 0x350314u;
    // NOP
    ctx->pc = 0x350318u;
}
