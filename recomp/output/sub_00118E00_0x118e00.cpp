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

// Function: sub_00118E00
// Address: 0x118e00 - 0x118e18
void sub_00118E00_0x118e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118E00_0x118e00");
#endif

    ctx->pc = 0x118e00u;

    // 0x118e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x118e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x118e04: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x118e04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x118e08: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x118e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x118e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x118E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E0Cu;
        // 0x118e10: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118E14u;
    // 0x118e14: 0x0  nop
    ctx->pc = 0x118e14u;
    // NOP
    ctx->pc = 0x118e18u;
}
