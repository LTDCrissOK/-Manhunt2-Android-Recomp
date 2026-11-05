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

// Function: sub_0038EE70
// Address: 0x38ee70 - 0x38ee78
void sub_0038EE70_0x38ee70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EE70_0x38ee70");
#endif

    ctx->pc = 0x38ee70u;

    // 0x38ee70: 0x80e331c  j           func_38CC70
    ctx->pc = 0x38EE70u;
    ctx->pc = 0x38CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CC70u, 0x38EE70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38EE78u;
}
