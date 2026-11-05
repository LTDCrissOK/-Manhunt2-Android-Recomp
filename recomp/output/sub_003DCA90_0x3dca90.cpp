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

// Function: sub_003DCA90
// Address: 0x3dca90 - 0x3dcaa8
void sub_003DCA90_0x3dca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCA90_0x3dca90");
#endif

    ctx->pc = 0x3dca90u;

    // 0x3dca90: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3dca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3dca94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dca94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dca98: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCAA0u;
    // 0x3dcaa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3dcaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3dcaa4: 0x0  nop
    ctx->pc = 0x3dcaa4u;
    // NOP
    ctx->pc = 0x3dcaa8u;
}
