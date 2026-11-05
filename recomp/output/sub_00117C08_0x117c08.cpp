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

// Function: sub_00117C08
// Address: 0x117c08 - 0x117c20
void sub_00117C08_0x117c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117C08_0x117c08");
#endif

    ctx->pc = 0x117c08u;

    // 0x117c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117c0c: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x117c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x117c10: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x117c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x117c14: 0x3e00008  jr          $ra
    ctx->pc = 0x117C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C14u;
        // 0x117c18: 0xac860020  sw          $a2, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C1Cu;
    // 0x117c1c: 0x0  nop
    ctx->pc = 0x117c1cu;
    // NOP
    ctx->pc = 0x117c20u;
}
