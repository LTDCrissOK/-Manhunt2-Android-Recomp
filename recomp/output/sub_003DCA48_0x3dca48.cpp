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

// Function: sub_003DCA48
// Address: 0x3dca48 - 0x3dca60
void sub_003DCA48_0x3dca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCA48_0x3dca48");
#endif

    ctx->pc = 0x3dca48u;

    // 0x3dca48: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3dca48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3dca4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dca4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dca50: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCA58u;
    // 0x3dca58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dca5c: 0x0  nop
    ctx->pc = 0x3dca5cu;
    // NOP
    ctx->pc = 0x3dca60u;
}
