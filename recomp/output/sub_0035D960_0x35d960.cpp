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

// Function: sub_0035D960
// Address: 0x35d960 - 0x35d978
void sub_0035D960_0x35d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D960_0x35d960");
#endif

    ctx->pc = 0x35d960u;

    // 0x35d960: 0x3e00008  jr          $ra
    ctx->pc = 0x35D960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D960u;
        // 0x35d964: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D968u;
    // 0x35d968: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x35d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35d96c: 0x0  nop
    ctx->pc = 0x35d96cu;
    // NOP
    // 0x35d970: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x35d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x35d974: 0x0  nop
    ctx->pc = 0x35d974u;
    // NOP
    ctx->pc = 0x35d978u;
}
