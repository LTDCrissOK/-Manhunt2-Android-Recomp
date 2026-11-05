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

// Function: sub_003D868C
// Address: 0x3d868c - 0x3d8698
void sub_003D868C_0x3d868c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D868C_0x3d868c");
#endif

    ctx->pc = 0x3d868cu;

    // 0x3d868c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d868cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8690: 0x80f5b6c  j           func_3D6DB0
    ctx->pc = 0x3D8690u;
    ctx->pc = 0x3D8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8690u;
    // 0x3d8694: 0x248402b0  addiu       $a0, $a0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6DB0u, 0x3D8690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3D8698u;
}
