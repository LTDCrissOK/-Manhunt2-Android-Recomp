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

// Function: sub_0020B9B0
// Address: 0x20b9b0 - 0x20b9c0
void sub_0020B9B0_0x20b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B9B0_0x20b9b0");
#endif

    switch (ctx->pc) {
        case 0x20b9b8u: goto label_20b9b8;
        default: break;
    }

    ctx->pc = 0x20b9b0u;

    // 0x20b9b0: 0xc0da27c  jal         func_3689F0
    ctx->pc = 0x20B9B0u;
    SET_GPR_U32(ctx, 31, 0x20B9B8u);
    ctx->pc = 0x20B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9B0u;
    // 0x20b9b4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3689F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3689F0u, 0x20B9B0u, 0x20B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9B8u;
label_20b9b8:
    // 0x20b9b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B9B8u;
    {
        const bool branch_taken_0x20b9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9B8u;
        // 0x20b9bc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9b8) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B9C0u;
}
