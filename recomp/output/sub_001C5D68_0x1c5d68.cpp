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

// Function: sub_001C5D68
// Address: 0x1c5d68 - 0x1c5d90
void sub_001C5D68_0x1c5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D68_0x1c5d68");
#endif

    ctx->pc = 0x1c5d68u;

    // 0x1c5d68: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1c5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c5d6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1c5d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c5d70: 0x8c860318  lw          $a2, 0x318($a0)
    ctx->pc = 0x1c5d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1c5d74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c5d78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5d7c: 0x8cc40fe8  lw          $a0, 0xFE8($a2)
    ctx->pc = 0x1c5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4072)));
    // 0x1c5d80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c5d84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c5d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D88u;
        // 0x1c5d8c: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5D90u;
}
