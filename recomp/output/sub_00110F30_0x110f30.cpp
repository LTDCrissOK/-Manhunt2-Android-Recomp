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

// Function: sub_00110F30
// Address: 0x110f30 - 0x110f50
void sub_00110F30_0x110f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F30_0x110f30");
#endif

    ctx->pc = 0x110f30u;

    // 0x110f30: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110F34u;
    {
        const bool branch_taken_0x110f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110f34) {
            ctx->pc = 0x110F44u;
            goto label_110f44;
        }
    }
    ctx->pc = 0x110F3Cu;
    // 0x110f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x110F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F3Cu;
        // 0x110f40: 0x8c4201a8  lw          $v0, 0x1A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F44u;
label_110f44:
    // 0x110f44: 0x3e00008  jr          $ra
    ctx->pc = 0x110F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F44u;
        // 0x110f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F4Cu;
    // 0x110f4c: 0x0  nop
    ctx->pc = 0x110f4cu;
    // NOP
    ctx->pc = 0x110f50u;
}
