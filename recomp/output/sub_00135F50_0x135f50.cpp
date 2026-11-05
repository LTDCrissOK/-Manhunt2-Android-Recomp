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

// Function: sub_00135F50
// Address: 0x135f50 - 0x135f60
void sub_00135F50_0x135f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F50_0x135f50");
#endif

    ctx->pc = 0x135f50u;

    // 0x135f50: 0xac8504b4  sw          $a1, 0x4B4($a0)
    ctx->pc = 0x135f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1204), GPR_U32(ctx, 5));
    // 0x135f54: 0x3e00008  jr          $ra
    ctx->pc = 0x135F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F54u;
        // 0x135f58: 0xac8004b8  sw          $zero, 0x4B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F5Cu;
    // 0x135f5c: 0x0  nop
    ctx->pc = 0x135f5cu;
    // NOP
    ctx->pc = 0x135f60u;
}
