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

// Function: sub_0028AF38
// Address: 0x28af38 - 0x28af48
void sub_0028AF38_0x28af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AF38_0x28af38");
#endif

    ctx->pc = 0x28af38u;

    // 0x28af38: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28af3c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF3Cu;
        // 0x28af40: 0x8c62add4  lw          $v0, -0x522C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AF44u;
    // 0x28af44: 0x0  nop
    ctx->pc = 0x28af44u;
    // NOP
    ctx->pc = 0x28af48u;
}
