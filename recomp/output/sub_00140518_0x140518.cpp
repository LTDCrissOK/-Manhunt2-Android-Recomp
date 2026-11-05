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

// Function: sub_00140518
// Address: 0x140518 - 0x140538
void sub_00140518_0x140518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140518_0x140518");
#endif

    ctx->pc = 0x140518u;

    // 0x140518: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x140518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14051c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14051cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x140520: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x140520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x140524: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x140524u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x140528: 0xe4800628  swc1        $f0, 0x628($a0)
    ctx->pc = 0x140528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1576), bits); }
    // 0x14052c: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x14052cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x140530: 0x3e00008  jr          $ra
    ctx->pc = 0x140530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140530u;
        // 0x140534: 0xe48c062c  swc1        $f12, 0x62C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140538u;
}
