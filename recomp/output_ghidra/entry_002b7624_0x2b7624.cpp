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

// Function: entry_002b7624
// Address: 0x2b7624 - 0x2b7634
void entry_002b7624_0x2b7624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b7624_0x2b7624");
#endif

    switch (ctx->pc) {
        case 0x2b7630u: goto label_2b7630;
        default: break;
    }

    ctx->pc = 0x2b7624u;

    // 0x2b7624: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b7624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b7628: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7628u;
    SET_GPR_U32(ctx, 31, 0x2B7630u);
    ctx->pc = 0x2B762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7628u;
    // 0x2b762c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7628u, 0x2B7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7630u;
label_2b7630:
    // 0x2b7630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B7630u;
    {
        const bool branch_taken_0x2b7630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7630) {
            ctx->pc = 0x2B7668u;
            return;
        }
    }
    ctx->pc = 0x2B7638u;
}
