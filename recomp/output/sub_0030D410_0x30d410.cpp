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

// Function: sub_0030D410
// Address: 0x30d410 - 0x30d428
void sub_0030D410_0x30d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D410_0x30d410");
#endif

    ctx->pc = 0x30d410u;

    // 0x30d410: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30d410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d414: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d418: 0x24423068  addiu       $v0, $v0, 0x3068
    ctx->pc = 0x30d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12392));
    // 0x30d41c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d420: 0x3e00008  jr          $ra
    ctx->pc = 0x30D420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D420u;
        // 0x30d424: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D428u;
}
