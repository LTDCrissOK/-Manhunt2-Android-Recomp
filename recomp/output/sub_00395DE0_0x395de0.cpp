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

// Function: sub_00395DE0
// Address: 0x395de0 - 0x395e30
void sub_00395DE0_0x395de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395DE0_0x395de0");
#endif

    ctx->pc = 0x395de0u;

    // 0x395de0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x395de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x395de4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x395de8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x395de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x395dec: 0x8c42e548  lw          $v0, -0x1AB8($v0)
    ctx->pc = 0x395decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960456)));
    // 0x395df0: 0x3e00008  jr          $ra
    ctx->pc = 0x395DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DF0u;
        // 0x395df4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395DF8u;
    // 0x395df8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x395df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x395dfc: 0x0  nop
    ctx->pc = 0x395dfcu;
    // NOP
    // 0x395e00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x395e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x395e04: 0x0  nop
    ctx->pc = 0x395e04u;
    // NOP
    // 0x395e08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395e0c: 0x0  nop
    ctx->pc = 0x395e0cu;
    // NOP
    // 0x395e10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395e14: 0x0  nop
    ctx->pc = 0x395e14u;
    // NOP
    // 0x395e18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395e1c: 0x0  nop
    ctx->pc = 0x395e1cu;
    // NOP
    // 0x395e20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395e24: 0x0  nop
    ctx->pc = 0x395e24u;
    // NOP
    // 0x395e28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395e2c: 0x0  nop
    ctx->pc = 0x395e2cu;
    // NOP
    ctx->pc = 0x395e30u;
}
