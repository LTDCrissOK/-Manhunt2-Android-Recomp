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

// Function: sub_0015B404
// Address: 0x15b404 - 0x15b40c
void sub_0015B404_0x15b404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B404_0x15b404");
#endif

    ctx->pc = 0x15b404u;

    // 0x15b404: 0xc057888  jal         func_15E220
    ctx->pc = 0x15B404u;
    SET_GPR_U32(ctx, 31, 0x15B40Cu);
    ctx->pc = 0x15B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B404u;
    // 0x15b408: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E220u, 0x15B404u, 0x15B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B40Cu;
}
