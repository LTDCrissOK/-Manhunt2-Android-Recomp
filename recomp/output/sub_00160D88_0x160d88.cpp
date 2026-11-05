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

// Function: sub_00160D88
// Address: 0x160d88 - 0x160da0
void sub_00160D88_0x160d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160D88_0x160d88");
#endif

    ctx->pc = 0x160d88u;

    // 0x160d88: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x160d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x160d8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x160d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x160d90: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x160d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x160d94: 0x3e00008  jr          $ra
    ctx->pc = 0x160D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D94u;
        // 0x160d98: 0xaca002e0  sw          $zero, 0x2E0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160D9Cu;
    // 0x160d9c: 0x0  nop
    ctx->pc = 0x160d9cu;
    // NOP
    ctx->pc = 0x160da0u;
}
