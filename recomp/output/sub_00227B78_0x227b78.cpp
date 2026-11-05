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

// Function: sub_00227B78
// Address: 0x227b78 - 0x227b98
void sub_00227B78_0x227b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B78_0x227b78");
#endif

    ctx->pc = 0x227b78u;

    // 0x227b78: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x227b7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227B7Cu;
    {
        const bool branch_taken_0x227b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b7c) {
            ctx->pc = 0x227B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B7Cu;
            // 0x227b80: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B90u;
            goto label_227b90;
        }
    }
    ctx->pc = 0x227B84u;
    // 0x227b84: 0x8c820328  lw          $v0, 0x328($a0)
    ctx->pc = 0x227b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x227b88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x227B88u;
    {
        const bool branch_taken_0x227b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227b88) {
            ctx->pc = 0x227B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B88u;
            // 0x227b8c: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B90u;
            goto label_227b90;
        }
    }
    ctx->pc = 0x227B90u;
label_227b90:
    // 0x227b90: 0x3e00008  jr          $ra
    ctx->pc = 0x227B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B98u;
}
