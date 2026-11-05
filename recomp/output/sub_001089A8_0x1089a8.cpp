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

// Function: sub_001089A8
// Address: 0x1089a8 - 0x1089c0
void sub_001089A8_0x1089a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089A8_0x1089a8");
#endif

    ctx->pc = 0x1089a8u;

    // 0x1089a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1089a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1089ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1089acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1089b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1089b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1089b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1089B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089B4u;
        // 0x1089b8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1089BCu;
    // 0x1089bc: 0x0  nop
    ctx->pc = 0x1089bcu;
    // NOP
    ctx->pc = 0x1089c0u;
}
