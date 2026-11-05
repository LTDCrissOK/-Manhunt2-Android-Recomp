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

// Function: sub_00118E18
// Address: 0x118e18 - 0x118e28
void sub_00118E18_0x118e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118E18_0x118e18");
#endif

    ctx->pc = 0x118e18u;

    // 0x118e18: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x118e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x118e1c: 0x7c800040  sq          $zero, 0x40($a0)
    ctx->pc = 0x118e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 0));
    // 0x118e20: 0x3e00008  jr          $ra
    ctx->pc = 0x118E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E28u;
}
