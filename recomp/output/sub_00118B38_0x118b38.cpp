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

// Function: sub_00118B38
// Address: 0x118b38 - 0x118b50
void sub_00118B38_0x118b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118B38_0x118b38");
#endif

    ctx->pc = 0x118b38u;

    // 0x118b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x118b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x118B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B44u;
    // 0x118b44: 0x0  nop
    ctx->pc = 0x118b44u;
    // NOP
    // 0x118b48: 0x0  nop
    ctx->pc = 0x118b48u;
    // NOP
    // 0x118b4c: 0x0  nop
    ctx->pc = 0x118b4cu;
    // NOP
    ctx->pc = 0x118b50u;
}
