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

// Function: sub_0028B5E0
// Address: 0x28b5e0 - 0x28b5f0
void sub_0028B5E0_0x28b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B5E0_0x28b5e0");
#endif

    ctx->pc = 0x28b5e0u;

    // 0x28b5e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5E4u;
        // 0x28b5e8: 0xa044adc0  sb          $a0, -0x5240($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294946240), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B5ECu;
    // 0x28b5ec: 0x0  nop
    ctx->pc = 0x28b5ecu;
    // NOP
    ctx->pc = 0x28b5f0u;
}
