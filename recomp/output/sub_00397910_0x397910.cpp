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

// Function: sub_00397910
// Address: 0x397910 - 0x397928
void sub_00397910_0x397910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397910_0x397910");
#endif

    ctx->pc = 0x397910u;

    // 0x397910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39791c: 0x80ec31e  j           func_3B0C78
    ctx->pc = 0x39791Cu;
    ctx->pc = 0x397920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39791Cu;
    // 0x397920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0C78u, 0x39791Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397924u;
    // 0x397924: 0x0  nop
    ctx->pc = 0x397924u;
    // NOP
    ctx->pc = 0x397928u;
}
