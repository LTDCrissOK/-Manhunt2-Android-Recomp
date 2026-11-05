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

// Function: sub_00289468
// Address: 0x289468 - 0x289478
void sub_00289468_0x289468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289468_0x289468");
#endif

    switch (ctx->pc) {
        case 0x289470u: goto label_289470;
        default: break;
    }

    ctx->pc = 0x289468u;

    // 0x289468: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x289468u;
    SET_GPR_U32(ctx, 31, 0x289470u);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x289468u, 0x289470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289470u;
label_289470:
    // 0x289470: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x289470u;
    {
        const bool branch_taken_0x289470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289470u;
        // 0x289474: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289470) {
            ctx->pc = 0x289484u;
            return;
        }
    }
    ctx->pc = 0x289478u;
}
