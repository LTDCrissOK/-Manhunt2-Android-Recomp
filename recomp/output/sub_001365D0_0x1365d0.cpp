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

// Function: sub_001365D0
// Address: 0x1365d0 - 0x1365e8
void sub_001365D0_0x1365d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001365D0_0x1365d0");
#endif

    ctx->pc = 0x1365d0u;

    // 0x1365d0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1365d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1365d4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1365d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1365d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1365d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1365dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1365DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1365E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365DCu;
        // 0x1365e0: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1365DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1365E4u;
    // 0x1365e4: 0x0  nop
    ctx->pc = 0x1365e4u;
    // NOP
    ctx->pc = 0x1365e8u;
}
