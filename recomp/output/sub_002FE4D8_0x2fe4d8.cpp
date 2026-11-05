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

// Function: sub_002FE4D8
// Address: 0x2fe4d8 - 0x2fe4e8
void sub_002FE4D8_0x2fe4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE4D8_0x2fe4d8");
#endif

    ctx->pc = 0x2fe4d8u;

    // 0x2fe4d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fe4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE4DCu;
        // 0x2fe4e0: 0xe44cbacc  swc1        $f12, -0x4534($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE4E4u;
    // 0x2fe4e4: 0x0  nop
    ctx->pc = 0x2fe4e4u;
    // NOP
    ctx->pc = 0x2fe4e8u;
}
