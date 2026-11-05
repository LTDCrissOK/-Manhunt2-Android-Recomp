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

// Function: sub_00370AD0
// Address: 0x370ad0 - 0x370ae0
void sub_00370AD0_0x370ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370AD0_0x370ad0");
#endif

    ctx->pc = 0x370ad0u;

    // 0x370ad0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x370ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x370ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x370AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370AD4u;
        // 0x370ad8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370ADCu;
    // 0x370adc: 0x0  nop
    ctx->pc = 0x370adcu;
    // NOP
    ctx->pc = 0x370ae0u;
}
