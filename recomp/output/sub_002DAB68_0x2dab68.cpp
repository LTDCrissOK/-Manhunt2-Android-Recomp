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

// Function: sub_002DAB68
// Address: 0x2dab68 - 0x2dab80
void sub_002DAB68_0x2dab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB68_0x2dab68");
#endif

    ctx->pc = 0x2dab68u;

    // 0x2dab68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dab6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2dab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dab70: 0x2442b600  addiu       $v0, $v0, -0x4A00
    ctx->pc = 0x2dab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948352));
    // 0x2dab74: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB74u;
        // 0x2dab78: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB7Cu;
    // 0x2dab7c: 0x0  nop
    ctx->pc = 0x2dab7cu;
    // NOP
    ctx->pc = 0x2dab80u;
}
