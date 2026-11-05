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

// Function: entry_002b63a0
// Address: 0x2b63a0 - 0x2b63a2
void entry_002b63a0_0x2b63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b63a0_0x2b63a0");
#endif

    ctx->pc = 0x2b63a0u;

    // 0x2b63a0: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B63A0u;
    SET_GPR_U32(ctx, 31, 0x2B63A8u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B63A0u, 0x2B63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63A8u;
}
