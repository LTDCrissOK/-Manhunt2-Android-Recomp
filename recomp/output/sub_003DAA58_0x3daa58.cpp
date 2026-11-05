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

// Function: sub_003DAA58
// Address: 0x3daa58 - 0x3daa68
void sub_003DAA58_0x3daa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAA58_0x3daa58");
#endif

    ctx->pc = 0x3daa58u;

    // 0x3daa58: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x3daa58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x3daa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAA64u;
    // 0x3daa64: 0x0  nop
    ctx->pc = 0x3daa64u;
    // NOP
    ctx->pc = 0x3daa68u;
}
