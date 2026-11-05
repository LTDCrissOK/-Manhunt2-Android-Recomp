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

// Function: sub_002D7EC0
// Address: 0x2d7ec0 - 0x2d7ef8
void sub_002D7EC0_0x2d7ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7EC0_0x2d7ec0");
#endif

    ctx->pc = 0x2d7ec0u;

    // 0x2d7ec0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2d7ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7ec4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2d7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2d7ec8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d7ecc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d7eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ed0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d7ed4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2d7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2d7ed8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7edc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2d7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2d7ee0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2d7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2d7ee4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2d7ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2d7ee8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2d7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2d7eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EECu;
        // 0x2d7ef0: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7EF4u;
    // 0x2d7ef4: 0x0  nop
    ctx->pc = 0x2d7ef4u;
    // NOP
    ctx->pc = 0x2d7ef8u;
}
