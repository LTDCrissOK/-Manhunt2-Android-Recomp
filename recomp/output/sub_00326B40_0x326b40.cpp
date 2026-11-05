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

// Function: sub_00326B40
// Address: 0x326b40 - 0x326b58
void sub_00326B40_0x326b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B40_0x326b40");
#endif

    ctx->pc = 0x326b40u;

    // 0x326b40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x326b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x326b44: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x326b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x326b48: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x326b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x326b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x326B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B4Cu;
        // 0x326b50: 0x84a20000  lh          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B54u;
    // 0x326b54: 0x0  nop
    ctx->pc = 0x326b54u;
    // NOP
    ctx->pc = 0x326b58u;
}
