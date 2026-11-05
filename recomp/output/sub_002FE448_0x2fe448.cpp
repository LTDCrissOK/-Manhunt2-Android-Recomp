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

// Function: sub_002FE448
// Address: 0x2fe448 - 0x2fe458
void sub_002FE448_0x2fe448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE448_0x2fe448");
#endif

    ctx->pc = 0x2fe448u;

    // 0x2fe448: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fe44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE44Cu;
        // 0x2fe450: 0xc440bacc  lwc1        $f0, -0x4534($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE454u;
    // 0x2fe454: 0x0  nop
    ctx->pc = 0x2fe454u;
    // NOP
    ctx->pc = 0x2fe458u;
}
