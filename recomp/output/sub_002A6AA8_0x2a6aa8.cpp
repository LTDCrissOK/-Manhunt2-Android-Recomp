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

// Function: sub_002A6AA8
// Address: 0x2a6aa8 - 0x2a6ad0
void sub_002A6AA8_0x2a6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6AA8_0x2a6aa8");
#endif

    ctx->pc = 0x2a6aa8u;

    // 0x2a6aa8: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x2a6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x2a6aac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A6AACu;
    {
        const bool branch_taken_0x2a6aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6aac) {
            ctx->pc = 0x2A6AC4u;
            goto label_2a6ac4;
        }
    }
    ctx->pc = 0x2A6AB4u;
    // 0x2a6ab4: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x2a6ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x2a6ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6abc: 0x0  nop
    ctx->pc = 0x2a6abcu;
    // NOP
    // 0x2a6ac0: 0xe44001bc  swc1        $f0, 0x1BC($v0)
    ctx->pc = 0x2a6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 444), bits); }
label_2a6ac4:
    // 0x2a6ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6ACCu;
    // 0x2a6acc: 0x0  nop
    ctx->pc = 0x2a6accu;
    // NOP
    ctx->pc = 0x2a6ad0u;
}
