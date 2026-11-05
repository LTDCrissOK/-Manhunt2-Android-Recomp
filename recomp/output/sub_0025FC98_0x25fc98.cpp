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

// Function: sub_0025FC98
// Address: 0x25fc98 - 0x25fca8
void sub_0025FC98_0x25fc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FC98_0x25fc98");
#endif

    ctx->pc = 0x25fc98u;

    // 0x25fc98: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x25fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x25fc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x25FC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC9Cu;
        // 0x25fca0: 0x8c620220  lw          $v0, 0x220($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FCA4u;
    // 0x25fca4: 0x0  nop
    ctx->pc = 0x25fca4u;
    // NOP
    ctx->pc = 0x25fca8u;
}
