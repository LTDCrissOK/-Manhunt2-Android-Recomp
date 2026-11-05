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

// Function: sub_003AE150
// Address: 0x3ae150 - 0x3ae170
void sub_003AE150_0x3ae150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE150_0x3ae150");
#endif

    switch (ctx->pc) {
        case 0x3ae168u: goto label_3ae168;
        default: break;
    }

    ctx->pc = 0x3ae150u;

    // 0x3ae150: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x3ae150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x3ae154: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE154u;
        // 0x3ae158: 0xac850078  sw          $a1, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE15Cu;
    // 0x3ae15c: 0x0  nop
    ctx->pc = 0x3ae15cu;
    // NOP
    // 0x3ae160: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x3ae160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x3ae164: 0x0  nop
    ctx->pc = 0x3ae164u;
    // NOP
label_3ae168:
    // 0x3ae168: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE168u;
        // 0x3ae16c: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE170u;
}
