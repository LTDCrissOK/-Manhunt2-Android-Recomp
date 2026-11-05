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

// Function: sub_003A85C8
// Address: 0x3a85c8 - 0x3a85e0
void sub_003A85C8_0x3a85c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A85C8_0x3a85c8");
#endif

    ctx->pc = 0x3a85c8u;

    // 0x3a85c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a85c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a85cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a85ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a85d0: 0x8c8400e8  lw          $a0, 0xE8($a0)
    ctx->pc = 0x3a85d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x3a85d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a85d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a85d8: 0x80ecf50  j           func_3B3D40
    ctx->pc = 0x3A85D8u;
    ctx->pc = 0x3A85DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A85D8u;
    // 0x3a85dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3D40u, 0x3A85D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A85E0u;
}
