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

// Function: sub_003A40D8
// Address: 0x3a40d8 - 0x3a40ec
void sub_003A40D8_0x3a40d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A40D8_0x3a40d8");
#endif

    switch (ctx->pc) {
        case 0x3a40e0u: goto label_3a40e0;
        case 0x3a40e8u: goto label_3a40e8;
        default: break;
    }

    ctx->pc = 0x3a40d8u;

    // 0x3a40d8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a40d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a40dc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a40e0:
    // 0x3a40e0: 0xc0e8a12  jal         func_3A2848
    ctx->pc = 0x3A40E0u;
    SET_GPR_U32(ctx, 31, 0x3A40E8u);
    ctx->pc = 0x3A2848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2848u, 0x3A40E0u, 0x3A40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A40E8u;
label_3a40e8:
    // 0x3a40e8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3a40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x3a40ecu;
}
