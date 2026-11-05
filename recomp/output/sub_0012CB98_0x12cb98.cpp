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

// Function: sub_0012CB98
// Address: 0x12cb98 - 0x12cbb8
void sub_0012CB98_0x12cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CB98_0x12cb98");
#endif

    ctx->pc = 0x12cb98u;

    // 0x12cb98: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x12cb98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12cb9c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12cba0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12cba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cba8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12cbac: 0x3e00008  jr          $ra
    ctx->pc = 0x12CBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBACu;
        // 0x12cbb0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CBB4u;
    // 0x12cbb4: 0x0  nop
    ctx->pc = 0x12cbb4u;
    // NOP
    ctx->pc = 0x12cbb8u;
}
