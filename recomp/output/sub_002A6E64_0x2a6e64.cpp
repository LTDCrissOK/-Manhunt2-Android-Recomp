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

// Function: sub_002A6E64
// Address: 0x2a6e64 - 0x2a6e74
void sub_002A6E64_0x2a6e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6E64_0x2a6e64");
#endif

    switch (ctx->pc) {
        case 0x2a6e6cu: goto label_2a6e6c;
        default: break;
    }

    ctx->pc = 0x2a6e64u;

    // 0x2a6e64: 0xc0a96a2  jal         func_2A5A88
    ctx->pc = 0x2A6E64u;
    SET_GPR_U32(ctx, 31, 0x2A6E6Cu);
    ctx->pc = 0x2A5A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A88u, 0x2A6E64u, 0x2A6E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6E6Cu;
label_2a6e6c:
    // 0x2a6e6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A6E6Cu;
    {
        const bool branch_taken_0x2a6e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6E6Cu;
        // 0x2a6e70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6e6c) {
            ctx->pc = 0x2A6E78u;
            return;
        }
    }
    ctx->pc = 0x2A6E74u;
}
