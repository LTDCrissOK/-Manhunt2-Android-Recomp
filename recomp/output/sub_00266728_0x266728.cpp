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

// Function: sub_00266728
// Address: 0x266728 - 0x266740
void sub_00266728_0x266728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266728_0x266728");
#endif

    ctx->pc = 0x266728u;

    // 0x266728: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x266728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x26672c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266730: 0xe44c0054  swc1        $f12, 0x54($v0)
    ctx->pc = 0x266730u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x266734: 0x3e00008  jr          $ra
    ctx->pc = 0x266734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266734u;
        // 0x266738: 0xac430058  sw          $v1, 0x58($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26673Cu;
    // 0x26673c: 0x0  nop
    ctx->pc = 0x26673cu;
    // NOP
    ctx->pc = 0x266740u;
}
