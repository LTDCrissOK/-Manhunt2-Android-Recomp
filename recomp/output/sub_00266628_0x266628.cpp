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

// Function: sub_00266628
// Address: 0x266628 - 0x266640
void sub_00266628_0x266628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266628_0x266628");
#endif

    ctx->pc = 0x266628u;

    // 0x266628: 0x9082028e  lbu         $v0, 0x28E($a0)
    ctx->pc = 0x266628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 654)));
    // 0x26662c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26662Cu;
    {
        const bool branch_taken_0x26662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26662Cu;
        // 0x266630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26662c) {
            ctx->pc = 0x266638u;
            goto label_266638;
        }
    }
    ctx->pc = 0x266634u;
    // 0x266634: 0xa082028d  sb          $v0, 0x28D($a0)
    ctx->pc = 0x266634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 653), (uint8_t)GPR_U32(ctx, 2));
label_266638:
    // 0x266638: 0x3e00008  jr          $ra
    ctx->pc = 0x266638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266640u;
}
