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

// Function: sub_0025A788
// Address: 0x25a788 - 0x25a7a8
void sub_0025A788_0x25a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A788_0x25a788");
#endif

    ctx->pc = 0x25a788u;

    // 0x25a788: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x25a788u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25a78c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25a790: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25a794: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x25a794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25a798: 0x24429ac0  addiu       $v0, $v0, -0x6540
    ctx->pc = 0x25a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941376));
    // 0x25a79c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x25a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25a7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7A0u;
        // 0x25a7a4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A7A8u;
}
