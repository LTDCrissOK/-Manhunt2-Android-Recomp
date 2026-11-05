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

// Function: sub_002CA270
// Address: 0x2ca270 - 0x2ca290
void sub_002CA270_0x2ca270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA270_0x2ca270");
#endif

    ctx->pc = 0x2ca270u;

    // 0x2ca270: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ca270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ca274: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ca274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca278: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2ca278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2ca27c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2ca27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ca280: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ca284: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA284u;
        // 0x2ca288: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA28Cu;
    // 0x2ca28c: 0x0  nop
    ctx->pc = 0x2ca28cu;
    // NOP
    ctx->pc = 0x2ca290u;
}
