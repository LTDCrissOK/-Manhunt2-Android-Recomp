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

// Function: sub_002CA130
// Address: 0x2ca130 - 0x2ca140
void sub_002CA130_0x2ca130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA130_0x2ca130");
#endif

    ctx->pc = 0x2ca130u;

    // 0x2ca130: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA138u;
    // 0x2ca138: 0x61300  sll         $v0, $a2, 12
    ctx->pc = 0x2ca138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
    // 0x2ca13c: 0x0  nop
    ctx->pc = 0x2ca13cu;
    // NOP
    ctx->pc = 0x2ca140u;
}
