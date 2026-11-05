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

// Function: sub_0013C4F0
// Address: 0x13c4f0 - 0x13c508
void sub_0013C4F0_0x13c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C4F0_0x13c4f0");
#endif

    ctx->pc = 0x13c4f0u;

    // 0x13c4f0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c4f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c4f4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c4f8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x13c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C4FCu;
        // 0x13c500: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C504u;
    // 0x13c504: 0x0  nop
    ctx->pc = 0x13c504u;
    // NOP
    ctx->pc = 0x13c508u;
}
