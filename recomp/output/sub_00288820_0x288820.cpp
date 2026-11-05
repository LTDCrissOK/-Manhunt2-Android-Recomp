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

// Function: sub_00288820
// Address: 0x288820 - 0x288838
void sub_00288820_0x288820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288820_0x288820");
#endif

    ctx->pc = 0x288820u;

    // 0x288820: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x288824: 0x3e00008  jr          $ra
    ctx->pc = 0x288824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288824u;
        // 0x288828: 0x8c6225d0  lw          $v0, 0x25D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9680)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28882Cu;
    // 0x28882c: 0x0  nop
    ctx->pc = 0x28882cu;
    // NOP
    // 0x288830: 0xac4400c8  sw          $a0, 0xC8($v0)
    ctx->pc = 0x288830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 4));
    // 0x288834: 0x0  nop
    ctx->pc = 0x288834u;
    // NOP
    ctx->pc = 0x288838u;
}
