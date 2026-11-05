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

// Function: sub_00286008
// Address: 0x286008 - 0x286020
void sub_00286008_0x286008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286008_0x286008");
#endif

    ctx->pc = 0x286008u;

    // 0x286008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28600c: 0x3e00008  jr          $ra
    ctx->pc = 0x28600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28600Cu;
        // 0x286010: 0xa044a366  sb          $a0, -0x5C9A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943590), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286014u;
    // 0x286014: 0x0  nop
    ctx->pc = 0x286014u;
    // NOP
    // 0x286018: 0xe4af0000  swc1        $f15, 0x0($a1)
    ctx->pc = 0x286018u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x28601c: 0x0  nop
    ctx->pc = 0x28601cu;
    // NOP
    ctx->pc = 0x286020u;
}
