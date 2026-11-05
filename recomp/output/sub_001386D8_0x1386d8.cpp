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

// Function: sub_001386D8
// Address: 0x1386d8 - 0x1386f0
void sub_001386D8_0x1386d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386D8_0x1386d8");
#endif

    ctx->pc = 0x1386d8u;

    // 0x1386d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1386d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1386dc: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1386dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1386e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1386e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1386e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1386E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1386E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386E4u;
        // 0x1386e8: 0xac86004c  sw          $a2, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1386ECu;
    // 0x1386ec: 0x0  nop
    ctx->pc = 0x1386ecu;
    // NOP
    ctx->pc = 0x1386f0u;
}
