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

// Function: sub_002592F8
// Address: 0x2592f8 - 0x259310
void sub_002592F8_0x2592f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002592F8_0x2592f8");
#endif

    ctx->pc = 0x2592f8u;

    // 0x2592f8: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x2592f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x2592fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2592FCu;
    {
        const bool branch_taken_0x2592fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2592fc) {
            ctx->pc = 0x259300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2592FCu;
            // 0x259300: 0xa0400392  sb          $zero, 0x392($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 914), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259304u;
            goto label_259304;
        }
    }
    ctx->pc = 0x259304u;
label_259304:
    // 0x259304: 0x3e00008  jr          $ra
    ctx->pc = 0x259304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25930Cu;
    // 0x25930c: 0x0  nop
    ctx->pc = 0x25930cu;
    // NOP
    ctx->pc = 0x259310u;
}
