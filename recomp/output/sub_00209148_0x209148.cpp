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

// Function: sub_00209148
// Address: 0x209148 - 0x209168
void sub_00209148_0x209148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209148_0x209148");
#endif

    ctx->pc = 0x209148u;

    // 0x209148: 0x8c8233c8  lw          $v0, 0x33C8($a0)
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13256)));
    // 0x20914c: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20914Cu;
    {
        const bool branch_taken_0x20914c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x209150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20914Cu;
        // 0x209150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20914c) {
            ctx->pc = 0x20915Cu;
            goto label_20915c;
        }
    }
    ctx->pc = 0x209154u;
    // 0x209154: 0x3e00008  jr          $ra
    ctx->pc = 0x209154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209154u;
        // 0x209158: 0x8c8233cc  lw          $v0, 0x33CC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20915Cu;
label_20915c:
    // 0x20915c: 0x3e00008  jr          $ra
    ctx->pc = 0x20915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209164u;
    // 0x209164: 0x0  nop
    ctx->pc = 0x209164u;
    // NOP
    ctx->pc = 0x209168u;
}
