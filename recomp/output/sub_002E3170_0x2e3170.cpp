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

// Function: sub_002E3170
// Address: 0x2e3170 - 0x2e3190
void sub_002E3170_0x2e3170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3170_0x2e3170");
#endif

    ctx->pc = 0x2e3170u;

    // 0x2e3170: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2e3170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e3174: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x2e3174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2e3178: 0xa08202dc  sb          $v0, 0x2DC($a0)
    ctx->pc = 0x2e3178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 732), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e317c: 0xa08302df  sb          $v1, 0x2DF($a0)
    ctx->pc = 0x2e317cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 735), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3180: 0xa08002dd  sb          $zero, 0x2DD($a0)
    ctx->pc = 0x2e3180u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 733), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3184: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3184u;
        // 0x2e3188: 0xa08002de  sb          $zero, 0x2DE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 734), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E318Cu;
    // 0x2e318c: 0x0  nop
    ctx->pc = 0x2e318cu;
    // NOP
    ctx->pc = 0x2e3190u;
}
