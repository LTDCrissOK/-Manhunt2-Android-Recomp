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

// Function: sub_001363E0
// Address: 0x1363e0 - 0x1363f8
void sub_001363E0_0x1363e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001363E0_0x1363e0");
#endif

    ctx->pc = 0x1363e0u;

    // 0x1363e0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1363e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1363e4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1363e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1363e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1363e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1363ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1363ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363ECu;
        // 0x1363f0: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1363ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1363F4u;
    // 0x1363f4: 0x0  nop
    ctx->pc = 0x1363f4u;
    // NOP
    ctx->pc = 0x1363f8u;
}
