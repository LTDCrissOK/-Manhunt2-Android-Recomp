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

// Function: sub_0017C170
// Address: 0x17c170 - 0x17c188
void sub_0017C170_0x17c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C170_0x17c170");
#endif

    ctx->pc = 0x17c170u;

    // 0x17c170: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17c174: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17c174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17c178: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x17c178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x17c17c: 0x7c800050  sq          $zero, 0x50($a0)
    ctx->pc = 0x17c17cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 0));
    // 0x17c180: 0x3e00008  jr          $ra
    ctx->pc = 0x17C180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C180u;
        // 0x17c184: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C188u;
}
