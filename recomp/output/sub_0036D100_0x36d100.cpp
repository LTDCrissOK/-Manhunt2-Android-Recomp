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

// Function: sub_0036D100
// Address: 0x36d100 - 0x36d110
void sub_0036D100_0x36d100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D100_0x36d100");
#endif

    ctx->pc = 0x36d100u;

    // 0x36d100: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x36d100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x36d104: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x36d104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x36d108: 0x3e00008  jr          $ra
    ctx->pc = 0x36D108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D108u;
        // 0x36d10c: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D110u;
}
