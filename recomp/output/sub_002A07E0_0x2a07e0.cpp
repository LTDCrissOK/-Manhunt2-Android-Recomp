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

// Function: sub_002A07E0
// Address: 0x2a07e0 - 0x2a07f0
void sub_002A07E0_0x2a07e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A07E0_0x2a07e0");
#endif

    ctx->pc = 0x2a07e0u;

    // 0x2a07e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a07e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A07E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A07E4u;
        // 0x2a07e8: 0xe44ca958  swc1        $f12, -0x56A8($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294945112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A07E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A07ECu;
    // 0x2a07ec: 0x0  nop
    ctx->pc = 0x2a07ecu;
    // NOP
    ctx->pc = 0x2a07f0u;
}
