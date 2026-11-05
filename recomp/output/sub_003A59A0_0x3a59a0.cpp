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

// Function: sub_003A59A0
// Address: 0x3a59a0 - 0x3a59b4
void sub_003A59A0_0x3a59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A59A0_0x3a59a0");
#endif

    switch (ctx->pc) {
        case 0x3a59a8u: goto label_3a59a8;
        case 0x3a59b0u: goto label_3a59b0;
        default: break;
    }

    ctx->pc = 0x3a59a0u;

    // 0x3a59a0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a59a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a59a4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3a59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3a59a8:
    // 0x3a59a8: 0xc0e8a12  jal         func_3A2848
    ctx->pc = 0x3A59A8u;
    SET_GPR_U32(ctx, 31, 0x3A59B0u);
    ctx->pc = 0x3A2848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2848u, 0x3A59A8u, 0x3A59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59B0u;
label_3a59b0:
    // 0x3a59b0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3a59b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x3a59b4u;
}
