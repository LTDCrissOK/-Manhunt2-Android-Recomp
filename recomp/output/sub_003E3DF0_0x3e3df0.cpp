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

// Function: sub_003E3DF0
// Address: 0x3e3df0 - 0x3e3e08
void sub_003E3DF0_0x3e3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3DF0_0x3e3df0");
#endif

    ctx->pc = 0x3e3df0u;

    // 0x3e3df0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3e3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3e3df4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3e3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3e3df8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3e3df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3e3dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3DFCu;
        // 0x3e3e00: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3E04u;
    // 0x3e3e04: 0x0  nop
    ctx->pc = 0x3e3e04u;
    // NOP
    ctx->pc = 0x3e3e08u;
}
