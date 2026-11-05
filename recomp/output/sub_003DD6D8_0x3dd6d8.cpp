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

// Function: sub_003DD6D8
// Address: 0x3dd6d8 - 0x3dd708
void sub_003DD6D8_0x3dd6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD6D8_0x3dd6d8");
#endif

    ctx->pc = 0x3dd6d8u;

    // 0x3dd6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6D8u;
        // 0x3dd6dc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD6E0u;
    // 0x3dd6e0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3dd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3dd6e4: 0x0  nop
    ctx->pc = 0x3dd6e4u;
    // NOP
    // 0x3dd6e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3dd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3dd6ec: 0x0  nop
    ctx->pc = 0x3dd6ecu;
    // NOP
    // 0x3dd6f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3dd6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3dd6f4: 0x0  nop
    ctx->pc = 0x3dd6f4u;
    // NOP
    // 0x3dd6f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd6fc: 0x0  nop
    ctx->pc = 0x3dd6fcu;
    // NOP
    // 0x3dd700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3dd700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3dd704: 0x0  nop
    ctx->pc = 0x3dd704u;
    // NOP
    ctx->pc = 0x3dd708u;
}
