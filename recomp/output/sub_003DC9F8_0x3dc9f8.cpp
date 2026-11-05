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

// Function: sub_003DC9F8
// Address: 0x3dc9f8 - 0x3dca10
void sub_003DC9F8_0x3dc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC9F8_0x3dc9f8");
#endif

    ctx->pc = 0x3dc9f8u;

    // 0x3dc9f8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3dc9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x3dc9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dc9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dca00: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCA08u;
    // 0x3dca08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dca0c: 0x0  nop
    ctx->pc = 0x3dca0cu;
    // NOP
    ctx->pc = 0x3dca10u;
}
