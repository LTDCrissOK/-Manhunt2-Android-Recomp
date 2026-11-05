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

// Function: sub_0029C3E0
// Address: 0x29c3e0 - 0x29c400
void sub_0029C3E0_0x29c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C3E0_0x29c3e0");
#endif

    ctx->pc = 0x29c3e0u;

    // 0x29c3e0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c3e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29c3e8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x29c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29c3ec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x29c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x29c3f0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x29c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x29c3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C3F4u;
        // 0x29c3f8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C3FCu;
    // 0x29c3fc: 0x0  nop
    ctx->pc = 0x29c3fcu;
    // NOP
    ctx->pc = 0x29c400u;
}
