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

// Function: sub_00262660
// Address: 0x262660 - 0x262680
void sub_00262660_0x262660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262660_0x262660");
#endif

    ctx->pc = 0x262660u;

    // 0x262660: 0x8c830298  lw          $v1, 0x298($a0)
    ctx->pc = 0x262660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x262664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x262664u;
    {
        const bool branch_taken_0x262664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262664u;
        // 0x262668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262664) {
            ctx->pc = 0x262678u;
            goto label_262678;
        }
    }
    ctx->pc = 0x26266Cu;
    // 0x26266c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x26266cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x262670: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x262670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x262674: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x262674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_262678:
    // 0x262678: 0x3e00008  jr          $ra
    ctx->pc = 0x262678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262680u;
}
