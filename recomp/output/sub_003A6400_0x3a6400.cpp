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

// Function: sub_003A6400
// Address: 0x3a6400 - 0x3a6410
void sub_003A6400_0x3a6400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6400_0x3a6400");
#endif

    ctx->pc = 0x3a6400u;

    // 0x3a6400: 0x9c820008  lwu         $v0, 0x8($a0)
    ctx->pc = 0x3a6400u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3a6404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a6404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a6408: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6408u;
        // 0x3a640c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6410u;
}
