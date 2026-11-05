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

// Function: sub_00118DE8
// Address: 0x118de8 - 0x118e00
void sub_00118DE8_0x118de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118DE8_0x118de8");
#endif

    ctx->pc = 0x118de8u;

    // 0x118de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118dec: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x118decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x118df0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x118df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x118df4: 0x3e00008  jr          $ra
    ctx->pc = 0x118DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DF4u;
        // 0x118df8: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DFCu;
    // 0x118dfc: 0x0  nop
    ctx->pc = 0x118dfcu;
    // NOP
    ctx->pc = 0x118e00u;
}
