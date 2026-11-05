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

// Function: sub_003EF888
// Address: 0x3ef888 - 0x3ef8b8
void sub_003EF888_0x3ef888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF888_0x3ef888");
#endif

    ctx->pc = 0x3ef888u;

    // 0x3ef888: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x3ef888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ef88c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3ef88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3ef890: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3ef890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ef894: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF894u;
        // 0x3ef898: 0xa0800002  sb          $zero, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF89Cu;
    // 0x3ef89c: 0x0  nop
    ctx->pc = 0x3ef89cu;
    // NOP
    // 0x3ef8a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ef8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ef8a4: 0x0  nop
    ctx->pc = 0x3ef8a4u;
    // NOP
    // 0x3ef8a8: 0x0  nop
    ctx->pc = 0x3ef8a8u;
    // NOP
    // 0x3ef8ac: 0x0  nop
    ctx->pc = 0x3ef8acu;
    // NOP
    // 0x3ef8b0: 0x0  nop
    ctx->pc = 0x3ef8b0u;
    // NOP
    // 0x3ef8b4: 0x0  nop
    ctx->pc = 0x3ef8b4u;
    // NOP
    ctx->pc = 0x3ef8b8u;
}
