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

// Function: sub_00132264
// Address: 0x132264 - 0x132274
void sub_00132264_0x132264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132264_0x132264");
#endif

    switch (ctx->pc) {
        case 0x13226cu: goto label_13226c;
        default: break;
    }

    ctx->pc = 0x132264u;

    // 0x132264: 0xc04c938  jal         func_1324E0
    ctx->pc = 0x132264u;
    SET_GPR_U32(ctx, 31, 0x13226Cu);
    ctx->pc = 0x132268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132264u;
    // 0x132268: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324E0u, 0x132264u, 0x13226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13226Cu;
label_13226c:
    // 0x13226c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13226Cu;
    {
        const bool branch_taken_0x13226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13226Cu;
        // 0x132270: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13226c) {
            ctx->pc = 0x132280u;
            return;
        }
    }
    ctx->pc = 0x132274u;
}
