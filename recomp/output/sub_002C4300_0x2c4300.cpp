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

// Function: sub_002C4300
// Address: 0x2c4300 - 0x2c4310
void sub_002C4300_0x2c4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4300_0x2c4300");
#endif

    ctx->pc = 0x2c4300u;

    // 0x2c4300: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4300u;
        // 0x2c4304: 0x80820050  lb          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4308u;
    // 0x2c4308: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x2c4308u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
    // 0x2c430c: 0x0  nop
    ctx->pc = 0x2c430cu;
    // NOP
    ctx->pc = 0x2c4310u;
}
