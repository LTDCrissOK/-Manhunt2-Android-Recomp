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

// Function: sub_003EE4C0
// Address: 0x3ee4c0 - 0x3ee4e8
void sub_003EE4C0_0x3ee4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE4C0_0x3ee4c0");
#endif

    ctx->pc = 0x3ee4c0u;

    // 0x3ee4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4C0u;
        // 0x3ee4c4: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE4C8u;
    // 0x3ee4c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ee4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ee4cc: 0x0  nop
    ctx->pc = 0x3ee4ccu;
    // NOP
    // 0x3ee4d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee4d4: 0x0  nop
    ctx->pc = 0x3ee4d4u;
    // NOP
    // 0x3ee4d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee4dc: 0x0  nop
    ctx->pc = 0x3ee4dcu;
    // NOP
    // 0x3ee4e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ee4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ee4e4: 0x0  nop
    ctx->pc = 0x3ee4e4u;
    // NOP
    ctx->pc = 0x3ee4e8u;
}
