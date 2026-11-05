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

// Function: sub_002CEC68
// Address: 0x2cec68 - 0x2cec90
void sub_002CEC68_0x2cec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEC68_0x2cec68");
#endif

    ctx->pc = 0x2cec68u;

    // 0x2cec68: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2cec68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2cec6c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2cec6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2cec70: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2cec70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2cec74: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2cec74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2cec78: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2cec78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2cec7c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x2cec7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x2cec80: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2cec80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2cec84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC84u;
        // 0x2cec88: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEC8Cu;
    // 0x2cec8c: 0x0  nop
    ctx->pc = 0x2cec8cu;
    // NOP
    ctx->pc = 0x2cec90u;
}
