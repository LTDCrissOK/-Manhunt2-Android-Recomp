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

// Function: sub_0020EEC8
// Address: 0x20eec8 - 0x20eee8
void sub_0020EEC8_0x20eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EEC8_0x20eec8");
#endif

    ctx->pc = 0x20eec8u;

    // 0x20eec8: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x20eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x20eecc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EECCu;
    {
        const bool branch_taken_0x20eecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eecc) {
            ctx->pc = 0x20EEDCu;
            goto label_20eedc;
        }
    }
    ctx->pc = 0x20EED4u;
    // 0x20eed4: 0x3e00008  jr          $ra
    ctx->pc = 0x20EED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EED4u;
        // 0x20eed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EEDCu;
label_20eedc:
    // 0x20eedc: 0x3e00008  jr          $ra
    ctx->pc = 0x20EEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEDCu;
        // 0x20eee0: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EEE4u;
    // 0x20eee4: 0x0  nop
    ctx->pc = 0x20eee4u;
    // NOP
    ctx->pc = 0x20eee8u;
}
