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

// Function: sub_002CA160
// Address: 0x2ca160 - 0x2ca170
void sub_002CA160_0x2ca160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA160_0x2ca160");
#endif

    ctx->pc = 0x2ca160u;

    // 0x2ca160: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA168u;
    // 0x2ca168: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x2ca168u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ca16c: 0x0  nop
    ctx->pc = 0x2ca16cu;
    // NOP
    ctx->pc = 0x2ca170u;
}
