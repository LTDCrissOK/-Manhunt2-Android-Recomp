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

// Function: sub_001364D8
// Address: 0x1364d8 - 0x1364f0
void sub_001364D8_0x1364d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001364D8_0x1364d8");
#endif

    ctx->pc = 0x1364d8u;

    // 0x1364d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1364d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1364dc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1364dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1364e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1364e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1364e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1364E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0xac860020  sw          $a2, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364ECu;
    // 0x1364ec: 0x0  nop
    ctx->pc = 0x1364ecu;
    // NOP
    ctx->pc = 0x1364f0u;
}
