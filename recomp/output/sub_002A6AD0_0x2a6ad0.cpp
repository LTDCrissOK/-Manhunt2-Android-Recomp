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

// Function: sub_002A6AD0
// Address: 0x2a6ad0 - 0x2a6ae8
void sub_002A6AD0_0x2a6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6AD0_0x2a6ad0");
#endif

    ctx->pc = 0x2a6ad0u;

    // 0x2a6ad0: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x2a6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x2a6ad4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A6AD4u;
    {
        const bool branch_taken_0x2a6ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a6ad4) {
            ctx->pc = 0x2A6AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A6AD4u;
            // 0x2a6ad8: 0xac4001bc  sw          $zero, 0x1BC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6ADCu;
            goto label_2a6adc;
        }
    }
    ctx->pc = 0x2A6ADCu;
label_2a6adc:
    // 0x2a6adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6AE4u;
    // 0x2a6ae4: 0x0  nop
    ctx->pc = 0x2a6ae4u;
    // NOP
    ctx->pc = 0x2a6ae8u;
}
