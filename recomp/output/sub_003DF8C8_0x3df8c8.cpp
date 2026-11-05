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

// Function: sub_003DF8C8
// Address: 0x3df8c8 - 0x3df8f8
void sub_003DF8C8_0x3df8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF8C8_0x3df8c8");
#endif

    ctx->pc = 0x3df8c8u;

    // 0x3df8c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3df8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3df8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF8CCu;
        // 0x3df8d0: 0x24422ba8  addiu       $v0, $v0, 0x2BA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF8D4u;
    // 0x3df8d4: 0x0  nop
    ctx->pc = 0x3df8d4u;
    // NOP
    // 0x3df8d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df8dc: 0x0  nop
    ctx->pc = 0x3df8dcu;
    // NOP
    // 0x3df8e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3df8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3df8e4: 0x0  nop
    ctx->pc = 0x3df8e4u;
    // NOP
    // 0x3df8e8: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x3df8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
    // 0x3df8ec: 0x0  nop
    ctx->pc = 0x3df8ecu;
    // NOP
    // 0x3df8f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3df8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3df8f4: 0x0  nop
    ctx->pc = 0x3df8f4u;
    // NOP
    ctx->pc = 0x3df8f8u;
}
