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

// Function: sub_001DB9B8
// Address: 0x1db9b8 - 0x1db9f0
void sub_001DB9B8_0x1db9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB9B8_0x1db9b8");
#endif

    ctx->pc = 0x1db9b8u;

    // 0x1db9b8: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1db9bc: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x1db9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1db9c0: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x1db9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1db9c4: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x1db9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1db9c8: 0xac860070  sw          $a2, 0x70($a0)
    ctx->pc = 0x1db9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 6));
    // 0x1db9cc: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x1db9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x1db9d0: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x1db9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x1db9d4: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x1db9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
    // 0x1db9d8: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x1db9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x1db9dc: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x1db9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x1db9e0: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x1db9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x1db9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9E4u;
        // 0x1db9e8: 0xac860060  sw          $a2, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB9ECu;
    // 0x1db9ec: 0x0  nop
    ctx->pc = 0x1db9ecu;
    // NOP
    ctx->pc = 0x1db9f0u;
}
