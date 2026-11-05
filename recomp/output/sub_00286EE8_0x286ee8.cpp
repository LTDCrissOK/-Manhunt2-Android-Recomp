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

// Function: sub_00286EE8
// Address: 0x286ee8 - 0x286ef8
void sub_00286EE8_0x286ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286EE8_0x286ee8");
#endif

    ctx->pc = 0x286ee8u;

    // 0x286ee8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x286ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x286eec: 0x3e00008  jr          $ra
    ctx->pc = 0x286EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286EECu;
        // 0x286ef0: 0xac40a330  sw          $zero, -0x5CD0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286EF4u;
    // 0x286ef4: 0x0  nop
    ctx->pc = 0x286ef4u;
    // NOP
    ctx->pc = 0x286ef8u;
}
