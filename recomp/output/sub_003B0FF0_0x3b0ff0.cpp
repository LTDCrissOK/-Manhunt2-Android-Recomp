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

// Function: sub_003B0FF0
// Address: 0x3b0ff0 - 0x3b1020
void sub_003B0FF0_0x3b0ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0FF0_0x3b0ff0");
#endif

    switch (ctx->pc) {
        case 0x3b1000u: goto label_3b1000;
        default: break;
    }

    ctx->pc = 0x3b0ff0u;

    // 0x3b0ff0: 0xa4870038  sh          $a3, 0x38($a0)
    ctx->pc = 0x3b0ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 7));
    // 0x3b0ff4: 0xa4850034  sh          $a1, 0x34($a0)
    ctx->pc = 0x3b0ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b0ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0FF8u;
        // 0x3b0ffc: 0xa4860036  sh          $a2, 0x36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1000u;
label_3b1000:
    // 0x3b1000: 0x94820034  lhu         $v0, 0x34($a0)
    ctx->pc = 0x3b1000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x3b1004: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x3b1004u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b1008: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x3b1008u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x3b100c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3b100cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1010: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x3b1010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3b1014: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1014u;
        // 0x3b1018: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B101Cu;
    // 0x3b101c: 0x0  nop
    ctx->pc = 0x3b101cu;
    // NOP
    ctx->pc = 0x3b1020u;
}
