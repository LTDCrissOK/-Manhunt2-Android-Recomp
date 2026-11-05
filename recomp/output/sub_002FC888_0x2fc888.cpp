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

// Function: sub_002FC888
// Address: 0x2fc888 - 0x2fc8a0
void sub_002FC888_0x2fc888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC888_0x2fc888");
#endif

    ctx->pc = 0x2fc888u;

    // 0x2fc888: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc88c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fc88cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fc890: 0x2442b918  addiu       $v0, $v0, -0x46E8
    ctx->pc = 0x2fc890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949144));
    // 0x2fc894: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fc894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fc898: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC898u;
        // 0x2fc89c: 0xa0850004  sb          $a1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC8A0u;
}
