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

// Function: sub_003714B8
// Address: 0x3714b8 - 0x3714d8
void sub_003714B8_0x3714b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003714B8_0x3714b8");
#endif

    ctx->pc = 0x3714b8u;

    // 0x3714b8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3714b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3714bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3714bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3714c0: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x3714c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3714c4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3714c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3714c8: 0x24c34000  addiu       $v1, $a2, 0x4000
    ctx->pc = 0x3714c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
    // 0x3714cc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3714ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3714d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3714D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3714D0u;
        // 0x3714d4: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3714D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3714D8u;
}
