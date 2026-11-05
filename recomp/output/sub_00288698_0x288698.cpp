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

// Function: sub_00288698
// Address: 0x288698 - 0x2886a8
void sub_00288698_0x288698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288698_0x288698");
#endif

    ctx->pc = 0x288698u;

    // 0x288698: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x288698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28869c: 0x3e00008  jr          $ra
    ctx->pc = 0x28869Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2886A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28869Cu;
        // 0x2886a0: 0xac4425f0  sw          $a0, 0x25F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9712), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28869Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2886A4u;
    // 0x2886a4: 0x0  nop
    ctx->pc = 0x2886a4u;
    // NOP
    ctx->pc = 0x2886a8u;
}
