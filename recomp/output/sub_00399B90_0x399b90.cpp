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

// Function: sub_00399B90
// Address: 0x399b90 - 0x399ba8
void sub_00399B90_0x399b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399B90_0x399b90");
#endif

    ctx->pc = 0x399b90u;

    // 0x399b90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x399b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x399b94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x399B94u;
    {
        const bool branch_taken_0x399b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x399B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B94u;
        // 0x399b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399b94) {
            ctx->pc = 0x399BA0u;
            goto label_399ba0;
        }
    }
    ctx->pc = 0x399B9Cu;
    // 0x399b9c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x399b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_399ba0:
    // 0x399ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x399BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399BA8u;
}
