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

// Function: sub_0011E168
// Address: 0x11e168 - 0x11e180
void sub_0011E168_0x11e168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E168_0x11e168");
#endif

    ctx->pc = 0x11e168u;

    // 0x11e168: 0x8ca201d4  lw          $v0, 0x1D4($a1)
    ctx->pc = 0x11e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
    // 0x11e16c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11e170: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e174: 0x3e00008  jr          $ra
    ctx->pc = 0x11E174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E174u;
        // 0x11e178: 0x8c82020c  lw          $v0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E17Cu;
    // 0x11e17c: 0x0  nop
    ctx->pc = 0x11e17cu;
    // NOP
    ctx->pc = 0x11e180u;
}
