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

// Function: sub_00158214
// Address: 0x158214 - 0x158224
void sub_00158214_0x158214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158214_0x158214");
#endif

    switch (ctx->pc) {
        case 0x15821cu: goto label_15821c;
        default: break;
    }

    ctx->pc = 0x158214u;

    // 0x158214: 0xc056312  jal         func_158C48
    ctx->pc = 0x158214u;
    SET_GPR_U32(ctx, 31, 0x15821Cu);
    ctx->pc = 0x158218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158214u;
    // 0x158218: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C48u, 0x158214u, 0x15821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15821Cu;
label_15821c:
    // 0x15821c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15821Cu;
    {
        const bool branch_taken_0x15821c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15821Cu;
        // 0x158220: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15821c) {
            ctx->pc = 0x158230u;
            return;
        }
    }
    ctx->pc = 0x158224u;
}
