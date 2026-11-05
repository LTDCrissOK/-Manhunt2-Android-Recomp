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

// Function: sub_00100238
// Address: 0x100238 - 0x100250
void sub_00100238_0x100238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100238_0x100238");
#endif

    ctx->pc = 0x100238u;

    // 0x100238: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10023c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10023Cu;
    {
        const bool branch_taken_0x10023c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10023c) {
            ctx->pc = 0x100240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10023Cu;
            // 0x100240: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100244u;
            goto label_100244;
        }
    }
    ctx->pc = 0x100244u;
label_100244:
    // 0x100244: 0x3e00008  jr          $ra
    ctx->pc = 0x100244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10024Cu;
    // 0x10024c: 0x0  nop
    ctx->pc = 0x10024cu;
    // NOP
    ctx->pc = 0x100250u;
}
