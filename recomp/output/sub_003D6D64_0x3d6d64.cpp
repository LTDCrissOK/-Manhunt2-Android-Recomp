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

// Function: sub_003D6D64
// Address: 0x3d6d64 - 0x3d6d6c
void sub_003D6D64_0x3d6d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6D64_0x3d6d64");
#endif

    ctx->pc = 0x3d6d64u;

    // 0x3d6d64: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x3D6D64u;
    SET_GPR_U32(ctx, 31, 0x3D6D6Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x3D6D64u, 0x3D6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6D6Cu;
}
