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

// Function: sub_0011E180
// Address: 0x11e180 - 0x11e198
void sub_0011E180_0x11e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E180_0x11e180");
#endif

    ctx->pc = 0x11e180u;

    // 0x11e180: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E180u;
    {
        const bool branch_taken_0x11e180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E180u;
        // 0x11e184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e180) {
            ctx->pc = 0x11E190u;
            goto label_11e190;
        }
    }
    ctx->pc = 0x11E188u;
    // 0x11e188: 0x3e00008  jr          $ra
    ctx->pc = 0x11E188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E188u;
        // 0x11e18c: 0x8ca201d4  lw          $v0, 0x1D4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E190u;
label_11e190:
    // 0x11e190: 0x3e00008  jr          $ra
    ctx->pc = 0x11E190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E198u;
}
