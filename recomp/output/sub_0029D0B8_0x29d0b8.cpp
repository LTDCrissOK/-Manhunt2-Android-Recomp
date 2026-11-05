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

// Function: sub_0029D0B8
// Address: 0x29d0b8 - 0x29d0d8
void sub_0029D0B8_0x29d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D0B8_0x29d0b8");
#endif

    ctx->pc = 0x29d0b8u;

    // 0x29d0b8: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x29d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x29d0bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29d0c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29d0c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29d0c8: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x29d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
    // 0x29d0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D0CCu;
        // 0x29d0d0: 0xac8300f0  sw          $v1, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D0D4u;
    // 0x29d0d4: 0x0  nop
    ctx->pc = 0x29d0d4u;
    // NOP
    ctx->pc = 0x29d0d8u;
}
