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

// Function: sub_00117BE0
// Address: 0x117be0 - 0x117bf8
void sub_00117BE0_0x117be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117BE0_0x117be0");
#endif

    ctx->pc = 0x117be0u;

    // 0x117be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117be4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x117be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x117be8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x117be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x117bec: 0x3e00008  jr          $ra
    ctx->pc = 0x117BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BECu;
        // 0x117bf0: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117BF4u;
    // 0x117bf4: 0x0  nop
    ctx->pc = 0x117bf4u;
    // NOP
    ctx->pc = 0x117bf8u;
}
