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

// Function: sub_00288808
// Address: 0x288808 - 0x288820
void sub_00288808_0x288808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288808_0x288808");
#endif

    ctx->pc = 0x288808u;

    // 0x288808: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28880c: 0x3e00008  jr          $ra
    ctx->pc = 0x28880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28880Cu;
        // 0x288810: 0x8c6225cc  lw          $v0, 0x25CC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9676)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28880Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288814u;
    // 0x288814: 0x0  nop
    ctx->pc = 0x288814u;
    // NOP
    // 0x288818: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x288818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
    // 0x28881c: 0x0  nop
    ctx->pc = 0x28881cu;
    // NOP
    ctx->pc = 0x288820u;
}
