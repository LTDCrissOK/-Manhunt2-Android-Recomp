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

// Function: sub_001192D8
// Address: 0x1192d8 - 0x1192e4
void sub_001192D8_0x1192d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001192D8_0x1192d8");
#endif

    switch (ctx->pc) {
        case 0x1192e0u: goto label_1192e0;
        default: break;
    }

    ctx->pc = 0x1192d8u;

    // 0x1192d8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1192D8u;
    SET_GPR_U32(ctx, 31, 0x1192E0u);
    ctx->pc = 0x1192DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1192D8u;
    // 0x1192dc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1192D8u, 0x1192E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1192E0u;
label_1192e0:
    // 0x1192e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1192e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x1192e4u;
}
