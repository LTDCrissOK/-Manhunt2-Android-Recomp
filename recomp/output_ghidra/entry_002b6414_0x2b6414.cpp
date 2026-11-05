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

// Function: entry_002b6414
// Address: 0x2b6414 - 0x2b641e
void entry_002b6414_0x2b6414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6414_0x2b6414");
#endif

    ctx->pc = 0x2b6414u;

    // 0x2b6414: 0x0  nop
    ctx->pc = 0x2b6414u;
    // NOP
    // 0x2b6418: 0xc0a6df2  jal         func_29B7C8
    ctx->pc = 0x2B6418u;
    SET_GPR_U32(ctx, 31, 0x2B6420u);
    ctx->pc = 0x2B641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6418u;
    // 0x2b641c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7C8u, 0x2B6418u, 0x2B6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6420u;
}
