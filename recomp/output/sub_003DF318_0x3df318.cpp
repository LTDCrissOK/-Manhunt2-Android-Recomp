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

// Function: sub_003DF318
// Address: 0x3df318 - 0x3df340
void sub_003DF318_0x3df318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF318_0x3df318");
#endif

    ctx->pc = 0x3df318u;

    // 0x3df318: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF318u;
        // 0x3df31c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF320u;
    // 0x3df320: 0x0  nop
    ctx->pc = 0x3df320u;
    // NOP
    // 0x3df324: 0x0  nop
    ctx->pc = 0x3df324u;
    // NOP
    // 0x3df328: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3df328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3df32c: 0x0  nop
    ctx->pc = 0x3df32cu;
    // NOP
    // 0x3df330: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3df330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3df334: 0x0  nop
    ctx->pc = 0x3df334u;
    // NOP
    // 0x3df338: 0xe4810230  swc1        $f1, 0x230($a0)
    ctx->pc = 0x3df338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
    // 0x3df33c: 0x0  nop
    ctx->pc = 0x3df33cu;
    // NOP
    ctx->pc = 0x3df340u;
}
