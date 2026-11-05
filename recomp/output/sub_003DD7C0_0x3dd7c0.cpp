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

// Function: sub_003DD7C0
// Address: 0x3dd7c0 - 0x3dd7f0
void sub_003DD7C0_0x3dd7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD7C0_0x3dd7c0");
#endif

    ctx->pc = 0x3dd7c0u;

    // 0x3dd7c0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3dd7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3dd7c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3dd7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3dd7c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3dd7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3dd7cc: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x3dd7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dd7d0: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x3dd7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dd7d4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3dd7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3dd7d8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3dd7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3dd7dc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3dd7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3dd7e0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3dd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3dd7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7E4u;
        // 0x3dd7e8: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD7ECu;
    // 0x3dd7ec: 0x0  nop
    ctx->pc = 0x3dd7ecu;
    // NOP
    ctx->pc = 0x3dd7f0u;
}
