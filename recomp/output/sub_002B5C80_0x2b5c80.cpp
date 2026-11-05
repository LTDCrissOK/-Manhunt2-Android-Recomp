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

// Function: sub_002B5C80
// Address: 0x2b5c80 - 0x2b5c90
void sub_002B5C80_0x2b5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5C80_0x2b5c80");
#endif

    switch (ctx->pc) {
        case 0x2b5c88u: goto label_2b5c88;
        default: break;
    }

    ctx->pc = 0x2b5c80u;

    // 0x2b5c80: 0xc0adc2c  jal         func_2B70B0
    ctx->pc = 0x2B5C80u;
    SET_GPR_U32(ctx, 31, 0x2B5C88u);
    ctx->pc = 0x2B5C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C80u;
    // 0x2b5c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B70B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B70B0u, 0x2B5C80u, 0x2B5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C88u;
label_2b5c88:
    // 0x2b5c88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5C88u;
    {
        const bool branch_taken_0x2b5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C88u;
        // 0x2b5c8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c88) {
            ctx->pc = 0x2B5C98u;
            return;
        }
    }
    ctx->pc = 0x2B5C90u;
}
