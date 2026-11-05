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

// Function: sub_003DCCB8
// Address: 0x3dccb8 - 0x3dcce0
void sub_003DCCB8_0x3dccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCCB8_0x3dccb8");
#endif

    ctx->pc = 0x3dccb8u;

    // 0x3dccb8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3dccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x3dccbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dccbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dccc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCCC8u;
    // 0x3dccc8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3dccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3dcccc: 0x0  nop
    ctx->pc = 0x3dccccu;
    // NOP
    // 0x3dccd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dccd4: 0x0  nop
    ctx->pc = 0x3dccd4u;
    // NOP
    // 0x3dccd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dccdc: 0x0  nop
    ctx->pc = 0x3dccdcu;
    // NOP
    ctx->pc = 0x3dcce0u;
}
