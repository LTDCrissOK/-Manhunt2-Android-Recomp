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

// Function: sub_0039E018
// Address: 0x39e018 - 0x39e020
void sub_0039E018_0x39e018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E018_0x39e018");
#endif

    ctx->pc = 0x39e018u;

    // 0x39e018: 0xc0e6054  jal         func_398150
    ctx->pc = 0x39E018u;
    SET_GPR_U32(ctx, 31, 0x39E020u);
    ctx->pc = 0x39E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E018u;
    // 0x39e01c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398150u, 0x39E018u, 0x39E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E020u;
}
