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

// Function: sub_003D5F64
// Address: 0x3d5f64 - 0x3d5f70
void sub_003D5F64_0x3d5f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5F64_0x3d5f64");
#endif

    switch (ctx->pc) {
        case 0x3d5f6cu: goto label_3d5f6c;
        default: break;
    }

    ctx->pc = 0x3d5f64u;

    // 0x3d5f64: 0xc0f56a6  jal         func_3D5A98
    ctx->pc = 0x3D5F64u;
    SET_GPR_U32(ctx, 31, 0x3D5F6Cu);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D5F64u, 0x3D5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5F6Cu;
label_3d5f6c:
    // 0x3d5f6c: 0x0  nop
    ctx->pc = 0x3d5f6cu;
    // NOP
    ctx->pc = 0x3d5f70u;
}
