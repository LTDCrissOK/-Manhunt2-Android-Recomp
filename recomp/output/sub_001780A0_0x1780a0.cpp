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

// Function: sub_001780A0
// Address: 0x1780a0 - 0x1780b8
void sub_001780A0_0x1780a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001780A0_0x1780a0");
#endif

    ctx->pc = 0x1780a0u;

    // 0x1780a0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1780a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1780a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1780a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1780a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1780a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1780ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1780ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1780B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1780ACu;
        // 0x1780b0: 0xac860018  sw          $a2, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1780ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1780B4u;
    // 0x1780b4: 0x0  nop
    ctx->pc = 0x1780b4u;
    // NOP
    ctx->pc = 0x1780b8u;
}
