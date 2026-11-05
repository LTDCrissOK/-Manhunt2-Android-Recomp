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

// Function: sub_001C5D18
// Address: 0x1c5d18 - 0x1c5d40
void sub_001C5D18_0x1c5d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D18_0x1c5d18");
#endif

    ctx->pc = 0x1c5d18u;

    // 0x1c5d18: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1c5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1c5d1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1c5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c5d20: 0x8c860318  lw          $a2, 0x318($a0)
    ctx->pc = 0x1c5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1c5d24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c5d28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5d2c: 0x8cc40fe8  lw          $a0, 0xFE8($a2)
    ctx->pc = 0x1c5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4072)));
    // 0x1c5d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c5d34: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c5d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D38u;
        // 0x1c5d3c: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5D40u;
}
