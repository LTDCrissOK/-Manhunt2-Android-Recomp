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

// Function: sub_003DDCD8
// Address: 0x3ddcd8 - 0x3ddce8
void sub_003DDCD8_0x3ddcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDCD8_0x3ddcd8");
#endif

    ctx->pc = 0x3ddcd8u;

    // 0x3ddcd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDCE0u;
    // 0x3ddce0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ddce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ddce4: 0x0  nop
    ctx->pc = 0x3ddce4u;
    // NOP
    ctx->pc = 0x3ddce8u;
}
