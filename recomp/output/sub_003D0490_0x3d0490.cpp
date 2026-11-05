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

// Function: sub_003D0490
// Address: 0x3d0490 - 0x3d0498
void sub_003D0490_0x3d0490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0490_0x3d0490");
#endif

    ctx->pc = 0x3d0490u;

    // 0x3d0490: 0x80f460c  j           func_3D1830
    ctx->pc = 0x3D0490u;
    ctx->pc = 0x3D1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1830u, 0x3D0490u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3D0498u;
}
