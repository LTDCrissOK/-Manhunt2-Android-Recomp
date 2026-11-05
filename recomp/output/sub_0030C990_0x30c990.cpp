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

// Function: sub_0030C990
// Address: 0x30c990 - 0x30c9a8
void sub_0030C990_0x30c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C990_0x30c990");
#endif

    ctx->pc = 0x30c990u;

    // 0x30c990: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x30c990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30c994: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x30c994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x30c998: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x30c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x30c99c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C99Cu;
        // 0x30c9a0: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C9A4u;
    // 0x30c9a4: 0x0  nop
    ctx->pc = 0x30c9a4u;
    // NOP
    ctx->pc = 0x30c9a8u;
}
