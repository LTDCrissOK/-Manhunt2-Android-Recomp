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

// Function: entry_002b6828
// Address: 0x2b6828 - 0x2b683e
void entry_002b6828_0x2b6828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6828_0x2b6828");
#endif

    switch (ctx->pc) {
        case 0x2b6834u: goto label_2b6834;
        default: break;
    }

    ctx->pc = 0x2b6828u;

    // 0x2b6828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b682c: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B682Cu;
    SET_GPR_U32(ctx, 31, 0x2B6834u);
    ctx->pc = 0x2B6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B682Cu;
    // 0x2b6830: 0xae025914  sw          $v0, 0x5914($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B682Cu, 0x2B6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6834u;
label_2b6834:
    // 0x2b6834: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2b6834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b6838: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b683c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B683Cu;
    {
        const bool branch_taken_0x2b683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b683c) {
            ctx->pc = 0x2B6880u;
            return;
        }
    }
    ctx->pc = 0x2B6844u;
}
