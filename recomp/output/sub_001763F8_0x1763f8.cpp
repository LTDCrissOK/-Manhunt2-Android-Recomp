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

// Function: sub_001763F8
// Address: 0x1763f8 - 0x176418
void sub_001763F8_0x1763f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001763F8_0x1763f8");
#endif

    ctx->pc = 0x1763f8u;

    // 0x1763f8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1763f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1763fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1763fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x176400: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x176400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x176404: 0x3e00008  jr          $ra
    ctx->pc = 0x176404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176404u;
        // 0x176408: 0xac860070  sw          $a2, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17640Cu;
    // 0x17640c: 0x0  nop
    ctx->pc = 0x17640cu;
    // NOP
    // 0x176410: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x176414: 0x0  nop
    ctx->pc = 0x176414u;
    // NOP
    ctx->pc = 0x176418u;
}
