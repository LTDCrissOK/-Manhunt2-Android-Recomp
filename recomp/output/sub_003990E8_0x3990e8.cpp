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

// Function: sub_003990E8
// Address: 0x3990e8 - 0x399108
void sub_003990E8_0x3990e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003990E8_0x3990e8");
#endif

    switch (ctx->pc) {
        case 0x3990f8u: goto label_3990f8;
        default: break;
    }

    ctx->pc = 0x3990e8u;

    // 0x3990e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3990E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3990ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990E8u;
        // 0x3990ec: 0xac85009c  sw          $a1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3990E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3990F0u;
    // 0x3990f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3990f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3990f4: 0x0  nop
    ctx->pc = 0x3990f4u;
    // NOP
label_3990f8:
    // 0x3990f8: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x3990f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x3990fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3990FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990FCu;
        // 0x399100: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3990FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399104u;
    // 0x399104: 0x0  nop
    ctx->pc = 0x399104u;
    // NOP
    ctx->pc = 0x399108u;
}
