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

// Function: sub_002B3528
// Address: 0x2b3528 - 0x2b3540
void sub_002B3528_0x2b3528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3528_0x2b3528");
#endif

    ctx->pc = 0x2b3528u;

    // 0x2b3528: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2b3528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2b352c: 0x34422d98  ori         $v0, $v0, 0x2D98
    ctx->pc = 0x2b352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11672);
    // 0x2b3530: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b3530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b3534: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3534u;
        // 0x2b3538: 0xac800024  sw          $zero, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B353Cu;
    // 0x2b353c: 0x0  nop
    ctx->pc = 0x2b353cu;
    // NOP
    ctx->pc = 0x2b3540u;
}
