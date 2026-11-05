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

// Function: sub_003DCCA0
// Address: 0x3dcca0 - 0x3dccb8
void sub_003DCCA0_0x3dcca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCCA0_0x3dcca0");
#endif

    ctx->pc = 0x3dcca0u;

    // 0x3dcca0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3dcca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x3dcca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCCB0u;
    // 0x3dccb0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x3dccb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3dccb4: 0x0  nop
    ctx->pc = 0x3dccb4u;
    // NOP
    ctx->pc = 0x3dccb8u;
}
