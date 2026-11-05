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

// Function: sub_003DCBF0
// Address: 0x3dcbf0 - 0x3dcc18
void sub_003DCBF0_0x3dcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCBF0_0x3dcbf0");
#endif

    ctx->pc = 0x3dcbf0u;

    // 0x3dcbf0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3dcbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3dcbf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcbf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCC00u;
    // 0x3dcc00: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dcc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dcc04: 0x0  nop
    ctx->pc = 0x3dcc04u;
    // NOP
    // 0x3dcc08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dcc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dcc0c: 0x0  nop
    ctx->pc = 0x3dcc0cu;
    // NOP
    // 0x3dcc10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dcc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dcc14: 0x0  nop
    ctx->pc = 0x3dcc14u;
    // NOP
    ctx->pc = 0x3dcc18u;
}
