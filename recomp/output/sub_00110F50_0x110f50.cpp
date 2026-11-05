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

// Function: sub_00110F50
// Address: 0x110f50 - 0x110f68
void sub_00110F50_0x110f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F50_0x110f50");
#endif

    ctx->pc = 0x110f50u;

    // 0x110f50: 0x8c8200fc  lw          $v0, 0xFC($a0)
    ctx->pc = 0x110f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x110f54: 0x54450001  bnel        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x110F54u;
    {
        const bool branch_taken_0x110f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x110f54) {
            ctx->pc = 0x110F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110F54u;
            // 0x110f58: 0xac8500fc  sw          $a1, 0xFC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110F5Cu;
            goto label_110f5c;
        }
    }
    ctx->pc = 0x110F5Cu;
label_110f5c:
    // 0x110f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x110F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110F64u;
    // 0x110f64: 0x0  nop
    ctx->pc = 0x110f64u;
    // NOP
    ctx->pc = 0x110f68u;
}
