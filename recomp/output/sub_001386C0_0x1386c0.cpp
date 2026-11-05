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

// Function: sub_001386C0
// Address: 0x1386c0 - 0x1386d8
void sub_001386C0_0x1386c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386C0_0x1386c0");
#endif

    ctx->pc = 0x1386c0u;

    // 0x1386c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1386c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1386c4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1386c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1386c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1386c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1386cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1386CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1386D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386CCu;
        // 0x1386d0: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1386D4u;
    // 0x1386d4: 0x0  nop
    ctx->pc = 0x1386d4u;
    // NOP
    ctx->pc = 0x1386d8u;
}
