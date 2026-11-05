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

// Function: sub_003ADA88
// Address: 0x3ada88 - 0x3adaa8
void sub_003ADA88_0x3ada88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADA88_0x3ada88");
#endif

    ctx->pc = 0x3ada88u;

    // 0x3ada88: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x3ada88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x3ada8c: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x3ada8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3ada90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ada90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ada94: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3ada94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3ada98: 0xac82008c  sw          $v0, 0x8C($a0)
    ctx->pc = 0x3ada98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 2));
    // 0x3ada9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA9Cu;
        // 0x3adaa0: 0xac830088  sw          $v1, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADAA4u;
    // 0x3adaa4: 0x0  nop
    ctx->pc = 0x3adaa4u;
    // NOP
    ctx->pc = 0x3adaa8u;
}
