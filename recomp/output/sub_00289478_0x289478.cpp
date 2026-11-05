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

// Function: sub_00289478
// Address: 0x289478 - 0x289480
void sub_00289478_0x289478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289478_0x289478");
#endif

    ctx->pc = 0x289478u;

    // 0x289478: 0xc0a2abc  jal         func_28AAF0
    ctx->pc = 0x289478u;
    SET_GPR_U32(ctx, 31, 0x289480u);
    ctx->pc = 0x28AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAF0u, 0x289478u, 0x289480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289480u;
}
