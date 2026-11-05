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

// Function: entry_002b6850
// Address: 0x2b6850 - 0x2b6864
void entry_002b6850_0x2b6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6850_0x2b6850");
#endif

    ctx->pc = 0x2b6850u;

    // 0x2b6850: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b6850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b6854: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2b6854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b6858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b6858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b685c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B685Cu;
    SET_GPR_U32(ctx, 31, 0x2B6864u);
    ctx->pc = 0x2B6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B685Cu;
    // 0x2b6860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B685Cu, 0x2B6864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6864u;
}
