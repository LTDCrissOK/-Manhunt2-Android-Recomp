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

// Function: sub_003DCC40
// Address: 0x3dcc40 - 0x3dcc58
void sub_003DCC40_0x3dcc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCC40_0x3dcc40");
#endif

    ctx->pc = 0x3dcc40u;

    // 0x3dcc40: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3dcc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3dcc44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcc48: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCC50u;
    // 0x3dcc50: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3dcc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3dcc54: 0x0  nop
    ctx->pc = 0x3dcc54u;
    // NOP
    ctx->pc = 0x3dcc58u;
}
