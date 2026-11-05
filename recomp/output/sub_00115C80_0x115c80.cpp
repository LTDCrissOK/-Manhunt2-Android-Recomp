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

// Function: sub_00115C80
// Address: 0x115c80 - 0x115ca0
void sub_00115C80_0x115c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115C80_0x115c80");
#endif

    ctx->pc = 0x115c80u;

    // 0x115c80: 0x90820074  lbu         $v0, 0x74($a0)
    ctx->pc = 0x115c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x115c84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x115c88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x115c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x115c8c: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x115c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
    // 0x115c90: 0x90830074  lbu         $v1, 0x74($a0)
    ctx->pc = 0x115c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x115c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115c98: 0x3e00008  jr          $ra
    ctx->pc = 0x115C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C98u;
        // 0x115c9c: 0xa0830074  sb          $v1, 0x74($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115CA0u;
}
