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

// Function: sub_0010FA38
// Address: 0x10fa38 - 0x10fa50
void sub_0010FA38_0x10fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA38_0x10fa38");
#endif

    ctx->pc = 0x10fa38u;

    // 0x10fa38: 0xac800208  sw          $zero, 0x208($a0)
    ctx->pc = 0x10fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 520), GPR_U32(ctx, 0));
    // 0x10fa3c: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x10fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
    // 0x10fa40: 0xac8001f8  sw          $zero, 0x1F8($a0)
    ctx->pc = 0x10fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 0));
    // 0x10fa44: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA44u;
        // 0x10fa48: 0xac800200  sw          $zero, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA4Cu;
    // 0x10fa4c: 0x0  nop
    ctx->pc = 0x10fa4cu;
    // NOP
    ctx->pc = 0x10fa50u;
}
