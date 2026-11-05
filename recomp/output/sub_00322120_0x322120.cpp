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

// Function: sub_00322120
// Address: 0x322120 - 0x322138
void sub_00322120_0x322120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322120_0x322120");
#endif

    ctx->pc = 0x322120u;

    // 0x322120: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x322120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x322124: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x322124u;
    {
        const bool branch_taken_0x322124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322124u;
        // 0x322128: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322124) {
            ctx->pc = 0x322130u;
            goto label_322130;
        }
    }
    ctx->pc = 0x32212Cu;
    // 0x32212c: 0xac456d70  sw          $a1, 0x6D70($v0)
    ctx->pc = 0x32212cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28016), GPR_U32(ctx, 5));
label_322130:
    // 0x322130: 0x3e00008  jr          $ra
    ctx->pc = 0x322130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322138u;
}
