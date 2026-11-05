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

// Function: sub_001364C0
// Address: 0x1364c0 - 0x1364d8
void sub_001364C0_0x1364c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001364C0_0x1364c0");
#endif

    ctx->pc = 0x1364c0u;

    // 0x1364c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1364c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1364c4: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1364c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1364c8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1364cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1364CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364CCu;
        // 0x1364d0: 0x8ca2001c  lw          $v0, 0x1C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1364CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1364D4u;
    // 0x1364d4: 0x0  nop
    ctx->pc = 0x1364d4u;
    // NOP
    ctx->pc = 0x1364d8u;
}
