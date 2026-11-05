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

// Function: sub_002A6A80
// Address: 0x2a6a80 - 0x2a6aa8
void sub_002A6A80_0x2a6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6A80_0x2a6a80");
#endif

    ctx->pc = 0x2a6a80u;

    // 0x2a6a80: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x2a6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x2a6a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6A84u;
    {
        const bool branch_taken_0x2a6a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6a84) {
            ctx->pc = 0x2A6A9Cu;
            goto label_2a6a9c;
        }
    }
    ctx->pc = 0x2A6A8Cu;
    // 0x2a6a8c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2a6a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2a6a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6a94: 0x0  nop
    ctx->pc = 0x2a6a94u;
    // NOP
    // 0x2a6a98: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x2a6a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
label_2a6a9c:
    // 0x2a6a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6AA4u;
    // 0x2a6aa4: 0x0  nop
    ctx->pc = 0x2a6aa4u;
    // NOP
    ctx->pc = 0x2a6aa8u;
}
