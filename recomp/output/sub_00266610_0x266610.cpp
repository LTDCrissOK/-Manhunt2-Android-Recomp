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

// Function: sub_00266610
// Address: 0x266610 - 0x266628
void sub_00266610_0x266610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266610_0x266610");
#endif

    ctx->pc = 0x266610u;

    // 0x266610: 0x9082028e  lbu         $v0, 0x28E($a0)
    ctx->pc = 0x266610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 654)));
    // 0x266614: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x266614u;
    {
        const bool branch_taken_0x266614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266614u;
        // 0x266618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266614) {
            ctx->pc = 0x266620u;
            goto label_266620;
        }
    }
    ctx->pc = 0x26661Cu;
    // 0x26661c: 0xa082028c  sb          $v0, 0x28C($a0)
    ctx->pc = 0x26661cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 652), (uint8_t)GPR_U32(ctx, 2));
label_266620:
    // 0x266620: 0x3e00008  jr          $ra
    ctx->pc = 0x266620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266628u;
}
