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

// Function: sub_00100270
// Address: 0x100270 - 0x100288
void sub_00100270_0x100270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100270_0x100270");
#endif

    ctx->pc = 0x100270u;

    // 0x100270: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100274: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x100274u;
    {
        const bool branch_taken_0x100274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100274) {
            ctx->pc = 0x100278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100274u;
            // 0x100278: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10027Cu;
            goto label_10027c;
        }
    }
    ctx->pc = 0x10027Cu;
label_10027c:
    // 0x10027c: 0x3e00008  jr          $ra
    ctx->pc = 0x10027Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10027Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100284u;
    // 0x100284: 0x0  nop
    ctx->pc = 0x100284u;
    // NOP
    ctx->pc = 0x100288u;
}
