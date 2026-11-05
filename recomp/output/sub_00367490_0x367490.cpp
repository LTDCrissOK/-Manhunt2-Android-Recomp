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

// Function: sub_00367490
// Address: 0x367490 - 0x3674b8
void sub_00367490_0x367490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367490_0x367490");
#endif

    ctx->pc = 0x367490u;

    // 0x367490: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x367490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x367494: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x367494u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x367498: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x367498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x36749c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36749cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3674a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3674a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3674a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3674a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3674a8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3674a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3674ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3674acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3674b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3674B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3674B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674B0u;
        // 0x3674b4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674B8u;
}
