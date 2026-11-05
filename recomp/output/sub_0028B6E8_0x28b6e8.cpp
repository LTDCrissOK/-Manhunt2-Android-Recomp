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

// Function: sub_0028B6E8
// Address: 0x28b6e8 - 0x28b6f8
void sub_0028B6E8_0x28b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B6E8_0x28b6e8");
#endif

    ctx->pc = 0x28b6e8u;

    // 0x28b6e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6ECu;
        // 0x28b6f0: 0xac44adf0  sw          $a0, -0x5210($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B6F4u;
    // 0x28b6f4: 0x0  nop
    ctx->pc = 0x28b6f4u;
    // NOP
    ctx->pc = 0x28b6f8u;
}
