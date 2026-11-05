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

// Function: entry_002b7634
// Address: 0x2b7634 - 0x2b764c
void entry_002b7634_0x2b7634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b7634_0x2b7634");
#endif

    switch (ctx->pc) {
        case 0x2b7648u: goto label_2b7648;
        default: break;
    }

    ctx->pc = 0x2b7634u;

    // 0x2b7634: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b7634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b7638: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b7638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b763c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2b763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b7640: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B7640u;
    SET_GPR_U32(ctx, 31, 0x2B7648u);
    ctx->pc = 0x2B7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7640u;
    // 0x2b7644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B7640u, 0x2B7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7648u;
label_2b7648:
    // 0x2b7648: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b7648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2b764cu;
}
