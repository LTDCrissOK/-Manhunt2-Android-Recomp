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

// Function: sub_0028B5F0
// Address: 0x28b5f0 - 0x28b600
void sub_0028B5F0_0x28b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B5F0_0x28b5f0");
#endif

    ctx->pc = 0x28b5f0u;

    // 0x28b5f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28b5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x28B5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F4u;
        // 0x28b5f8: 0x9062adc0  lbu         $v0, -0x5240($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294946240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B5FCu;
    // 0x28b5fc: 0x0  nop
    ctx->pc = 0x28b5fcu;
    // NOP
    ctx->pc = 0x28b600u;
}
