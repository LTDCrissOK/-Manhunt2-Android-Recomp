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

// Function: sub_003DCC18
// Address: 0x3dcc18 - 0x3dcc40
void sub_003DCC18_0x3dcc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCC18_0x3dcc18");
#endif

    ctx->pc = 0x3dcc18u;

    // 0x3dcc18: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3dcc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x3dcc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcc20: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCC28u;
    // 0x3dcc28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dcc28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dcc2c: 0x0  nop
    ctx->pc = 0x3dcc2cu;
    // NOP
    // 0x3dcc30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dcc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dcc34: 0x0  nop
    ctx->pc = 0x3dcc34u;
    // NOP
    // 0x3dcc38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dcc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dcc3c: 0x0  nop
    ctx->pc = 0x3dcc3cu;
    // NOP
    ctx->pc = 0x3dcc40u;
}
