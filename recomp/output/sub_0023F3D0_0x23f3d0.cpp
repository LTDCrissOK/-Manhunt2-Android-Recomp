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

// Function: sub_0023F3D0
// Address: 0x23f3d0 - 0x23f3d8
void sub_0023F3D0_0x23f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F3D0_0x23f3d0");
#endif

    ctx->pc = 0x23f3d0u;

    // 0x23f3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3D0u;
        // 0x23f3d4: 0xc48006f8  lwc1        $f0, 0x6F8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F3D8u;
}
