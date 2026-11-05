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

// Function: sub_0012C6E8
// Address: 0x12c6e8 - 0x12c6f8
void sub_0012C6E8_0x12c6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C6E8_0x12c6e8");
#endif

    ctx->pc = 0x12c6e8u;

    // 0x12c6e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12c6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12C6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6ECu;
        // 0x12c6f0: 0x90820085  lbu         $v0, 0x85($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C6F4u;
    // 0x12c6f4: 0x0  nop
    ctx->pc = 0x12c6f4u;
    // NOP
    ctx->pc = 0x12c6f8u;
}
