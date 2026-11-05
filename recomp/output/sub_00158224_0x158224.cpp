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

// Function: sub_00158224
// Address: 0x158224 - 0x15822c
void sub_00158224_0x158224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158224_0x158224");
#endif

    ctx->pc = 0x158224u;

    // 0x158224: 0xc05633a  jal         func_158CE8
    ctx->pc = 0x158224u;
    SET_GPR_U32(ctx, 31, 0x15822Cu);
    ctx->pc = 0x158228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158224u;
    // 0x158228: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CE8u, 0x158224u, 0x15822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15822Cu;
}
