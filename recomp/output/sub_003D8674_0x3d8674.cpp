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

// Function: sub_003D8674
// Address: 0x3d8674 - 0x3d868c
void sub_003D8674_0x3d8674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8674_0x3d8674");
#endif

    ctx->pc = 0x3d8674u;

    // 0x3d8674: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3d8674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3d8678: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3d8678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3d867c: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x3d867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x3d8680: 0x80f5b62  j           func_3D6D88
    ctx->pc = 0x3D8680u;
    ctx->pc = 0x3D8684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8680u;
    // 0x3d8684: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6D88u, 0x3D8680u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3D8688u;
    // 0x3d8688: 0x0  nop
    ctx->pc = 0x3d8688u;
    // NOP
    ctx->pc = 0x3d868cu;
}
